// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstaculo.h"

// Sets default values
AObstaculo::AObstaculo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshObstaculoAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/Assets/Donkey_Kong_Level_1_Bottom_Ladder.Donkey_Kong_Level_1_Bottom_Ladder'"));
	MeshObstaculo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshObstaculo"));
	MeshObstaculo->SetStaticMesh(MeshObstaculoAsset.Object);
	RootComponent = MeshObstaculo;

	MeshObstaculo->SetWorldScale3D(FVector(8.0f, 7.5f, 7.5f));
	

}

// Called when the game starts or when spawned
void AObstaculo::BeginPlay()
{
	Super::BeginPlay();
	posicionActual = FVector(0.0f, 0.0f, 0.0f);
	posicionActual = GetActorLocation();
	posicionInicial = posicionActual;
	posicionFinal = posicionActual + FVector(0.0f, 0.0f, 300.0f);
	incrementoZ = 2.0f;
	subir = false;
	setDetener(false);
	
}

// Called every frame
void AObstaculo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	
	if (!detener) {
		if (!subir)
		{
			if (posicionActual.Z < posicionFinal.Z)
			{
				posicionActual.Z += incrementoZ;
			}
			else
			{
				subir = true;
			}
		}
		else
		{
			if (posicionActual.Z > posicionInicial.Z)
			{
				posicionActual.Z -= incrementoZ;
			}
			else {
				subir = false;
			}
		}
	}
	SetActorLocation(posicionActual);

}





