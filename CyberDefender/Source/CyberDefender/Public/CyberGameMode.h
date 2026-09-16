#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "CyberGameMode.generated.h"

UCLASS()
class CYBERDEFENDER_API ACyberGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	ACyberGameMode();

	void AddScore(int32 Amount);
	void SetWave(int32 Wave);

	void GameWin();
	void GameLose();
};
