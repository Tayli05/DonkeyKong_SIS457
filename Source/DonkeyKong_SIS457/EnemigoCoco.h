// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoCoco.generated.h"

/**
 * 
 */
UCLASS()
class DONKEYKONG_SIS457_API AEnemigoCoco : public AEnemigo
{
	GENERATED_BODY()

	public:
		AEnemigoCoco();

public:
		virtual void Tick(float DeltaTime) override;
		

private:
	

protected:

	 void MoverEnemigo(float DeltaTime) override;
	 void CambiarDireccion() override;
	 void Atacar() override;
	 void Desaparecer() override;
	 

	

};
