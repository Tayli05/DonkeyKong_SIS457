// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_SIS457GameMode.h"
#include "DonkeyKong_SIS457Character.h"
#include "UObject/ConstructorHelpers.h"
#include "ComponentePlataforma.h"
#include "Barril.h"
#include "Obstaculo.h"
#include "Containers/Map.h"
#include "Engine/World.h"
#include "Projectile.h"
#include "Cubo.h"
#include "Muro.h"
#include "MuroElectrico.h"
#include "MuroCongelado.h"
#include "MuroPegajoso.h"
#include "MuroLadrillo.h"
#include "MuroPiedra.h"

ADonkeyKong_SIS457GameMode::ADonkeyKong_SIS457GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

}

void ADonkeyKong_SIS457GameMode::BeginPlay()
{
	Super::BeginPlay();

	// mensaje que se muestra en pantalla 
	GEngine->AddOnScreenDebugMessage(-1, 50, FColor::Purple, TEXT("Actor Moviendose"));

    // Crear plataformas
  //  FVector posicionInicial = FVector(-380.0f,-720.0f, -400.0f);
  //  FRotator rotacionInicial = FRotator(0.0f, 0.0f, 11.0f);
  //  FTransform SpawnLocationP;
  //  float alturaplataformas = 500.0f;

  //  for (int i = 0; i < 6; i++)
  //  {
  //      if ( i % 2 == 0) {
  //          posicionInicial.Y += 500.0f;
  //        posicionInicial.Z += 150.0f;
  //         
  //      }else{
  //          posicionInicial.Y -= 500.0f;
  //          posicionInicial.Z -= 100.0f;
  //         
		//}
  //      if (i % 2 == 1) {
  //          rotacionInicial.Roll = 0.0f; // Sin inclinación
  //         posicionInicial.Z += 200.0f;
  //      }
  //      else {
  //         rotacionInicial.Roll = 11.0f; // Inclinación
		// posicionInicial.Z -= 110.0f;
  //      }
  //      
  //      rotacionInicial.Roll = rotacionInicial.Roll * -1;
  //      SpawnLocationP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y, posicionInicial.Z + (i * alturaplataformas)));
  //      AComponentePlataforma* NuevaPlataforma = GetWorld()->SpawnActor<AComponentePlataforma>(SpawnLocationP.GetLocation(), rotacionInicial);
  //      Plataformas.Add(i, NuevaPlataforma);


  //  }
    FVector posicionInicial = FVector(400.0f, -1350.0f, -30.0f);
    FRotator rotacionInicial = FRotator(0.0f, 0.0f, 11.0f);
    FTransform SpawnLocationP;
    float alturaplataformas = 500.0f;
    int numPlataformasPorPiso = 10;

    float distanciaYEntrePlataformas = 100.0f; // Distancia vertical entre plataformas (más corta)

    for (int i = 0; i < 6; i++) // Ciclo para pisos
    {
        for (int j = 0; j < numPlataformasPorPiso; j++) // Ciclo para plataformas por piso
        {
            if (i % 2 == 0) {
                
                posicionInicial.Y += distanciaYEntrePlataformas;
                posicionInicial.Z += 150.0f;

				posicionInicial.Y += 200.0f;
            }
            else {
				posicionInicial.Y -= distanciaYEntrePlataformas;
              posicionInicial.Z -= 100.0f;

				posicionInicial.Y -= 200.0f;
            }

            if (i % 2 == 1) {
                rotacionInicial.Roll = 0.0f; // Sin inclinación
               posicionInicial.Z += 80.0f;
            }
            else {
                rotacionInicial.Roll = 11.0f; // Inclinación
                posicionInicial.Z -= 110.0f;
            }

            rotacionInicial.Roll = rotacionInicial.Roll * -1;

            // Ajuste de la distancia entre plataformas en el eje X
            SpawnLocationP.SetLocation(FVector(posicionInicial.X, posicionInicial.Y, posicionInicial.Z + (i * alturaplataformas)));

            AComponentePlataforma* NuevaPlataforma = GetWorld()->SpawnActor<AComponentePlataforma>(SpawnLocationP.GetLocation(), rotacionInicial);
            Plataformas.Add(NuevaPlataforma);
        }
    }

    //CREAR OBSTACULOS
   FTransform SpawnLocationO;
    FVector posicionInicialObstaculo = FVector(2580.0f, 510.0f, 2750.0f);
    //FRotator rotacionInicialObstaculo = FRotator(0.0f, 0.0f, 0.0f);
    float espacioZ = 600.0f;
    float espacioY = 700.0f;
    
    for (int k = 0; k < 5; k++)
    {
        for (int j = 0; j < 3; j++)
        {
            SpawnLocationO.SetLocation(FVector(posicionInicialObstaculo.X, posicionInicialObstaculo.Y + (j * espacioY), posicionInicialObstaculo.Z + (k * espacioZ)));
            AObstaculo* NuevoObstaculo = GetWorld()->SpawnActor<AObstaculo>(SpawnLocationO.GetLocation(), FRotator(0.0f, 90.0f, 0.0f));
            Obstaculos.Add(NuevoObstaculo);
        }
    }
       

       //CREAR BARRILES
    GetWorldTimerManager().SetTimer(SpawnBarrilTimerHandle, this, &ADonkeyKong_SIS457GameMode::SpawnBarril, 3.0f, true);
  

    FTransform SpawnLocationProjectile;
    FVector posicionInicialProjectile = FVector(2155.0f, -2210.0f, 2750.0f);
    FRotator rotacionInicialProjectile = FRotator(0.0f, 0.0f, 0.0f);
    SpawnLocationP.SetLocation(FVector(posicionInicialProjectile.X, posicionInicialProjectile.Y, posicionInicialProjectile.Z));
    Proyectil = GetWorld()->SpawnActor<AProjectile>(SpawnLocationP.GetLocation(), rotacionInicialProjectile);
    GEngine->AddOnScreenDebugMessage(-1, 50, FColor::Black, TEXT("Proyectil Creado"));

  //CREAR CUBOs

    /*float minX = 1200.0f;
    float maxX = 1200.0f;
    float minY = -1200.0f;
    float maxY = 1000.0f;
    float minZ = 100.0f;
    float maxZ = 1000.0f;*/

    //for (int32 i = 0; i < 2; i++)
    //{
    //    // Generar una ubicación aleatoria dentro del rango definido
    //    FVector RandomLocation = FVector(
    //        FMath::RandRange(minX, maxX), // Posición X aleatoria
    //        FMath::RandRange(minY, maxY), // Posición Y aleatoria
    //        FMath::RandRange(minZ, maxZ)  // Posición Z aleatoria
    //    );

    //    // Spawn de la caja en la ubicación aleatoria
    //    CantCajas.Add(GetWorld()->SpawnActor<ACubo>(RandomLocation, FRotator(0.0f, 0.0f, 0.0f)));
    //}

	//CREAR Cono Disparador
	FTransform SpawnLocationCubo;
	FVector posicionInicialCubo = FVector(1200.0f, 420.0f, 2200.0f);
	FRotator rotacionInicialCubo = FRotator(0.0f, 0.0f, 0.0f);
	SpawnLocationCubo.SetLocation(FVector(posicionInicialCubo.X, posicionInicialCubo.Y, posicionInicialCubo.Z));    
	Caja = GetWorld()->SpawnActor<ACubo>(SpawnLocationCubo.GetLocation(), rotacionInicialCubo);
	GEngine->AddOnScreenDebugMessage(-1, 50, FColor::Black, TEXT("Cubo Creado"));

   

	//CREAR CONO DISPARADOR
	/*FTransform SpawnLocationCono;
	FVector posicionInicialCono = FVector(1200.0f, -1200.0f, 1000.0f);
	FRotator rotacionInicialCono = FRotator(0.0f, 0.0f, 0.0f);
	SpawnLocationCono.SetLocation(FVector(posicionInicialCono.X, posicionInicialCono.Y, posicionInicialCono.Z));
	ConoDisparador = GetWorld()->SpawnActor<AConoDisparador>(SpawnLocationCono.GetLocation(), rotacionInicialCono);
	GEngine->AddOnScreenDebugMessage(-1, 50, FColor::Black, TEXT("Cono Disparador Creado"));
	*/
	//CREAR MUROS

    GetWorld()->SpawnActor < AMuroLadrillo > (AMuroLadrillo::StaticClass(),FVector(1100.0f, -600.0f, 850.0f), FRotator(0.0f, 0.0f, 0.0f));
	GetWorld()->SpawnActor < AMuroElectrico >(AMuroElectrico::StaticClass(), FVector(1050.0f, -600.0f, 1750.0f), FRotator(0.0f, 0.0f, 0.0f));
	GetWorld()->SpawnActor < AMuroCongelado >(AMuroCongelado::StaticClass(), FVector(1000.0f, 720.0f, 1250.0f), FRotator(0.0f, 0.0f, 0.0f));
	GetWorld()->SpawnActor < AMuroPegajoso >(AMuroPegajoso::StaticClass(), FVector(1200.0f, -850.0f, 2800.0f), FRotator(0.0f, 0.0f, 0.0f));
	GetWorld()->SpawnActor < AMuroPiedra >(AMuroPiedra::StaticClass(), FVector(1200.0f, 750.0f, 900.0f), FRotator(0.0f, 0.0f, 0.0f));



}

void ADonkeyKong_SIS457GameMode::Tick(float DeltaTime)
{
		Super::Tick(DeltaTime);
}

void ADonkeyKong_SIS457GameMode::SpawnBarril()
{
  
    if (numeroBarriles < 1) {

       // FVector spawnLocation = FVector(1220.0f, 1450.0f, 3750.0f);
        FVector spawnLocation = FVector(2150.0f, 2800.0f, 1050.0f);
        FRotator spawnRotation = FRotator(0.0f, 90.0f, 90.0f);

        Barriles.Add(GetWorld()->SpawnActor<ABarril>(spawnLocation, spawnRotation));
        GEngine->AddOnScreenDebugMessage(-1, 50, FColor::Black, TEXT("Barril Creado"));
        numeroBarriles++;

    }
        
}

//crear un metodo que se enargue de mover los barriles
