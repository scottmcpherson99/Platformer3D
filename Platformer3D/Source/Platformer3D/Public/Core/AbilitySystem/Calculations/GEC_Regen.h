// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "GEC_Regen.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER3D_API UGEC_Regen : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()
	
public:
	UGEC_Regen();

	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

	FGameplayEffectAttributeCaptureDefinition HealthDef;
	FGameplayEffectAttributeCaptureDefinition MaxHealthDef;
};
