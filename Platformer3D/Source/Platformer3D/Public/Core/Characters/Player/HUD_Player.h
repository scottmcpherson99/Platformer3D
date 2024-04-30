// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "HUD_Player.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER3D_API AHUD_Player : public AHUD
{
	GENERATED_BODY()
	
public:
	AHUD_Player();

	// begin play
	virtual void BeginPlay() override;

//-------------------------------------------------------------------------- Show/Hide Widgets
	// show the hud widget
	UFUNCTION()
	void ShowInGameHUD();

	// hide the hud widget
	UFUNCTION()
	void HideInGameHUD();
//--------------------------------------------------------------------------


//-------------------------------------------------------------------------- Widgets
	// create a reference to the hud widget
	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
	TSubclassOf<class UInGameHUD> HUDWidgetClass;


	// get the hud widhet
	UFUNCTION(BlueprintCallable)
	class UInGameHUD* GetHUDWidget();

protected:
	// keep a pointer to the hud wudget
	UPROPERTY()
	class UInGameHUD* HUDWidget;
//--------------------------------------------------------------------------


//-------------------------------------------------------------------------- Update Percentages
public:
	//	update health hud
	void UpdateHealthHUD(float Percentage);

	// update mana hud
	void UpdateManaHUD(float Percentage);
//-------------------------------------------------------------------------- 
};
