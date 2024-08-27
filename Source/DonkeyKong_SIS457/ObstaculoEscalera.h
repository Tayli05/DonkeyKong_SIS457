// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoEscalera.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AObstaculoEscalera : public AObstaculo
{
	GENERATED_BODY()
	
public:
			AObstaculoEscalera();

		public:
			virtual void Tick(float DeltaTime) override;
};
