// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Flag.generated.h"

UCLASS()
class TUT2_API AFlag : public AActor
{
	GENERATED_BODY()

public:
	AFlag(const FObjectInitializer& ObjectInitializer);


	// Our sphere component for collison!
	USphereComponent* CollisionComp;

	// Collison Function!
	UFUNCTION()
	void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// Our server function to update the score.
	UFUNCTION(Reliable, Server, WithValidation)
	void UpdateScore(int32 Amount);
	void UpdateScore_Implementation(int32 Amount);
	bool UpdateScore_Validate(int32 Amount);
};