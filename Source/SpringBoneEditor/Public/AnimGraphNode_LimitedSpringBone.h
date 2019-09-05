// // Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_SkeletalControlBase.h"
#include "AnimNode_LimitedSpringBone.h"
#include "AnimGraphNode_LimitedSpringBone.generated.h"

/**
 * 
 */
UCLASS()
class SPRINGBONEEDITOR_API UAnimGraphNode_LimitedSpringBone : public UAnimGraphNode_SkeletalControlBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Category=Settings)
	FAnimNode_LimitedSpringBone Node;

	//~ Begin UObject Interface
	virtual void PostLoad();
	//~ End UObject Interface

public:
	//~ Begin UEdGraphNode Interface
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	//~ End UEdGraphNode Interface

protected:
	//~ Begin UAnimGraphNode_SkeletalControlBase Interface
	virtual FText GetControllerDescription() const override;
	virtual const FAnimNode_SkeletalControlBase* GetNode() const override { return &Node; }
	//~ End UAnimGraphNode_SkeletalControlBase Interface

private:
	/** Constructing FText strings can be costly, so we cache the node's title */
	FNodeTitleTextTable CachedNodeTitles;
};
