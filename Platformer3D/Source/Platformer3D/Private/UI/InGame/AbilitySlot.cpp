// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/InGame/AbilitySlot.h"
#include "Components/Image.h"

void UAbilitySlot::NativePreConstruct()
{
	// update image displayed
	if (AbilityTexture != nullptr && IconImage != nullptr)
	{
		IconImage->SetBrushFromTexture(AbilityTexture, false);
	}
}

void UAbilitySlot::NativeConstruct()
{
}

void UAbilitySlot::UpdateAbilityIcon(UTexture2D* UpdatedIcon)
{
	// update image displayed to inputed image
	if (UpdatedIcon != nullptr && IconImage != nullptr)
	{
		AbilityTexture = UpdatedIcon;
		IconImage->SetBrushFromTexture(AbilityTexture, false);
	}
}

void UAbilitySlot::UpdateIconImageOpacity(float NewOpacity)
{
	IconImage->SetRenderOpacity(NewOpacity);
}
