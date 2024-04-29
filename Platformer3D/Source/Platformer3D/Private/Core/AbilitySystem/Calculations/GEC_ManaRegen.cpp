// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/AbilitySystem/Calculations/GEC_ManaRegen.h"
#include "Core/AbilitySystem/Attributes/BasicAttributeSet.h"

UGEC_ManaRegen::UGEC_ManaRegen()
{
	ManaDef.AttributeToCapture = UBasicAttributeSet::GetManaAttribute();
	ManaDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	ManaDef.bSnapshot = false;

	MaxManaDef.AttributeToCapture = UBasicAttributeSet::GetMaxManaAttribute();
	MaxManaDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
	MaxManaDef.bSnapshot = false;

	RelevantAttributesToCapture.Add(ManaDef);
	RelevantAttributesToCapture.Add(MaxManaDef);
}

float UGEC_ManaRegen::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const FGameplayTagContainer* SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
	const FGameplayTagContainer* TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();

	FAggregatorEvaluateParameters EvaluationParameters;
	EvaluationParameters.SourceTags = SourceTags;
	EvaluationParameters.TargetTags = TargetTags;

	float Mana = 0.0f;
	GetCapturedAttributeMagnitude(ManaDef, Spec, EvaluationParameters, Mana);

	float MaxMana = 0.0f;
	GetCapturedAttributeMagnitude(MaxManaDef, Spec, EvaluationParameters, MaxMana);

	return FMath::Clamp(MaxMana - Mana, 0.0f, 1.0f);
}
