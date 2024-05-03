// Copyright Epic Games, Inc. All Rights Reserved.

#include "Partiel_AJGameMode.h"
#include "Partiel_AJCharacter.h"
#include "UObject/ConstructorHelpers.h"

APartiel_AJGameMode::APartiel_AJGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
