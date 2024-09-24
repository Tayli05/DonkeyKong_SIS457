// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DonkeyKong_SIS457GameMode.generated.h"
class AProjectile;
class AComponentePlataforma;
class AObstaculo;
class ABarril;
class ACubo;
class ADonkeyKong_SIS457Character;
class AConoDisparador;
UCLASS(minimalapi)
class ADonkeyKong_SIS457GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADonkeyKong_SIS457GameMode();


	protected:
		virtual void BeginPlay() override;
		
public:
	virtual void Tick(float DeltaTime) override;

public:


  //TArray<AComponentePlataforma*> Plataformas;

 // TMap<int32, AComponentePlataforma*> Plataformas;
TArray<AComponentePlataforma*> Plataformas;
  TArray<AObstaculo*> Obstaculos;
  TArray<ABarril*> Barriles;
  AProjectile* Proyectil;

  //TArray<ACubo*> CantCajas;
  ACubo* Caja;
  AConoDisparador* ConoDisparador;

  //muros
 

 void SpawnBarril();

private:
	
	FTimerHandle SpawnBarrilTimerHandle;
	int numeroBarriles;

};



