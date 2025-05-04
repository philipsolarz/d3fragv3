#include "D3fragCharacterMovementComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/Controller.h"
#include "Math/RotationMatrix.h"

UD3fragCharacterMovementComponent::UD3fragCharacterMovementComponent()
{
    // defaults are inlined in the header
}

//void UD3fragCharacterMovementComponent::PhysWalking(float DeltaTime, int32 Iterations)
//{
//    // 1) Apply classic Q3 friction
//    ApplyDefragFriction(DeltaTime);
//
//    // 2) Compute wish direction & speed from controller input
//    FVector Forward = CharacterOwner->GetControlRotation().Vector();
//    FVector Right = FRotationMatrix(CharacterOwner->GetControlRotation()).GetScaledAxis(EAxis::Y);
//    FVector WishDir = (Forward * CurrentInput.X + Right * CurrentInput.Y).GetSafeNormal();
//    float   WishSpeed = CurrentInput.Size() * MaxWalkSpeed;
//
//    // 3) Accelerate on ground
//    Accelerate(WishDir, WishSpeed, DefragGroundAccel);
//
//    // 4) Optional strafe boost: if strafing & turning in same direction
//    float YawDelta = CharacterOwner->GetInputAxisValue(TEXT("Turn")) * DeltaTime;
//    if (FMath::Abs(CurrentInput.Y) > 0.1f && FMath::Sign(CurrentInput.Y) == FMath::Sign(YawDelta))
//    {
//        Velocity += Right * DefragStrafeBoost * DeltaTime;
//    }
//
//    // 5) Let default UE slide & step
//    Super::PhysWalking(DeltaTime, Iterations);
//}

void UD3fragCharacterMovementComponent::PhysWalking(float DeltaTime, int32 Iterations)
{
    // 1) Friction
    ApplyFriction(DeltaTime);

    // 2) Build wish-vector from 2D input + control rotation
    FRotator ControlRot = (CharacterOwner && CharacterOwner->GetController())
        ? CharacterOwner->GetController()->GetControlRotation()
        : FRotator::ZeroRotator;

    const FVector Forward = ControlRot.Vector();
    const FVector Right = FRotationMatrix(ControlRot).GetScaledAxis(EAxis::Y);
    FVector WishDir = (Forward * CurrentInput.X + Right * CurrentInput.Y).GetSafeNormal();
    float WishSpeed = CurrentInput.Size() * MaxWalkSpeed;

    // 3) Ground accelerate
    Accelerate(WishDir, WishSpeed, DefragGroundAccel);

    // 4) Standard UE slide
    Super::PhysWalking(DeltaTime, Iterations);
}


//void UD3fragCharacterMovementComponent::PhysFalling(float DeltaTime, int32 Iterations)
//{
//    // 1) Gravity
//    Velocity.Z += GetGravityZ() * DeltaTime;
//
//    // 2) Wish dir & speed same as walking
//    FVector Forward = CharacterOwner->GetControlRotation().Vector();
//    FVector Right = FRotationMatrix(CharacterOwner->GetControlRotation()).GetScaledAxis(EAxis::Y);
//    FVector WishDir = (Forward * CurrentInput.X + Right * CurrentInput.Y).GetSafeNormal();
//    float   WishSpeed = CurrentInput.Size() * MaxWalkSpeed;
//
//    // 3) Air acceleration & control
//    AirAccelerate(WishDir, WishSpeed, DefragAirAccel);
//    AirControlFunc(WishDir, DeltaTime);
//
//    // 4) Default falling physics
//    Super::PhysFalling(DeltaTime, Iterations);
//}

void UD3fragCharacterMovementComponent::PhysFalling(float DeltaTime, int32 Iterations)
{
    // 1) Gravity
    Velocity.Z += GetGravityZ() * DeltaTime;

    // 2) Build wish-vector
    FRotator ControlRot = (CharacterOwner && CharacterOwner->GetController())
        ? CharacterOwner->GetController()->GetControlRotation()
        : FRotator::ZeroRotator;

    const FVector Forward = ControlRot.Vector();
    const FVector Right = FRotationMatrix(ControlRot).GetScaledAxis(EAxis::Y);
    FVector WishDir = (Forward * CurrentInput.X + Right * CurrentInput.Y).GetSafeNormal();
    float WishSpeed = CurrentInput.Size() * MaxWalkSpeed;

    // 3) Air accel + air control
    AirAccelerate(WishDir, WishSpeed, DefragAirAccel);
    AirControlFunc(WishDir, DeltaTime);

    // 4) Standard UE falling
    Super::PhysFalling(DeltaTime, Iterations);
}

