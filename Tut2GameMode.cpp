// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Tut2.h"
#include "Tut2GameMode.h"
#include "Tut2Character.h"

#include "MyGameState.h"
#include "Engine.h" 

ATut2GameMode::ATut2GameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ATut2GameMode::AddScore(int32 Amount)
{
	GetGameState<AMyGameState>()->Score += Amount;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::FromInt(GetGameState<AMyGameState>()->Score));
}
