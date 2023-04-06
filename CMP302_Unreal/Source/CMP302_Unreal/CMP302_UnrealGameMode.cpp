// Copyright Epic Games, Inc. All Rights Reserved.

#include "CMP302_UnrealGameMode.h"
#include "CMP302_UnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACMP302_UnrealGameMode::ACMP302_UnrealGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
