// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "fpsstartingGameMode.h"
#include "fpsstartingHUD.h"
#include "fpsstartingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AfpsstartingGameMode::AfpsstartingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AfpsstartingHUD::StaticClass();
}
