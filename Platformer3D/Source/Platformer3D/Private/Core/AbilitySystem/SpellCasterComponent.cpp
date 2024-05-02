// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/AbilitySystem/SpellCasterComponent.h"
#include "Core/Characters/BaseCharacter.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"

// Sets default values for this component's properties
USpellCasterComponent::USpellCasterComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void USpellCasterComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USpellCasterComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void USpellCasterComponent::BasicAttack(ABaseCharacter* Instigator, float SpellRange, float SpellWidth, FVector StartPoint, FVector EndPoint, UNiagaraSystem* NSBeam)
{
	// spawn the niagara beam at the start location along to the end location of the spell
	if (UNiagaraComponent* NiagaraSpellBeamComponent = UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NSBeam, StartPoint, FRotator(0.f, 0.f, 0.f), FVector(1.0, 1.0, 1.0), true, true, ENCPoolMethod::None, true))
	{
		// set up the niagara beam parameters
		NiagaraSpellBeamComponent->SetNiagaraVariableVec3("StartBeam", EndPoint);
		NiagaraSpellBeamComponent->SetNiagaraVariableVec3("EndBeam", StartPoint);
		NiagaraSpellBeamComponent->SetNiagaraVariableFloat("BeamWidth", SpellWidth*2);

		// add the actor that casted the spell to be ignored in the trace
		TArray<AActor*> ActorsToIgnore;
		ActorsToIgnore.Add(Instigator);

		// the hit actors from the trace
		TArray<FHitResult> HitActors;

		// the spell trace to damage hit actors
	
		UKismetSystemLibrary::SphereTraceMulti(GetWorld(), StartPoint, EndPoint, SpellWidth, UEngineTypes::ConvertToTraceType(ECC_Camera), false, ActorsToIgnore, EDrawDebugTrace::None, HitActors, true, FLinearColor::Black);

		// create the gameplay data event data
		FGameplayEventData GameplayEventData;
		GameplayEventData.EventTag = DamageTag;
		GameplayEventData.Instigator = Instigator;

		// calculate the half angle of the hit area we are looking for
		float HitAngle = UKismetMathLibrary::DegAtan(SpellWidth / SpellRange); //atanf((SpellWidth) / SpellRange);

		// get the magnitude of the vector from the instigator to the point directly infront of the instigator where the spell ends
		FVector InstigatorVector = FVector(Instigator->GetActorForwardVector() * SpellRange);
		float InstigatorMagnitude = UKismetMathLibrary::Sqrt(UKismetMathLibrary::Square(InstigatorVector.X) + UKismetMathLibrary::Square(InstigatorVector.Y) + UKismetMathLibrary::Square(InstigatorVector.Z));

		// loop through all the hit actors and apply the damage effect to them
		for (int i = 0; i < HitActors.Num(); i++)
		{
			if (ABaseCharacter* CharacterToCheck = Cast<ABaseCharacter>(HitActors[i].GetActor()))
			{
				// get the vector between the hit actor and the instigator actor
				FVector HitActorVector = FVector(HitActors[i].GetActor()->GetActorLocation() - Instigator->GetActorLocation());

				// calculate the magnitude of the Hit Actor vector
				float HitActorMagnitude = UKismetMathLibrary::Sqrt(UKismetMathLibrary::Square(HitActorVector.X) + UKismetMathLibrary::Square(HitActorVector.Y) + UKismetMathLibrary::Square(HitActorVector.Z));

				// calculate the dot product between the two vectors
				float DotProd = FVector::DotProduct(InstigatorVector, HitActorVector);

				// calculate the angle between the hit actor and the instigators forward direction 
				float CheckAngle = UKismetMathLibrary::DegAcos(DotProd / (InstigatorMagnitude * HitActorMagnitude));

				if (CheckAngle <= HitAngle)
				{
					// update the target to the hit actor
					GameplayEventData.Target = HitActors[i].GetActor();
					// send the effect to the hit actor
					UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(Instigator, DamageTag, GameplayEventData);
				}
			}
		}
	}
}

