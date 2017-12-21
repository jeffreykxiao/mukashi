// Fill out your copyright notice in the Description page of Project Settings.

#include "MukashiBattleGameMode.h"
#include "MukashiCharacter.h"

AMukashiBattleGameMode::AMukashiBattleGameMode()
{
    // Set default pawn class to our character
    DefaultPawnClass = AMukashiCharacter::StaticClass();
}

