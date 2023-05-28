// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StageMonitorSessionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageMonitorSessionManager() {}
// Cross Module References
	STAGEMONITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMonitorSessionInfo();
	UPackage* Z_Construct_UPackage__Script_StageMonitor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MonitorSessionInfo;
class UScriptStruct* FMonitorSessionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MonitorSessionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MonitorSessionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMonitorSessionInfo, (UObject*)Z_Construct_UPackage__Script_StageMonitor(), TEXT("MonitorSessionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MonitorSessionInfo.OuterSingleton;
}
template<> STAGEMONITOR_API UScriptStruct* StaticStruct<FMonitorSessionInfo>()
{
	return FMonitorSessionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Header written at beginning of json file to have an idea of what's in the file\n */" },
		{ "ModuleRelativePath", "Private/StageMonitorSessionManager.h" },
		{ "ToolTip", "Header written at beginning of json file to have an idea of what's in the file" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMonitorSessionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Private/StageMonitorSessionManager.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMonitorSessionInfo, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics::NewProp_Version_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics::NewProp_Version,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageMonitor,
		nullptr,
		&NewStructOps,
		"MonitorSessionInfo",
		sizeof(FMonitorSessionInfo),
		alignof(FMonitorSessionInfo),
		Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMonitorSessionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MonitorSessionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MonitorSessionInfo.InnerSingleton, Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MonitorSessionInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitor_Private_StageMonitorSessionManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitor_Private_StageMonitorSessionManager_h_Statics::ScriptStructInfo[] = {
		{ FMonitorSessionInfo::StaticStruct, Z_Construct_UScriptStruct_FMonitorSessionInfo_Statics::NewStructOps, TEXT("MonitorSessionInfo"), &Z_Registration_Info_UScriptStruct_MonitorSessionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMonitorSessionInfo), 1138547005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitor_Private_StageMonitorSessionManager_h_1065530763(TEXT("/Script/StageMonitor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitor_Private_StageMonitorSessionManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitor_Private_StageMonitorSessionManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
