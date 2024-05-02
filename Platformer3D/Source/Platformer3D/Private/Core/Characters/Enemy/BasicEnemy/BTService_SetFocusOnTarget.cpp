// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Characters/Enemy/BasicEnemy/BTService_SetFocusOnTarget.h"
#include "Core/Characters/BaseCharacter.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTService_SetFocusOnTarget::UBTService_SetFocusOnTarget()
{
	NodeName = "Set Focus on Target";
	bNotifyBecomeRelevant = true;
}

void UBTService_SetFocusOnTarget::OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (AAIController* EnemyController = Cast<AAIController>(OwnerComp.GetAIOwner()))
	{
		if (ABaseCharacter* BaseCharacter = Cast<ABaseCharacter>(EnemyController->GetPawn()))
		{
			// check if we should focus
			if (bShouldFocus == true)
			{
				// set focus on target actor
				if (AActor* ActorToFocus = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(FocusedActor.SelectedKeyName)))
				{
					EnemyController->SetFocus(ActorToFocus, EAIFocusPriority::Default);
				}
			}
			else
			{
				// clear focus
				EnemyController->ClearFocus(EAIFocusPriority::Default);
			}
		}
	}
}
