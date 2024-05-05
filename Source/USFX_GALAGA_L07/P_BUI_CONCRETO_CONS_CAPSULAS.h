// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "P_BU_INT_CONS_CAPSULAS.h"
#include "P_BUI_CONCRETO_CONS_CAPSULAS.generated.h"

UCLASS()
class USFX_GALAGA_L07_API AP_BUI_CONCRETO_CONS_CAPSULAS : public AActor, public IP_BU_INT_CONS_CAPSULAS
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AP_BUI_CONCRETO_CONS_CAPSULAS();


public:

	UPROPERTY(VisibleAnywhere, Category = "PaquetesEnergia")
	class AP_BUI_CONCRETO_SET_CAPSULAS* Capsulas_Gen;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:

	virtual void Cons_Paquete_Capsulas_01() override;

	virtual void Cons_Paquete_Capsulas_02() override;

	virtual void Cons_Paquete_Capsulas_03() override;


};
