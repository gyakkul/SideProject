// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnalyticsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnalyticsSettings() {}
// Cross Module References
	ANALYTICSVISUALEDITING_API UClass* Z_Construct_UClass_UAnalyticsSettings();
	ANALYTICSVISUALEDITING_API UClass* Z_Construct_UClass_UAnalyticsSettings_NoRegister();
	ANALYTICSVISUALEDITING_API UClass* Z_Construct_UClass_UAnalyticsSettingsBase();
	ANALYTICSVISUALEDITING_API UClass* Z_Construct_UClass_UAnalyticsSettingsBase_NoRegister();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_AnalyticsVisualEditing();
// End Cross Module References
	void UAnalyticsSettingsBase::StaticRegisterNativesUAnalyticsSettingsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnalyticsSettingsBase);
	UClass* Z_Construct_UClass_UAnalyticsSettingsBase_NoRegister()
	{
		return UAnalyticsSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnalyticsSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SettingsDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsTooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SettingsTooltip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnalyticsSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AnalyticsVisualEditing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnalyticsSettings.h" },
		{ "ModuleRelativePath", "Classes/AnalyticsSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsSettingsBase_Statics::NewProp_SettingsDisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnalyticsSettings.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAnalyticsSettingsBase_Statics::NewProp_SettingsDisplayName = { "SettingsDisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnalyticsSettingsBase, SettingsDisplayName), METADATA_PARAMS(Z_Construct_UClass_UAnalyticsSettingsBase_Statics::NewProp_SettingsDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsSettingsBase_Statics::NewProp_SettingsDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsSettingsBase_Statics::NewProp_SettingsTooltip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AnalyticsSettings.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAnalyticsSettingsBase_Statics::NewProp_SettingsTooltip = { "SettingsTooltip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnalyticsSettingsBase, SettingsTooltip), METADATA_PARAMS(Z_Construct_UClass_UAnalyticsSettingsBase_Statics::NewProp_SettingsTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsSettingsBase_Statics::NewProp_SettingsTooltip_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnalyticsSettingsBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsSettingsBase_Statics::NewProp_SettingsDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsSettingsBase_Statics::NewProp_SettingsTooltip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnalyticsSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnalyticsSettingsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnalyticsSettingsBase_Statics::ClassParams = {
		&UAnalyticsSettingsBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnalyticsSettingsBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsSettingsBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnalyticsSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnalyticsSettingsBase()
	{
		if (!Z_Registration_Info_UClass_UAnalyticsSettingsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnalyticsSettingsBase.OuterSingleton, Z_Construct_UClass_UAnalyticsSettingsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnalyticsSettingsBase.OuterSingleton;
	}
	template<> ANALYTICSVISUALEDITING_API UClass* StaticClass<UAnalyticsSettingsBase>()
	{
		return UAnalyticsSettingsBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnalyticsSettingsBase);
	UAnalyticsSettingsBase::~UAnalyticsSettingsBase() {}
	void UAnalyticsSettings::StaticRegisterNativesUAnalyticsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnalyticsSettings);
	UClass* Z_Construct_UClass_UAnalyticsSettings_NoRegister()
	{
		return UAnalyticsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAnalyticsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DevelopmentProviderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DevelopmentProviderName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugProviderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugProviderName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestProviderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestProviderName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseProviderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReleaseProviderName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnalyticsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnalyticsSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnalyticsVisualEditing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnalyticsSettings.h" },
		{ "ModuleRelativePath", "Classes/AnalyticsSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_DevelopmentProviderName_MetaData[] = {
		{ "Category", "Providers" },
		{ "Comment", "/** The name of the plugin containing your desired analytics provider */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Development" },
		{ "ModuleRelativePath", "Classes/AnalyticsSettings.h" },
		{ "ToolTip", "The name of the plugin containing your desired analytics provider" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_DevelopmentProviderName = { "DevelopmentProviderName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnalyticsSettings, DevelopmentProviderName), METADATA_PARAMS(Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_DevelopmentProviderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_DevelopmentProviderName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_DebugProviderName_MetaData[] = {
		{ "Category", "Providers" },
		{ "Comment", "/** The name of the plugin containing your desired analytics provider */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Debug" },
		{ "ModuleRelativePath", "Classes/AnalyticsSettings.h" },
		{ "ToolTip", "The name of the plugin containing your desired analytics provider" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_DebugProviderName = { "DebugProviderName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnalyticsSettings, DebugProviderName), METADATA_PARAMS(Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_DebugProviderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_DebugProviderName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_TestProviderName_MetaData[] = {
		{ "Category", "Providers" },
		{ "Comment", "/** The name of the plugin containing your desired analytics provider */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Test" },
		{ "ModuleRelativePath", "Classes/AnalyticsSettings.h" },
		{ "ToolTip", "The name of the plugin containing your desired analytics provider" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_TestProviderName = { "TestProviderName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnalyticsSettings, TestProviderName), METADATA_PARAMS(Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_TestProviderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_TestProviderName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_ReleaseProviderName_MetaData[] = {
		{ "Category", "Providers" },
		{ "Comment", "/** The name of the plugin containing your desired analytics provider */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Release" },
		{ "ModuleRelativePath", "Classes/AnalyticsSettings.h" },
		{ "ToolTip", "The name of the plugin containing your desired analytics provider" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_ReleaseProviderName = { "ReleaseProviderName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnalyticsSettings, ReleaseProviderName), METADATA_PARAMS(Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_ReleaseProviderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_ReleaseProviderName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnalyticsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_DevelopmentProviderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_DebugProviderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_TestProviderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsSettings_Statics::NewProp_ReleaseProviderName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnalyticsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnalyticsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnalyticsSettings_Statics::ClassParams = {
		&UAnalyticsSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnalyticsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnalyticsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnalyticsSettings()
	{
		if (!Z_Registration_Info_UClass_UAnalyticsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnalyticsSettings.OuterSingleton, Z_Construct_UClass_UAnalyticsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnalyticsSettings.OuterSingleton;
	}
	template<> ANALYTICSVISUALEDITING_API UClass* StaticClass<UAnalyticsSettings>()
	{
		return UAnalyticsSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnalyticsSettings);
	UAnalyticsSettings::~UAnalyticsSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnalyticsSettingsBase, UAnalyticsSettingsBase::StaticClass, TEXT("UAnalyticsSettingsBase"), &Z_Registration_Info_UClass_UAnalyticsSettingsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnalyticsSettingsBase), 188755905U) },
		{ Z_Construct_UClass_UAnalyticsSettings, UAnalyticsSettings::StaticClass, TEXT("UAnalyticsSettings"), &Z_Registration_Info_UClass_UAnalyticsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnalyticsSettings), 3746785645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_1205727332(TEXT("/Script/AnalyticsVisualEditing"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Analytics_AnalyticsVisualEditing_Classes_AnalyticsSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
