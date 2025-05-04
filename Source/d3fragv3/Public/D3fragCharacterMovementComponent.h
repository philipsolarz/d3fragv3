// D3fragCharacterMovementComponent.h
// Implements Quake-style Defrag movement: friction, ground/air accel, air control, strafing boost.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "D3fragCharacterMovementComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class D3FRAGV3_API UD3fragCharacterMovementComponent : public UCharacterMovementComponent
{
    GENERATED_BODY()

public:
    UD3fragCharacterMovementComponent();
    // Raw 2D input: X = forward/back, Y = strafe
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Defrag Input")
    FVector2D CurrentInput = FVector2D::ZeroVector;

    // Tweakable Defrag physics parameters
    UPROPERTY(EditAnywhere, Category = "Defrag Physics")
    float DefragGroundFriction = 4.0f;

    UPROPERTY(EditAnywhere, Category = "Defrag Physics")
    float DefragGroundAccel = 600.0f;

    UPROPERTY(EditAnywhere, Category = "Defrag Physics")
    float DefragAirAccel = 2.0f;

    UPROPERTY(EditAnywhere, Category = "Defrag Physics")
    float DefragAirControl = 0.3f;

    UPROPERTY(EditAnywhere, Category = "Defrag Physics")
    float DefragStrafeBoost = 50.0f;

protected:
    // Override walking and falling to inject custom accel/friction
    virtual void PhysWalking(float DeltaTime, int32 Iterations) override;
    virtual void PhysFalling(float DeltaTime, int32 Iterations) override;

private:
    void ApplyFriction(float DeltaTime);
    void Accelerate(const FVector& WishDir, float WishSpeed, float AccelValue);
    void AirAccelerate(const FVector& WishDir, float WishSpeed, float AccelValue);
    void AirControlFunc(const FVector& WishDir, float DeltaTime);
};