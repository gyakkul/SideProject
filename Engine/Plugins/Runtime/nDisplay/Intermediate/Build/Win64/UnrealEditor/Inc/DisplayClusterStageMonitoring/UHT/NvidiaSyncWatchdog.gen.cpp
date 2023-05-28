// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NvidiaSyncWatchdog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNvidiaSyncWatchdog() {}
// Cross Module References
	DISPLAYCLUSTERSTAGEMONITORING_API UScriptStruct* Z_Construct_UScriptStruct_FNvidiaSyncEvent();
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageProviderEventMessage();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterStageMonitoring();
// End Cross Module References

static_assert(std::is_polymorphic<FNvidiaSyncEvent>() == std::is_polymorphic<FStageProviderEventMessage>(), "USTRUCT FNvidiaSyncEvent cannot be polymorphic unless super FStageProviderEventMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NvidiaSyncEvent;
class UScriptStruct* FNvidiaSyncEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NvidiaSyncEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NvidiaSyncEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNvidiaSyncEvent, (UObject*)Z_Construct_UPackage__Script_DisplayClusterStageMonitoring(), TEXT("NvidiaSyncEvent"));
	}
	return Z_Registration_Info_UScriptStruct_NvidiaSyncEvent.OuterSingleton;
}
template<> DISPLAYCLUSTERSTAGEMONITORING_API UScriptStruct* StaticStruct<FNvidiaSyncEvent>()
{
	return FNvidiaSyncEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MissedFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MissedFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastFrameDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastFrameDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynchronizationDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SynchronizationDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NvidiaSyncWatchdog.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNvidiaSyncEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewProp_MissedFrames_MetaData[] = {
		{ "Category", "NvidiaSync" },
		{ "Comment", "/** Number of sync counts that were missed between presents */" },
		{ "ModuleRelativePath", "Private/NvidiaSyncWatchdog.h" },
		{ "ToolTip", "Number of sync counts that were missed between presents" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewProp_MissedFrames = { "MissedFrames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNvidiaSyncEvent, MissedFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewProp_MissedFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewProp_MissedFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewProp_LastFrameDuration_MetaData[] = {
		{ "Category", "NvidiaSync" },
		{ "ModuleRelativePath", "Private/NvidiaSyncWatchdog.h" },
		{ "Unit", "ms" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewProp_LastFrameDuration = { "LastFrameDuration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNvidiaSyncEvent, LastFrameDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewProp_LastFrameDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewProp_LastFrameDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewProp_SynchronizationDuration_MetaData[] = {
		{ "Category", "NvidiaSync" },
		{ "ModuleRelativePath", "Private/NvidiaSyncWatchdog.h" },
		{ "Unit", "ms" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewProp_SynchronizationDuration = { "SynchronizationDuration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNvidiaSyncEvent, SynchronizationDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewProp_SynchronizationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewProp_SynchronizationDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewProp_MissedFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewProp_LastFrameDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewProp_SynchronizationDuration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterStageMonitoring,
		Z_Construct_UScriptStruct_FStageProviderEventMessage,
		&NewStructOps,
		"NvidiaSyncEvent",
		sizeof(FNvidiaSyncEvent),
		alignof(FNvidiaSyncEvent),
		Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNvidiaSyncEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_NvidiaSyncEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NvidiaSyncEvent.InnerSingleton, Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NvidiaSyncEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterStageMonitoring_Private_NvidiaSyncWatchdog_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterStageMonitoring_Private_NvidiaSyncWatchdog_h_Statics::ScriptStructInfo[] = {
		{ FNvidiaSyncEvent::StaticStruct, Z_Construct_UScriptStruct_FNvidiaSyncEvent_Statics::NewStructOps, TEXT("NvidiaSyncEvent"), &Z_Registration_Info_UScriptStruct_NvidiaSyncEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNvidiaSyncEvent), 1528706891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterStageMonitoring_Private_NvidiaSyncWatchdog_h_393045148(TEXT("/Script/DisplayClusterStageMonitoring"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterStageMonitoring_Private_NvidiaSyncWatchdog_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterStageMonitoring_Private_NvidiaSyncWatchdog_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
