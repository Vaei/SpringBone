#include "AnimNode_LimitedSpringBone.h"
#include "AnimInstanceProxy.h"


FORCEINLINE void CopyToVectorByFlags(FVector& DestVec, const FVector& SrcVec, bool bX, bool bY, bool bZ)
{
	if (bX)
	{
		DestVec.X = SrcVec.X;
	}
	if (bY)
	{
		DestVec.Y = SrcVec.Y;
	}
	if (bZ)
	{
		DestVec.Z = SrcVec.Z;
	}
}

void FAnimNode_LimitedSpringBone::EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms)
{
	check(OutBoneTransforms.Num() == 0);

	const bool bNoOffset = !bTranslateX && !bTranslateY && !bTranslateZ;
	if (bNoOffset)
	{
		return;
	}

	// Location of our bone in world space
	const FBoneContainer& BoneContainer = Output.Pose.GetPose().GetBoneContainer();

	const FCompactPoseBoneIndex SpringBoneIndex = SpringBone.GetCompactPoseIndex(BoneContainer);
	const FTransform& SpaceBase = Output.Pose.GetComponentSpaceTransform(SpringBoneIndex);
	FTransform BoneTransformInWorldSpace = SpaceBase * Output.AnimInstanceProxy->GetComponentTransform();

	FVector const TargetPos = BoneTransformInWorldSpace.GetLocation();

	// Init values first time
	if (RemainingTime == 0.0f)
	{
		BoneLocation = TargetPos;
		BoneVelocity = FVector::ZeroVector;
	}

	if (!FMath::IsNearlyZero(FixedTimeStep, KINDA_SMALL_NUMBER))
	{
		while (RemainingTime > FixedTimeStep)
		{
			// Update location of our base by how much our base moved this frame.
			FVector const BaseTranslation = (OwnerVelocity * FixedTimeStep);
			BoneLocation += BaseTranslation;

			// Reinit values if outside reset threshold
			if (((TargetPos - BoneLocation).SizeSquared() > (ErrorResetThresh * ErrorResetThresh)))
			{
				BoneLocation = TargetPos;
				BoneVelocity = FVector::ZeroVector;
			}

			// Calculate error vector.
			FVector const Error = (TargetPos - BoneLocation);
			FVector const DampingForce = SpringDamping * BoneVelocity;
			FVector const SpringForce = SpringStiffness * Error;

			// Calculate force based on error and vel
			FVector const Acceleration = SpringForce - DampingForce;

			// Integrate velocity
			// Make sure damping with variable frame rate actually dampens velocity. Otherwise Spring will go nuts.
			float const CutOffDampingValue = 1.f / FixedTimeStep;
			if (SpringDamping > CutOffDampingValue)
			{
				float const SafetyScale = CutOffDampingValue / SpringDamping;
				BoneVelocity += SafetyScale * (Acceleration * FixedTimeStep);
			}
			else
			{
				BoneVelocity += (Acceleration * FixedTimeStep);
			}

			// Clamp velocity to something sane (|dX/dt| <= ErrorResetThresh)
			float const BoneVelocityMagnitude = BoneVelocity.Size();
			if (BoneVelocityMagnitude * FixedTimeStep > ErrorResetThresh)
			{
				BoneVelocity *= (ErrorResetThresh / (BoneVelocityMagnitude * FixedTimeStep));
			}

			// Integrate position
			FVector const OldBoneLocation = BoneLocation;
			FVector const DeltaMove = (BoneVelocity * FixedTimeStep);
			BoneLocation += DeltaMove;

			// Filter out spring translation based on our filter properties
			CopyToVectorByFlags(BoneLocation, TargetPos, !bTranslateX, !bTranslateY, !bTranslateZ);

			// Custom code used to limit translation on specific axis
			LimitBoneTranslation(BoneLocation.X, TargetPos.X, LimitMinTranslation.bX, LimitMaxTranslation.bX, MinTranslationLimits.X, MaxTranslationLimits.X);
			LimitBoneTranslation(BoneLocation.Y, TargetPos.Y, LimitMinTranslation.bY, LimitMaxTranslation.bY, MinTranslationLimits.Y, MaxTranslationLimits.Y);
			LimitBoneTranslation(BoneLocation.Z, TargetPos.Z, LimitMinTranslation.bZ, LimitMaxTranslation.bZ, MinTranslationLimits.Z, MaxTranslationLimits.Z);

			// If desired, limit error
			if (bLimitDisplacement)
			{
				FVector CurrentDisp = BoneLocation - TargetPos;
				// Too far away - project back onto sphere around target.
				if (CurrentDisp.SizeSquared() > FMath::Square(MaxDisplacement))
				{
					FVector DispDir = CurrentDisp.GetSafeNormal();
					BoneLocation = TargetPos + (MaxDisplacement * DispDir);
				}
			}

			// Update velocity to reflect post processing done to bone location.
			BoneVelocity = (BoneLocation - OldBoneLocation) / FixedTimeStep;

			check(!BoneLocation.ContainsNaN());
			check(!BoneVelocity.ContainsNaN());

			RemainingTime -= FixedTimeStep;
		}
		LocalBoneTransform = Output.AnimInstanceProxy->GetComponentTransform().InverseTransformPosition(BoneLocation);
	}
	else
	{
		BoneLocation = Output.AnimInstanceProxy->GetComponentTransform().TransformPosition(LocalBoneTransform);
	}
	// Now convert back into component space and output - rotation is unchanged.
	FTransform OutBoneTM = SpaceBase;
	OutBoneTM.SetLocation(LocalBoneTransform);

	const bool bUseRotation = bRotateX || bRotateY || bRotateZ;
	if (bUseRotation)
	{
		FCompactPoseBoneIndex ParentBoneIndex = Output.Pose.GetPose().GetParentBoneIndex(SpringBoneIndex);
		const FTransform& ParentSpaceBase = Output.Pose.GetComponentSpaceTransform(ParentBoneIndex);

		FVector ParentToTarget = (TargetPos - ParentSpaceBase.GetLocation()).GetSafeNormal();
		FVector ParentToCurrent = (BoneLocation - ParentSpaceBase.GetLocation()).GetSafeNormal();

		FQuat AdditionalRotation = FQuat::FindBetweenNormals(ParentToTarget, ParentToCurrent);

		// Filter rotation based on our filter properties
		FVector EularRot = AdditionalRotation.Euler();
		CopyToVectorByFlags(EularRot, FVector::ZeroVector, !bRotateX, !bRotateY, !bRotateZ);

		OutBoneTM.SetRotation(FQuat::MakeFromEuler(EularRot) * OutBoneTM.GetRotation());
	}

	// Output new transform for current bone.
	OutBoneTransforms.Add(FBoneTransform(SpringBoneIndex, OutBoneTM));
}

