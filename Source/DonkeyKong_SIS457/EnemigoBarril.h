// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoBarril.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoBarril : public AEnemigo
{
	GENERATED_BODY()
	
public:
	AEnemigoBarril();

	public:
		virtual void Tick(float DeltaTime) override;

};
