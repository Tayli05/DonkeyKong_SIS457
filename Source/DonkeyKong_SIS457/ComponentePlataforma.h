// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ComponentePlataforma.generated.h"

UCLASS()
class DONKEYKONG_SIS457_API AComponentePlataforma : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AComponentePlataforma();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	protected:
		UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MeshPlataforma;
		bool mover;
		FVector posicionInicial;
		FVector posicionActual;
		FVector posicionFinal;
		float incrementoY;
		bool detener;

public:
	bool getDetener() { return detener; };
	void setDetener(bool d) { detener = d; };


private:
	int32 Index;

};
