// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/ComponentePlataforma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentePlataforma() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AComponentePlataforma_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_AComponentePlataforma();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AComponentePlataforma::StaticRegisterNativesAComponentePlataforma()
	{
	}
	UClass* Z_Construct_UClass_AComponentePlataforma_NoRegister()
	{
		return AComponentePlataforma::StaticClass();
	}
	struct Z_Construct_UClass_AComponentePlataforma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshPlataforma_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshPlataforma;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComponentePlataforma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponentePlataforma_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ComponentePlataforma.h" },
		{ "ModuleRelativePath", "ComponentePlataforma.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComponentePlataforma_Statics::NewProp_MeshPlataforma_MetaData[] = {
		{ "Category", "ComponentePlataforma" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ComponentePlataforma.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AComponentePlataforma_Statics::NewProp_MeshPlataforma = { "MeshPlataforma", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AComponentePlataforma, MeshPlataforma), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AComponentePlataforma_Statics::NewProp_MeshPlataforma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComponentePlataforma_Statics::NewProp_MeshPlataforma_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AComponentePlataforma_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComponentePlataforma_Statics::NewProp_MeshPlataforma,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComponentePlataforma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComponentePlataforma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComponentePlataforma_Statics::ClassParams = {
		&AComponentePlataforma::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AComponentePlataforma_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AComponentePlataforma_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AComponentePlataforma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComponentePlataforma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComponentePlataforma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComponentePlataforma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComponentePlataforma, 1308047974);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<AComponentePlataforma>()
	{
		return AComponentePlataforma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComponentePlataforma(Z_Construct_UClass_AComponentePlataforma, &AComponentePlataforma::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("AComponentePlataforma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComponentePlataforma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
