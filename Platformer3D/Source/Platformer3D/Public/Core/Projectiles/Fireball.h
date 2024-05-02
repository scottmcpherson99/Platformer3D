// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fireball.generated.h"

UCLASS()
class PLATFORMER3D_API AFireball : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFireball();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

//----------------------------------------------------------------------------------------------------- Components
	// the fireball's collision
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Collision", meta = (AllowPrivateAccess = "true"))
	class USphereComponent* SphereCollision;

	// the niagara for the fireball
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Niagara", meta = (AllowPrivateAccess = "true"))
	class UNiagaraComponent* NiagaraFireball;

	// the projetile movement for the fireball
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	class UProjectileMovementComponent* FireballProjectileMovement;
//-----------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------- Attributes
	// the radius for the fireball
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fireball")
	float FireballRadius = 100;

	// the owner of the fireball
	class ABaseCharacter* Instigator;
//----------------------------------------------------------------------------------------------------- 


//----------------------------------------------------------------------------------------------------- Collision
	UFUNCTION()
	virtual void OnOverlapBegin(class UPrimitiveComponent* newComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
//----------------------------------------------------------------------------------------------------- 


//----------------------------------------------------------------------------------------------------- Decay
	// decay the fireball
	void DecayFireball();

	// the timer to run to decay the fireball
	FTimerHandle DecayRateTimer;

	// how often we should run the decay rate timer in seconds
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Decay")
	float DecayRate = 0.1f;

	// how much should we shrink the fireball by each decay tick
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Decay")
	float DecayValue = 5.f;
//-----------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------- Abilities
public:
	// the basic attack logic
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Attack", meta = (DisplayName = "Do HIT Event"))
	void BP_EventHIT(ABaseCharacter* HitChar);

	// create a reference to the gameplay effect we want to apply
	UPROPERTY(EditDefaultsOnly, Category = "Abilities")
	FGameplayTag DamageTag;

	// create a reference to the gameplay effect we want to apply
	UPROPERTY(EditDefaultsOnly, Category = "Abilities")
	float DamageValue = 50.f;

	// create a reference to the gameplay effect we want to apply
	UPROPERTY(EditDefaultsOnly, Category = "Abilities")
	TSubclassOf<class UGameplayEffect> GameplayEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
	class UGameplayEffect* DamageEffect;
//-------------------------------------------------------------------------- 
};
