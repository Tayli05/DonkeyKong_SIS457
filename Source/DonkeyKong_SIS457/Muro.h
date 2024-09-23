// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Muro.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AMuro : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMuro();

	UFUNCTION(BlueprintCallable, Category = "Collision")
	virtual void Chocar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UMaterialInstanceDynamic* MaterialInstance;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Efecto de part�culas a aplicar cuando el muro sea chocado
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* ImpactParticles;

	void PlayEffects();

public:
	//malla del muro
	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	UStaticMeshComponent* MeshMuro;
	
};
