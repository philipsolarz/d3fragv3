// Fill out your copyright notice in the Description page of Project Settings.


#include "D3fragPlayerController.h"
#include <D3fragCharacter.h>
#include <EnhancedInputComponent.h>
#include <EnhancedInputSubsystems.h>
//#include "D3fragCharacterMovementComponent.h"

void AD3fragPlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);

	// Store a reference to the Player's Pawn
	PlayerCharacter = Cast<AD3fragCharacter>(aPawn);
	checkf(PlayerCharacter, TEXT("AD3fragPlayerController derived classes should only possess AD3fragCharacter derived pawns"));

	// Get a reference to the EnhancedInputComponent.
	EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);
	checkf(EnhancedInputComponent, TEXT("Unable to get reference to the EnhancedInputComponent."));

	// Get the local player subsystem.
	UEnhancedInputLocalPlayerSubsystem* InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	checkf(InputSubsystem, TEXT("Unable to get reference to the EnhancedInputLocalPlayerSubsystem."));

	// Wipe existing mappings, and add our mapping.
	checkf(InputMappingContext, TEXT("InputMappingContext was not specified."));
	InputSubsystem->ClearAllMappings();
	InputSubsystem->AddMappingContext(InputMappingContext, 0);



	// Bind the input actions.
	// Only attempt to bind if a valid value was provided.
	if (ActionMove)
		EnhancedInputComponent->BindAction(ActionMove, ETriggerEvent::Triggered, this, &AD3fragPlayerController::HandleMove);

	if (ActionLook)
		EnhancedInputComponent->BindAction(ActionLook, ETriggerEvent::Triggered, this, &AD3fragPlayerController::HandleLook);

	if (ActionJump)
		EnhancedInputComponent->BindAction(ActionJump, ETriggerEvent::Triggered, this, &AD3fragPlayerController::HandleJump);

	//if (ActionShoot)
	//	EnhancedInputComponent->BindAction(ActionShoot, ETriggerEvent::Triggered, this, &AD3fragPlayerController::HandleShoot);
}

void AD3fragPlayerController::OnUnPossess()
{
	// Wipe existing mappings
	EnhancedInputComponent->ClearActionBindings();

	// Call the parent method, in case it needs to do anything.
	Super::OnUnPossess();
}

void AD3fragPlayerController::HandleMove(const FInputActionValue& InputActionValue)
{
	// Input is a Vector2D
	const FVector2D MovementVector = InputActionValue.Get<FVector2D>();

	// Add movement to the Player's Character Pawn
	PlayerCharacter->AddMovementInput(PlayerCharacter->GetActorForwardVector(), MovementVector.Y);
	PlayerCharacter->AddMovementInput(PlayerCharacter->GetActorRightVector(), MovementVector.X);

	//if (PlayerCharacter)
	//{
	//	if (auto* DMC = Cast<UD3fragCharacterMovementComponent>(PlayerCharacter->GetCharacterMovement()))
	//	{
	//		// Feed into Defrag movement
	//		DMC->CurrentInput.X = MovementVector.Y;  // forward/back
	//		DMC->CurrentInput.Y = MovementVector.X;  // strafe
	//	}
	//}
}

void AD3fragPlayerController::HandleLook(const FInputActionValue& InputActionValue)
{
	// Input is a Vector2D
	const FVector2D LookAxisVector = InputActionValue.Get<FVector2D>();

	// Add Yaw and Pitch Input to controller
	AddYawInput(LookAxisVector.X);
	AddPitchInput(LookAxisVector.Y);
}

void AD3fragPlayerController::HandleJump()
{
	// Input is 'Digital'
	PlayerCharacter->Jump();
}

//void AD3fragPlayerController::HandleShoot()
//{
//	// Input is 'Digital'
//	PlayerCharacter->Jump();
//}