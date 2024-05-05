// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USFX_GALAGA_L07/Capsulas_Energia_p.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulas_Energia_p() {}
// Cross Module References
	USFX_GALAGA_L07_API UClass* Z_Construct_UClass_ACapsulas_Energia_p_NoRegister();
	USFX_GALAGA_L07_API UClass* Z_Construct_UClass_ACapsulas_Energia_p();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_USFX_GALAGA_L07();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void ACapsulas_Energia_p::StaticRegisterNativesACapsulas_Energia_p()
	{
	}
	UClass* Z_Construct_UClass_ACapsulas_Energia_p_NoRegister()
	{
		return ACapsulas_Energia_p::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulas_Energia_p_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capsula_Malla_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Capsula_Malla;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Particula_Capsula_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Particula_Capsula;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colision_Capsula_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Colision_Capsula;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sonido_Capsula_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sonido_Capsula;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulas_Energia_p_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_USFX_GALAGA_L07,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulas_Energia_p_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Capsulas_Energia_p.h" },
		{ "ModuleRelativePath", "Capsulas_Energia_p.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Capsula_Malla_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Capsulas_Energia_p.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Capsula_Malla = { "Capsula_Malla", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsulas_Energia_p, Capsula_Malla), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Capsula_Malla_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Capsula_Malla_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Particula_Capsula_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Explosion ~~\n" },
		{ "ModuleRelativePath", "Capsulas_Energia_p.h" },
		{ "ToolTip", "~~ Componente de Explosion ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Particula_Capsula = { "Particula_Capsula", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsulas_Energia_p, Particula_Capsula), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Particula_Capsula_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Particula_Capsula_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Colision_Capsula_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Colsion : tipo caja ~~\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Capsulas_Energia_p.h" },
		{ "ToolTip", "~~ Componente de Colsion : tipo caja ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Colision_Capsula = { "Colision_Capsula", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsulas_Energia_p, Colision_Capsula), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Colision_Capsula_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Colision_Capsula_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Sonido_Capsula_MetaData[] = {
		{ "Category", "Componentes" },
		{ "Comment", "// ~~ Componente de Sonido ~~\n" },
		{ "ModuleRelativePath", "Capsulas_Energia_p.h" },
		{ "ToolTip", "~~ Componente de Sonido ~~" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Sonido_Capsula = { "Sonido_Capsula", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACapsulas_Energia_p, Sonido_Capsula), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Sonido_Capsula_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Sonido_Capsula_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACapsulas_Energia_p_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Capsula_Malla,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Particula_Capsula,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Colision_Capsula,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACapsulas_Energia_p_Statics::NewProp_Sonido_Capsula,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulas_Energia_p_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulas_Energia_p>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulas_Energia_p_Statics::ClassParams = {
		&ACapsulas_Energia_p::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACapsulas_Energia_p_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulas_Energia_p_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACapsulas_Energia_p_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulas_Energia_p_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulas_Energia_p()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulas_Energia_p_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulas_Energia_p, 884980719);
	template<> USFX_GALAGA_L07_API UClass* StaticClass<ACapsulas_Energia_p>()
	{
		return ACapsulas_Energia_p::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulas_Energia_p(Z_Construct_UClass_ACapsulas_Energia_p, &ACapsulas_Energia_p::StaticClass, TEXT("/Script/USFX_GALAGA_L07"), TEXT("ACapsulas_Energia_p"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulas_Energia_p);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
