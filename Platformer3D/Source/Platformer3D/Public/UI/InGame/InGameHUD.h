// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Shared/BaseUserWidget.h"
#include "InGameHUD.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER3D_API UInGameHUD : public UBaseUserWidget
{
	GENERATED_BODY()
	
public:
	// pre-constructor
	virtual void NativePreConstruct() override;
	// constructor
	virtual void NativeConstruct() override;

//-------------------------------------------------------------------------- Components
	// health progress bar
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Button")
	class UInGameSliderStat* HealthProgressBar;

	// mana progress bar
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Button")
	class UInGameSliderStat* ManaProgressBar;
//--------------------------------------------------------------------------


//-------------------------------------------------------------------------- Progress Bars
	// update the health progress bar
	UFUNCTION()
	void UpdateHealthBar(float Percentage);

	// update the health progress bar
	UFUNCTION()
	void UpdateManaBar(float Percentage);
//--------------------------------------------------------------------------

};
