// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Characters/Enemy/BasicEnemy/Services/BTService_UpdateMovementSpeed.h"
#include "Core/Characters/BaseCharacter.h"
#include "AIController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTService_UpdateMovementSpeed::UBTService_UpdateMovementSpeed()
{
	NodeName = "Update Movement Speed";
	bNotifyBecomeRelevant = true;
}

void UBTService_UpdateMovementSpeed::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (AAIController* EnemyController = Cast<AAIController>(OwnerComp.GetAIOwner()))
	{
		if (ABaseCharacter* BaseCharacter = Cast<ABaseCharacter>(EnemyController->GetPawn()))
		{
			BaseCharacter->GetCharacterMovement()->MaxWalkSpeed = MovementSpeed;
		}
	}
}
