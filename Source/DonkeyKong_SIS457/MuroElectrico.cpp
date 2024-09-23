// Fill out your copyright notice in the Description page of Project Settings.


#include "MuroElectrico.h"
#include "Particles/ParticleSystemComponent.h"
#include <Kismet/GameplayStatics.h>
#include "Engine/Engine.h"
#include "DonkeyKong_SIS457Character.h"

AMuroElectrico::AMuroElectrico()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/Geometry/Meshes/Muro1/stone_wall_wall_stone.stone_wall_wall_stone'"));
	MeshMuro->SetStaticMesh(MeshAsset.Object);
	RootComponent = MeshMuro;
	MeshMuro->SetWorldScale3D(FVector(2.0f, 3.0f, 1.3f));


	static ConstructorHelpers::FObjectFinder<UMaterial> ElectricMaterialAsset(TEXT("Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
	if (ElectricMaterialAsset.Succeeded())
	{
		ElectricMaterial = ElectricMaterialAsset.Object;
	}
	// Configurar la colisión
	MeshMuro->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	MeshMuro->SetCollisionResponseToAllChannels(ECR_Overlap);
	MeshMuro->OnComponentBeginOverlap.AddDynamic(this, &AMuroElectrico::OnBeginOverlap);

}



void AMuroElectrico::BeginPlay()
{
	Super::BeginPlay();

	if (ElectricMaterial)
	{
		MaterialInstance = UMaterialInstanceDynamic::Create(ElectricMaterial, this);
		if (MaterialInstance && MeshMuro)
		{
			MeshMuro->SetMaterial(0, MaterialInstance);
		}
	}
}

void AMuroElectrico::Chocar()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, TEXT("Muro Electrico"));

	if (MeshMuro)
	{
		UParticleSystemComponent* ParticleSystem = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ElectricParticleSystemAsset, GetActorLocation());
	}

}

void AMuroElectrico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMuroElectrico::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ADonkeyKong_SIS457Character* Character = Cast<ADonkeyKong_SIS457Character>(OtherActor);
	if (Character)
	{
		// Llama al método Chocar() del muro
		Chocar();

		// Puedes agregar efectos adicionales aquí
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("¡Personaje chocó con un muro eléctrico!"));

		// Aplicar efectos adicionales
		if (MeshMuro)
		{
			UMaterialInstanceDynamic* DynamicMaterial = MeshMuro->CreateAndSetMaterialInstanceDynamic(0);
			if (DynamicMaterial)
			{
				DynamicMaterial->SetVectorParameterValue(TEXT("BaseColor"), FLinearColor::Yellow);
				GetWorld()->GetTimerManager().SetTimerForNextTick([this, DynamicMaterial]() {
					DynamicMaterial->SetVectorParameterValue(TEXT("BaseColor"), FLinearColor::White);
					});
			}
		}
	}
}
