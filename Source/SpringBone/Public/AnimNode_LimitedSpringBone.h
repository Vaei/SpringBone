// Copyright (c) 2019-2022 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "BonePose.h"
#include "BoneControllers/AnimNode_SpringBone.h"
#include "AnimNode_LimitedSpringBone.generated.h"

class UAnimInstance;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FAnimLimits
{
	GENERATED_BODY()

	FAnimLimits()
		: bX(false)
		, bY(false)
		, bZ(false)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	bool bX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	bool bY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Settings)
	bool bZ;
};

/**
 *	Simple controller that replaces or adds to the translation/rotation of a single bone.
 *  With added ability to limit individual translation axis
 */
USTRUCT(BlueprintInternalUseOnly)
struct SPRINGBONE_API FAnimNode_LimitedSpringBone : public FAnimNode_SpringBone
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = Spring)
	bool bSimulateInComponentSpace;

	UPROPERTY(EditAnywhere, Category = Spring)
	FAnimLimits LimitMinTranslation;

	UPROPERTY(EditAnywhere, Category = Spring)
	FAnimLimits LimitMaxTranslation;

	UPROPERTY(EditAnywhere, Category = Spring)
	FVector MinTranslationLimits;

	UPROPERTY(EditAnywhere, Category = Spring)
	FVector MaxTranslationLimits;

public:
	virtual void EvaluateSkeletalControl_AnyThread(FComponentSpacePoseContext& Output, TArray<FBoneTransform>& OutBoneTransforms) override;

protected:
	static void LimitBoneTranslation(float& BoneLocation, const float TargetPos, const bool bLimitMinTranslation, const bool bLimitMaxTranslation, const float MinTranslationLimit, const float MaxTranslationLimit)
	{
		if (bLimitMaxTranslation || bLimitMinTranslation)
		{
			const float DiffSq = (BoneLocation - TargetPos) * (BoneLocation - TargetPos);
			if (bLimitMaxTranslation && BoneLocation > TargetPos)
			{
				if (BoneLocation != TargetPos && DiffSq > FMath::Square(MaxTranslationLimit))
				{
					BoneLocation = TargetPos + (MaxTranslationLimit);
				}
			}
			if (bLimitMinTranslation && BoneLocation < TargetPos)
			{
				if (BoneLocation != TargetPos && DiffSq > FMath::Square(MinTranslationLimit))
				{
					BoneLocation = TargetPos + (MinTranslationLimit);
				}
			}
		}
	}
};
