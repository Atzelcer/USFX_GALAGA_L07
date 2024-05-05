// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsulas_Energia_p.h"
#include "Capsulas_Energia_01.generated.h"

UCLASS()
class USFX_GALAGA_L07_API ACapsulas_Energia_01 : public ACapsulas_Energia_p
{
	GENERATED_BODY()

public:

	ACapsulas_Energia_01();


protected:

	virtual void BeginPlay() override;

public:

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
	virtual void Componente_OP();

};
