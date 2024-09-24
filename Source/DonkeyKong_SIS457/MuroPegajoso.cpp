// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroPegajoso.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "UObject/ConstructorHelpers.h"

AMuroPegajoso::AMuroPegajoso()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/Muro1/stone_wall_wall_stone_low.stone_wall_wall_stone_low'"));
	MeshMuro->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshMuro;

   MeshMuro->SetWorldScale3D(FVector(3.1f, 4.1f, 3.5f));
   // Crear el sistema de partículas para la lava
   ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
   ParticleSystem->SetupAttachment(MeshMuro);

   // Cargar una partícula que simule lava o material derretido
   static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("/Game/StarterContent/Particles/P_Lava.P_Lava"));
   if (ParticleSystemAsset.Succeeded())
   {
	   ParticleSystem->SetTemplate(ParticleSystemAsset.Object);
	   ParticleSystem->SetWorldScale3D(FVector(4.2f, 1.2f, 4.2f));  // Ajustar tamaño
   }

}


void AMuroPegajoso::BeginPlay()
{
	Super::BeginPlay();
}

void AMuroPegajoso::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
