// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS( meta = (BlueprintSpawnableComponent))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is max down with movement, and +1 max up movement
	void Elevate(float RelativeSpeed);
	
	
private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxDegreesPerSecond = 10; // default

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MaxElevationDegrees = 40; // default

	UPROPERTY(EditDefaultsOnly, Category = Setup)
	float MinElevationDegrees = 0; // default


};
