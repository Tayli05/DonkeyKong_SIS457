// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConoDisparador.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AConoDisparador : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConoDisparador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UStaticMeshComponent* MeshCono;	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	virtual void DispararC();

	/*float TiempoEntreProyectil;
	float TiempoDisparo;
	int HealthEnemis;*/
};
