// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAimimgComponent.h"
#include "Tank.h"


// Sets default values
ATank::ATank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// No need to protect pointers as added at construction
	TankAimingComponent = CreateDefaultSubobject<UTankAimimgComponent>(FName("Aiming Component"));
}

void ATank::SetBarrelReference(UTankBarrel* BarrelToSet)
{
	TankAimingComponent->SetBarrelReference(BarrelToSet);
}

/*
void ATank::SetTankChildActor(UChildActorComponent* TankFromBP)
{
	if (!TankFromBP) { return; }
	Tank = TankFromBP;
}
*/

/*
void ATank::SetTurretChildActor(UChildActorComponent* TurretFromBP)
{
	if (!TurretFromBP) { return; }
	Turret = TurretFromBP;
}
*/

/*
void ATank::SetBarrelChildActor(UChildActorComponent* BarrelFromBP)
{
	if (!BarrelFromBP) { return; }
	Barrel = BarrelFromBP;
}
*/

/*
void ATank::MoveTank(float Speed)
{
	if (!Tank) { return; }

	// TODO make frame rate independent using GetWorld()->DeltaTimeSeconds
	float Distance = GetWorld()->DeltaTimeSeconds * Speed * MovementSpeed;
	Tank->AddRelativeLocation(Tank->GetForwardVector() * Distance);
}
*/

/*
void ATank::RotateTank(float Speed)
{
	if (!Tank) { return; }
	// TODO make frame rate independent using GetWorld()->DeltaTimeSeconds
	float Rotation = GetWorld()->DeltaTimeSeconds * Speed * RotationSpeed;
	Tank->AddRelativeRotation(FRotator(0.f, Rotation, 0.f));
}
*/

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
	Super::BeginPlay();
}

// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
	
	/*
	InputComponent->BindAxis("Rotate_Turret", this, &ATank::RotateTurret);
	InputComponent->BindAxis("Elevate_Barrel", this, &ATank::ElevateBarrel);
	InputComponent->BindAxis("Move_Tank", this, &ATank::MoveTank);
	InputComponent->BindAxis("Rotate_Tank", this, &ATank::RotateTank); 
	*/
}

/*
void ATank::RotateTurret(float Speed)
{
	if (!Turret) { return; }
	float Rotation = GetWorld()->DeltaTimeSeconds * Speed * RotationSpeed;
	Turret->AddRelativeRotation(FRotator(0.f, Rotation, 0.f));
}
*/ 
	
/*
void ATank::ElevateBarrel(float Speed)
{
	if (!Barrel) { return; }
	float Rotation = GetWorld()->DeltaTimeSeconds * Speed * RotationSpeed;
	Barrel->AddRelativeRotation(FRotator(Rotation, 0.f, 0.f));
}
*/

void ATank::AimAt(FVector HitLocation)
{
	TankAimingComponent -> AimAt(HitLocation, LaunchSpeed);
}

