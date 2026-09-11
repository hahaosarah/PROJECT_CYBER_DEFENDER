#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CyberAICharacter.generated.h"

UENUM(BlueprintType)
enum class ERobotType : uint8
{
	Humanoid UMETA(DisplayName = "Humanoid"),
	DogRobot UMETA(DisplayName = "DogRobot"),
	Drone UMETA(DisplayName = "Drone"),
	CyberHacker UMETA(DisplayName = "CyberHacker")
};

UCLASS()
class CYBERDEFENDER_API ACyberAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ACyberAICharacter();
	void SetMovementSpeed(float NewSpeed);

	UPROPERTY(EditAnywhere, Category = "AI")
	float WalkSpeed = 300.0f;

	UPROPERTY(EditAnywhere, Category = "AI")
	float RunSpeed = 600.0f;

	UPROPERTY(EditAnywhere)
	ERobotType RobotType;

	UPROPERTY(EditAnywhere)
	TMap<ERobotType, USkeletalMesh*> RobotMeshes;



protected:
	virtual void BeginPlay() override;

};
