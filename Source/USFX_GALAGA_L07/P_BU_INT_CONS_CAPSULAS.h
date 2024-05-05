// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "P_BU_INT_CONS_CAPSULAS.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UP_BU_INT_CONS_CAPSULAS : public UInterface
{
	GENERATED_BODY()
};



class USFX_GALAGA_L07_API IP_BU_INT_CONS_CAPSULAS
{
	GENERATED_BODY()


public:

	virtual void Cons_Paquete_Capsulas_01() = 0;

	virtual void Cons_Paquete_Capsulas_02() = 0;

	virtual void Cons_Paquete_Capsulas_03() = 0;

};
