// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MukashiGameMode.h"
#include "MukashiCharacter.h"

AMukashiGameMode::AMukashiGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AMukashiCharacter::StaticClass();	
}
