// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_SIS457/Piso.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePiso() {}
// Cross Module References
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_APiso_NoRegister();
	DONKEYKONG_SIS457_API UClass* Z_Construct_UClass_APiso();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_SIS457();
// End Cross Module References
	void APiso::StaticRegisterNativesAPiso()
	{
	}
	UClass* Z_Construct_UClass_APiso_NoRegister()
	{
		return APiso::StaticClass();
	}
	struct Z_Construct_UClass_APiso_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APiso_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_SIS457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiso_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Piso.h" },
		{ "ModuleRelativePath", "Piso.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APiso_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APiso>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APiso_Statics::ClassParams = {
		&APiso::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APiso_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APiso_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APiso()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APiso_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APiso, 1793297693);
	template<> DONKEYKONG_SIS457_API UClass* StaticClass<APiso>()
	{
		return APiso::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APiso(Z_Construct_UClass_APiso, &APiso::StaticClass, TEXT("/Script/DonkeyKong_SIS457"), TEXT("APiso"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APiso);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
