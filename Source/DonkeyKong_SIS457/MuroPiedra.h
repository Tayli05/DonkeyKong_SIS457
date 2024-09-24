// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroPiedra.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AMuroPiedra : public AMuro
{
	GENERATED_BODY()
public:
	AMuroPiedra();

protected:

	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:
	virtual void Tick(float DeltaTime) override;


	
	
};
