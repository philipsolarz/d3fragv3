// Fill out your copyright notice in the Description page of Project Settings.


#include "D3fragCharacter.h"
//#include <D3fragCharacterMovementComponent.h>

// Sets default values
AD3fragCharacter::AD3fragCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//SetActorTickInterval(0.5f);
	//SetActorTickEnabled(true);

}

//AD3fragCharacter::AD3fragCharacter(const FObjectInitializer& ObjectInitializer)
//	: Super(ObjectInitializer.SetDefaultSubobjectClass<UD3fragCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
//{
//	PrimaryActorTick.bCanEverTick = true;
//}

// Called when the game starts or when spawned
void AD3fragCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AD3fragCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//GEngine->AddOnScreenDebugMessage(-1, 0.49f, FColor::Red,
	//	*(FString::Printf(
	//		TEXT("Health - Current:%d | Maximum:%d"), CurrentHealth, MaxHealth)));

	//GEngine->AddOnScreenDebugMessage(-1, 0.49f, FColor::Orange,
	//	*(FString::Printf(TEXT("Items - %d Items Currently held"), Inventory.Num())));
}

// Called to bind functionality to input
void AD3fragCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//int AD3fragCharacter::GetHealth()
//{
//	return CurrentHealth;
//}
//
//int AD3fragCharacter::GetMaxHealth()
//{
//	return MaxHealth;
//}
//
//void AD3fragCharacter::UpdateHealth(int DeltaHealth)
//{
//	// If the player is already dead, their health cannot be modified again.
//	// This prevents multiple effects 'stacking' and a player becoming dead 
//	// and instantly reviving. DEAD IS DEAD.
//	if (CurrentHealth <= 0.f) return;
//
//	// What is the value, before we change it?
//	int OldValue = CurrentHealth;
//
//	CurrentHealth += DeltaHealth;
//
//	// Make sure that the new CurrentHealth value is inside an acceptable range
//	// In this case it will never be less than -1, or more than the MaxHealth
//	CurrentHealth = FMath::Clamp(CurrentHealth, -1.f, MaxHealth);
//
//	// Compare the value before we changed it with the new value.
//	// We only want to notify listeners if this is different.
//	// Why wouldn't it be? 
//	// Because, the player might drink a healing potion, 
//	// when they are already at full health, etc.
//	if (CurrentHealth != OldValue)
//	{
//		OnHealthChanged.Broadcast(OldValue, CurrentHealth, MaxHealth);
//	}
//
//	// Did the player just die?
//	if (CurrentHealth <= 0.f)
//	{
//		// The player is dead! Do something!
//		OnPlayerDied.Broadcast();
//	}
//}
//
//void AD3fragCharacter::RestoreToFullHealth()
//{
//	// Only do something if we are not already at max health.
//	if (CurrentHealth < MaxHealth)
//	{
//		int OldValue = CurrentHealth;
//		CurrentHealth = MaxHealth;
//		OnHealthChanged.Broadcast(OldValue, CurrentHealth, MaxHealth);
//	}
//}
//
//void AD3fragCharacter::SetMaxHealth(int NewMaxHealth)
//{
//	int OldValue = MaxHealth;
//
//	// We just assume that the new value is within an acceptable range.
//	// Might be better if we had some range checking?
//	MaxHealth = NewMaxHealth;
//
//	// Changing the MaxHealth 'might' also change the CurrentHealth,
//	// if it is now less than the current health.
//	// Regardless of that, we should fire the notification,
//	// just in case there are any widgets listening which need to calculate a new %
//
//	if (MaxHealth != OldValue) // We need to fire a notification
//	{
//		if (MaxHealth < OldValue)
//		{
//			// MaxHealth decreased, 
//			// so we need to also cap the CurrentHealth to the new Max.
//			if (CurrentHealth > MaxHealth) CurrentHealth = MaxHealth;
//		}
//
//		// There was a change, so notify any listeners
//		OnHealthChanged.Broadcast(OldValue, CurrentHealth, MaxHealth);
//	}
//}
//
//void AD3fragCharacter::AddItem(FString Item)
//{
//	if (Inventory.Contains(Item))
//	{
//		// Key already in there, play a noise
//		OnInventoryAction.Broadcast(Item, EPlayerItemAction::AddItem, false);
//	}
//	else
//	{
//		Inventory.Add(Item);
//		// And maybe play a sound effect?
//		OnInventoryAction.Broadcast(Item, EPlayerItemAction::AddItem, true);
//	}
//}
//
//void AD3fragCharacter::RemoveItem(FString Item)
//{
//	if (Inventory.Contains(Item))
//	{
//		Inventory.Remove(Item);
//		OnInventoryAction.Broadcast(Item, EPlayerItemAction::RemoveItem, true);
//	}
//	else
//	{
//		OnInventoryAction.Broadcast(Item, EPlayerItemAction::RemoveItem, true);
//	}
//}
//
//bool AD3fragCharacter::HasItem(FString Item)
//{
//	bool Result = Inventory.Contains(Item);
//	OnInventoryAction.Broadcast(Item, EPlayerItemAction::HasItem, Result);
//	return Result;
//}