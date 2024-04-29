// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Shared/BaseUserWidget.h"
#include "InGameSliderStat.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER3D_API UInGameSliderStat : public UBaseUserWidget
{
	GENERATED_BODY()
	
public:
	// pre-constructor
	virtual void NativePreConstruct() override;

	// constructor
	virtual void NativeConstruct() override;

//----------------------------------------------------------------------------------------------------- Components
	// the main progress bar
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Components")
	class UProgressBar* ProgressBarMain;
//-----------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------- Attributes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ProgressBar")
	FLinearColor BarFillColour;
//-----------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------- Updates
	// update the percentage value
	UFUNCTION(BlueprintCallable, Category = "ProgressBar")
	void UpdatePercentage(float Percentage);

	// get the percentage
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "ProgressBar")
	float GetPercentage();
//-----------------------------------------------------------------------------------------------------
};
