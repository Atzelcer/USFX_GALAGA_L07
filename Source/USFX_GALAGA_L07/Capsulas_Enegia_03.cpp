// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsulas_Enegia_03.h"
#include "Kismet/GameplayStatics.h"
#include "USFX_GALAGA_L07Pawn.h"

ACapsulas_Enegia_03::ACapsulas_Enegia_03()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/TwinStick/Materiales/Assetss/BulletLevel1.BulletLevel1'"));
	if (MeshAsset.Succeeded())
	{
		Capsula_Malla->SetStaticMesh(MeshAsset.Object);

		//// Modificar la escala del componente de malla
		//FVector NewScale(2.5f, 2.5f, 2.5f); // Escala modificada
		//Capsula_Malla->SetWorldScale3D(NewScale);
	}
	Energia = 300.0f;
}

void ACapsulas_Enegia_03::BeginPlay()
{
}

void ACapsulas_Enegia_03::NotifyActorBeginOverlap(AActor* OtherActor)
{
	AUSFX_GALAGA_L07Pawn* Jugador = Cast<AUSFX_GALAGA_L07Pawn>(OtherActor);
	if (Jugador)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("    + 300 de energia"));
		Jugador->TomarCapsula(Energia);
		Componente_OP();
	}
}

void ACapsulas_Enegia_03::Componente_OP()
{
	// Efecto de partículas de explosion
	if (Particula_Capsula != nullptr)
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Particula_Capsula, GetActorTransform());

	// Sonido de la explosion
	if (Sonido_Capsula != nullptr)
		UGameplayStatics::PlaySoundAtLocation(this, Sonido_Capsula, GetActorLocation());

	Destroy();
}
