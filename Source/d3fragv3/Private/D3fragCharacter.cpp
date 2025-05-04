// Fill out your copyright notice in the Description page of Project Settings.


#include "D3fragCharacter.h"

// Sets default values
AD3fragCharacter::AD3fragCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AD3fragCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AD3fragCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AD3fragCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
