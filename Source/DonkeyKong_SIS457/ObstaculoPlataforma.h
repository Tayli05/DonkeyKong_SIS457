// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoPlataforma.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AObstaculoPlataforma : public AObstaculo
{
	GENERATED_BODY()

	public:

		AObstaculoPlataforma();

		public:
			virtual void Tick(float DeltaTime) override;
	
};
