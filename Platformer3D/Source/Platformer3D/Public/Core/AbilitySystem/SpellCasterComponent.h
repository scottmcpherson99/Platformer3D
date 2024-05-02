// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpellCasterComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PLATFORMER3D_API USpellCasterComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpellCasterComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
//-------------------------------------------------------------------------- Spells
	// cast a basic attack raytrace
	UFUNCTION(BlueprintCallable, Category = "Spells")
	void BasicAttack(class ABaseCharacter* Instigator, float SpellRange, float SpellWidth, FVector StartPoint, FVector EndPoint, class UNiagaraSystem* NSBeam);

	UFUNCTION(BlueprintCallable, Category = "Spells")
	void CastFireball(class ABaseCharacter* Instigator, FVector StartPoint, FRotator ActorRotation);
//--------------------------------------------------------------------------

//-------------------------------------------------------------------------- Spawning
	// create a reference to the fireball we want to spawm
	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TSubclassOf<class AFireball> FireballClass;
//-------------------------------------------------------------------------- Tags
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tags")
	FGameplayTag DamageTag;
//-------------------------------------------------------------------------- 
};
