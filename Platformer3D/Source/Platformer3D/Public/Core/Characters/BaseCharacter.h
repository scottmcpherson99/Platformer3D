// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "AbilitySystemInterface.h"
#include <GameplayEffectTypes.h>
#include "BaseCharacter.generated.h"

UCLASS()
class PLATFORMER3D_API ABaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


//----------------------------------------------------------------------------------------------------- Components

	// spell caster component
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spells", meta = (AllowPrivateAccess = "true"))
	class USpellCasterComponent* SpellCaster;
//----------------------------------------------------------------------------------------------------- 


//----------------------------------------------------------------------------------------------------- GAS
	/** Ability System Component. Required to use Gameplay Attributes and Gameplay Abilities. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS", meta = (AllowPrivateAccess = "true"))
	class UAbilitySystemComponent* AbilitySystemComponent;

	//~ Begin IAbilitySystemInterface
	/** Returns our Ability System Component. */
	virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	//~ End IAbilitySystemInterface
	
	// the basic attribuite set for the character
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "GAS", meta = (AllowPrivateAccess = "true"))
	const class UBasicAttributeSet* BasicAttributeSet;

	// getters for attributes from attribute set. Returns current value
	// get current health
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Player Attributes")
	float GetCurrentHealth() const;

	// get max health
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Player Attributes")
	float GetMaxHealth() const;

	// get current mana
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Player Attributes")
	float GetCurrentMana() const;

	// get max mana
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Player Attributes")
	float GetMaxMana() const;

	FDelegateHandle HealthChangedDelegateHandle;
	FDelegateHandle ManaChangedDelegateHandle;

	// Attributes changed callbacks
	virtual void HealthChanged(const FOnAttributeChangeData& Data);
	virtual void ManaChanged(const FOnAttributeChangeData& Data);
//-----------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------- Attack
	// the basic attack logic
	UFUNCTION(BlueprintCallable, Category = "Attack")
	void DoBasicAttack();

	// the spell range
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float SpellRange = 1000;

	// the spell range
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float BasicSpellWidth = 50;

	// basic spell beam
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Niagara")
	class UNiagaraSystem* NS_BasicSpellBeam;
//-----------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------- Death
	// set the character to die
	UFUNCTION(BlueprintCallable, Category = "Death")
	virtual void StartCharacterDeath();

	// the basic attack logic
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Attack", meta = (DisplayName = "Do Death Event"))
	void BP_EventDeath();
//-----------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------- Attributes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Jump")
	bool bPreparingToJump = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Jump")
	bool bIsDead = false;
//-----------------------------------------------------------------------------------------------------

};
