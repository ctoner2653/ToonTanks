// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATower : public ABasePawn
{
	GENERATED_BODY()

public:

	class ATank* Tank;

	UPROPERTY(EditDefaultsOnly, Category = "Combat")
		float FireRange = 300.f;

	FTimerHandle FireRateTimerHandle;

	UPROPERTY(EditAnywhere, Category = "Combat")
		float FireRate = 2.f;

	virtual void Tick(float DeltaTime) override;
	
	void HandleDestruction();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:



	void CheckFireCondition();

	bool InFireRange();
};
