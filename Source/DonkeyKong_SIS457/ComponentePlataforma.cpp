// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponentePlataforma.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AComponentePlataforma::AComponentePlataforma()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<UStaticMesh> MeshPlataformaAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/Assets/Donkey_Kong_Level_1_Platform046.Donkey_Kong_Level_1_Platform046'"));
	MeshPlataforma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshPlataforma"));
	MeshPlataforma->SetStaticMesh(MeshPlataformaAsset.Object);
	RootComponent = MeshPlataforma;

	//modificar a lo que se necesite el tamaño de la plataforma
	MeshPlataforma->SetWorldScale3D(FVector(5.0f, 30.0f, 5.0f));

	
}

// Called when the game starts or when spawned
void AComponentePlataforma::BeginPlay()
{
	Super::BeginPlay();

	posicionActual = FVector(0.0f, 0.0f, 0.0f);
	posicionActual = GetActorLocation();
	posicionInicial = posicionActual;
	posicionFinal = posicionActual + FVector(0.0f, 200.0f, 0.0f);
	incrementoY = 2.0f;
	mover = false;
	setDetener(false);
}

// Called every frame
void AComponentePlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!detener) {
		if (!mover)
		{
			if (posicionActual.Y < posicionFinal.Y)
			{
				posicionActual.Y += incrementoY;
			}
			else
			{
				mover = true;
			}
		}
		else
		{
			if (posicionActual.Y > posicionInicial.Y)
			{
				posicionActual.Y -= incrementoY;
			}
			else {
				mover = false;
			}
		}
	
	}
	/*zPosicionActual += zIncrementoZ;*/
	SetActorLocation(posicionActual);

}

// Called to bind functionality to input
void AComponentePlataforma::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

