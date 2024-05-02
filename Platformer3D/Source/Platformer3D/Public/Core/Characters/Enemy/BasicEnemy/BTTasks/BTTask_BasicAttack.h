// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_BasicAttack.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER3D_API UBTTask_BasicAttack : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UBTTask_BasicAttack();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	//-------------------------------------------------------------------------- Attributes
	// the attack ability
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
	TSubclassOf<class UGameplayAbility> AttackAbility;
	//--------------------------------------------------------------------------
};
