// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class BATTLETANK_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:

	void Rotate(float DegreesPerSecond);
	
private:

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxDegreesPerSecond = 20; // default

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxRotationDegrees = 180; // default

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinRotationDegrees = -180; // default
	
};
