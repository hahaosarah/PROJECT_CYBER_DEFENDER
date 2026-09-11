#include "CyberAICharacter.h"
#include "CyberAIController.h"
#include "GameFramework/CharacterMovementComponent.h"

ACyberAICharacter::ACyberAICharacter()
{
	AIControllerClass = ACyberAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	UCharacterMovementComponent* Movement = GetCharacterMovement();

	Movement->MaxWalkSpeed = WalkSpeed;
	Movement->bOrientRotationToMovement = true; // Character가 이동하는 방향으로 회전하도록 설정
	Movement->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // Character의 회전 속도 설정
}

void ACyberAICharacter::SetMovementSpeed(float NewSpeed)
{
	if (UCharacterMovementComponent* Movement = GetCharacterMovement())
	{
		Movement->MaxWalkSpeed = NewSpeed;
		if (RobotType == ERobotType::Humanoid)
		{
			Movement->MaxWalkSpeed = WalkSpeed * 1;
		}
		else if (RobotType == ERobotType::DogRobot)
		{
			Movement->MaxWalkSpeed = WalkSpeed * 2;
		}
		else if (RobotType == ERobotType::Drone)
		{
			Movement->MaxWalkSpeed = WalkSpeed * 3;
		}
		else if (RobotType == ERobotType::CyberHacker)
		{
			Movement->MaxWalkSpeed = WalkSpeed * 4;
		}
	}
}

void ACyberAICharacter::BeginPlay()
{
	Super::BeginPlay();
	SetMovementSpeed(100);

	UE_LOG(LogTemp, Warning, TEXT("[Sparta] AI character has been spawned."));
}
