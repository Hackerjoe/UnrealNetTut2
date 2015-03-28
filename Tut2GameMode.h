// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "Tut2GameMode.generated.h"

UCLASS(minimalapi)
class ATut2GameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ATut2GameMode(const FObjectInitializer& ObjectInitializer);
	//Function to add score.
	void AddScore(int32 Amount);
};



