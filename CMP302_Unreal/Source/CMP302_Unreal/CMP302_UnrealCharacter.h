// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CMP302_UnrealCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class USceneComponent;
class UCameraComponent;
class UAnimMontage;
class USoundBase;

// Declaration of the delegate that will be called when the Primary Action is triggered
// It is declared as dynamic so it can be accessed also in Blueprints
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUseItem);

UCLASS(config=Game)
class ACMP302_UnrealCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

public:
	ACMP302_UnrealCharacter();

protected:
	virtual void BeginPlay();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:

	//Movement functions
	UFUNCTION(BlueprintCallable, Category = "Movement")
	void MoveForward(float Val);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void MoveRight(float Val);

	//Abilities
	UFUNCTION(BlueprintCallable, Category = "Abilities")
	void Drift();

	UFUNCTION(BlueprintCallable, Category = "Abilities")
	void Tailwind();

	UFUNCTION(BlueprintCallable, Category = "Abilities")
	void Updraft();

	UFUNCTION(BlueprintCallable, Category = "Abilities")
	void Cloudburst();

	//Mouse Movement functions
	void TurnAtRate(float Rate);

	void LookUpAtRate(float Rate);
	
private:

	//Variables
	bool isDrifting = false;
	FVector currentVelocity;
	FVector upVelocity;
	FVector newVelocity;
	FVector dashDirection;

	float launchSpeed, dashSpeed;

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface

public:
	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	float TurnRateGamepad;

	/** Delegate to whom anyone can subscribe to receive this event */
	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FOnUseItem OnUseItem;

	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }
};

