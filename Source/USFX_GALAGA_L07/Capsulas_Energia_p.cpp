// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsulas_Energia_p.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SphereComponent.h"
#include "USFX_GALAGA_L07Pawn.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
ACapsulas_Energia_p::ACapsulas_Energia_p()
{
    PrimaryActorTick.bCanEverTick = true;

    Capsula_Malla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Capsula_Malla"));
    Capsula_Malla->SetupAttachment(RootComponent);
    RootComponent = Capsula_Malla;

    // En el constructor de AMaster_Ship
    Colision_Capsula = CreateDefaultSubobject<USphereComponent>(TEXT("RootCollision"));
    Colision_Capsula->InitSphereRadius(10.0f);
    RootComponent = Colision_Capsula;

    // En el constructor de AMaster_Ship
    static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("ParticleSystem'/Game/StarterContent/Particles/P_Explosion.P_Explosion'"));
    if (ParticleAsset.Succeeded())
    {
        Particula_Capsula = ParticleAsset.Object;
    }

    static ConstructorHelpers::FObjectFinder<USoundBase> AssetExplosionSound(TEXT("SoundWave'/Game/StarterContent/Audio/Explosion02.Explosion02'"));
    if (AssetExplosionSound.Succeeded())
    {
        Sonido_Capsula = AssetExplosionSound.Object;
    }

	Energia = 0.0f;

}

// Called when the game starts or when spawned
void ACapsulas_Energia_p::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACapsulas_Energia_p::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//AUSFX_GALAGA_L07Pawn* Jugador = Cast<AUSFX_GALAGA_L07Pawn>(OtherActor);
 //   if (Jugador) 
 //   {
	//	Jugador->TomarCapsula(18);
	//	this->Destroy();
 //   }

}

void ACapsulas_Energia_p::Componente_OP()
{
    //// Efecto de partículas de explosion
    //if (Particula_Capsula != nullptr)
    //    UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Particula_Capsula, GetActorTransform());

    //// Sonido de la explosion
    //if (Sonido_Capsula != nullptr)
    //    UGameplayStatics::PlaySoundAtLocation(this, Sonido_Capsula, GetActorLocation());

    //Destroy();

}

// Called every frame
void ACapsulas_Energia_p::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

