// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroCongelado.h"

AMuroCongelado::AMuroCongelado()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/Muro2/dafq.dafq'"));
	MeshMuro->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshMuro;

	MeshMuro->SetWorldScale3D(FVector(0.5f, 1.3f, 2.0f));

}

void AMuroCongelado::BeginPlay()
{

}

void AMuroCongelado::Tick(float DeltaTime)
{

}
