// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroCongelado.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AMuroCongelado : public AMuro
{
	GENERATED_BODY()

public:
	AMuroCongelado();

protected:

	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;


public:
	virtual void Tick(float DeltaTime) override;
	
};
