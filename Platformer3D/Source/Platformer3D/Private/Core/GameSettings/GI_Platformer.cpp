// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/GameSettings/GI_Platformer.h"

void UGI_Platformer::SetLastFocusedButton(UButton* NewButtonRef)
{
	LastFocusedButtonRef = NewButtonRef;
}

UButton* UGI_Platformer::GetLastFocusedButton()
{
	return LastFocusedButtonRef;
}
