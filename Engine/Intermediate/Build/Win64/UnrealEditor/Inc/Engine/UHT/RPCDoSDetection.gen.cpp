// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Net/RPCDoSDetection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPCDoSDetection() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRPCDoSState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRPCDoSStateConfig();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RPCDoSState;
class UScriptStruct* FRPCDoSState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RPCDoSState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RPCDoSState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPCDoSState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RPCDoSState"));
	}
	return Z_Registration_Info_UScriptStruct_RPCDoSState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRPCDoSState>()
{
	return FRPCDoSState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRPCDoSState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLogEscalate_MetaData[];
#endif
		static void NewProp_bLogEscalate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogEscalate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSendEscalateAnalytics_MetaData[];
#endif
		static void NewProp_bSendEscalateAnalytics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendEscalateAnalytics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKickPlayer_MetaData[];
#endif
		static void NewProp_bKickPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKickPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrackRecentRPCs_MetaData[];
#endif
		static void NewProp_bTrackRecentRPCs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackRecentRPCs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscalateQuotaRPCsPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_EscalateQuotaRPCsPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscalateTimeQuotaMSPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_EscalateTimeQuotaMSPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscalateQuotaRPCsPerPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_EscalateQuotaRPCsPerPeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscalateTimeQuotaMSPerPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_EscalateTimeQuotaMSPerPeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscalateQuotaTimePeriod_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_EscalateQuotaTimePeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscalationCountTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_EscalationCountTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscalationTimeToleranceMS_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_EscalationTimeToleranceMS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPCRepeatLimitPerPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_RPCRepeatLimitPerPeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPCRepeatLimitMSPerPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_RPCRepeatLimitMSPerPeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPCRepeatLimitTimePeriod_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_RPCRepeatLimitTimePeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooloffTime_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_CooloffTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoEscalateTime_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_AutoEscalateTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores the RPC DoS detection state (either settings from the config file, or the active DDoS detection state)\n */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "Stores the RPC DoS detection state (either settings from the config file, or the active DDoS detection state)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPCDoSState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bLogEscalate_MetaData[] = {
		{ "Comment", "/** Whether or not to log when escalating to this state */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "Whether or not to log when escalating to this state" },
	};
#endif
	void Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bLogEscalate_SetBit(void* Obj)
	{
		((FRPCDoSState*)Obj)->bLogEscalate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bLogEscalate = { "bLogEscalate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRPCDoSState), &Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bLogEscalate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bLogEscalate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bLogEscalate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bSendEscalateAnalytics_MetaData[] = {
		{ "Comment", "/** Whether or not to send analytics when escalating to this state */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "Whether or not to send analytics when escalating to this state" },
	};
#endif
	void Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bSendEscalateAnalytics_SetBit(void* Obj)
	{
		((FRPCDoSState*)Obj)->bSendEscalateAnalytics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bSendEscalateAnalytics = { "bSendEscalateAnalytics", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRPCDoSState), &Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bSendEscalateAnalytics_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bSendEscalateAnalytics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bSendEscalateAnalytics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bKickPlayer_MetaData[] = {
		{ "Comment", "/** Whether or not to kick the player when they escalate to this state */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "Whether or not to kick the player when they escalate to this state" },
	};
#endif
	void Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bKickPlayer_SetBit(void* Obj)
	{
		((FRPCDoSState*)Obj)->bKickPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bKickPlayer = { "bKickPlayer", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRPCDoSState), &Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bKickPlayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bKickPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bKickPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bTrackRecentRPCs_MetaData[] = {
		{ "Comment", "/** Whether or not to keep a temporary record of recent RPC's, for potential logging/analytics */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "Whether or not to keep a temporary record of recent RPC's, for potential logging/analytics" },
	};
#endif
	void Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bTrackRecentRPCs_SetBit(void* Obj)
	{
		((FRPCDoSState*)Obj)->bTrackRecentRPCs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bTrackRecentRPCs = { "bTrackRecentRPCs", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRPCDoSState), &Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bTrackRecentRPCs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bTrackRecentRPCs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bTrackRecentRPCs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaRPCsPerFrame_MetaData[] = {
		{ "Comment", "/** The number of RPC's per frame before the next stage of DoS detection is triggered */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The number of RPC's per frame before the next stage of DoS detection is triggered" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaRPCsPerFrame = { "EscalateQuotaRPCsPerFrame", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRPCDoSState, EscalateQuotaRPCsPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaRPCsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaRPCsPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateTimeQuotaMSPerFrame_MetaData[] = {
		{ "Comment", "/** The amount of time spent executing RPC's per frame, before the next stage of DoS detection is triggered */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The amount of time spent executing RPC's per frame, before the next stage of DoS detection is triggered" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateTimeQuotaMSPerFrame = { "EscalateTimeQuotaMSPerFrame", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRPCDoSState, EscalateTimeQuotaMSPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateTimeQuotaMSPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateTimeQuotaMSPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaRPCsPerPeriod_MetaData[] = {
		{ "Comment", "/** The number of RPC's per EscalateQuotaPeriod before the next stage of DoS detection is triggered */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The number of RPC's per EscalateQuotaPeriod before the next stage of DoS detection is triggered" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaRPCsPerPeriod = { "EscalateQuotaRPCsPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRPCDoSState, EscalateQuotaRPCsPerPeriod), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaRPCsPerPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaRPCsPerPeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateTimeQuotaMSPerPeriod_MetaData[] = {
		{ "Comment", "/** The amount of time spent executing RPC's per EscalateQuotaPeriod, before the next stage of DoS detection is triggered */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The amount of time spent executing RPC's per EscalateQuotaPeriod, before the next stage of DoS detection is triggered" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateTimeQuotaMSPerPeriod = { "EscalateTimeQuotaMSPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRPCDoSState, EscalateTimeQuotaMSPerPeriod), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateTimeQuotaMSPerPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateTimeQuotaMSPerPeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaTimePeriod_MetaData[] = {
		{ "Comment", "/** The time period to use for determining RPC count and time escalation quotas (Max: 16) */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The time period to use for determining RPC count and time escalation quotas (Max: 16)" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaTimePeriod = { "EscalateQuotaTimePeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRPCDoSState, EscalateQuotaTimePeriod), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaTimePeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaTimePeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalationCountTolerance_MetaData[] = {
		{ "Comment", "/** The number of times this stage must be escalated to, before it is 'confirmed' as having been escalated to (for analytics) */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The number of times this stage must be escalated to, before it is 'confirmed' as having been escalated to (for analytics)" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalationCountTolerance = { "EscalationCountTolerance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRPCDoSState, EscalationCountTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalationCountTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalationCountTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalationTimeToleranceMS_MetaData[] = {
		{ "Comment", "/** The maximum time spent executing RPC's per frame, before this escalation stage is automatically 'confirmed' for analytics */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The maximum time spent executing RPC's per frame, before this escalation stage is automatically 'confirmed' for analytics" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalationTimeToleranceMS = { "EscalationTimeToleranceMS", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRPCDoSState, EscalationTimeToleranceMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalationTimeToleranceMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalationTimeToleranceMS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitPerPeriod_MetaData[] = {
		{ "Comment", "/** The limit for the number of times a single RPC can be repeated, over the time period specified by RPCRepeatTimeLimitPeriod */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The limit for the number of times a single RPC can be repeated, over the time period specified by RPCRepeatTimeLimitPeriod" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitPerPeriod = { "RPCRepeatLimitPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRPCDoSState, RPCRepeatLimitPerPeriod), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitPerPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitPerPeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitMSPerPeriod_MetaData[] = {
		{ "Comment", "/** The limit for the number of milliseconds a single RPC can spend executing, over the time period specified by RPCRepeatTimeLimitPeriod */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The limit for the number of milliseconds a single RPC can spend executing, over the time period specified by RPCRepeatTimeLimitPeriod" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitMSPerPeriod = { "RPCRepeatLimitMSPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRPCDoSState, RPCRepeatLimitMSPerPeriod), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitMSPerPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitMSPerPeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitTimePeriod_MetaData[] = {
		{ "Comment", "/** The time period to use for measuring excessive execution time for a single RPC (Max: 16) */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The time period to use for measuring excessive execution time for a single RPC (Max: 16)" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitTimePeriod = { "RPCRepeatLimitTimePeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRPCDoSState, RPCRepeatLimitTimePeriod), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitTimePeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitTimePeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_CooloffTime_MetaData[] = {
		{ "Comment", "/** The amount of time, in seconds, before the current DoS severity category cools off and de-escalates */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The amount of time, in seconds, before the current DoS severity category cools off and de-escalates" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_CooloffTime = { "CooloffTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRPCDoSState, CooloffTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_CooloffTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_CooloffTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_AutoEscalateTime_MetaData[] = {
		{ "Comment", "/** The amount of time, in seconds, spent in the current DoS severity category before it automatically escalates to the next category */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "The amount of time, in seconds, spent in the current DoS severity category before it automatically escalates to the next category" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_AutoEscalateTime = { "AutoEscalateTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRPCDoSState, AutoEscalateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_AutoEscalateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_AutoEscalateTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPCDoSState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bLogEscalate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bSendEscalateAnalytics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bKickPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_bTrackRecentRPCs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaRPCsPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateTimeQuotaMSPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaRPCsPerPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateTimeQuotaMSPerPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalateQuotaTimePeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalationCountTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_EscalationTimeToleranceMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitPerPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitMSPerPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_RPCRepeatLimitTimePeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_CooloffTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewProp_AutoEscalateTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPCDoSState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RPCDoSState",
		sizeof(FRPCDoSState),
		alignof(FRPCDoSState),
		Z_Construct_UScriptStruct_FRPCDoSState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRPCDoSState()
	{
		if (!Z_Registration_Info_UScriptStruct_RPCDoSState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RPCDoSState.InnerSingleton, Z_Construct_UScriptStruct_FRPCDoSState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RPCDoSState.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRPCDoSStateConfig>() == std::is_polymorphic<FRPCDoSState>(), "USTRUCT FRPCDoSStateConfig cannot be polymorphic unless super FRPCDoSState is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RPCDoSStateConfig;
class UScriptStruct* FRPCDoSStateConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RPCDoSStateConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RPCDoSStateConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPCDoSStateConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RPCDoSStateConfig"));
	}
	return Z_Registration_Info_UScriptStruct_RPCDoSStateConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRPCDoSStateConfig>()
{
	return FRPCDoSStateConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration for RPC DoS Detection states\n */" },
		{ "ModuleRelativePath", "Public/Net/RPCDoSDetection.h" },
		{ "ToolTip", "Configuration for RPC DoS Detection states" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPCDoSStateConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FRPCDoSState,
		&NewStructOps,
		"RPCDoSStateConfig",
		sizeof(FRPCDoSStateConfig),
		alignof(FRPCDoSStateConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRPCDoSStateConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_RPCDoSStateConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RPCDoSStateConfig.InnerSingleton, Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RPCDoSStateConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_RPCDoSDetection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_RPCDoSDetection_h_Statics::ScriptStructInfo[] = {
		{ FRPCDoSState::StaticStruct, Z_Construct_UScriptStruct_FRPCDoSState_Statics::NewStructOps, TEXT("RPCDoSState"), &Z_Registration_Info_UScriptStruct_RPCDoSState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPCDoSState), 2763348985U) },
		{ FRPCDoSStateConfig::StaticStruct, Z_Construct_UScriptStruct_FRPCDoSStateConfig_Statics::NewStructOps, TEXT("RPCDoSStateConfig"), &Z_Registration_Info_UScriptStruct_RPCDoSStateConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPCDoSStateConfig), 1408437130U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_RPCDoSDetection_h_2638216032(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_RPCDoSDetection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_RPCDoSDetection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
