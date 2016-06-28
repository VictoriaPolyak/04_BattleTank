// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAimimgComponent.h"


// Sets default values for this component's properties
UTankAimimgComponent::UTankAimimgComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTankAimimgComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UTankAimimgComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

void UTankAimimgComponent::SetBarrelReference(UStaticMeshComponent* BarrelToSet)
{
	Barrel = BarrelToSet;
}

void UTankAimimgComponent::AimAt(FVector HitLocation, float LaunchSpeed)
{
	UE_LOG(LogTemp, Warning, TEXT("Firing at %f"), LaunchSpeed);
}
