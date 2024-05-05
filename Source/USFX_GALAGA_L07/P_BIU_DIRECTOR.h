// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "P_BU_INT_CONS_CAPSULAS.h"
#include "P_BIU_DIRECTOR.generated.h"

UCLASS()
class USFX_GALAGA_L07_API AP_BIU_DIRECTOR : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AP_BIU_DIRECTOR();

public:

	IP_BU_INT_CONS_CAPSULAS* Capsulas_ESA;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:

	void Set_Construir_Capsulas(AActor* _Capsulas);

	void Construir_Capsulas(int32 _cap);

};
