// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ProjectNPC_225HUD.generated.h"

UCLASS()
class AProjectNPC_225HUD : public AHUD
{
	GENERATED_BODY()

public:
	AProjectNPC_225HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

