// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_generated_h
#error "USFX_GALAGA_L07Projectile.generated.h already included, missing '#pragma once' in USFX_GALAGA_L07Projectile.h"
#endif
#define USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_generated_h

#define USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_SPARSE_DATA
#define USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUSFX_GALAGA_L07Projectile(); \
	friend struct Z_Construct_UClass_AUSFX_GALAGA_L07Projectile_Statics; \
public: \
	DECLARE_CLASS(AUSFX_GALAGA_L07Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USFX_GALAGA_L07"), NO_API) \
	DECLARE_SERIALIZER(AUSFX_GALAGA_L07Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAUSFX_GALAGA_L07Projectile(); \
	friend struct Z_Construct_UClass_AUSFX_GALAGA_L07Projectile_Statics; \
public: \
	DECLARE_CLASS(AUSFX_GALAGA_L07Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/USFX_GALAGA_L07"), NO_API) \
	DECLARE_SERIALIZER(AUSFX_GALAGA_L07Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUSFX_GALAGA_L07Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUSFX_GALAGA_L07Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUSFX_GALAGA_L07Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUSFX_GALAGA_L07Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUSFX_GALAGA_L07Projectile(AUSFX_GALAGA_L07Projectile&&); \
	NO_API AUSFX_GALAGA_L07Projectile(const AUSFX_GALAGA_L07Projectile&); \
public:


#define USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUSFX_GALAGA_L07Projectile(AUSFX_GALAGA_L07Projectile&&); \
	NO_API AUSFX_GALAGA_L07Projectile(const AUSFX_GALAGA_L07Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUSFX_GALAGA_L07Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUSFX_GALAGA_L07Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUSFX_GALAGA_L07Projectile)


#define USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AUSFX_GALAGA_L07Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUSFX_GALAGA_L07Projectile, ProjectileMovement); }


#define USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_12_PROLOG
#define USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_SPARSE_DATA \
	USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_RPC_WRAPPERS \
	USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_INCLASS \
	USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_SPARSE_DATA \
	USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_INCLASS_NO_PURE_DECLS \
	USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> USFX_GALAGA_L07_API UClass* StaticClass<class AUSFX_GALAGA_L07Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID USFX_GALAGA_L07_Source_USFX_GALAGA_L07_USFX_GALAGA_L07Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
