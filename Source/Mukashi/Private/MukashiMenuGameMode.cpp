// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MukashiMenuGameMode.h"
#include "MukashiMenuPawn.h"

AMukashiMenuGameMode::AMukashiMenuGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AMukashiMenuPawn::StaticClass();	

    //use seamless travel so we don't disconnect clients
    bUseSeamlessTravel = true;
    bPauseable = false;
}
