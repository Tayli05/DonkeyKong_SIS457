// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/EnemigoPlatano.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoPlatano() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AEnemigoPlatano_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AEnemigoPlatano();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void AEnemigoPlatano::StaticRegisterNativesAEnemigoPlatano()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoPlatano_NoRegister()
	{
		return AEnemigoPlatano::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoPlatano_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoPlatano_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoPlatano_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoPlatano.h" },
		{ "ModuleRelativePath", "EnemigoPlatano.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoPlatano_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoPlatano>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoPlatano_Statics::ClassParams = {
		&AEnemigoPlatano::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoPlatano_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoPlatano_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoPlatano()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoPlatano_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoPlatano, 729925046);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AEnemigoPlatano>()
	{
		return AEnemigoPlatano::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoPlatano(Z_Construct_UClass_AEnemigoPlatano, &AEnemigoPlatano::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AEnemigoPlatano"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoPlatano);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
