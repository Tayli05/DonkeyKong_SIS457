// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroElectrico.h"
#include "Particles/ParticleSystemComponent.h"
#include <Kismet/GameplayStatics.h>
#include "Engine/Engine.h"


AMuroElectrico::AMuroElectrico()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroElectricoAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/Muro1/stone_wall_wall_stone.stone_wall_wall_stone'"));
	if (MuroElectricoAsset.Succeeded())
	{
		MeshMuro->SetStaticMesh(MuroElectricoAsset.Object);
		RootComponent = MeshMuro;
		MeshMuro->SetWorldScale3D(FVector(2.0f, 3.0f, 1.3f));

	}


	// Crear el componente de sistema de partículas para el efecto de chispas eléctricas
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	// Buscar la partícula de efecto de chispas
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("/Game/StarterContent/Particles/P_Sparks.P_Sparks"));
	if (ParticleSystemAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleSystemAsset.Object);
		ParticleSystem->SetWorldScale3D(FVector(5.0f, 2.0f, 8.0f));
		ParticleSystem->SetRelativeLocation(FVector(0.0f, 60.0f, 100.0f));  // Ajustar la posición según sea necesario
	}

	
}



void AMuroElectrico::BeginPlay()
{
	Super::BeginPlay();

	
}

void AMuroElectrico::Chocar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, TEXT("Muro Electrico"));

}

void AMuroElectrico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


