// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/UEMMobCharacter.h"

// Sets default values
AUEMMobCharacter::AUEMMobCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUEMMobCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUEMMobCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AUEMMobCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

