// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/UEMPlayableCharacter.h"

// Sets default values
AUEMPlayableCharacter::AUEMPlayableCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUEMPlayableCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUEMPlayableCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AUEMPlayableCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

