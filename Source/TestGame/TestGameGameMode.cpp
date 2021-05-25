// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestGameGameMode.h"
#include "TestGameCharacter.h"

ATestGameGameMode::ATestGameGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATestGameCharacter::StaticClass();	
}
