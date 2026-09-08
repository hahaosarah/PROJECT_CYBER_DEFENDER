#include "CyberCharacter.h"

ACyberCharacter::ACyberCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACyberCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ACyberCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACyberCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

