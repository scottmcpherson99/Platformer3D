// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/Shared/BaseUserWidget.h"
#include "AbilitySlot.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER3D_API UAbilitySlot : public UBaseUserWidget
{
	GENERATED_BODY()
public:
	// pre-constructor
	virtual void NativePreConstruct() override;
	// constructor
	virtual void NativeConstruct() override;

//-------------------------------------------------------------------------- Components
	// image icon
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget), Category = "Button")
	class UImage* IconImage;
//--------------------------------------------------------------------------


//-------------------------------------------------------------------------- Icon Image
	// update the image icon shown
	UFUNCTION(BlueprintCallable, Category = "Icon")
	void UpdateAbilityIcon(class UTexture2D* UpdatedIcon);

	// the ability image texture
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Images")
	class UTexture2D* AbilityTexture;
	
	// update opacity of image to  the cooldown time
	UFUNCTION(BlueprintCallable, Category = "Icon")
	void UpdateIconImageOpacity(float NewOpacity);
//--------------------------------------------------------------------------
};
