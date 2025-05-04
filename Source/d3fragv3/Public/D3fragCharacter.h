// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
//#include "D3fragCharacterMovementComponent.h"
#include "D3fragCharacter.generated.h"

//// Delegate for when stats based on integers are changed.
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIntStatUpdated, int32, OldValue, int32, NewValue, int32, MaxValue);
//
//// Delegate for when the player dies
//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerIsDead);
//
//// Delegate for when stats based on floats are changed.
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFloatStatUpdated, float, OldValue, float, NewValue, float, MaxValue);
//
//// Different actions involving the key wallet.
//UENUM(BlueprintType)
//enum class EPlayerItemAction : uint8
//{
//	AddItem UMETA(Tooltip = "Attempt to add an item to player's inventory."),
//	RemoveItem UMETA(Tooltip = "Attempt to remove an item from player's inventory."),
//	HasItem UMETA(Tooltip = "Check if the player has a specific item.")
//};
//
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInventoryAction, FString, ItemString, EPlayerItemAction, ItemAction, bool, IsSuccess);

UCLASS()
class D3FRAGV3_API AD3fragCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AD3fragCharacter();
	//AD3fragCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

//#pragma region Health
//
//	// Return the player's current health.
//	UFUNCTION(BlueprintPure, Category = "Player|Health")
//	int GetHealth();
//
//	// Return the player's max health.
//	UFUNCTION(BlueprintPure, Category = "Player|Health")
//	int GetMaxHealth();
//
//	// Modify the player's health by the specified amount
//	// -ve values are subtracted, +ve values added.
//	UFUNCTION(BlueprintCallable, Category = "Player|Health")
//	void UpdateHealth(int DeltaHealth);
//
//	// Sets player's current health to maximum allowable.
//	UFUNCTION(BlueprintCallable, Category = "Player|Health")
//	void RestoreToFullHealth();
//
//	// Sets the maximum allowable health.
//	UFUNCTION(BlueprintCallable, Category = "Player|Health")
//	void SetMaxHealth(int NewMaxHealth);
//
//	// Triggered when the player's health is updated.
//	UPROPERTY(BlueprintAssignable, Category = "Player|Health")
//	FIntStatUpdated OnHealthChanged;
//
//	// Triggered when the player dies.
//	UPROPERTY(BlueprintAssignable, Category = "Player|Health")
//	FPlayerIsDead OnPlayerDied;
//
//#pragma endregion
//
//#pragma region Items
//
//	// Add a key to the wallet if it isn't already in there.
//	// If it is already in there, dont do anything.
//	UFUNCTION(BlueprintCallable, Category = "Player|Inventory")
//	void AddItem(FString Item);
//
//	// Remove a key (do we even need to do that in our game?)
//	// If the key isn't in the wallet, we do nothing.
//	UFUNCTION(BlueprintCallable, Category = "Player|Inventory")
//	void RemoveItem(FString Item);
//
//	// Does the player have a given key?
//	// Returns true if they do, and false if they dont.
//	UFUNCTION(BlueprintPure, Category = "Player|Inventory")
//	bool HasItem(FString Item);
//
//	// Triggered when something happens with the player's key wallet.
//	UPROPERTY(BlueprintAssignable, Category = "Player|Inventory")
//	FInventoryAction OnInventoryAction;
//
//#pragma endregion

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	//// Health
	//static constexpr int BaseStatValue = 100;
	//int MaxHealth = BaseStatValue;
	//int CurrentHealth = BaseStatValue;

	//// Items
	//TArray<FString> Inventory;

};
