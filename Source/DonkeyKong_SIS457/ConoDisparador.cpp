// Fill out your copyright notice in the Description page of Project Settings.


#include "ConoDisparador.h"
#include "Projectile.h"
#include "Engine/Engine.h"
#include "UObject/ConstructorHelpers.h"



// Sets default values
AConoDisparador::AConoDisparador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshCono = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshCono"));
	MeshCono->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshCono;

	//HealthEnemis = 200.0f;
	//TiempoEntreProyectil = 0.5f;

}

// Called when the game starts or when spawned
void AConoDisparador::BeginPlay()
{
	Super::BeginPlay();
	

}

// Called every frame
void AConoDisparador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*TiempoDisparo += DeltaTime;
	if (TiempoDisparo >= TiempoEntreProyectil)
	{
		DispararC();
		TiempoDisparo = 0.0f;
	}*/
}

void AConoDisparador::DispararC()
{
	// Obtén la ubicación 
	//FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * +100 + FVector(0.0f, 100.0f, 0.0f); //ubica el primer proyectil
	//FVector SpawnLocation2 = GetActorLocation() + GetActorForwardVector() * -100 + FVector(0.0f, -100.0f, 0.0f);//ubica el segundo proyectil

	//// Spawnear el primer proyectil
	//AConoDisparador* NewProjectileCono = GetWorld()->SpawnActor<AConoDisparador>(AConoDisparador::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	//// Spawnear el segundo proyectil
	//AConoDisparador* NewProjectileCono2 = GetWorld()->SpawnActor<AConoDisparador>(AConoDisparador::StaticClass(), SpawnLocation2, FRotator::ZeroRotator);
	//if (NewProjectileCono) {

	//	//// Dirección hacia la derecha (eje Y positivo)
	//	//FVector SpawnDirection = FVector(0.0f, 1.0f, 0.0f);
	//	//NewProjectileCono->FireInDirection2(SpawnDirection);

	//	//// Dirección hacia la izquierda (eje Y negativo)
	//	//FVector SpawnDirection2 = FVector(0.0f, -1.0f, 0.0f);
	//	//NewProjectileCono2->FireInDirection2(SpawnDirection2);

	//}

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparo"));
}

