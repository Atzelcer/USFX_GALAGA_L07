// Fill out your copyright notice in the Description page of Project Settings.


#include "P_BUI_CONCRETO_CONS_CAPSULAS.h"
#include "P_BUI_CONCRETO_SET_CAPSULAS.h"


// Sets default values
AP_BUI_CONCRETO_CONS_CAPSULAS::AP_BUI_CONCRETO_CONS_CAPSULAS()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AP_BUI_CONCRETO_CONS_CAPSULAS::BeginPlay()
{
	Super::BeginPlay();

	Capsulas_Gen = GetWorld()->SpawnActor<AP_BUI_CONCRETO_SET_CAPSULAS>(AP_BUI_CONCRETO_SET_CAPSULAS::StaticClass());
	Capsulas_Gen->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

}

// Called every frame
void AP_BUI_CONCRETO_CONS_CAPSULAS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AP_BUI_CONCRETO_CONS_CAPSULAS::Cons_Paquete_Capsulas_01()
{
	Capsulas_Gen->Set_Paquete_Capsulas_01();
}

void AP_BUI_CONCRETO_CONS_CAPSULAS::Cons_Paquete_Capsulas_02()
{
	Capsulas_Gen->Set_Paquete_Capsulas_02();
}

void AP_BUI_CONCRETO_CONS_CAPSULAS::Cons_Paquete_Capsulas_03()
{
	Capsulas_Gen->Set_Paquete_Capsulas_03();
}

