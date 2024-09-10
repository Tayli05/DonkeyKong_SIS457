// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshEnemigoAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/1M_Cube.1M_Cube'"));
	MeshEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshEnemigo"));
	MeshEnemigo->SetStaticMesh(MeshEnemigoAsset.Object);
	RootComponent = MeshEnemigo;



}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemigo::MoverEnemigo(float DeltaTime)
{
}

void AEnemigo::CambiarDireccion()
{
}

void AEnemigo::Atacar()
{
}

void AEnemigo::Desaparecer()
{
}

void AEnemigo::RecibirDanio()
{
}

