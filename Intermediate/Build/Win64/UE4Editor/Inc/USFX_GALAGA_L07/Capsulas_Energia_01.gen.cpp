// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USFX_GALAGA_L07/Capsulas_Energia_01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulas_Energia_01() {}
// Cross Module References
	USFX_GALAGA_L07_API UClass* Z_Construct_UClass_ACapsulas_Energia_01_NoRegister();
	USFX_GALAGA_L07_API UClass* Z_Construct_UClass_ACapsulas_Energia_01();
	USFX_GALAGA_L07_API UClass* Z_Construct_UClass_ACapsulas_Energia_p();
	UPackage* Z_Construct_UPackage__Script_USFX_GALAGA_L07();
// End Cross Module References
	void ACapsulas_Energia_01::StaticRegisterNativesACapsulas_Energia_01()
	{
	}
	UClass* Z_Construct_UClass_ACapsulas_Energia_01_NoRegister()
	{
		return ACapsulas_Energia_01::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulas_Energia_01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulas_Energia_01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsulas_Energia_p,
		(UObject* (*)())Z_Construct_UPackage__Script_USFX_GALAGA_L07,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulas_Energia_01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Capsulas_Energia_01.h" },
		{ "ModuleRelativePath", "Capsulas_Energia_01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulas_Energia_01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulas_Energia_01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulas_Energia_01_Statics::ClassParams = {
		&ACapsulas_Energia_01::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACapsulas_Energia_01_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulas_Energia_01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulas_Energia_01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulas_Energia_01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulas_Energia_01, 2851264171);
	template<> USFX_GALAGA_L07_API UClass* StaticClass<ACapsulas_Energia_01>()
	{
		return ACapsulas_Energia_01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulas_Energia_01(Z_Construct_UClass_ACapsulas_Energia_01, &ACapsulas_Energia_01::StaticClass, TEXT("/Script/USFX_GALAGA_L07"), TEXT("ACapsulas_Energia_01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulas_Energia_01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
