// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/Cubo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubo() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ACubo_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_ACubo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACubo::StaticRegisterNativesACubo()
	{
	}
	UClass* Z_Construct_UClass_ACubo_NoRegister()
	{
		return ACubo::StaticClass();
	}
	struct Z_Construct_UClass_ACubo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshCubo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshCubo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cubo.h" },
		{ "ModuleRelativePath", "Cubo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubo_Statics::NewProp_MeshCubo_MetaData[] = {
		{ "Category", "Cubo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cubo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubo_Statics::NewProp_MeshCubo = { "MeshCubo", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACubo, MeshCubo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACubo_Statics::NewProp_MeshCubo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACubo_Statics::NewProp_MeshCubo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACubo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubo_Statics::NewProp_MeshCubo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubo_Statics::ClassParams = {
		&ACubo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACubo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACubo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACubo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACubo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACubo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubo, 2142099653);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<ACubo>()
	{
		return ACubo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubo(Z_Construct_UClass_ACubo, &ACubo::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("ACubo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
