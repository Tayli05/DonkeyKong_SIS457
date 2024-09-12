// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_SIS457Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/Character.h"
#include "Engine/World.h"
#include "Projectile.h"


const FName ADonkeyKong_SIS457Character::FireForwardBinding("FireForward");
const FName ADonkeyKong_SIS457Character::FireRightBinding("FireRight");

ADonkeyKong_SIS457Character::ADonkeyKong_SIS457Character()
{
	PrimaryActorTick.bCanEverTick = true;

	MaxHealth = 100.0f; // Establece la salud máxima del personaje
	CurrentHealth = MaxHealth; // Inicializa la salud actual con la salud máxima
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 1000.f;
	CameraBoom->SocketOffset = FVector(0.f,0.f,75.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f,180.f,0.f));

	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1200.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
	
	// Inicializa las variables de disparo
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;

}


void ADonkeyKong_SIS457Character::ShotTimerExpired()
{
	bCanFire = true;
}


//////////////////////////////////////////////////////////////////////////
// Input

void ADonkeyKong_SIS457Character::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void ADonkeyKong_SIS457Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{

	// configurar acciones de juego
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &ADonkeyKong_SIS457Character::MoveRight);
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ADonkeyKong_SIS457Character::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ADonkeyKong_SIS457Character::TouchStopped);


	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	//Verificar si el jugador presiona la tecla de disparo
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ADonkeyKong_SIS457Character::Fire);

}

void ADonkeyKong_SIS457Character::BeginPlay()
{
	Super::BeginPlay();

}

void ADonkeyKong_SIS457Character::MoveRight(float Value)
{
	// add movement in that direction
	AddMovementInput(FVector(0.f,-1.f,0.f), Value);
}

void ADonkeyKong_SIS457Character::Fire()
{
	
	
	// Ejemplo de lógica para disparar un proyectil
	if (UWorld* World = GetWorld())
	{
		// Supongamos que tienes un Blueprint de proyectil que has convertido a clase C++ 'AProjectile'
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		FVector SpawnLocation = GetActorLocation() + FVector(100, 0, 0); // Ajusta la ubicación del spawn
		FRotator SpawnRotation = GetActorRotation();

		World->SpawnActor<AProjectile>(SpawnLocation, SpawnRotation, SpawnParams);

	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Disparo!!"));

}

void ADonkeyKong_SIS457Character::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	Jump();
}

void ADonkeyKong_SIS457Character::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

float ADonkeyKong_SIS457Character::TakeDamage(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	
	CurrentHealth -= DamageAmount;
	if (CurrentHealth <= 0.0f)
	{
		CurrentHealth = 0.0f;
		// Aquí puedes agregar lógica para manejar la muerte del personaje.
	}
	return DamageAmount;
}


bool ADonkeyKong_SIS457Character::IsAlive() const
{
	return CurrentHealth > 0.0f;
}
