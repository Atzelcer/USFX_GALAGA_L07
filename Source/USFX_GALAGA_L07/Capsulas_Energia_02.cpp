// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsulas_Energia_02.h"
#include "Kismet/GameplayStatics.h"
#include "USFX_GALAGA_L07Pawn.h"

ACapsulas_Energia_02::ACapsulas_Energia_02()
{

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("StaticMesh'/Game/TwinStick/Materiales/Assetss/Projectile.Projectile'"));
	if (MeshAsset.Succeeded())
	{
		Capsula_Malla->SetStaticMesh(MeshAsset.Object);

		//// Modificar la escala del componente de malla
		//FVector NewScale(2.5f, 2.5f, 2.5f); // Escala modificada
		//Capsula_Malla->SetWorldScale3D(NewScale);
	}
	Energia = 180.0f;
}

void ACapsulas_Energia_02::BeginPlay()
{
}

void ACapsulas_Energia_02::NotifyActorBeginOverlap(AActor* OtherActor)
{
	AUSFX_GALAGA_L07Pawn* Jugador = Cast<AUSFX_GALAGA_L07Pawn>(OtherActor);
	if (Jugador)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("    + 180 de energia"));
		Jugador->TomarCapsula(Energia);
		Componente_OP();
	}
}

void ACapsulas_Energia_02::Componente_OP()
{
	// Efecto de part�culas de explosion
	if (Particula_Capsula != nullptr)
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Particula_Capsula, GetActorTransform());

	// Sonido de la explosion
	if (Sonido_Capsula != nullptr)
		UGameplayStatics::PlaySoundAtLocation(this, Sonido_Capsula, GetActorLocation());

	Destroy();

}