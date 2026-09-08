#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CyberCharacter.generated.h"

UCLASS()
class CYBERDEFENDER_API ACyberCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ACyberCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
