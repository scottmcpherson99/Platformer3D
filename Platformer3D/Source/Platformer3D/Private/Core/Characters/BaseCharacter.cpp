// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Characters/BaseCharacter.h"
#include "AbilitySystemComponent.h"
#include "Core/AbilitySystem/Attributes/BasicAttributeSet.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// set up ability system component
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComp");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (IsValid(AbilitySystemComponent))
	{
		// initialises attribute set
		BasicAttributeSet = AbilitySystemComponent->GetSet<UBasicAttributeSet>();
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
/*
void ABaseCharacter::DoBasicAttack()
{
	// start a sphere trace along the spell range
	// get the location and direction for the magic cast
	FRotator SpawnDirection;
	FTransform SocketTransform = GetMesh()->GetSocketTransform("RightHand");
	FVector SpawnLocation;
	SpawnDirection = GetActorRotation();//FRotator(GetMesh()->GetForwardVector().X, GetMesh()->GetForwardVector().Y, GetMesh()->GetForwardVector().Z);
	//GetActorEyesViewPoint(SpawnLocation, SpawnDirection);
	SpawnLocation = SocketTransform.GetLocation();

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();

	//DrawDebugLine(GetWorld(), SpawnLocation, (SpawnLocation + (SpawnDirection.Vector() * SpellRange)), FColor::Orange, false, 3.f, 12, 4);

	FHitResult HitResult;
	FCollisionQueryParams QueryParams;
	
	UKismetSystemLibrary::
}*/

