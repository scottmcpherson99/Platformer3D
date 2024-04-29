// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "GEC_ManaRegen.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER3D_API UGEC_ManaRegen : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()
public:
	UGEC_ManaRegen();

	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

	FGameplayEffectAttributeCaptureDefinition ManaDef;
	FGameplayEffectAttributeCaptureDefinition MaxManaDef;
};
