// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoPuercoEspin.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoPuercoEspin : public AEnemigo
{
	GENERATED_BODY()

	public:
		AEnemigoPuercoEspin();

		public:
			virtual void Tick(float DeltaTime) override;
	


};
