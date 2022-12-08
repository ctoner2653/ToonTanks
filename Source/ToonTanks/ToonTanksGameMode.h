// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "ToonTanksGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API AToonTanksGameMode : public AGameMode
{
	GENERATED_BODY()

public:

	void ActorDied(AActor* DeadActor);

protected:

	UFUNCTION(BlueprintImplementableEvent)
	void StartGame();

	UFUNCTION(BlueprintImplementableEvent)
	void GameOver(bool BWonGame);

	virtual void BeginPlay() override;
	
private:

	class ATank* Tank;
	class AToonTanksPlayerController* ToonTanksPlayerController;

	float StartDelay = 3.f;

	void HandleGameStart();

	int32 TargetTowers = 0;

	int32 GetTargetTowerCount();

};
