// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Muro.h"
#include "MuroPegajoso.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AMuroPegajoso : public AMuro
{
	GENERATED_BODY()

public:
	AMuroPegajoso();

protected:

	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	
};
