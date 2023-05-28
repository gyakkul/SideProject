// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnalyticsMulticastSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnalyticsMulticastSettings() {}
// Cross Module References
	ANALYTICSMULTICASTEDITOR_API UClass* Z_Construct_UClass_UAnalyticsMulticastSettings();
	ANALYTICSMULTICASTEDITOR_API UClass* Z_Construct_UClass_UAnalyticsMulticastSettings_NoRegister();
	ANALYTICSVISUALEDITING_API UClass* Z_Construct_UClass_UAnalyticsSettingsBase();
	UPackage* Z_Construct_UPackage__Script_AnalyticsMulticastEditor();
// End Cross Module References
	void UAnalyticsMulticastSettings::StaticRegisterNativesUAnalyticsMulticastSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnalyticsMulticastSettings);
	UClass* Z_Construct_UClass_UAnalyticsMulticastSettings_NoRegister()
	{
		return UAnalyticsMulticastSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAnalyticsMulticastSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReleaseMulticastProviders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseMulticastProviders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReleaseMulticastProviders;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugMulticastProviders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugMulticastProviders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugMulticastProviders;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestMulticastProviders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestMulticastProviders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TestMulticastProviders;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DevelopmentMulticastProviders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DevelopmentMulticastProviders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DevelopmentMulticastProviders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnalyticsSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnalyticsMulticastEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnalyticsMulticastSettings.h" },
		{ "ModuleRelativePath", "Classes/AnalyticsMulticastSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_ReleaseMulticastProviders_Inner = { "ReleaseMulticastProviders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_ReleaseMulticastProviders_MetaData[] = {
		{ "Category", "Multicast" },
		{ "Comment", "/** The list of analytics providers to forward analytics events to */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Release Providers" },
		{ "ModuleRelativePath", "Classes/AnalyticsMulticastSettings.h" },
		{ "ToolTip", "The list of analytics providers to forward analytics events to" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_ReleaseMulticastProviders = { "ReleaseMulticastProviders", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnalyticsMulticastSettings, ReleaseMulticastProviders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_ReleaseMulticastProviders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_ReleaseMulticastProviders_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_DebugMulticastProviders_Inner = { "DebugMulticastProviders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_DebugMulticastProviders_MetaData[] = {
		{ "Category", "Multicast" },
		{ "Comment", "/** The list of analytics providers to forward analytics events to */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Debug Providers" },
		{ "ModuleRelativePath", "Classes/AnalyticsMulticastSettings.h" },
		{ "ToolTip", "The list of analytics providers to forward analytics events to" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_DebugMulticastProviders = { "DebugMulticastProviders", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnalyticsMulticastSettings, DebugMulticastProviders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_DebugMulticastProviders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_DebugMulticastProviders_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_TestMulticastProviders_Inner = { "TestMulticastProviders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_TestMulticastProviders_MetaData[] = {
		{ "Category", "Multicast" },
		{ "Comment", "/** The list of analytics providers to forward analytics events to */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Test Providers" },
		{ "ModuleRelativePath", "Classes/AnalyticsMulticastSettings.h" },
		{ "ToolTip", "The list of analytics providers to forward analytics events to" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_TestMulticastProviders = { "TestMulticastProviders", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnalyticsMulticastSettings, TestMulticastProviders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_TestMulticastProviders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_TestMulticastProviders_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_DevelopmentMulticastProviders_Inner = { "DevelopmentMulticastProviders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_DevelopmentMulticastProviders_MetaData[] = {
		{ "Category", "Multicast" },
		{ "Comment", "/** The list of analytics providers to forward analytics events to */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Development Providers" },
		{ "ModuleRelativePath", "Classes/AnalyticsMulticastSettings.h" },
		{ "ToolTip", "The list of analytics providers to forward analytics events to" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_DevelopmentMulticastProviders = { "DevelopmentMulticastProviders", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnalyticsMulticastSettings, DevelopmentMulticastProviders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_DevelopmentMulticastProviders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_DevelopmentMulticastProviders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_ReleaseMulticastProviders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_ReleaseMulticastProviders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_DebugMulticastProviders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_DebugMulticastProviders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_TestMulticastProviders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_TestMulticastProviders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_DevelopmentMulticastProviders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::NewProp_DevelopmentMulticastProviders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnalyticsMulticastSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::ClassParams = {
		&UAnalyticsMulticastSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnalyticsMulticastSettings()
	{
		if (!Z_Registration_Info_UClass_UAnalyticsMulticastSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnalyticsMulticastSettings.OuterSingleton, Z_Construct_UClass_UAnalyticsMulticastSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnalyticsMulticastSettings.OuterSingleton;
	}
	template<> ANALYTICSMULTICASTEDITOR_API UClass* StaticClass<UAnalyticsMulticastSettings>()
	{
		return UAnalyticsMulticastSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnalyticsMulticastSettings);
	UAnalyticsMulticastSettings::~UAnalyticsMulticastSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_AnalyticsMulticast_Source_AnaltyicsMulticastEditor_Classes_AnalyticsMulticastSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_AnalyticsMulticast_Source_AnaltyicsMulticastEditor_Classes_AnalyticsMulticastSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnalyticsMulticastSettings, UAnalyticsMulticastSettings::StaticClass, TEXT("UAnalyticsMulticastSettings"), &Z_Registration_Info_UClass_UAnalyticsMulticastSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnalyticsMulticastSettings), 2361985528U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_AnalyticsMulticast_Source_AnaltyicsMulticastEditor_Classes_AnalyticsMulticastSettings_h_2603567579(TEXT("/Script/AnalyticsMulticastEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_AnalyticsMulticast_Source_AnaltyicsMulticastEditor_Classes_AnalyticsMulticastSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Analytics_AnalyticsMulticast_Source_AnaltyicsMulticastEditor_Classes_AnalyticsMulticastSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
