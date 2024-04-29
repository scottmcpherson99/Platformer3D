// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/AbilitySystem/Calculations/GEC_Regen.h"
#include "Core/AbilitySystem/Attributes/BasicAttributeSet.h"

UGEC_Regen::UGEC_Regen()
{
	HealthDef.AttributeToCapture = UBasicAttributeSet::GetHealthAttribute();
	HealthDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	HealthDef.bSnapshot = false;

	MaxHealthDef.AttributeToCapture = UBasicAttributeSet::GetMaxHealthAttribute();
	MaxHealthDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	MaxHealthDef.bSnapshot = false;

	RelevantAttributesToCapture.Add(HealthDef);
	RelevantAttributesToCapture.Add(MaxHealthDef);
}

float UGEC_Regen::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float Health = 0.0f;
	GetCapturedAttributeMagnitude(HealthDef, Spec, EvaluationParameters, Health);

	float MaxHealth = 0.0f;
	GetCapturedAttributeMagnitude(MaxHealthDef, Spec, EvaluationParameters, MaxHealth);

	/*if (Health + 1.0f < MaxHealth)
	{
		return MaxHealth - Health;
	}

	return 1.0f;
	*/
	return FMath::Clamp(MaxHealth - Health, 0.0f, 1.0f);
}
