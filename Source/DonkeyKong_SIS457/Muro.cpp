// Fill out your copyright notice in the Description page of Project Settings.


#include "Muro.h"
#include "Particles/ParticleSystemComponent.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AMuro::AMuro()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshMuro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	MeshMuro->SetupAttachment(RootComponent);
	RootComponent = MeshMuro;

	
}

void AMuro::Chocar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Chocar"));

}

// Called when the game starts or when spawned
void AMuro::BeginPlay()
{
	Super::BeginPlay();
	PlayEffects();
}

// Called every frame
void AMuro::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMuro::PlayEffects()
{
	// Reproducir efecto de partículas si está asignado
	if (ImpactParticles)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactParticles, GetActorLocation());
	}

}
