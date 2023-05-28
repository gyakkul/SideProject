// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeaturesSubsystemSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeaturesSubsystemSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeaturesSubsystemSettings();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeaturesSubsystemSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFeatures();
// End Cross Module References
	void UGameFeaturesSubsystemSettings::StaticRegisterNativesUGameFeaturesSubsystemSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeaturesSubsystemSettings);
	UClass* Z_Construct_UClass_UGameFeaturesSubsystemSettings_NoRegister()
	{
		return UGameFeaturesSubsystemSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameFeaturesManagerClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameFeaturesManagerClassName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisabledPlugins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledPlugins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisabledPlugins;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalPluginMetadataKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPluginMetadataKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalPluginMetadataKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for the Game Features framework */" },
		{ "DisplayName", "Game Features" },
		{ "IncludePath", "GameFeaturesSubsystemSettings.h" },
		{ "ModuleRelativePath", "Public/GameFeaturesSubsystemSettings.h" },
		{ "ToolTip", "Settings for the Game Features framework" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_GameFeaturesManagerClassName_MetaData[] = {
		{ "Category", "DefaultClasses" },
		{ "Comment", "/** Name of a singleton class to spawn as the game feature project policy. If empty, it will spawn the default one (UDefaultGameFeaturesProjectPolicies) */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Game Feature Project Policy Class" },
		{ "MetaClass", "/Script/GameFeatures.GameFeaturesProjectPolicies" },
		{ "ModuleRelativePath", "Public/GameFeaturesSubsystemSettings.h" },
		{ "ToolTip", "Name of a singleton class to spawn as the game feature project policy. If empty, it will spawn the default one (UDefaultGameFeaturesProjectPolicies)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_GameFeaturesManagerClassName = { "GameFeaturesManagerClassName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeaturesSubsystemSettings, GameFeaturesManagerClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_GameFeaturesManagerClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_GameFeaturesManagerClassName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_DisabledPlugins_Inner = { "DisabledPlugins", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_DisabledPlugins_MetaData[] = {
		{ "Category", "GameFeatures" },
		{ "Comment", "/** List of plugins that are forcibly disabled (e.g., via a hotfix) */" },
		{ "ModuleRelativePath", "Public/GameFeaturesSubsystemSettings.h" },
		{ "ToolTip", "List of plugins that are forcibly disabled (e.g., via a hotfix)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_DisabledPlugins = { "DisabledPlugins", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeaturesSubsystemSettings, DisabledPlugins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_DisabledPlugins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_DisabledPlugins_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_AdditionalPluginMetadataKeys_Inner = { "AdditionalPluginMetadataKeys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_AdditionalPluginMetadataKeys_MetaData[] = {
		{ "Category", "GameFeatures" },
		{ "Comment", "/** List of metadata (additional keys) to try parsing from the .uplugin to provide to FGameFeaturePluginDetails */" },
		{ "ModuleRelativePath", "Public/GameFeaturesSubsystemSettings.h" },
		{ "ToolTip", "List of metadata (additional keys) to try parsing from the .uplugin to provide to FGameFeaturePluginDetails" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_AdditionalPluginMetadataKeys = { "AdditionalPluginMetadataKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeaturesSubsystemSettings, AdditionalPluginMetadataKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_AdditionalPluginMetadataKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_AdditionalPluginMetadataKeys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_GameFeaturesManagerClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_DisabledPlugins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_DisabledPlugins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_AdditionalPluginMetadataKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::NewProp_AdditionalPluginMetadataKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeaturesSubsystemSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::ClassParams = {
		&UGameFeaturesSubsystemSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeaturesSubsystemSettings()
	{
		if (!Z_Registration_Info_UClass_UGameFeaturesSubsystemSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeaturesSubsystemSettings.OuterSingleton, Z_Construct_UClass_UGameFeaturesSubsystemSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeaturesSubsystemSettings.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UGameFeaturesSubsystemSettings>()
	{
		return UGameFeaturesSubsystemSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeaturesSubsystemSettings);
	UGameFeaturesSubsystemSettings::~UGameFeaturesSubsystemSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystemSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystemSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeaturesSubsystemSettings, UGameFeaturesSubsystemSettings::StaticClass, TEXT("UGameFeaturesSubsystemSettings"), &Z_Registration_Info_UClass_UGameFeaturesSubsystemSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeaturesSubsystemSettings), 3154698957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystemSettings_h_1787754321(TEXT("/Script/GameFeatures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystemSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeaturesSubsystemSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
