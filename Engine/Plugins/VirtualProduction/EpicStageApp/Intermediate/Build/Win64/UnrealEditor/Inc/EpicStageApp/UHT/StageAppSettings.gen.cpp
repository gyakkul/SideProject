// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StageAppSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageAppSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	EPICSTAGEAPP_API UClass* Z_Construct_UClass_UStageAppSettings();
	EPICSTAGEAPP_API UClass* Z_Construct_UClass_UStageAppSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EpicStageApp();
// End Cross Module References
	void UStageAppSettings::StaticRegisterNativesUStageAppSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStageAppSettings);
	UClass* Z_Construct_UClass_UStageAppSettings_NoRegister()
	{
		return UStageAppSettings::StaticClass();
	}
	struct Z_Construct_UClass_UStageAppSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscoveryEndpoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DiscoveryEndpoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscoveryPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DiscoveryPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscoverySocketWaitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DiscoverySocketWaitTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStageAppSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageAppSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Global settings for Epic Stage App integration.\n */" },
		{ "IncludePath", "StageAppSettings.h" },
		{ "ModuleRelativePath", "Public/StageAppSettings.h" },
		{ "ToolTip", "Global settings for Epic Stage App integration." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageAppSettings_Statics::NewProp_DiscoveryEndpoint_MetaData[] = {
		{ "Category", "Epic Stage App" },
		{ "Comment", "/**\n\x09 * The IP endpoint to listen to for app discovery messages.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StageAppSettings.h" },
		{ "ToolTip", "The IP endpoint to listen to for app discovery messages." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStageAppSettings_Statics::NewProp_DiscoveryEndpoint = { "DiscoveryEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStageAppSettings, DiscoveryEndpoint), METADATA_PARAMS(Z_Construct_UClass_UStageAppSettings_Statics::NewProp_DiscoveryEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStageAppSettings_Statics::NewProp_DiscoveryEndpoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageAppSettings_Statics::NewProp_DiscoveryPort_MetaData[] = {
		{ "Category", "Epic Stage App" },
		{ "Comment", "/**\n\x09 * The port to listen to for app discovery messages.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StageAppSettings.h" },
		{ "ToolTip", "The port to listen to for app discovery messages." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStageAppSettings_Statics::NewProp_DiscoveryPort = { "DiscoveryPort", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStageAppSettings, DiscoveryPort), METADATA_PARAMS(Z_Construct_UClass_UStageAppSettings_Statics::NewProp_DiscoveryPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStageAppSettings_Statics::NewProp_DiscoveryPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStageAppSettings_Statics::NewProp_DiscoverySocketWaitTime_MetaData[] = {
		{ "Category", "Epic Stage App" },
		{ "Comment", "/**\n\x09 * How many seconds to wait for app discovery messages.\n\x09 */" },
		{ "ModuleRelativePath", "Public/StageAppSettings.h" },
		{ "ToolTip", "How many seconds to wait for app discovery messages." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStageAppSettings_Statics::NewProp_DiscoverySocketWaitTime = { "DiscoverySocketWaitTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStageAppSettings, DiscoverySocketWaitTime), METADATA_PARAMS(Z_Construct_UClass_UStageAppSettings_Statics::NewProp_DiscoverySocketWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStageAppSettings_Statics::NewProp_DiscoverySocketWaitTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStageAppSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageAppSettings_Statics::NewProp_DiscoveryEndpoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageAppSettings_Statics::NewProp_DiscoveryPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStageAppSettings_Statics::NewProp_DiscoverySocketWaitTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStageAppSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStageAppSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStageAppSettings_Statics::ClassParams = {
		&UStageAppSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStageAppSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStageAppSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStageAppSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStageAppSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStageAppSettings()
	{
		if (!Z_Registration_Info_UClass_UStageAppSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStageAppSettings.OuterSingleton, Z_Construct_UClass_UStageAppSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStageAppSettings.OuterSingleton;
	}
	template<> EPICSTAGEAPP_API UClass* StaticClass<UStageAppSettings>()
	{
		return UStageAppSettings::StaticClass();
	}
	UStageAppSettings::UStageAppSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStageAppSettings);
	UStageAppSettings::~UStageAppSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStageAppSettings, UStageAppSettings::StaticClass, TEXT("UStageAppSettings"), &Z_Registration_Info_UClass_UStageAppSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStageAppSettings), 4023937883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_752998135(TEXT("/Script/EpicStageApp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
