// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstaculo.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AObstaculo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstaculo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	protected:
		FVector Posicion;
		float Velocidad;
		float Direccion;
		float Danio;
		float Tiempo;

   public:
			FVector GetPosicion() { return Posicion; };
			void SetPosicion(FVector Pos) { Posicion = Pos; };

			float GetVelocidad() { return Velocidad; };
			void SetVelocidad(float Vel) { Velocidad = Vel; };

			float GetDireccion() { return Direccion; };
			void SetDireccion(float Dir) { Direccion = Dir; };

			float GetDanio() { return Danio; };
			void SetDanio(float D) { Danio = D; };

			float GetTiempo() { return Tiempo; };
			void SetTiempo(float T) { Tiempo = T; };

	public:

				void MoverObstaculo(float DeltaTime);
				void CambiarDireccion();
				void DesaparecerObst();
				void RecibirDanio();



};
