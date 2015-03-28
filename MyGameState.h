// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameState.h"
#include "MyGameState.generated.h"

/**
 * 
 */
UCLASS()
class TUT2_API AMyGameState : public AGameState
{
	GENERATED_BODY()

public:
	//Score replicated var.
	UPROPERTY(Replicated)
	int32 Score;
	
	
	
};
