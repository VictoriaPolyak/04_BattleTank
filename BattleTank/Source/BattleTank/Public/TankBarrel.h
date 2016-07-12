// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
UCLASS( meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is max down with movement, and +1 max up movement
	void Elevate(float RelativeSpeed);
	
	
private:
	UPROPERTY(EditAnywhere, Category=Setup)
	float MaxDegreesPerSecond = 20; // default

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationDegrees = 40; // default

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationDegrees = 0; // default


};
