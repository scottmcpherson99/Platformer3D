// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_SetFocusOnTarget.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER3D_API UBTService_SetFocusOnTarget : public UBTService
{
	GENERATED_BODY()
	
public:
	UBTService_SetFocusOnTarget();

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds);

//-------------------------------------------------------------------------- Attributes
	// check if we should focus
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	bool bShouldFocus;

	// the focused actor
	UPROPERTY(EditAnywhere, Category = Blackboard)
	FBlackboardKeySelector FocusedActor;
//--------------------------------------------------------------------------
};
