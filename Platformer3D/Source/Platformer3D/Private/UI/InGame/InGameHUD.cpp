// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/InGame/InGameHUD.h"
#include "UI/InGame/InGameSliderStat.h"

void UInGameHUD::NativePreConstruct()
{
	Super::NativePreConstruct();
}

void UInGameHUD::NativeConstruct()
{
	Super::NativeConstruct();
}

void UInGameHUD::UpdateHealthBar(float Percentage)
{
	HealthProgressBar->UpdatePercentage(Percentage);
}

void UInGameHUD::UpdateManaBar(float Percentage)
{
	ManaProgressBar->UpdatePercentage(Percentage);
}
