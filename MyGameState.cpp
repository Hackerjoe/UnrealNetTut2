// Fill out your copyright notice in the Description page of Project Settings.

#include "Tut2.h"
#include "MyGameState.h"
// Include Engine.h and Net/UnrealNetwork.h so we can replicate vars!
#include "Engine.h"
#include "Net/UnrealNetwork.h"


/*
* This is how you replicate vars in c++!
*/
void AMyGameState::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);


	DOREPLIFETIME(AMyGameState, Score);
}



