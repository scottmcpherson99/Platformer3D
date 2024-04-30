// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/AbilitySystem/SpellCasterComponent.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Kismet/KismetSystemLibrary.h"

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

void USpellCasterComponent::BasicAttack(float SpellRange, float SpellWidth, FVector StartPoint, FVector EndPoint, UNiagaraSystem* NSBeam)
{
	// spawn the niagara beam at the start location along to the end location of the spell
	if (UNiagaraComponent* NiagaraSpellBeamComponent = UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), NSBeam, StartPoint, FRotator(0.f, 0.f, 0.f), FVector(1.0, 1.0, 1.0), true, true, ENCPoolMethod::None, true))
	{
		// set up the niagara beam parameters
		NiagaraSpellBeamComponent->SetNiagaraVariableVec3("StartBeam", EndPoint);
		NiagaraSpellBeamComponent->SetNiagaraVariableVec3("EndBeam", StartPoint);
		NiagaraSpellBeamComponent->SetNiagaraVariableFloat("BeamWidth", SpellWidth);

		// start the spell trace to damage hit actors
		
	}

	

	//UNiagaraComponent::SetNiagaraVariableFloat("")
}

