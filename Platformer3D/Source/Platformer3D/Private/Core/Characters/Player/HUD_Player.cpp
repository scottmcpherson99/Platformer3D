// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Characters/Player/HUD_Player.h"
#include "Core/Characters/Player/PC_Player.h"
#include "Core/Characters/Player/PlayerCharacter.h"
#include <Blueprint/UserWidget.h>
#include "UI/InGame/InGameHUD.h"
#include "Core/AbilitySystem/Attributes/BasicAttributeSet.h"

AHUD_Player::AHUD_Player()
{
}

void AHUD_Player::BeginPlay()
{
	Super::BeginPlay();

	// show the HUD
	ShowInGameHUD();
}

void AHUD_Player::ShowInGameHUD()
{
	// create the hud widget and add it to the viewport
	APC_Player* PC = Cast<APC_Player>(GetOwner());
	if (PC != nullptr)
	{
		HUDWidget = CreateWidget<UInGameHUD>(PC, HUDWidgetClass);

		if (HUDWidget != nullptr)
		{
			// add hud widget
			HUDWidget->AddToViewport();
		}
	}
}

void AHUD_Player::HideInGameHUD()
{
}

UInGameHUD* AHUD_Player::GetHUDWidget()
{
	if (HUDWidget != nullptr)
	{
		return HUDWidget;
	}

	return nullptr;
}

void AHUD_Player::UpdateHealthHUD(float Percentage)
{
	if (HUDWidget != nullptr)
	{
		HUDWidget->UpdateHealthBar(Percentage);
	}
}

void AHUD_Player::UpdateManaHUD(float Percentage)
{
	if (HUDWidget != nullptr)
	{
		HUDWidget->UpdateManaBar(Percentage);
	}
}
