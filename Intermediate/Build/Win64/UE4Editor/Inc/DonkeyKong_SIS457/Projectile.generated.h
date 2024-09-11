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
#ifdef DONKEYKONG_SIS457_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define DONKEYKONG_SIS457_Projectile_generated_h

#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_SPARSE_DATA
#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_SIS457"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonkeyKong_SIS457"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public:


#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile(AProjectile&&); \
	NO_API AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile)


#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AProjectile, ProjectileMovement); }


#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_12_PROLOG
#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_PRIVATE_PROPERTY_OFFSET \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_SPARSE_DATA \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_RPC_WRAPPERS \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_INCLASS \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_PRIVATE_PROPERTY_OFFSET \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_SPARSE_DATA \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_INCLASS_NO_PURE_DECLS \
	DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONKEYKONG_SIS457_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DonkeyKong_SIS457_Source_DonkeyKong_SIS457_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
