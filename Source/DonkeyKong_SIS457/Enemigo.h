// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AEnemigo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	FVector Posicion;
	float Velocidad;
	float TiempoAtaque;
	float TiempoMax;
	float TiempoMin;
	float TiempoActual;
	int Vidas;
	float Danio;

	
public:
	FVector GetPosicion() { return Posicion; };
	void SetPosicion(FVector Pos) { Posicion = Pos; };

	float GetVelocidad() { return Velocidad; };
	void SetVelocidad(float Vel) { Velocidad = Vel; };

	float GetTiempoAtaque() { return TiempoAtaque; };
	void SetTiempoAtaque(float Tiempo) { TiempoAtaque = Tiempo; };

	float GetTiempoMax() { return TiempoMax; };
	void SetTiempoMax(float Tiempo) { TiempoMax = Tiempo; };

	float GetTiempoMin() { return TiempoMin; };
	void SetTiempoMin(float Tiempo) { TiempoMin = Tiempo; };

	float GetTiempoActual() { return TiempoActual; };
	void SetTiempoActual(float Tiempo) { TiempoActual = Tiempo; };

	int GetVidas() { return Vidas; };
	void SetVidas(int Vida) { Vidas = Vida; };

	float GetDanio() { return Danio; };
	void SetDanio(float D) { Danio = D; };

	public:
		virtual void MoverEnemigo(float DeltaTime);
		virtual void CambiarDireccion();
		virtual void Atacar();
		virtual void Desaparecer();
		virtual void RecibirDanio();


};
