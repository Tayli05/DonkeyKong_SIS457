// Fill out your copyright notice in the Description page of Project Settings.


#include "Piso.h"

// Sets default values
APiso::APiso()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	/*PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> PisoMesh(TEXT("StaticMesh'/Game/Geometry/Meshes/TemplateFloor.TemplateFloor'"));
	MeshPiso = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PisoMesh"));
	MeshPiso->SetStaticMesh(PisoMesh.Object);
	RootComponent = MeshPiso;

	MeshPiso->SetWorldScale3D(FVector(3.0f, 1.5f, 3.0f));
	

	MeshPiso->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MeshPiso->SetCollisionResponseToAllChannels(ECR_Block);*/

}

void APiso::BeginPlay()
{
	
}

void APiso::Tick(float DeltaTime)
{

}




