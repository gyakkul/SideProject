// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AutomationDeviceClusterManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationDeviceClusterManager() {}
// Cross Module References
	AUTOMATIONCONTROLLER_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationDeviceInfo();
	UPackage* Z_Construct_UPackage__Script_AutomationController();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationDeviceInfo;
class UScriptStruct* FAutomationDeviceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationDeviceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationDeviceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationDeviceInfo, (UObject*)Z_Construct_UPackage__Script_AutomationController(), TEXT("AutomationDeviceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationDeviceInfo.OuterSingleton;
}
template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<FAutomationDeviceInfo>()
{
	return FAutomationDeviceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OSVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OSVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Model;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPU_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GPU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPUModel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CPUModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RAMInGB_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RAMInGB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderMode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RenderMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RHI_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RHI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppInstanceLog_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppInstanceLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Hold information about the Device\n*/" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "Hold information about the Device" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationDeviceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Comment", "/** The name of device */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of device" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationDeviceInfo, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Instance_MetaData[] = {
		{ "Comment", "/** The instance name */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The instance name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationDeviceInfo, Instance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Instance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Platform_MetaData[] = {
		{ "Comment", "/** The name of the platform */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of the platform" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationDeviceInfo, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_OSVersion_MetaData[] = {
		{ "Comment", "/** The name of the operating system version */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of the operating system version" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_OSVersion = { "OSVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationDeviceInfo, OSVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_OSVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_OSVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Model_MetaData[] = {
		{ "Comment", "/** The name of the device model */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of the device model" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationDeviceInfo, Model), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Model_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_GPU_MetaData[] = {
		{ "Comment", "/** The name of the GPU */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of the GPU" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_GPU = { "GPU", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationDeviceInfo, GPU), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_GPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_GPU_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_CPUModel_MetaData[] = {
		{ "Comment", "/** The name of the CPU model */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of the CPU model" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_CPUModel = { "CPUModel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationDeviceInfo, CPUModel), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_CPUModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_CPUModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RAMInGB_MetaData[] = {
		{ "Comment", "/** The amount of RAM this device has in gigabytes */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The amount of RAM this device has in gigabytes" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RAMInGB = { "RAMInGB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationDeviceInfo, RAMInGB), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RAMInGB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RAMInGB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RenderMode_MetaData[] = {
		{ "Comment", "/** The name of the current render mode */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of the current render mode" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RenderMode = { "RenderMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationDeviceInfo, RenderMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RenderMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RenderMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RHI_MetaData[] = {
		{ "Comment", "/** The name of the current RHI */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The name of the current RHI" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RHI = { "RHI", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationDeviceInfo, RHI), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RHI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RHI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_AppInstanceLog_MetaData[] = {
		{ "Comment", "/** The path to the application instance log */" },
		{ "ModuleRelativePath", "Private/AutomationDeviceClusterManager.h" },
		{ "ToolTip", "The path to the application instance log" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_AppInstanceLog = { "AppInstanceLog", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAutomationDeviceInfo, AppInstanceLog), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_AppInstanceLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_AppInstanceLog_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Platform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_OSVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_GPU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_CPUModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RAMInGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RenderMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_RHI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewProp_AppInstanceLog,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutomationController,
		nullptr,
		&NewStructOps,
		"AutomationDeviceInfo",
		sizeof(FAutomationDeviceInfo),
		alignof(FAutomationDeviceInfo),
		Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationDeviceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationDeviceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationDeviceInfo.InnerSingleton, Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationDeviceInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationDeviceClusterManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationDeviceClusterManager_h_Statics::ScriptStructInfo[] = {
		{ FAutomationDeviceInfo::StaticStruct, Z_Construct_UScriptStruct_FAutomationDeviceInfo_Statics::NewStructOps, TEXT("AutomationDeviceInfo"), &Z_Registration_Info_UScriptStruct_AutomationDeviceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationDeviceInfo), 1716535817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationDeviceClusterManager_h_1901105227(TEXT("/Script/AutomationController"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationDeviceClusterManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AutomationController_Private_AutomationDeviceClusterManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
