// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USFX_GALAGA_L07/P_BU_INT_CONS_CAPSULAS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeP_BU_INT_CONS_CAPSULAS() {}
// Cross Module References
	USFX_GALAGA_L07_API UClass* Z_Construct_UClass_UP_BU_INT_CONS_CAPSULAS_NoRegister();
	USFX_GALAGA_L07_API UClass* Z_Construct_UClass_UP_BU_INT_CONS_CAPSULAS();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_USFX_GALAGA_L07();
// End Cross Module References
	void UP_BU_INT_CONS_CAPSULAS::StaticRegisterNativesUP_BU_INT_CONS_CAPSULAS()
	{
	}
	UClass* Z_Construct_UClass_UP_BU_INT_CONS_CAPSULAS_NoRegister()
	{
		return UP_BU_INT_CONS_CAPSULAS::StaticClass();
	}
	struct Z_Construct_UClass_UP_BU_INT_CONS_CAPSULAS_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UP_BU_INT_CONS_CAPSULAS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_USFX_GALAGA_L07,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UP_BU_INT_CONS_CAPSULAS_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "P_BU_INT_CONS_CAPSULAS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UP_BU_INT_CONS_CAPSULAS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IP_BU_INT_CONS_CAPSULAS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UP_BU_INT_CONS_CAPSULAS_Statics::ClassParams = {
		&UP_BU_INT_CONS_CAPSULAS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UP_BU_INT_CONS_CAPSULAS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UP_BU_INT_CONS_CAPSULAS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UP_BU_INT_CONS_CAPSULAS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UP_BU_INT_CONS_CAPSULAS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UP_BU_INT_CONS_CAPSULAS, 3225187663);
	template<> USFX_GALAGA_L07_API UClass* StaticClass<UP_BU_INT_CONS_CAPSULAS>()
	{
		return UP_BU_INT_CONS_CAPSULAS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UP_BU_INT_CONS_CAPSULAS(Z_Construct_UClass_UP_BU_INT_CONS_CAPSULAS, &UP_BU_INT_CONS_CAPSULAS::StaticClass, TEXT("/Script/USFX_GALAGA_L07"), TEXT("UP_BU_INT_CONS_CAPSULAS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UP_BU_INT_CONS_CAPSULAS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
