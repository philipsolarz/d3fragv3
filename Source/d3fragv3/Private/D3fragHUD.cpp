// Fill out your copyright notice in the Description page of Project Settings.


#include "D3fragHUD.h"
#include "Engine/Canvas.h"
#include <D3fragPlayerController.h>

void AD3fragHUD::DrawHUD()
{
    Super::DrawHUD();

    // Screen center
    const float CX = Canvas->SizeX * 0.5f;
    const float CY = Canvas->SizeY * 0.5f;

    if (auto* PC = Cast<AD3fragPlayerController>(GetOwningPlayerController()))
    {
        const FVector2D Move = PC->GetCurrentMoveInput();
        const float ArrowLen = 100.f;

        // X: right is +, Y: forward is + => on screen, +Y = up so we invert Move.Y
        const FVector2D End = {
            CX + Move.X * ArrowLen,
            CY - Move.Y * ArrowLen
        };

        // Draw the debug arrow
        Canvas->K2_DrawLine({ CX, CY }, End, 2.f, FLinearColor::Green);
    }
}