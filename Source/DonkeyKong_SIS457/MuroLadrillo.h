// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroLadrillo.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AMuroLadrillo : public AMuro
{
	GENERATED_BODY()

public:
	AMuroLadrillo();

protected:
	virtual void BeginPlay() override;

	UParticleSystemComponent* ParticleSystem;

	virtual void Chocar() override;
public:

	virtual void Tick(float DeltaTime) override;


};
