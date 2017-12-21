// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MukashiBattleGameMode.generated.h"

/**
* The GameMode defines the game being played. It governs the game rules, scoring, what actors
* are allowed to exist in this game type, and who may enter the game.
*
* This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of MukashiCharacter
*/
UCLASS()
class MUKASHI_API AMukashiBattleGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
    AMukashiBattleGameMode();
	
	
};
