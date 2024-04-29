// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BaseUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER3D_API UBaseUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	// set the focus on the new button
	UFUNCTION(BlueprintCallable)
	void SetNewButtonFocus(class UButton* ButtonToFocus);

	// check if the mouse button has been pressed
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
};
