// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_Wander.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER3D_API UBTTask_Wander : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UBTTask_Wander();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	//-------------------------------------------------------------------------- Attributes
	// update the search radius
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float SearchRadius = 1000.f;
	//--------------------------------------------------------------------------
};
