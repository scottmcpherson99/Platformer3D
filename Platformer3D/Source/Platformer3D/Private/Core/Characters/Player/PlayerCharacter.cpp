// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Characters/Player/PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Core/Characters/Player/PC_Player.h"
#include "Core/Characters/Player/HUD_Player.h"
#include "UI/InGame/InGameHUD.h"
#include "Core/AbilitySystem/Attributes/BasicAttributeSet.h"

APlayerCharacter::APlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Boom"));
	CameraBoom->SetupAttachment(RootComponent);

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Follow Camera"));
	FollowCamera->SetupAttachment(CameraBoom);
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	// get the player controller
	if (APC_Player* PC = Cast<APC_Player>(GetController()))
	{
		// specify the local player
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(PlayerMappingContext, 0);
		}
	}

	// get the player controller
	if (APC_Player* PC = Cast<APC_Player>(GetController()))
	{
		// get the HUD
		if (AHUD_Player* HUD = Cast<AHUD_Player>(PC->GetHUD()))
		{
			HUD->UpdateHealthHUD(BasicAttributeSet->GetHealth() / BasicAttributeSet->GetMaxHealth());
			HUD->UpdateManaHUD(BasicAttributeSet->GetMana() / BasicAttributeSet->GetMaxMana());
		}
	}

	// Attribute change callbacks
	HealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(BasicAttributeSet->GetHealthAttribute()).AddUObject(this, &APlayerCharacter::HealthChanged);
	ManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(BasicAttributeSet->GetManaAttribute()).AddUObject(this, &APlayerCharacter::ManaChanged);
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);

		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Jump);
	}
}

void APlayerCharacter::Move(const FInputActionValue& Value)
{
	const FVector2D MovementVector = Value.Get<FVector2D>();

	// get the direction
	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

	// get the forward direction
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	// move forward
	AddMovementInput(ForwardDirection, MovementVector.Y);

	// get the right direction
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	// move right
	AddMovementInput(RightDirection, MovementVector.X);
}

void APlayerCharacter::Look(const FInputActionValue& Value)
{
	FVector2D LookAxisValue = Value.Get<FVector2D>();

	if (GetController())
	{
		AddControllerYawInput(LookAxisValue.X);
		AddControllerPitchInput(LookAxisValue.Y);
	}
}

void APlayerCharacter::HealthChanged(const FOnAttributeChangeData& Data)
{
	float Health = Data.NewValue;
	float MaxHealth = BasicAttributeSet->MaxHealth.GetBaseValue();
	// update floating status bar
	// get the player controller
	if (APC_Player* PC = Cast<APC_Player>(GetController()))
	{
		// get the HUD
		if (AHUD_Player* HUD = Cast<AHUD_Player>(PC->GetHUD()))
		{
			HUD->UpdateHealthHUD(Health/MaxHealth);
		}
	}
}

void APlayerCharacter::ManaChanged(const FOnAttributeChangeData& Data)
{
	float Mana = Data.NewValue;
	float MaxMana = BasicAttributeSet->MaxMana.GetBaseValue();
	// update floating status bar
	// get the player controller
	if (APC_Player* PC = Cast<APC_Player>(GetController()))
	{
		// get the HUD
		if (AHUD_Player* HUD = Cast<AHUD_Player>(PC->GetHUD()))
		{
			HUD->UpdateManaHUD(Mana / MaxMana);
		}
	}
}
