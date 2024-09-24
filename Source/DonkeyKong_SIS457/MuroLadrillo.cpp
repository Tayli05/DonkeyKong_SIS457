// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroLadrillo.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Particles/ParticleSystemComponent.h"



AMuroLadrillo::AMuroLadrillo()
{
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MuroLadrilloAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if (MuroLadrilloAsset.Succeeded())
	{
		MeshMuro->SetStaticMesh(MuroLadrilloAsset.Object);
	}

	MeshMuro->SetWorldScale3D(FVector(3.5f, 0.5f, 2.f));

	static ConstructorHelpers::FObjectFinder<UMaterial> MaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
	if (MaterialAsset.Succeeded())
	{
		MeshMuro->SetMaterial(0, MaterialAsset.Object);
	}

	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleSystemAsset(TEXT("/Game/StarterContent/Particles/P_Fire.P_Fire"));
	if (ParticleSystemAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleSystemAsset.Object);
	}

}

void AMuroLadrillo::BeginPlay()
{
	Super::BeginPlay();

}

void AMuroLadrillo::Chocar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Choque Muro Ladrillo"));
}

void AMuroLadrillo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
