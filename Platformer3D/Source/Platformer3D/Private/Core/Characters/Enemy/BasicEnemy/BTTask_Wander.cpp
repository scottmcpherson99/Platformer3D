// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Characters/Enemy/BasicEnemy/BTTask_Wander.h"
#include "Core/Characters/BaseCharacter.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_Wander::UBTTask_Wander()
{
	NodeName = "Pick Wander Location";
}

EBTNodeResult::Type UBTTask_Wander::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (AAIController* EnemyController = Cast<AAIController>(OwnerComp.GetAIOwner()))
	{
		if (ABaseCharacter* BaseCharacter = Cast<ABaseCharacter>(EnemyController->GetPawn()))
		{
			// get the navigation system
			if (auto* const NavSys = UNavigationSystemV1::GetCurrent(GetWorld()))
			{
				// find a random point in radius
				FNavLocation Loc;
				NavSys->GetRandomPointInNavigableRadius(BaseCharacter->GetActorLocation(), SearchRadius, Loc);
				OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), Loc.Location);

				// finish with success
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return EBTNodeResult::Succeeded;
			}
		}
	}

	return EBTNodeResult::Failed;
}
