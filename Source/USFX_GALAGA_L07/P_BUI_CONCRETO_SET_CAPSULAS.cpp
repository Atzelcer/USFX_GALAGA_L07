// Fill out your copyright notice in the Description page of Project Settings.


#include "P_BUI_CONCRETO_SET_CAPSULAS.h"
#include "Capsulas_Energia_01.h"
#include "Capsulas_Energia_02.h"
#include "Capsulas_Enegia_03.h"

// Sets default values
AP_BUI_CONCRETO_SET_CAPSULAS::AP_BUI_CONCRETO_SET_CAPSULAS()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AP_BUI_CONCRETO_SET_CAPSULAS::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AP_BUI_CONCRETO_SET_CAPSULAS::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AP_BUI_CONCRETO_SET_CAPSULAS::Set_Paquete_Capsulas_01()
{
	float RandomSpawnY = FMath::RandRange(-1820, 1770);
	const FVector SpawnLocation = FVector(1770.0f, RandomSpawnY, 210.0f);
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);

	GetWorld()->SpawnActor<ACapsulas_Energia_01>(SpawnLocation, Rotation);
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, FString::Printf(TEXT("Paquete de energia 1")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, FString::Printf(TEXT("Energia 50%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, FString::Printf(TEXT("Energia 70%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Red, FString::Printf(TEXT("Energia 23%%")), true, FVector2D(1.5f, 1.5f));
}

void AP_BUI_CONCRETO_SET_CAPSULAS::Set_Paquete_Capsulas_02()
{

	float RandomSpawnY = FMath::RandRange(-1820, 1770);
	const FVector SpawnLocation = FVector(1770.0f, RandomSpawnY, 210.0f);
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);

	GetWorld()->SpawnActor<ACapsulas_Energia_02>(SpawnLocation, Rotation);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Paquete de energia 2")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Energia 500%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Energia 100%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Energia 300%%")), true, FVector2D(1.5f, 1.5f));
}

void AP_BUI_CONCRETO_SET_CAPSULAS::Set_Paquete_Capsulas_03()
{
	float RandomSpawnY = FMath::RandRange(-1820, 1770);
	const FVector SpawnLocation = FVector(1770.0f, RandomSpawnY, 210.0f);
	const FRotator Rotation = FRotator(0.f, 0.f, 0.f);

	GetWorld()->SpawnActor<ACapsulas_Enegia_03>(SpawnLocation, Rotation);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Paquete de energia 3")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Energia 1%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Energia 5%%")), true, FVector2D(1.5f, 1.5f));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Energia 7%%")), true, FVector2D(1.5f, 1.5f));
}

