// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_LandscapeLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_LandscapeLayer() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_LandscapeLayer();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_LandscapeLayer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_LandscapeLayer::StaticRegisterNativesUAssetDefinition_LandscapeLayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_LandscapeLayer);
	UClass* Z_Construct_UClass_UAssetDefinition_LandscapeLayer_NoRegister()
	{
		return UAssetDefinition_LandscapeLayer::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_LandscapeLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_LandscapeLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_LandscapeLayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_LandscapeLayer.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_LandscapeLayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_LandscapeLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_LandscapeLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_LandscapeLayer_Statics::ClassParams = {
		&UAssetDefinition_LandscapeLayer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_LandscapeLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_LandscapeLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_LandscapeLayer()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_LandscapeLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_LandscapeLayer.OuterSingleton, Z_Construct_UClass_UAssetDefinition_LandscapeLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_LandscapeLayer.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_LandscapeLayer>()
	{
		return UAssetDefinition_LandscapeLayer::StaticClass();
	}
	UAssetDefinition_LandscapeLayer::UAssetDefinition_LandscapeLayer() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_LandscapeLayer);
	UAssetDefinition_LandscapeLayer::~UAssetDefinition_LandscapeLayer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_LandscapeLayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_LandscapeLayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_LandscapeLayer, UAssetDefinition_LandscapeLayer::StaticClass, TEXT("UAssetDefinition_LandscapeLayer"), &Z_Registration_Info_UClass_UAssetDefinition_LandscapeLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_LandscapeLayer), 61054745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_LandscapeLayer_h_462757559(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_LandscapeLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_LandscapeLayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
