// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/Obstaculo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculo() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AObstaculo_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AObstaculo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AObstaculo::StaticRegisterNativesAObstaculo()
	{
	}
	UClass* Z_Construct_UClass_AObstaculo_NoRegister()
	{
		return AObstaculo::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshObstaculo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshObstaculo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Obstaculo.h" },
		{ "ModuleRelativePath", "Obstaculo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculo_Statics::NewProp_MeshObstaculo_MetaData[] = {
		{ "Category", "Obstaculo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Obstaculo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstaculo_Statics::NewProp_MeshObstaculo = { "MeshObstaculo", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculo, MeshObstaculo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AObstaculo_Statics::NewProp_MeshObstaculo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Statics::NewProp_MeshObstaculo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstaculo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculo_Statics::NewProp_MeshObstaculo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculo_Statics::ClassParams = {
		&AObstaculo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObstaculo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculo, 2691074483);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AObstaculo>()
	{
		return AObstaculo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculo(Z_Construct_UClass_AObstaculo, &AObstaculo::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AObstaculo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
