#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "CyberGameState.generated.h"

UCLASS()
class CYBERDEFENDER_API ACyberGameState : public AGameState
{
	GENERATED_BODY()

public:
	ACyberGameState();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game")
	int32 Score;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game")
	int32 CurrentWave;
};
