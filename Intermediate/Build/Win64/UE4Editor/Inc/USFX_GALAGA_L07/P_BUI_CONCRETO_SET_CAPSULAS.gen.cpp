// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USFX_GALAGA_L07/P_BUI_CONCRETO_SET_CAPSULAS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_BUI_CONCRETO_SET_CAPSULAS() {}
// Cross Module References
	USFX_GALAGA_L07_API UClass* Z_Construct_UClass_AP_BUI_CONCRETO_SET_CAPSULAS_NoRegister();
	USFX_GALAGA_L07_API UClass* Z_Construct_UClass_AP_BUI_CONCRETO_SET_CAPSULAS();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_USFX_GALAGA_L07();
	USFX_GALAGA_L07_API UClass* Z_Construct_UClass_UP_BUI_INT_SET_CAPSULAS_NoRegister();
// End Cross Module References
	void AP_BUI_CONCRETO_SET_CAPSULAS::StaticRegisterNativesAP_BUI_CONCRETO_SET_CAPSULAS()
	{
	}
	UClass* Z_Construct_UClass_AP_BUI_CONCRETO_SET_CAPSULAS_NoRegister()
	{
		return AP_BUI_CONCRETO_SET_CAPSULAS::StaticClass();
	}
	struct Z_Construct_UClass_AP_BUI_CONCRETO_SET_CAPSULAS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AP_BUI_CONCRETO_SET_CAPSULAS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_USFX_GALAGA_L07,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AP_BUI_CONCRETO_SET_CAPSULAS_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "P_BUI_CONCRETO_SET_CAPSULAS.h" },
		{ "ModuleRelativePath", "P_BUI_CONCRETO_SET_CAPSULAS.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AP_BUI_CONCRETO_SET_CAPSULAS_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UP_BUI_INT_SET_CAPSULAS_NoRegister, (int32)VTABLE_OFFSET(AP_BUI_CONCRETO_SET_CAPSULAS, IP_BUI_INT_SET_CAPSULAS), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AP_BUI_CONCRETO_SET_CAPSULAS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AP_BUI_CONCRETO_SET_CAPSULAS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AP_BUI_CONCRETO_SET_CAPSULAS_Statics::ClassParams = {
		&AP_BUI_CONCRETO_SET_CAPSULAS::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AP_BUI_CONCRETO_SET_CAPSULAS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AP_BUI_CONCRETO_SET_CAPSULAS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AP_BUI_CONCRETO_SET_CAPSULAS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AP_BUI_CONCRETO_SET_CAPSULAS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AP_BUI_CONCRETO_SET_CAPSULAS, 3759963037);
	template<> USFX_GALAGA_L07_API UClass* StaticClass<AP_BUI_CONCRETO_SET_CAPSULAS>()
	{
		return AP_BUI_CONCRETO_SET_CAPSULAS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AP_BUI_CONCRETO_SET_CAPSULAS(Z_Construct_UClass_AP_BUI_CONCRETO_SET_CAPSULAS, &AP_BUI_CONCRETO_SET_CAPSULAS::StaticClass, TEXT("/Script/USFX_GALAGA_L07"), TEXT("AP_BUI_CONCRETO_SET_CAPSULAS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AP_BUI_CONCRETO_SET_CAPSULAS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
