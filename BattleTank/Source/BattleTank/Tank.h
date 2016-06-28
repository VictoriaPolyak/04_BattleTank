// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TankAimimgComponent.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h" // put new includes above

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:
	
	void AimAt(FVector HitLocation);

	UFUNCTION(BlueprintCallable, Category = Setup)
	void SetBarrelReference(UStaticMeshComponent* BarrelToSet);

	/* UFUNCTION(BlueprintCallable, Category = Tank)
	void SetTurretChildActor(UChildActorComponent* TurretFromBP);

	UFUNCTION(BlueprintCallable, Category = Tank)
	void SetBarrelChildActor(UChildActorComponent* BarrelFromBP);

	UFUNCTION(BlueprintCallable, Category = Tank)
	void SetTankChildActor(UChildActorComponent* TankFromBP); */

protected:

	UTankAimimgComponent* TankAimingComponent = nullptr;


private:
	
	// Sets default values for this pawn's properties
	ATank();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	UPROPERTY(EditAnywhere, Category = Firing)
	float LaunchSpeed = 100000; // TODO find sensible default

	/*
	UChildActorComponent* Tank = nullptr;
	void MoveTank(float Speed);
	void RotateTank(float Speed);

	// Reference from blueprint
	UChildActorComponent* Turret = nullptr;
	// Rotate turret at speed, -ve values for CCW
	void RotateTurret(float Speed);
	
	UChildActorComponent* Barrel = nullptr;
	void ElevateBarrel(float Speed);

	UPROPERTY(EditAnywhere)
	float RotationSpeed = 120.f;

	UPROPERTY(EditAnywhere)
	float MovementSpeed = 120.f;
	*/
};
