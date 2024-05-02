// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Characters/Enemy/BasicEnemy/BTTasks/BTTask_BasicAttack.h"
#include "Core/Characters/BaseCharacter.h"
#include "AIController.h"
#include "AbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_BasicAttack::UBTTask_BasicAttack()
{
	NodeName = "Basic Attack";
}

EBTNodeResult::Type UBTTask_BasicAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (AAIController* EnemyController = Cast<AAIController>(OwnerComp.GetAIOwner()))
	{
		if (ABaseCharacter* BaseCharacter = Cast<ABaseCharacter>(EnemyController->GetPawn()))
		{
			if (BaseCharacter->AbilitySystemComponent != nullptr)
			{
				if (BaseCharacter->AbilitySystemComponent->TryActivateAbilityByClass(AttackAbility, true))
				{
					return EBTNodeResult::Succeeded;
				}
			}
		}
	}

	return EBTNodeResult::Failed;
}
