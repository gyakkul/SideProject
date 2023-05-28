// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StageMonitorUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageMonitorUtils() {}
// Cross Module References
	STAGEDATACORE_API UScriptStruct* Z_Construct_UScriptStruct_FStageProviderPeriodicMessage();
	STAGEMONITORCOMMON_API UEnum* Z_Construct_UEnum_StageMonitorCommon_EStageMonitorNodeStatus();
	STAGEMONITORCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FFramePerformanceProviderMessage();
	UPackage* Z_Construct_UPackage__Script_StageMonitorCommon();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStageMonitorNodeStatus;
	static UEnum* EStageMonitorNodeStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStageMonitorNodeStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStageMonitorNodeStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StageMonitorCommon_EStageMonitorNodeStatus, (UObject*)Z_Construct_UPackage__Script_StageMonitorCommon(), TEXT("EStageMonitorNodeStatus"));
		}
		return Z_Registration_Info_UEnum_EStageMonitorNodeStatus.OuterSingleton;
	}
	template<> STAGEMONITORCOMMON_API UEnum* StaticEnum<EStageMonitorNodeStatus>()
	{
		return EStageMonitorNodeStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_StageMonitorCommon_EStageMonitorNodeStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StageMonitorCommon_EStageMonitorNodeStatus_Statics::Enumerators[] = {
		{ "EStageMonitorNodeStatus::Unknown", (int64)EStageMonitorNodeStatus::Unknown },
		{ "EStageMonitorNodeStatus::LoadingMap", (int64)EStageMonitorNodeStatus::LoadingMap },
		{ "EStageMonitorNodeStatus::Ready", (int64)EStageMonitorNodeStatus::Ready },
		{ "EStageMonitorNodeStatus::HotReload", (int64)EStageMonitorNodeStatus::HotReload },
		{ "EStageMonitorNodeStatus::ShaderCompiling", (int64)EStageMonitorNodeStatus::ShaderCompiling },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StageMonitorCommon_EStageMonitorNodeStatus_Statics::Enum_MetaDataParams[] = {
		{ "HotReload.Name", "EStageMonitorNodeStatus::HotReload" },
		{ "LoadingMap.Name", "EStageMonitorNodeStatus::LoadingMap" },
		{ "ModuleRelativePath", "Public/StageMonitorUtils.h" },
		{ "Ready.Name", "EStageMonitorNodeStatus::Ready" },
		{ "ShaderCompiling.Name", "EStageMonitorNodeStatus::ShaderCompiling" },
		{ "Unknown.Name", "EStageMonitorNodeStatus::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StageMonitorCommon_EStageMonitorNodeStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StageMonitorCommon,
		nullptr,
		"EStageMonitorNodeStatus",
		"EStageMonitorNodeStatus",
		Z_Construct_UEnum_StageMonitorCommon_EStageMonitorNodeStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StageMonitorCommon_EStageMonitorNodeStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StageMonitorCommon_EStageMonitorNodeStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StageMonitorCommon_EStageMonitorNodeStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StageMonitorCommon_EStageMonitorNodeStatus()
	{
		if (!Z_Registration_Info_UEnum_EStageMonitorNodeStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStageMonitorNodeStatus.InnerSingleton, Z_Construct_UEnum_StageMonitorCommon_EStageMonitorNodeStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStageMonitorNodeStatus.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFramePerformanceProviderMessage>() == std::is_polymorphic<FStageProviderPeriodicMessage>(), "USTRUCT FFramePerformanceProviderMessage cannot be polymorphic unless super FStageProviderPeriodicMessage is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FramePerformanceProviderMessage;
class UScriptStruct* FFramePerformanceProviderMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FramePerformanceProviderMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FramePerformanceProviderMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage, (UObject*)Z_Construct_UPackage__Script_StageMonitorCommon(), TEXT("FramePerformanceProviderMessage"));
	}
	return Z_Registration_Info_UScriptStruct_FramePerformanceProviderMessage.OuterSingleton;
}
template<> STAGEMONITORCOMMON_API UScriptStruct* StaticStruct<FFramePerformanceProviderMessage>()
{
	return FFramePerformanceProviderMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetInStatus_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetInStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AverageFPS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageFPS;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleTimeMS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleTimeMS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadersToCompile_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ShadersToCompile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Message containing information about frame timings.\n * Sent at regular intervals\n */" },
		{ "ModuleRelativePath", "Public/StageMonitorUtils.h" },
		{ "ToolTip", "Message containing information about frame timings.\nSent at regular intervals" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFramePerformanceProviderMessage>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Average FrameRate read from GAverageFPS */" },
		{ "ModuleRelativePath", "Public/StageMonitorUtils.h" },
		{ "ToolTip", "Average FrameRate read from GAverageFPS" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFramePerformanceProviderMessage, Status), Z_Construct_UEnum_StageMonitorCommon_EStageMonitorNodeStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_Status_MetaData)) }; // 775578568
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_AssetInStatus_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Full path name of the asset involved in the status. This will be empty for Ready, Shader Compiles, and Unknown states  */" },
		{ "ModuleRelativePath", "Public/StageMonitorUtils.h" },
		{ "ToolTip", "Full path name of the asset involved in the status. This will be empty for Ready, Shader Compiles, and Unknown states" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_AssetInStatus = { "AssetInStatus", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFramePerformanceProviderMessage, AssetInStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_AssetInStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_AssetInStatus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_AverageFPS_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Average FrameRate read from GAverageFPS */" },
		{ "ModuleRelativePath", "Public/StageMonitorUtils.h" },
		{ "ToolTip", "Average FrameRate read from GAverageFPS" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_AverageFPS = { "AverageFPS", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFramePerformanceProviderMessage, AverageFPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_AverageFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_AverageFPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_GameThreadMS_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Current GameThread time read from GGameThreadTime in milliseconds */" },
		{ "ModuleRelativePath", "Public/StageMonitorUtils.h" },
		{ "ToolTip", "Current GameThread time read from GGameThreadTime in milliseconds" },
		{ "Unit", "ms" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_GameThreadMS = { "GameThreadMS", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFramePerformanceProviderMessage, GameThreadMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_GameThreadMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_GameThreadMS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_RenderThreadMS_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Current RenderThread time read from GRenderThreadTime in milliseconds */" },
		{ "ModuleRelativePath", "Public/StageMonitorUtils.h" },
		{ "ToolTip", "Current RenderThread time read from GRenderThreadTime in milliseconds" },
		{ "Unit", "ms" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_RenderThreadMS = { "RenderThreadMS", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFramePerformanceProviderMessage, RenderThreadMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_RenderThreadMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_RenderThreadMS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_GPU_MS_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Current GPU time read from GGPUFrameTime in milliseconds */" },
		{ "ModuleRelativePath", "Public/StageMonitorUtils.h" },
		{ "ToolTip", "Current GPU time read from GGPUFrameTime in milliseconds" },
		{ "Unit", "ms" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_GPU_MS = { "GPU_MS", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFramePerformanceProviderMessage, GPU_MS), METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_GPU_MS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_GPU_MS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_IdleTimeMS_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Idle time (slept) in milliseconds during last frame */" },
		{ "ModuleRelativePath", "Public/StageMonitorUtils.h" },
		{ "ToolTip", "Idle time (slept) in milliseconds during last frame" },
		{ "Unit", "ms" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_IdleTimeMS = { "IdleTimeMS", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFramePerformanceProviderMessage, IdleTimeMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_IdleTimeMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_IdleTimeMS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_ShadersToCompile_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Number of shaders currently being compiled. */" },
		{ "ModuleRelativePath", "Public/StageMonitorUtils.h" },
		{ "ToolTip", "Number of shaders currently being compiled." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_ShadersToCompile = { "ShadersToCompile", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFramePerformanceProviderMessage, ShadersToCompile), METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_ShadersToCompile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_ShadersToCompile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_AssetInStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_AverageFPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_GameThreadMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_RenderThreadMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_GPU_MS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_IdleTimeMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewProp_ShadersToCompile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StageMonitorCommon,
		Z_Construct_UScriptStruct_FStageProviderPeriodicMessage,
		&NewStructOps,
		"FramePerformanceProviderMessage",
		sizeof(FFramePerformanceProviderMessage),
		alignof(FFramePerformanceProviderMessage),
		Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFramePerformanceProviderMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_FramePerformanceProviderMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FramePerformanceProviderMessage.InnerSingleton, Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FramePerformanceProviderMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitorUtils_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitorUtils_h_Statics::EnumInfo[] = {
		{ EStageMonitorNodeStatus_StaticEnum, TEXT("EStageMonitorNodeStatus"), &Z_Registration_Info_UEnum_EStageMonitorNodeStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 775578568U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitorUtils_h_Statics::ScriptStructInfo[] = {
		{ FFramePerformanceProviderMessage::StaticStruct, Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics::NewStructOps, TEXT("FramePerformanceProviderMessage"), &Z_Registration_Info_UScriptStruct_FramePerformanceProviderMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFramePerformanceProviderMessage), 1682020537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitorUtils_h_550314450(TEXT("/Script/StageMonitorCommon"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitorUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitorUtils_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitorUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitorUtils_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
