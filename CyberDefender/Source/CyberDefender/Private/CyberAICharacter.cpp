// Fill out your copyright notice in the Description page of Project Settings.


#include "CyberAICharacter.h"

// Sets default values
ACyberAICharacter::ACyberAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACyberAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACyberAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACyberAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