//void UD3fragCharacterMovementComponent::ApplyDefragFriction(float DeltaTime)
//{
//    FVector Vel2D = FVector(Velocity.X, Velocity.Y, 0.f);
//    float   Speed = Vel2D.Size();
//    if (Speed < KINDA_SMALL_NUMBER) return;
//
//    float Drop = Speed * DefragGroundFriction * DeltaTime;
//    float NewSpeed = FMath::Max(Speed - Drop, 0.f);
//    Velocity *= (NewSpeed / Speed);
//}

void UD3fragCharacterMovementComponent::ApplyFriction(float DeltaTime)
{
    FVector Vel2D(Velocity.X, Velocity.Y, 0.f);
    float Speed = Vel2D.Size();
    if (Speed <= KINDA_SMALL_NUMBER) return;

    float Drop = Speed * DefragGroundFriction * DeltaTime;
    float NewSpeed = FMath::Max(Speed - Drop, 0.f);
    Velocity *= (NewSpeed / Speed);
}

//void UD3fragCharacterMovementComponent::Accelerate(const FVector& WishDir, float WishSpeed, float AccelValue)
//{
//    float CurrSpeed = FVector::DotProduct(Velocity, WishDir);
//    float AddSpeed = WishSpeed - CurrSpeed;
//    if (AddSpeed <= 0) return;
//
//    float AccelSpeed = AccelValue * GetWorld()->GetDeltaSeconds() * WishSpeed;
//    AccelSpeed = FMath::Min(AccelSpeed, AddSpeed);
//
//    Velocity += WishDir * AccelSpeed;
//}

void UD3fragCharacterMovementComponent::Accelerate(const FVector& WishDir, float WishSpeed, float Accel)
{
    float CurrSpeed = FVector::DotProduct(Velocity, WishDir);
    float AddSpeed = WishSpeed - CurrSpeed;
    if (AddSpeed <= 0.f) return;

    float AccelSpeed = Accel * GetWorld()->GetDeltaSeconds() * WishSpeed;
    AccelSpeed = FMath::Min(AccelSpeed, AddSpeed);
    Velocity += WishDir * AccelSpeed;

    // Optional strafe‐boost
    if (DefragStrafeBoost > 0.f && FMath::Abs(CurrentInput.Y) > SMALL_NUMBER)
    {
        Velocity += WishDir * DefragStrafeBoost * GetWorld()->GetDeltaSeconds();
    }
}

//void UD3fragCharacterMovementComponent::AirAccelerate(const FVector& WishDir, float WishSpeed, float AccelValue)
//{
//    float CurrSpeed = FVector::DotProduct(Velocity, WishDir);
//    float AddSpeed = WishSpeed - CurrSpeed;
//    if (AddSpeed <= 0) return;
//
//    float AccelSpeed = AccelValue * GetWorld()->GetDeltaSeconds() * WishSpeed;
//    Velocity += WishDir * AccelSpeed;
//}

void UD3fragCharacterMovementComponent::AirAccelerate(const FVector& WishDir, float WishSpeed, float Accel)
{
    float CurrSpeed = FVector::DotProduct(Velocity, WishDir);
    float AddSpeed = WishSpeed - CurrSpeed;
    if (AddSpeed <= 0.f) return;

    float AccelSpeed = Accel * GetWorld()->GetDeltaSeconds() * WishSpeed;
    Velocity += WishDir * AccelSpeed;
}

//void UD3fragCharacterMovementComponent::AirControlFunc(const FVector& WishDir, float DeltaTime)
//{
//    float VelZ = Velocity.Z;
//    Velocity.Z = 0;
//    float Speed = Velocity.Size();
//    FVector VelDir = Velocity.GetSafeNormal();
//
//    float Dot = FVector::DotProduct(VelDir, WishDir);
//    float K = DefragAirControl * Dot * Dot * DeltaTime;
//
//    if (Dot > 0)
//        Velocity = (VelDir * Speed + WishDir * K).GetSafeNormal() * Speed;
//
//    Velocity.Z = VelZ;
//}

void UD3fragCharacterMovementComponent::AirControlFunc(const FVector& WishDir, float DeltaTime)
{
    // Quake-style air control
    float VelZ = Velocity.Z;
    Velocity.Z = 0.f;

    float Speed = Velocity.Size();
    if (Speed > KINDA_SMALL_NUMBER)
    {
        FVector VelDir = Velocity.GetSafeNormal();
        float Dot = FVector::DotProduct(VelDir, WishDir);
        if (Dot > 0.f)
        {
            float K = DefragAirControl * Dot * Dot * DeltaTime;
            FVector NewVel = (VelDir * Speed + WishDir * K).GetSafeNormal() * Speed;
            Velocity.X = NewVel.X;
            Velocity.Y = NewVel.Y;
        }
    }

    Velocity.Z = VelZ;
}