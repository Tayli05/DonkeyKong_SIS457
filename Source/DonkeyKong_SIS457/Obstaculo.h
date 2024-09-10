// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstaculo.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AObstaculo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstaculo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


protected:
	UPROPERTY(EditAnywhere);
	UStaticMeshComponent* MeshObstaculo;
	

	bool subir;
	FVector posicionInicial;
	FVector posicionActual;
	FVector posicionFinal;
	float incrementoZ;
	bool detener;
	

public:
		bool getDetener() { return detener; };
		void setDetener(bool d) { detener = d; };

};
