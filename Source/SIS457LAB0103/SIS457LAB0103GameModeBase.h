// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SIS457LAB0103GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SIS457LAB0103_API ASIS457LAB0103GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:

	// When the game starts
	virtual void BeginPlay() override;
};
