// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroLadrillo.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstanceDynamic.h"


AMuroLadrillo::AMuroLadrillo()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/Muro/Muro_01.Muro_01'"));
	MeshMuro->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshMuro;

	MeshMuro->SetWorldScale3D(FVector(30.f, 40.f, 18.f));

	static ConstructorHelpers::FObjectFinder<UMaterial> BrickMaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New'"));
	if (BrickMaterialAsset.Succeeded())
	{
		BrickMaterial = BrickMaterialAsset.Object;
	}

}

void AMuroLadrillo::BeginPlay()
{
	Super::BeginPlay();

	if (BrickMaterial) // Asegurarse de que el material esté asignado
	{
		// Crear una instancia dinámica del material basado en BrickMaterial
		MaterialInstance = UMaterialInstanceDynamic::Create(BrickMaterial, this);

		if (MaterialInstance && MeshMuro)
		{
			// Asignar el material a la malla estática
			MeshMuro->SetMaterial(0, MaterialInstance);
		}
	}
}

void AMuroLadrillo::Chocar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Muro Ladrillo"));
}

void AMuroLadrillo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
