// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "P_BUI_INT_SET_CAPSULAS.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UP_BUI_INT_SET_CAPSULAS : public UInterface
{
	GENERATED_BODY()
};


class USFX_GALAGA_L07_API IP_BUI_INT_SET_CAPSULAS
{
	GENERATED_BODY()

public:

	virtual void Set_Paquete_Capsulas_01() = 0;

	virtual void Set_Paquete_Capsulas_02() = 0;

	virtual void Set_Paquete_Capsulas_03() = 0;

};
