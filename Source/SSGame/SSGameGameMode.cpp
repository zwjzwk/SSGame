// Copyright Epic Games, Inc. All Rights Reserved.

#include "SSGameGameMode.h"
#include "SSGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASSGameGameMode::ASSGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/BP_Player"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
