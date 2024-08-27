// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoPlatano.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoPlatano : public AEnemigo
{
	GENERATED_BODY()
	

	public:
		AEnemigoPlatano();

		public:
			virtual void Tick(float DeltaTime) override;
};
