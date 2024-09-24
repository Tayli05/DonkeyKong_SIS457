// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroCongelado.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Particles/ParticleSystemComponent.h"

AMuroCongelado::AMuroCongelado()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/Muro2/dafq.dafq'"));
	MeshMuro->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshMuro;

	MeshMuro->SetWorldScale3D(FVector(0.4f, 1.3f, 2.0f));


	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Glass.M_Glass'"));
	if (MaterialAsset.Succeeded())
	{
		MeshMuro->SetMaterial(0, MaterialAsset.Object);
	}

	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

// Encontrar una partícula que simule vapor o niebla
   static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("/Game/StarterContent/Particles/P_Steam_Lit.P_Steam_Lit"));
	if (ParticleSystemAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleSystemAsset.Object);

		// Escalar el sistema de partículas para que sea más grande
		ParticleSystem->SetWorldScale3D(FVector(4.0f, 3.0f, 3.5f));
	}


}

void AMuroCongelado::BeginPlay()
{

}

void AMuroCongelado::Tick(float DeltaTime)
{

}
