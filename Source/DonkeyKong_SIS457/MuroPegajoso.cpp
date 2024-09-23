// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroPegajoso.h"

AMuroPegajoso::AMuroPegajoso()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/Muro1/stone_wall_wall_stone_low.stone_wall_wall_stone_low'"));
	MeshMuro->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshMuro;

   MeshMuro->SetWorldScale3D(FVector(3.1f, 4.1f, 3.5f));


}

void AMuroPegajoso::BeginPlay()
{
}

void AMuroPegajoso::Tick(float DeltaTime)
{

}
