// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Shared/BaseUserWidget.h"
#include "Core/GameSettings/GI_Platformer.h"
#include <Kismet/GameplayStatics.h>
#include "Components/Button.h"

void UBaseUserWidget::SetNewButtonFocus(UButton* ButtonToFocus)
{
	// get the game instance
	UGI_Platformer* GI = Cast<UGI_Platformer>(UGameplayStatics::GetGameInstance(GetWorld()));

	// set focus on new button
	ButtonToFocus->SetFocus();

	// save reference to button in game instance
	if (GI != nullptr)
	{
		GI->SetLastFocusedButton(ButtonToFocus);
	}
}

FReply UBaseUserWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);

	// set focus on the last button
	UGI_Platformer* GI = Cast<UGI_Platformer>(UGameplayStatics::GetGameInstance(GetWorld()));

	if (GI != nullptr)
	{
		UButton* ButtonToRefocus = GI->GetLastFocusedButton();

		if (ButtonToRefocus != nullptr)
		{
			ButtonToRefocus->SetFocus();
		}
	}

	return OnMouseButtonDown(InGeometry, InMouseEvent).NativeReply;
}
