// Fill out your copyright notice in the Description page of Project Settings.


#include "P_BIU_DIRECTOR.h"

// Sets default values
AP_BIU_DIRECTOR::AP_BIU_DIRECTOR()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AP_BIU_DIRECTOR::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP_BIU_DIRECTOR::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AP_BIU_DIRECTOR::Set_Construir_Capsulas(AActor* _Capsulas)
{
	Capsulas_ESA = Cast<IP_BU_INT_CONS_CAPSULAS>(_Capsulas);

	if (!Capsulas_ESA) 
	{
		GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, FString::Printf(TEXT("Error al castear")));
	}


}

void AP_BIU_DIRECTOR::Construir_Capsulas(int32 _cap)
{
	if (1 == _cap)
	{
		Capsulas_ESA->Cons_Paquete_Capsulas_01();
	}
	else if (2 == _cap)
	{
		Capsulas_ESA->Cons_Paquete_Capsulas_02();
	}
	else if (3 == _cap)
	{
		Capsulas_ESA->Cons_Paquete_Capsulas_03();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Error al seleccionar el paquete de energia")));
	}
}

