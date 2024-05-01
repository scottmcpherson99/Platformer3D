// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/AbilitySystem/SpellCasterComponent.h"
#include "Core/Characters/BaseCharacter.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Kismet/KismetSystemLibrary.h"
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
		NiagaraSpellBeamComponent->SetNiagaraVariableFloat("BeamWidth", SpellWidth);

		// add the actor that casted the spell to be ignored in the trace
		TArray<AActor*> ActorsToIgnore;
		ActorsToIgnore.Add(Instigator);

		// the hit actors from the trace
		TArray<FHitResult> HitActors;

		// the spell trace to damage hit actors
		UKismetSystemLibrary::SphereTraceMulti(GetWorld(), StartPoint, EndPoint, SpellWidth, UEngineTypes::ConvertToTraceType(ECC_Camera), false, ActorsToIgnore, EDrawDebugTrace::None, HitActors, true);

		// create the gameplay data event data
		FGameplayEventData GameplayEventData;
		GameplayEventData.EventTag = DamageTag;
		GameplayEventData.Instigator = Instigator;


		// loop through all the hit actors and apply the damage effect to them
		for (int i = 0; i < HitActors.Num(); i++)
		{
			// update the target to the hit actor
			GameplayEventData.Target = HitActors[i].GetActor();

			// send the effect to the hit actor
			UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(Instigator, DamageTag, GameplayEventData);
		}
	}

	

	//UNiagaraComponent::SetNiagaraVariableFloat("")
}

