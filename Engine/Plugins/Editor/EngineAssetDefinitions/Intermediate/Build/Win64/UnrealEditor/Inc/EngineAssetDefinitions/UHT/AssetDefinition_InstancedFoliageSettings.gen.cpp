// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_InstancedFoliageSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_InstancedFoliageSettings() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_InstancedFoliageSettings();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_InstancedFoliageSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_InstancedFoliageSettings::StaticRegisterNativesUAssetDefinition_InstancedFoliageSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_InstancedFoliageSettings);
	UClass* Z_Construct_UClass_UAssetDefinition_InstancedFoliageSettings_NoRegister()
	{
		return UAssetDefinition_InstancedFoliageSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_InstancedFoliageSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_InstancedFoliageSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_InstancedFoliageSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_InstancedFoliageSettings.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_InstancedFoliageSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_InstancedFoliageSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_InstancedFoliageSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_InstancedFoliageSettings_Statics::ClassParams = {
		&UAssetDefinition_InstancedFoliageSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_InstancedFoliageSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_InstancedFoliageSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_InstancedFoliageSettings()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_InstancedFoliageSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_InstancedFoliageSettings.OuterSingleton, Z_Construct_UClass_UAssetDefinition_InstancedFoliageSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_InstancedFoliageSettings.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_InstancedFoliageSettings>()
	{
		return UAssetDefinition_InstancedFoliageSettings::StaticClass();
	}
	UAssetDefinition_InstancedFoliageSettings::UAssetDefinition_InstancedFoliageSettings() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_InstancedFoliageSettings);
	UAssetDefinition_InstancedFoliageSettings::~UAssetDefinition_InstancedFoliageSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_InstancedFoliageSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_InstancedFoliageSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_InstancedFoliageSettings, UAssetDefinition_InstancedFoliageSettings::StaticClass, TEXT("UAssetDefinition_InstancedFoliageSettings"), &Z_Registration_Info_UClass_UAssetDefinition_InstancedFoliageSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_InstancedFoliageSettings), 673858486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_InstancedFoliageSettings_h_272612532(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_InstancedFoliageSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_InstancedFoliageSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
