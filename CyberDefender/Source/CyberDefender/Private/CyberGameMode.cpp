#include "CyberGameMode.h"
#include "CyberCharacter.h"
#include "CyberPlayerController.h"
#include "CyberGameState.h"

ACyberGameMode::ACyberGameMode()
{
	DefaultPawnClass = ACyberCharacter::StaticClass();
	PlayerControllerClass = ACyberPlayerController::StaticClass();

	GameStateClass = ACyberGameState::StaticClass();
}

void ACyberGameMode::AddScore(int32 Amount)
{
	if (ACyberGameState* GS = GetGameState<ACyberGameState>())
	{
		GS->Score += Amount;

		UE_LOG(
			LogTemp,
			Warning,
			TEXT("[Game] Score: %d"),
			GS->Score);
	}
}

void ACyberGameMode::SetWave(int32 Wave)
{
	if (ACyberGameState* GS = GetGameState<ACyberGameState>())
	{
		GS->CurrentWave = Wave;

		UE_LOG(
			LogTemp,
			Warning,
			TEXT("[Game] Wave: %d"),
			GS->CurrentWave);
	}
}

void ACyberGameMode::GameWin()
{
	UE_LOG(LogTemp, Warning, TEXT("[Game] GAME WIN!"));
}

void ACyberGameMode::GameLose()
{
	UE_LOG(LogTemp, Warning, TEXT("[Game] GAME LOSE!"));
}
