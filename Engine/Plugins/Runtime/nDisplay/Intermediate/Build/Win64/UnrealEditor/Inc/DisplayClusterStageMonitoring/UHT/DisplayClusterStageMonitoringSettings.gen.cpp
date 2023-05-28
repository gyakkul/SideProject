// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterStageMonitoringSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterStageMonitoringSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	DISPLAYCLUSTERSTAGEMONITORING_API UClass* Z_Construct_UClass_UDisplayClusterStageMonitoringSettings();
	DISPLAYCLUSTERSTAGEMONITORING_API UClass* Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterStageMonitoring();
// End Cross Module References
	void UDisplayClusterStageMonitoringSettings::StaticRegisterNativesUDisplayClusterStageMonitoringSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterStageMonitoringSettings);
	UClass* Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_NoRegister()
	{
		return UDisplayClusterStageMonitoringSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDWMHitchDetection_MetaData[];
#endif
		static void NewProp_bEnableDWMHitchDetection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDWMHitchDetection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNvidiaHitchDetection_MetaData[];
#endif
		static void NewProp_bEnableNvidiaHitchDetection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNvidiaHitchDetection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterStageMonitoring,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the DisplayCluster StageMonitor hooks plugin modules. \n */" },
		{ "IncludePath", "DisplayClusterStageMonitoringSettings.h" },
		{ "ModuleRelativePath", "Private/DisplayClusterStageMonitoringSettings.h" },
		{ "ToolTip", "Settings for the DisplayCluster StageMonitor hooks plugin modules." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::NewProp_bEnableDWMHitchDetection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Whether DWM hitch detection is enabled by default\n\x09 * @note It may be overriden via the command line, \"-EnableDisplayClusterDWMHitchDetect=1\"\n\x09 * @note Only works with sync policy 1\n\x09 */" },
		{ "ModuleRelativePath", "Private/DisplayClusterStageMonitoringSettings.h" },
		{ "ToolTip", "Whether DWM hitch detection is enabled by default\n@note It may be overriden via the command line, \"-EnableDisplayClusterDWMHitchDetect=1\"\n@note Only works with sync policy 1" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::NewProp_bEnableDWMHitchDetection_SetBit(void* Obj)
	{
		((UDisplayClusterStageMonitoringSettings*)Obj)->bEnableDWMHitchDetection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::NewProp_bEnableDWMHitchDetection = { "bEnableDWMHitchDetection", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterStageMonitoringSettings), &Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::NewProp_bEnableDWMHitchDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::NewProp_bEnableDWMHitchDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::NewProp_bEnableDWMHitchDetection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::NewProp_bEnableNvidiaHitchDetection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * Whether Nvidia hitch detection is enabled by default\n\x09 * @note It may be overriden via the command line, \"-EnableDisplayClusterNvidiaHitchDetect=1\"\n\x09 * @note Only works with sync policy 2\n\x09 */" },
		{ "ModuleRelativePath", "Private/DisplayClusterStageMonitoringSettings.h" },
		{ "ToolTip", "Whether Nvidia hitch detection is enabled by default\n@note It may be overriden via the command line, \"-EnableDisplayClusterNvidiaHitchDetect=1\"\n@note Only works with sync policy 2" },
	};
#endif
	void Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::NewProp_bEnableNvidiaHitchDetection_SetBit(void* Obj)
	{
		((UDisplayClusterStageMonitoringSettings*)Obj)->bEnableNvidiaHitchDetection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::NewProp_bEnableNvidiaHitchDetection = { "bEnableNvidiaHitchDetection", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisplayClusterStageMonitoringSettings), &Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::NewProp_bEnableNvidiaHitchDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::NewProp_bEnableNvidiaHitchDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::NewProp_bEnableNvidiaHitchDetection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::NewProp_bEnableDWMHitchDetection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::NewProp_bEnableNvidiaHitchDetection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterStageMonitoringSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::ClassParams = {
		&UDisplayClusterStageMonitoringSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterStageMonitoringSettings()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterStageMonitoringSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterStageMonitoringSettings.OuterSingleton, Z_Construct_UClass_UDisplayClusterStageMonitoringSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterStageMonitoringSettings.OuterSingleton;
	}
	template<> DISPLAYCLUSTERSTAGEMONITORING_API UClass* StaticClass<UDisplayClusterStageMonitoringSettings>()
	{
		return UDisplayClusterStageMonitoringSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterStageMonitoringSettings);
	UDisplayClusterStageMonitoringSettings::~UDisplayClusterStageMonitoringSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterStageMonitoring_Private_DisplayClusterStageMonitoringSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterStageMonitoring_Private_DisplayClusterStageMonitoringSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterStageMonitoringSettings, UDisplayClusterStageMonitoringSettings::StaticClass, TEXT("UDisplayClusterStageMonitoringSettings"), &Z_Registration_Info_UClass_UDisplayClusterStageMonitoringSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterStageMonitoringSettings), 3355115235U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterStageMonitoring_Private_DisplayClusterStageMonitoringSettings_h_962128313(TEXT("/Script/DisplayClusterStageMonitoring"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterStageMonitoring_Private_DisplayClusterStageMonitoringSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterStageMonitoring_Private_DisplayClusterStageMonitoringSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
