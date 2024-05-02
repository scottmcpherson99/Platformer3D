// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Projectiles/Fireball.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Core/Characters/BaseCharacter.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Abilities/GameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFireball::AFireball()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// set up the sphere collision
	SphereCollision = CreateDefaultSubobject<USphereComponent>("SphereCollision");
	//SphereCollision->SetSphereRadius(FireballRadius);

	// set up the niagara fireball effect
	NiagaraFireball = CreateDefaultSubobject<UNiagaraComponent>("NiagaraFireball");
	//NiagaraFireball->SetNiagaraVariableFloat("FireballRadius", FireballRadius);
	NiagaraFireball->SetupAttachment(SphereCollision);

	// set up the projectile movement for the fireball
	FireballProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("FireballProjectileMovement");
}

// Called when the game starts or when spawned
void AFireball::BeginPlay()
{
	Super::BeginPlay();
	
	// set up the collision detection for the fireball
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AFireball::OnOverlapBegin);
	SphereCollision->SetSphereRadius(FireballRadius);
	NiagaraFireball->SetNiagaraVariableFloat("FireballRadius", FireballRadius);

	// set up lifetime for fireball
	GetWorldTimerManager().SetTimer(DecayRateTimer, this, &AFireball::DecayFireball, DecayRate, true);
}

// Called every frame
void AFireball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFireball::OnOverlapBegin(UPrimitiveComponent* newComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// check if the other actor was a character
	if (ABaseCharacter* HitActor = Cast<ABaseCharacter>(OtherActor))
	{
		// make sure it wasn't us
		if (HitActor != Instigator)
		{
			FGameplayEffectContextHandle Handle;
			FGameplayEffectSpec Spec;
			FGameplayEffectSpecHandle SpecHandle;

			//BP_EventHIT(HitActor);

			SpecHandle = HitActor->AbilitySystemComponent->MakeOutgoingSpec(GameplayEffectClass, 1.f, HitActor->AbilitySystemComponent->MakeEffectContext());
			UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(SpecHandle, DamageTag, DamageValue);

			// apply the gameplay aeffect to the hit actor
			HitActor->AbilitySystemComponent->BP_ApplyGameplayEffectSpecToSelf(SpecHandle);
			//HitActor->AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(Spec);
		/*	DamageEffect = NewObject<UGameplayEffect>(GameplayEffectClass);//Cast<UGameplayEffect>(GameplayEffectClass);
			if (DamageEffect != nullptr)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("We got a collision.")); 
				HitActor->GetAbilitySystemComponent()->ApplyGameplayEffectToSelf(DamageEffect, 1.f, Handle);
				
			}*/
		}
	}
}

void AFireball::DecayFireball()
{
	// check if the fireball will still be acctive if we deacy again
	if (FireballRadius - DecayValue > 0)
	{
		// decrease the fireball radius
		FireballRadius -= DecayValue;

		// update the collision and niagara scale
		SphereCollision->SetSphereRadius(FireballRadius);
		NiagaraFireball->SetNiagaraVariableFloat("FireballRadius", FireballRadius);
	}
	else
	{
		// if it will not be active, clear the timer and destroy the fireball
		GetWorldTimerManager().ClearTimer(DecayRateTimer);
		Destroy();
	}
}

