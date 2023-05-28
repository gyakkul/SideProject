// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlurrySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlurrySettings() {}
// Cross Module References
	ANALYTICSVISUALEDITING_API UClass* Z_Construct_UClass_UAnalyticsSettingsBase();
	FLURRYEDITOR_API UClass* Z_Construct_UClass_UFlurrySettings();
	FLURRYEDITOR_API UClass* Z_Construct_UClass_UFlurrySettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FlurryEditor();
// End Cross Module References
	void UFlurrySettings::StaticRegisterNativesUFlurrySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlurrySettings);
	UClass* Z_Construct_UClass_UFlurrySettings_NoRegister()
	{
		return UFlurrySettings::StaticClass();
	}
	struct Z_Construct_UClass_UFlurrySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseApiKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReleaseApiKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugApiKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugApiKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestApiKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestApiKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DevelopmentApiKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DevelopmentApiKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlurrySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnalyticsSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FlurryEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurrySettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FlurrySettings.h" },
		{ "ModuleRelativePath", "Classes/FlurrySettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurrySettings_Statics::NewProp_ReleaseApiKey_MetaData[] = {
		{ "Category", "Flurry" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/FlurrySettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlurrySettings_Statics::NewProp_ReleaseApiKey = { "ReleaseApiKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlurrySettings, ReleaseApiKey), METADATA_PARAMS(Z_Construct_UClass_UFlurrySettings_Statics::NewProp_ReleaseApiKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurrySettings_Statics::NewProp_ReleaseApiKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurrySettings_Statics::NewProp_DebugApiKey_MetaData[] = {
		{ "Category", "Flurry" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/FlurrySettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlurrySettings_Statics::NewProp_DebugApiKey = { "DebugApiKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlurrySettings, DebugApiKey), METADATA_PARAMS(Z_Construct_UClass_UFlurrySettings_Statics::NewProp_DebugApiKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurrySettings_Statics::NewProp_DebugApiKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurrySettings_Statics::NewProp_TestApiKey_MetaData[] = {
		{ "Category", "Flurry" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/FlurrySettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlurrySettings_Statics::NewProp_TestApiKey = { "TestApiKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlurrySettings, TestApiKey), METADATA_PARAMS(Z_Construct_UClass_UFlurrySettings_Statics::NewProp_TestApiKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurrySettings_Statics::NewProp_TestApiKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlurrySettings_Statics::NewProp_DevelopmentApiKey_MetaData[] = {
		{ "Category", "Flurry" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/FlurrySettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlurrySettings_Statics::NewProp_DevelopmentApiKey = { "DevelopmentApiKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFlurrySettings, DevelopmentApiKey), METADATA_PARAMS(Z_Construct_UClass_UFlurrySettings_Statics::NewProp_DevelopmentApiKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurrySettings_Statics::NewProp_DevelopmentApiKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlurrySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurrySettings_Statics::NewProp_ReleaseApiKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurrySettings_Statics::NewProp_DebugApiKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurrySettings_Statics::NewProp_TestApiKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlurrySettings_Statics::NewProp_DevelopmentApiKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlurrySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlurrySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlurrySettings_Statics::ClassParams = {
		&UFlurrySettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFlurrySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFlurrySettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFlurrySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlurrySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlurrySettings()
	{
		if (!Z_Registration_Info_UClass_UFlurrySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlurrySettings.OuterSingleton, Z_Construct_UClass_UFlurrySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlurrySettings.OuterSingleton;
	}
	template<> FLURRYEDITOR_API UClass* StaticClass<UFlurrySettings>()
	{
		return UFlurrySettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlurrySettings);
	UFlurrySettings::~UFlurrySettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Flurry_Source_FlurryEditor_Classes_FlurrySettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Flurry_Source_FlurryEditor_Classes_FlurrySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlurrySettings, UFlurrySettings::StaticClass, TEXT("UFlurrySettings"), &Z_Registration_Info_UClass_UFlurrySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlurrySettings), 468485591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Flurry_Source_FlurryEditor_Classes_FlurrySettings_h_3410966220(TEXT("/Script/FlurryEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Flurry_Source_FlurryEditor_Classes_FlurrySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_Flurry_Source_FlurryEditor_Classes_FlurrySettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
