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
	UPROPERTY(EditAnywhere, Category = "AI")
	float WalkSpeed = 300.0f;

	UPROPERTY(EditAnywhere, Category = "AI")
	float RunSpeed = 600.0f;

	UPROPERTY(EditAnywhere)
	ERobotType RobotType;

	UPROPERTY(EditAnywhere)
	TMap<ERobotType, USkeletalMesh*> RobotMeshes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float MaxHealth = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float Health = 100.0f;


	ACyberAICharacter();
	void SetMovementSpeed(float NewSpeed);

	UFUNCTION(BlueprintPure, Category = "Health")
	float GetHealth() const;

	virtual float TakeDamage(
		float DamageAmount,
		struct FDamageEvent const& DamageEvent,
		AController* EventInstigator,
		AActor* DamageCauser) override;

protected:
	virtual void BeginPlay() override;

	void OnDeath();

};
