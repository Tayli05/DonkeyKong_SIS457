// Fill out your copyright notice in the Description page of Project Settings.


#include "Cubo.h"
#include "Projectile.h"

ACubo::ACubo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	MeshCubo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshCubo"));
	MeshCubo->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshCubo;


	HealthEnemis = 200.0f;
	TiempoEntreProyectil = 0.5f;
	//TiempoPrimerProyectil = 0.5f;
	
	
}

void ACubo::BeginPlay()  
{  
Super::BeginPlay();  
}

void ACubo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	TiempoDisparo += DeltaTime;
	if (TiempoDisparo >= TiempoEntreProyectil)
	{
		Disparar();
		TiempoDisparo = 0.0f;
	}
	
}

void ACubo::Disparar()
{
	// Obtén la ubicación 
	FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * +100 + FVector(0.0f, 100.0f, 0.0f); //ubica el primer proyectil
	FVector SpawnLocation2 = GetActorLocation() + GetActorForwardVector() * -100 + FVector(0.0f, -100.0f, 0.0f);//ubica el segundo proyectil
	FVector SpawnLocation3 = GetActorLocation() + GetActorForwardVector() * +100 + FVector(100.0f, 0.0f, 0.0f);//ubica el tercer proyectil
	FVector SpawnLocation4 = GetActorLocation() + GetActorForwardVector() * -100 + FVector(-100.0f, 0.0f, 0.0f);//ubica el cuarto proyectil
	FVector SpawnLocation5 = GetActorLocation() + GetActorForwardVector() * +100 + FVector(0.0f, 0.0f, 100.0f);//ubica el quinto proyectil
	FVector SpawnLocation6 = GetActorLocation() + GetActorForwardVector() * -100 + FVector(0.0f, 0.0f, -100.0f);//ubica el sexto proyectil

	// Spawnear el primer proyectil
	AProjectile* NewProjectile = GetWorld()->SpawnActor<AProjectile>(AProjectile::StaticClass(), SpawnLocation, FRotator::ZeroRotator);
	// Spawnear el segundo proyectil
	AProjectile* NewProjectile2 = GetWorld()->SpawnActor<AProjectile>(AProjectile::StaticClass(), SpawnLocation2, FRotator::ZeroRotator);
	// Spawnear el tercer proyectil
	AProjectile* NewProjectile3 = GetWorld()->SpawnActor<AProjectile>(AProjectile::StaticClass(), SpawnLocation3, FRotator::ZeroRotator);
	// Spawnear el cuarto proyectil
	AProjectile* NewProjectile4 = GetWorld()->SpawnActor<AProjectile>(AProjectile::StaticClass(), SpawnLocation4, FRotator::ZeroRotator);
	// Spawnear el quinto proyectil
	AProjectile* NewProjectile5 = GetWorld()->SpawnActor<AProjectile>(AProjectile::StaticClass(), SpawnLocation5, FRotator::ZeroRotator);
	// Spawnear el sexto proyectil
	AProjectile* NewProjectile6 = GetWorld()->SpawnActor<AProjectile>(AProjectile::StaticClass(), SpawnLocation6, FRotator::ZeroRotator);

	if (NewProjectile) {

		// Dirección hacia la derecha (eje Y positivo)
		FVector SpawnDirection = FVector(0.0f, 1.0f, 0.0f);
		NewProjectile->FireInDirection(SpawnDirection);

		// Dirección hacia la izquierda (eje Y negativo)
		FVector SpawnDirection2 = FVector(0.0f, -1.0f, 0.0f);
		NewProjectile2->FireInDirection(SpawnDirection2);

		// Dirección hacia arriba (eje X positivo)
		FVector SpawnDirection3 = FVector(1.0f, 0.0f, 0.0f);
		NewProjectile3->FireInDirection(SpawnDirection3);

		// Dirección hacia abajo (eje X negativo)
		FVector SpawnDirection4 = FVector(-1.0f, 0.0f, 0.0f);
		NewProjectile4->FireInDirection(SpawnDirection4);

		// Dirección hacia arriba (eje Z positivo)
		FVector SpawnDirection5 = FVector(0.0f, 0.0f, 1.0f);
		NewProjectile5->FireInDirection(SpawnDirection5);

		// Dirección hacia abajo (eje Z negativo)
		FVector SpawnDirection6 = FVector(0.0f, 0.0f, -1.0f);
		NewProjectile6->FireInDirection(SpawnDirection6);

		
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparo"));

}






