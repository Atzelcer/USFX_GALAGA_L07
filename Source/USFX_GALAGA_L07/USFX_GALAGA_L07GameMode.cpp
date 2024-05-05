// Copyright Epic Games, Inc. All Rights Reserved.

#include "USFX_GALAGA_L07GameMode.h"
#include "USFX_GALAGA_L07Pawn.h"

AUSFX_GALAGA_L07GameMode::AUSFX_GALAGA_L07GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AUSFX_GALAGA_L07Pawn::StaticClass();
	Cont = 1;
	TimerController = 0.0f;
}


void AUSFX_GALAGA_L07GameMode::BeginPlay()
{
	Super::BeginPlay();

	Constructor_Cap = GetWorld()->SpawnActor<AP_BUI_CONCRETO_CONS_CAPSULAS>(AP_BUI_CONCRETO_CONS_CAPSULAS::StaticClass());
	Director_Capsulas = GetWorld()->SpawnActor<AP_BIU_DIRECTOR>(AP_BIU_DIRECTOR::StaticClass());
	Director_Capsulas->Set_Construir_Capsulas(Constructor_Cap);
	Director_Capsulas->Construir_Capsulas(Cont);
}

void AUSFX_GALAGA_L07GameMode::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

	TimerController += DeltaTime;

	if (TimerController >= 5.0f)
	{
		Director_Capsulas->Construir_Capsulas(Cont);
		TimerController = 0.0f;
		Cont++;
		if (Cont > 3)
		{
			Cont = 1;
		}
	}
}

