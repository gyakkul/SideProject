// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AssetDefinition_ActorFoliageSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_ActorFoliageSettings() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_ActorFoliageSettings();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_ActorFoliageSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_ActorFoliageSettings::StaticRegisterNativesUAssetDefinition_ActorFoliageSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_ActorFoliageSettings);
	UClass* Z_Construct_UClass_UAssetDefinition_ActorFoliageSettings_NoRegister()
	{
		return UAssetDefinition_ActorFoliageSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_ActorFoliageSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_ActorFoliageSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_ActorFoliageSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetDefinition_ActorFoliageSettings.h" },
		{ "ModuleRelativePath", "Private/AssetDefinition_ActorFoliageSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_ActorFoliageSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_ActorFoliageSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_ActorFoliageSettings_Statics::ClassParams = {
		&UAssetDefinition_ActorFoliageSettings::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_ActorFoliageSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_ActorFoliageSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_ActorFoliageSettings()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_ActorFoliageSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_ActorFoliageSettings.OuterSingleton, Z_Construct_UClass_UAssetDefinition_ActorFoliageSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_ActorFoliageSettings.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_ActorFoliageSettings>()
	{
		return UAssetDefinition_ActorFoliageSettings::StaticClass();
	}
	UAssetDefinition_ActorFoliageSettings::UAssetDefinition_ActorFoliageSettings() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_ActorFoliageSettings);
	UAssetDefinition_ActorFoliageSettings::~UAssetDefinition_ActorFoliageSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFoliageSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFoliageSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_ActorFoliageSettings, UAssetDefinition_ActorFoliageSettings::StaticClass, TEXT("UAssetDefinition_ActorFoliageSettings"), &Z_Registration_Info_UClass_UAssetDefinition_ActorFoliageSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_ActorFoliageSettings), 58136128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFoliageSettings_h_2559375019(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFoliageSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Private_AssetDefinition_ActorFoliageSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
