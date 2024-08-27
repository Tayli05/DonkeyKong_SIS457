// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoEsfera.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoEsfera : public AEnemigo
{
	GENERATED_BODY()

	public:
		AEnemigoEsfera();

		public:
			virtual void Tick(float DeltaTime) override;

		

	
};
