// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectNPC_225GameMode.h"
#include "ProjectNPC_225HUD.h"
#include "ProjectNPC_225Character.h"
#include "UObject/ConstructorHelpers.h"

AProjectNPC_225GameMode::AProjectNPC_225GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProjectNPC_225HUD::StaticClass();
}
