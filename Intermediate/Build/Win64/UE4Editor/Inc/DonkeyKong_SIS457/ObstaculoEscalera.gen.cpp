// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/ObstaculoEscalera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoEscalera() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AObstaculoEscalera_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AObstaculoEscalera();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AObstaculo();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void AObstaculoEscalera::StaticRegisterNativesAObstaculoEscalera()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoEscalera_NoRegister()
	{
		return AObstaculoEscalera::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoEscalera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoEscalera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoEscalera_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ObstaculoEscalera.h" },
		{ "ModuleRelativePath", "ObstaculoEscalera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoEscalera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoEscalera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoEscalera_Statics::ClassParams = {
		&AObstaculoEscalera::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoEscalera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoEscalera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoEscalera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoEscalera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoEscalera, 2668969999);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AObstaculoEscalera>()
	{
		return AObstaculoEscalera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoEscalera(Z_Construct_UClass_AObstaculoEscalera, &AObstaculoEscalera::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AObstaculoEscalera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoEscalera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
