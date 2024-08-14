// Copyright Epic Games, Inc. All Rights Reserved.

#include "MirrorWorldGameMode.h"
#include "MirrorWorldCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMirrorWorldGameMode::AMirrorWorldGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
