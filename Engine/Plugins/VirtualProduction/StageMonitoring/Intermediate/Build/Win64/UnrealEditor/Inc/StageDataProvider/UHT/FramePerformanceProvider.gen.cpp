// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FramePerformanceProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFramePerformanceProvider() {}
// Cross Module References
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageProviderEventMessage();
	STAGEDATAPROVIDER_API UScriptStruct* Z_Construct_UScriptStruct_FHitchDetectionMessage();
	UPackage* Z_Construct_UPackage__Script_StageDataProvider();
// End Cross Module References

static_assert(std::is_polymorphic<FHitchDetectionMessage>() == std::is_polymorphic<FStageProviderEventMessage>(), "USTRUCT FHitchDetectionMessage cannot be polymorphic unless super FStageProviderEventMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HitchDetectionMessage;
class UScriptStruct* FHitchDetectionMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HitchDetectionMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HitchDetectionMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitchDetectionMessage, (UObject*)Z_Construct_UPackage__Script_StageDataProvider(), TEXT("HitchDetectionMessage"));
	}
	return Z_Registration_Info_UScriptStruct_HitchDetectionMessage.OuterSingleton;
}
template<> STAGEDATAPROVIDER_API UScriptStruct* StaticStruct<FHitchDetectionMessage>()
{
	return FHitchDetectionMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameThreadWithWaitsMS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GameThreadWithWaitsMS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderThreadWithWaitsMS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderThreadWithWaitsMS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameThreadMS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GameThreadMS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderThreadMS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderThreadMS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPU_MS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GPU_MS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitchedTimeFPS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitchedTimeFPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AverageFPS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageFPS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Message sent when a hitch was detected on a provider machine.\n */" },
		{ "ModuleRelativePath", "Private/FramePerformanceProvider.h" },
		{ "ToolTip", "Message sent when a hitch was detected on a provider machine." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitchDetectionMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_GameThreadWithWaitsMS_MetaData[] = {
		{ "Category", "Hitch" },
		{ "Comment", "/** Current GameThread time including any waits read from StatsThread in milliseconds */" },
		{ "ModuleRelativePath", "Private/FramePerformanceProvider.h" },
		{ "ToolTip", "Current GameThread time including any waits read from StatsThread in milliseconds" },
		{ "Unit", "ms" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_GameThreadWithWaitsMS = { "GameThreadWithWaitsMS", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitchDetectionMessage, GameThreadWithWaitsMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_GameThreadWithWaitsMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_GameThreadWithWaitsMS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_RenderThreadWithWaitsMS_MetaData[] = {
		{ "Category", "Hitch" },
		{ "Comment", "/** Current RenderThread time including any waits read from StatsThread in milliseconds */" },
		{ "ModuleRelativePath", "Private/FramePerformanceProvider.h" },
		{ "ToolTip", "Current RenderThread time including any waits read from StatsThread in milliseconds" },
		{ "Unit", "ms" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_RenderThreadWithWaitsMS = { "RenderThreadWithWaitsMS", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitchDetectionMessage, RenderThreadWithWaitsMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_RenderThreadWithWaitsMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_RenderThreadWithWaitsMS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_GameThreadMS_MetaData[] = {
		{ "Category", "Hitch" },
		{ "Comment", "/** Current GameThread time read from GGameThreadTime in milliseconds */" },
		{ "ModuleRelativePath", "Private/FramePerformanceProvider.h" },
		{ "ToolTip", "Current GameThread time read from GGameThreadTime in milliseconds" },
		{ "Unit", "ms" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_GameThreadMS = { "GameThreadMS", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitchDetectionMessage, GameThreadMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_GameThreadMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_GameThreadMS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_RenderThreadMS_MetaData[] = {
		{ "Category", "Hitch" },
		{ "Comment", "/** Current RenderThread time read from GRenderThreadTime in milliseconds */" },
		{ "ModuleRelativePath", "Private/FramePerformanceProvider.h" },
		{ "ToolTip", "Current RenderThread time read from GRenderThreadTime in milliseconds" },
		{ "Unit", "ms" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_RenderThreadMS = { "RenderThreadMS", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitchDetectionMessage, RenderThreadMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_RenderThreadMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_RenderThreadMS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_GPU_MS_MetaData[] = {
		{ "Category", "Hitch" },
		{ "Comment", "/** Current GPU time read from GGPUFrameTime in milliseconds */" },
		{ "ModuleRelativePath", "Private/FramePerformanceProvider.h" },
		{ "ToolTip", "Current GPU time read from GGPUFrameTime in milliseconds" },
		{ "Unit", "ms" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_GPU_MS = { "GPU_MS", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitchDetectionMessage, GPU_MS), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_GPU_MS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_GPU_MS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_TimingThreshold_MetaData[] = {
		{ "Category", "Hitch" },
		{ "Comment", "/** Timing threshold that was crossed in milliseconds */" },
		{ "ModuleRelativePath", "Private/FramePerformanceProvider.h" },
		{ "ToolTip", "Timing threshold that was crossed in milliseconds" },
		{ "Unit", "ms" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_TimingThreshold = { "TimingThreshold", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitchDetectionMessage, TimingThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_TimingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_TimingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_HitchedTimeFPS_MetaData[] = {
		{ "Category", "Hitch" },
		{ "Comment", "/** FPS correspondent to the timing that triggered the hitch (game or render thread) */" },
		{ "ModuleRelativePath", "Private/FramePerformanceProvider.h" },
		{ "ToolTip", "FPS correspondent to the timing that triggered the hitch (game or render thread)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_HitchedTimeFPS = { "HitchedTimeFPS", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitchDetectionMessage, HitchedTimeFPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_HitchedTimeFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_HitchedTimeFPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_AverageFPS_MetaData[] = {
		{ "Category", "Hitch" },
		{ "Comment", "/** Average FPS when hitch occured */" },
		{ "ModuleRelativePath", "Private/FramePerformanceProvider.h" },
		{ "ToolTip", "Average FPS when hitch occured" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_AverageFPS = { "AverageFPS", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitchDetectionMessage, AverageFPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_AverageFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_AverageFPS_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_GameThreadWithWaitsMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_RenderThreadWithWaitsMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_GameThreadMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_RenderThreadMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_GPU_MS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_TimingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_HitchedTimeFPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewProp_AverageFPS,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageDataProvider,
		Z_Construct_UScriptStruct_FStageProviderEventMessage,
		&NewStructOps,
		"HitchDetectionMessage",
		sizeof(FHitchDetectionMessage),
		alignof(FHitchDetectionMessage),
		Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitchDetectionMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_HitchDetectionMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HitchDetectionMessage.InnerSingleton, Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HitchDetectionMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageDataProvider_Private_FramePerformanceProvider_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageDataProvider_Private_FramePerformanceProvider_h_Statics::ScriptStructInfo[] = {
		{ FHitchDetectionMessage::StaticStruct, Z_Construct_UScriptStruct_FHitchDetectionMessage_Statics::NewStructOps, TEXT("HitchDetectionMessage"), &Z_Registration_Info_UScriptStruct_HitchDetectionMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHitchDetectionMessage), 3275579768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageDataProvider_Private_FramePerformanceProvider_h_3623677950(TEXT("/Script/StageDataProvider"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageDataProvider_Private_FramePerformanceProvider_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageDataProvider_Private_FramePerformanceProvider_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
