// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DWMSyncWatchdog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDWMSyncWatchdog() {}
// Cross Module References
	DISPLAYCLUSTERSTAGEMONITORING_API UScriptStruct* Z_Construct_UScriptStruct_FDWMSyncEvent();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageProviderEventMessage();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterStageMonitoring();
// End Cross Module References

static_assert(std::is_polymorphic<FDWMSyncEvent>() == std::is_polymorphic<FStageProviderEventMessage>(), "USTRUCT FDWMSyncEvent cannot be polymorphic unless super FStageProviderEventMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DWMSyncEvent;
class UScriptStruct* FDWMSyncEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DWMSyncEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DWMSyncEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDWMSyncEvent, (UObject*)Z_Construct_UPackage__Script_DisplayClusterStageMonitoring(), TEXT("DWMSyncEvent"));
	}
	return Z_Registration_Info_UScriptStruct_DWMSyncEvent.OuterSingleton;
}
template<> DISPLAYCLUSTERSTAGEMONITORING_API UScriptStruct* StaticStruct<FDWMSyncEvent>()
{
	return FDWMSyncEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDWMSyncEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MissedFrames_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MissedFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresentCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PresentCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastPresentCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LastPresentCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresentRefreshCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PresentRefreshCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DWMSyncWatchdog.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDWMSyncEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_MissedFrames_MetaData[] = {
		{ "Category", "NvidiaSync" },
		{ "Comment", "/** Number of sync counts that were missed between presents */" },
		{ "ModuleRelativePath", "Private/DWMSyncWatchdog.h" },
		{ "ToolTip", "Number of sync counts that were missed between presents" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_MissedFrames = { "MissedFrames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDWMSyncEvent, MissedFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_MissedFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_MissedFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_PresentCount_MetaData[] = {
		{ "Category", "NvidiaSync" },
		{ "ModuleRelativePath", "Private/DWMSyncWatchdog.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_PresentCount = { "PresentCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDWMSyncEvent, PresentCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_PresentCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_PresentCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_LastPresentCount_MetaData[] = {
		{ "Category", "NvidiaSync" },
		{ "ModuleRelativePath", "Private/DWMSyncWatchdog.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_LastPresentCount = { "LastPresentCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDWMSyncEvent, LastPresentCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_LastPresentCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_LastPresentCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_PresentRefreshCount_MetaData[] = {
		{ "Category", "NvidiaSync" },
		{ "ModuleRelativePath", "Private/DWMSyncWatchdog.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_PresentRefreshCount = { "PresentRefreshCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDWMSyncEvent, PresentRefreshCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_PresentRefreshCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_PresentRefreshCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_MissedFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_PresentCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_LastPresentCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewProp_PresentRefreshCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterStageMonitoring,
		Z_Construct_UScriptStruct_FStageProviderEventMessage,
		&NewStructOps,
		"DWMSyncEvent",
		sizeof(FDWMSyncEvent),
		alignof(FDWMSyncEvent),
		Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDWMSyncEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_DWMSyncEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DWMSyncEvent.InnerSingleton, Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DWMSyncEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterStageMonitoring_Private_DWMSyncWatchdog_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterStageMonitoring_Private_DWMSyncWatchdog_h_Statics::ScriptStructInfo[] = {
		{ FDWMSyncEvent::StaticStruct, Z_Construct_UScriptStruct_FDWMSyncEvent_Statics::NewStructOps, TEXT("DWMSyncEvent"), &Z_Registration_Info_UScriptStruct_DWMSyncEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDWMSyncEvent), 3933871571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterStageMonitoring_Private_DWMSyncWatchdog_h_1491759509(TEXT("/Script/DisplayClusterStageMonitoring"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterStageMonitoring_Private_DWMSyncWatchdog_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterStageMonitoring_Private_DWMSyncWatchdog_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
