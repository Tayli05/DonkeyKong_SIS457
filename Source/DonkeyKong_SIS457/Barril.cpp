// Fill out your copyright notice in the Description page of Project Settings.


#include "Barril.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Engine/World.h"
// Sets default values
ABarril::ABarril()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ConstructorHelpers::FObjectFinder<UStaticMesh> BarrilMesh(TEXT("StaticMesh'/Game/Geometry/Meshes/Assets/Donkey_Kong_Level_1_Barrel011.Donkey_Kong_Level_1_Barrel011'"));
	MeshBarril = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrilMesh"));
	MeshBarril->SetStaticMesh(BarrilMesh.Object);
	RootComponent = MeshBarril;

	MeshBarril->SetWorldScale3D(FVector(3.5f, 3.5f, 3.5f));

	//ACTIVAR FISICAS
	MeshBarril->SetSimulatePhysics(true);
	MeshBarril->SetMobility(EComponentMobility::Movable);
	MeshBarril->SetEnableGravity(true);
	FVector AngularVelocity = MeshBarril->GetPhysicsAngularVelocityInDegrees();
	AngularVelocity.X = 0;
	AngularVelocity.Y = 0;
	MeshBarril->SetPhysicsAngularVelocityInDegrees(AngularVelocity);

	//eliminar barriles
	/*MeshBarril->SetupAttachment(RootComponent);
	MeshBarril->BodyInstance.SetCollisionProfileName("Barril");
	MeshBarril->OnComponentHit.AddDynamic(this, &ABarril::OnHit);*/

}

void ABarril::BeginPlay()
{
		Super::BeginPlay();
}

void ABarril::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}
//
//void ABarril::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
//{
//	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
//	{
//		OtherComp->AddImpulseAtLocation(GetVelocity() * 10.0f, GetActorLocation());
//		
//	}
//	Destroy();
//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Barril destruido"));
//}









