// Fill out your copyright notice in the Description page of Project Settings.


#include "JettMechanics.h"
#include "CMP302_UnrealProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"

// Sets default values
AJettMechanics::AJettMechanics()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));
}

// Called when the game starts or when spawned
void AJettMechanics::BeginPlay()
{
	Super::BeginPlay();

}

// Called to bind functionality to input
void AJettMechanics::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up gameplay key bindings
	check(PlayerInputComponent);

	//Bind movement axes
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &AJettMechanics::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &AJettMechanics::MoveRight);
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);

	//Bind Input events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction("Drift", IE_Pressed, this, &AJettMechanics::Drift);

	PlayerInputComponent->BindAction("Tailwind", IE_Pressed, this, &AJettMechanics::Tailwind);
	PlayerInputComponent->BindAction("Updraft", IE_Pressed, this, &AJettMechanics::Updraft);
	PlayerInputComponent->BindAction("Cloudburst", IE_Pressed, this, &AJettMechanics::Cloudburst);
}

//Slow Fall
void AJettMechanics::Drift()
{
}

//Dash in any direction
void AJettMechanics::Tailwind()
{
}

//Adds vertical velocity
void AJettMechanics::Updraft()
{
}

//Deploys controllable smoke
void AJettMechanics::Cloudburst()
{
}

void AJettMechanics::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AJettMechanics::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

// Called every frame
void AJettMechanics::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Log, TEXT("This is definitely inheriting from JettMechanics"));
}



