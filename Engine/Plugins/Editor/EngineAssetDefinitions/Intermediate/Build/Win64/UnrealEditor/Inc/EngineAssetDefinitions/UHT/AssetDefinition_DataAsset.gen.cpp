// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetDefinition_DataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_DataAsset() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_DataAsset();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_DataAsset_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_DataAsset::StaticRegisterNativesUAssetDefinition_DataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_DataAsset);
	UClass* Z_Construct_UClass_UAssetDefinition_DataAsset_NoRegister()
	{
		return UAssetDefinition_DataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_DataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_DataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_DataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_DataAsset.h" },
		{ "ModuleRelativePath", "Public/AssetDefinition_DataAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_DataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_DataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_DataAsset_Statics::ClassParams = {
		&UAssetDefinition_DataAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_DataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_DataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_DataAsset()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_DataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_DataAsset.OuterSingleton, Z_Construct_UClass_UAssetDefinition_DataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_DataAsset.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_DataAsset>()
	{
		return UAssetDefinition_DataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_DataAsset);
	UAssetDefinition_DataAsset::~UAssetDefinition_DataAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_DataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_DataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_DataAsset, UAssetDefinition_DataAsset::StaticClass, TEXT("UAssetDefinition_DataAsset"), &Z_Registration_Info_UClass_UAssetDefinition_DataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_DataAsset), 709318822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_DataAsset_h_3024842377(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_DataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_AssetDefinition_DataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
