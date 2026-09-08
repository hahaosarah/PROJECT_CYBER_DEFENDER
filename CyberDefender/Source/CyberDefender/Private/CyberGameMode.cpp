#include "CyberGameMode.h"
#include "CyberCharacter.h"
#include "CyberPlayerController.h"

ACyberGameMode::ACyberGameMode()
{
	DefaultPawnClass = ACyberCharacter::StaticClass();
	PlayerControllerClass = ACyberPlayerController::StaticClass();
}

