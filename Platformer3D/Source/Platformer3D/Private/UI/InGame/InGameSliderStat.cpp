// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/InGame/InGameSliderStat.h"
#include "Components/ProgressBar.h"

void UInGameSliderStat::NativePreConstruct()
{
	Super::NativePreConstruct();
	ProgressBarMain->SetFillColorAndOpacity(BarFillColour);
}

void UInGameSliderStat::NativeConstruct()
{
	Super::NativeConstruct();
}

void UInGameSliderStat::UpdatePercentage(float Percentage)
{
	// update the percentage
	ProgressBarMain->SetPercent(Percentage);
}

float UInGameSliderStat::GetPercentage()
{
	return ProgressBarMain->GetPercent();
}
