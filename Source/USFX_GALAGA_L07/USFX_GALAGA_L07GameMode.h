// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "P_BUI_CONCRETO_CONS_CAPSULAS.h"
#include "P_BIU_DIRECTOR.h"
#include "USFX_GALAGA_L07GameMode.generated.h"

UCLASS(MinimalAPI)
class AUSFX_GALAGA_L07GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AUSFX_GALAGA_L07GameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	int32 Cont;
	float TimerController;


	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	AP_BUI_CONCRETO_CONS_CAPSULAS* Constructor_Cap;
	
	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	AP_BIU_DIRECTOR* Director_Capsulas;



};



