// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsulas_Energia_p.generated.h"

UCLASS()
class USFX_GALAGA_L07_API ACapsulas_Energia_p : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsulas_Energia_p();

    UPROPERTY(VisibleAnywhere, Category = "Mesh")
    UStaticMeshComponent* Capsula_Malla;

    // ~~ Componente de Explosion ~~
    UPROPERTY(EditAnywhere, Category = "Componentes")
    class UParticleSystem* Particula_Capsula;

    // ~~ Componente de Colsion : tipo caja ~~
    UPROPERTY(EditAnywhere, Category = "Componentes")
    class USphereComponent* Colision_Capsula;

    // ~~ Componente de Sonido ~~
    UPROPERTY(EditAnywhere, Category = "Componentes")
    class USoundBase* Sonido_Capsula;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

    virtual void Componente_OP();

    float Energia; 

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
