// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GI_Platformer.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER3D_API UGI_Platformer : public UGameInstance
{
	GENERATED_BODY()


//-------------------------------------------------------------------------- Focus
public:
	// set the new reference for the last focused button
	UFUNCTION(BlueprintCallable, Category = "Focus")
	void SetLastFocusedButton(class UButton* NewButtonRef);

	// return the reference of the last focused button
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Focus")
	class UButton* GetLastFocusedButton();
protected:
	// get a reference to the last focused button
	class UButton* LastFocusedButtonRef;

//-------------------------------------------------------------------------- 
};
