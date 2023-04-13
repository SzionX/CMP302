// Copyright Epic Games, Inc. All Rights Reserved.

#include "CMP302_UnrealCharacter.h"
#include "CMP302_UnrealProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "GameFramework/CharacterMovementComponent.h"

//////////////////////////////////////////////////////////////////////////
// ACMP302_UnrealCharacter

ACMP302_UnrealCharacter::ACMP302_UnrealCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	TurnRateGamepad = 45.f;

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

void ACMP302_UnrealCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Set Default Values
	GetCharacterMovement()->GravityScale = 1.9f;	//Gravity Scale
	GetCharacterMovement()->AirControl = 0.5f;		//Air Control
	
	//Set values for Updraft
	launchSpeed = 1000;
	dashSpeed = 100;
	upVelocity = FVector(0, 0, 1);
}

void ACMP302_UnrealCharacter::Tick(float DeltaTime)
{
	//Keep character velocity updated
	currentVelocity = GetCharacterMovement()->Velocity;
	newVelocity = currentVelocity + upVelocity;
}

//////////////////////////////////////////////////////////////////////////// Input

void ACMP302_UnrealCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind movement events
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ACMP302_UnrealCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &ACMP302_UnrealCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "Mouse" versions handle devices that provide an absolute delta, such as a mouse.
	// "Gamepad" versions are for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &ACMP302_UnrealCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &ACMP302_UnrealCharacter::LookUpAtRate);

	//Bind Jett Abilities
	PlayerInputComponent->BindAction("Drift", IE_Pressed, this, &ACMP302_UnrealCharacter::Drift);
	PlayerInputComponent->BindAction("Tailwind", IE_Pressed, this, &ACMP302_UnrealCharacter::Tailwind);
	PlayerInputComponent->BindAction("Updraft", IE_Pressed, this, &ACMP302_UnrealCharacter::Updraft);
	PlayerInputComponent->BindAction("Cloudburst", IE_Pressed, this, &ACMP302_UnrealCharacter::Cloudburst);
}

//Basic Movement
void ACMP302_UnrealCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ACMP302_UnrealCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

//Jett Abilities

//Slow Fall
void ACMP302_UnrealCharacter::Drift()
{
	//Float downwards if spacebar is held
	if (GetCharacterMovement()->IsFalling() && GetWorld()->GetFirstPlayerController()->IsInputKeyDown(EKeys::SpaceBar)) {

		GetCharacterMovement()->GravityScale = 0.1f;
	}
	else {
		GetCharacterMovement()->GravityScale = 1.9f;
	}
}

//Dash in any direction
void ACMP302_UnrealCharacter::Tailwind()
{
	// Apply the launch speed to the dash direction vector
	dashDirection = currentVelocity * dashSpeed;

	// Apply the dash direction to the character's velocity
	GetCharacterMovement()->Velocity = dashDirection;
}

//Adds vertical velocity
void ACMP302_UnrealCharacter::Updraft()
{
	FVector upForce = upVelocity * launchSpeed;
	GetCharacterMovement()->AddImpulse(upForce, true);
}

//Deploys controllable smoke
void ACMP302_UnrealCharacter::Cloudburst()
{
}

void ACMP302_UnrealCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void ACMP302_UnrealCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}
