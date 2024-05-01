// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Characters/BaseCharacter.h"
#include "AbilitySystemComponent.h"
#include "Core/AbilitySystem/Attributes/BasicAttributeSet.h"
#include "Core/Characters/Player/PC_Player.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/CapsuleComponent.h"
#include "Core/AbilitySystem/SpellCasterComponent.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// set up ability system component
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComp");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	// set up spell caster component
	SpellCaster = CreateDefaultSubobject<USpellCasterComponent>("SpellCasterComponent");
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (IsValid(AbilitySystemComponent))
	{
		// initialises attribute set
		BasicAttributeSet = AbilitySystemComponent->GetSet<UBasicAttributeSet>();

		// Attribute change callbacks
		HealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(BasicAttributeSet->GetHealthAttribute()).AddUObject(this, &ABaseCharacter::HealthChanged);
		ManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(BasicAttributeSet->GetManaAttribute()).AddUObject(this, &ABaseCharacter::ManaChanged);

	}
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UAbilitySystemComponent* ABaseCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

float ABaseCharacter::GetCurrentHealth() const
{
	return BasicAttributeSet->GetHealth();
}

float ABaseCharacter::GetMaxHealth() const
{
	return BasicAttributeSet->GetMaxHealth();
}

float ABaseCharacter::GetCurrentMana() const
{
	return BasicAttributeSet->GetMana();
}

float ABaseCharacter::GetMaxMana() const
{	
	return BasicAttributeSet->GetMaxMana();
}

void ABaseCharacter::HealthChanged(const FOnAttributeChangeData& Data)
{
	float Health = Data.NewValue;

	if (Health <= 0)
	{
		StartCharacterDeath();
	}
}

void ABaseCharacter::ManaChanged(const FOnAttributeChangeData& Data)
{
}

void ABaseCharacter::DoBasicAttack()
{
	// get the socket location for spell start
	FVector SocketLocation = GetMesh()->GetSocketLocation("RightHand");

	// get the spell end location
	FVector SpellEndLocation = SocketLocation + (UKismetMathLibrary::GetForwardVector(GetActorRotation()) * SpellRange);

	// cast the spell
	SpellCaster->BasicAttack(this, SpellRange, BasicSpellWidth, SocketLocation, SpellEndLocation, NS_BasicSpellBeam);
}

void ABaseCharacter::StartCharacterDeath()
{
	bIsDead = true;

	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	BP_EventDeath();
}
