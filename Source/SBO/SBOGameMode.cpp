// Copyright Epic Games, Inc. All Rights Reserved.

#include "SBOGameMode.h"
#include "SBOCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASBOGameMode::ASBOGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
