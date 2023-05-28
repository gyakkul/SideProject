// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_CurveVector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_CurveVector() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_Curve();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_CurveVector();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_CurveVector_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_CurveVector::StaticRegisterNativesUAssetDefinition_CurveVector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_CurveVector);
	UClass* Z_Construct_UClass_UAssetDefinition_CurveVector_NoRegister()
	{
		return UAssetDefinition_CurveVector::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_CurveVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_CurveVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinition_Curve,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_CurveVector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_CurveVector.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_CurveVector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_CurveVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_CurveVector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_CurveVector_Statics::ClassParams = {
		&UAssetDefinition_CurveVector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_CurveVector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_CurveVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_CurveVector()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_CurveVector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_CurveVector.OuterSingleton, Z_Construct_UClass_UAssetDefinition_CurveVector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_CurveVector.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_CurveVector>()
	{
		return UAssetDefinition_CurveVector::StaticClass();
	}
	UAssetDefinition_CurveVector::UAssetDefinition_CurveVector() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_CurveVector);
	UAssetDefinition_CurveVector::~UAssetDefinition_CurveVector() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_CurveVector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_CurveVector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_CurveVector, UAssetDefinition_CurveVector::StaticClass, TEXT("UAssetDefinition_CurveVector"), &Z_Registration_Info_UClass_UAssetDefinition_CurveVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_CurveVector), 3712081504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_CurveVector_h_3915443088(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_CurveVector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_CurveVector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
