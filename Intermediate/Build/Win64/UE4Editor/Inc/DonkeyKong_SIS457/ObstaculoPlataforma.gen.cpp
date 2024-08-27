// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/ObstaculoPlataforma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoPlataforma() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AObstaculoPlataforma_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AObstaculoPlataforma();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AObstaculo();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void AObstaculoPlataforma::StaticRegisterNativesAObstaculoPlataforma()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoPlataforma_NoRegister()
	{
		return AObstaculoPlataforma::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoPlataforma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoPlataforma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoPlataforma_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ObstaculoPlataforma.h" },
		{ "ModuleRelativePath", "ObstaculoPlataforma.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoPlataforma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoPlataforma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoPlataforma_Statics::ClassParams = {
		&AObstaculoPlataforma::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoPlataforma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoPlataforma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoPlataforma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoPlataforma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoPlataforma, 1502164184);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AObstaculoPlataforma>()
	{
		return AObstaculoPlataforma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoPlataforma(Z_Construct_UClass_AObstaculoPlataforma, &AObstaculoPlataforma::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AObstaculoPlataforma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoPlataforma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
