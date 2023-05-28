// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Private/Net/RPCDoSDetectionConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPCDoSDetectionConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_URPCDoSDetectionConfig();
	ENGINE_API UClass* Z_Construct_UClass_URPCDoSDetectionConfig_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRPCAnalyticsThreshold();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold;
class UScriptStruct* FRPCAnalyticsThreshold::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPCAnalyticsThreshold, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RPCAnalyticsThreshold"));
	}
	return Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRPCAnalyticsThreshold>()
{
	return FRPCAnalyticsThreshold::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPC_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountPerSec_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CountPerSec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimePerSec_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TimePerSec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Specifies time or count thresholds for when an RPC should be included in analytics\n */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Specifies time or count thresholds for when an RPC should be included in analytics" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPCAnalyticsThreshold>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_RPC_MetaData[] = {
		{ "Comment", "/** The RPC name */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "The RPC name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_RPC = { "RPC", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRPCAnalyticsThreshold, RPC), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_RPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_RPC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_CountPerSec_MetaData[] = {
		{ "Comment", "/** The number of calls to an RPC's per second, before including in analytics */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "The number of calls to an RPC's per second, before including in analytics" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_CountPerSec = { "CountPerSec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRPCAnalyticsThreshold, CountPerSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_CountPerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_CountPerSec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_TimePerSec_MetaData[] = {
		{ "Comment", "/** Time spent executing an RPC per second, before including in analytics (can specify more than 1 second, for long running RPC's) */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Time spent executing an RPC per second, before including in analytics (can specify more than 1 second, for long running RPC's)" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_TimePerSec = { "TimePerSec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRPCAnalyticsThreshold, TimePerSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_TimePerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_TimePerSec_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_RPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_CountPerSec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewProp_TimePerSec,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RPCAnalyticsThreshold",
		sizeof(FRPCAnalyticsThreshold),
		alignof(FRPCAnalyticsThreshold),
		Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRPCAnalyticsThreshold()
	{
		if (!Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold.InnerSingleton, Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold.InnerSingleton;
	}
	void URPCDoSDetectionConfig::StaticRegisterNativesURPCDoSDetectionConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URPCDoSDetectionConfig);
	UClass* Z_Construct_UClass_URPCDoSDetectionConfig_NoRegister()
	{
		return URPCDoSDetectionConfig::StaticClass();
	}
	struct Z_Construct_UClass_URPCDoSDetectionConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRPCDoSDetection_MetaData[];
#endif
		static void NewProp_bRPCDoSDetection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRPCDoSDetection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRPCDoSAnalytics_MetaData[];
#endif
		static void NewProp_bRPCDoSAnalytics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRPCDoSAnalytics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitchTimeQuotaMS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HitchTimeQuotaMS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitchSuspendDetectionTimeMS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_HitchSuspendDetectionTimeMS;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DetectionSeverity_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectionSeverity_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DetectionSeverity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialConnectToleranceMS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialConnectToleranceMS;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RPCBlockWhitelist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPCBlockWhitelist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RPCBlockWhitelist;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RPCBlockAllowlist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPCBlockAllowlist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RPCBlockAllowlist;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RPCAnalyticsThresholds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPCAnalyticsThresholds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RPCAnalyticsThresholds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RPCAnalyticsOverrideChance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RPCAnalyticsOverrideChance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPCDoSDetectionConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPCDoSDetectionConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configuration for FRPCDoSDetection - using PerObjectConfig, to hack a single hardcoded section name\n */" },
		{ "IncludePath", "Net/RPCDoSDetectionConfig.h" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Configuration for FRPCDoSDetection - using PerObjectConfig, to hack a single hardcoded section name" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSDetection_MetaData[] = {
		{ "Comment", "/** Whether or not RPC DoS detection is presently enabled */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Whether or not RPC DoS detection is presently enabled" },
	};
#endif
	void Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSDetection_SetBit(void* Obj)
	{
		((URPCDoSDetectionConfig*)Obj)->bRPCDoSDetection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSDetection = { "bRPCDoSDetection", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URPCDoSDetectionConfig), &Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSDetection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSAnalytics_MetaData[] = {
		{ "Comment", "/** Whether or not analytics for RPC DoS detection is enabled */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Whether or not analytics for RPC DoS detection is enabled" },
	};
#endif
	void Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSAnalytics_SetBit(void* Obj)
	{
		((URPCDoSDetectionConfig*)Obj)->bRPCDoSAnalytics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSAnalytics = { "bRPCDoSAnalytics", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URPCDoSDetectionConfig), &Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSAnalytics_SetBit, METADATA_PARAMS(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSAnalytics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSAnalytics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_HitchTimeQuotaMS_MetaData[] = {
		{ "Comment", "/** The amount of time since the previous frame, for detecting hitches, to prevent false positives from built-up packets */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "The amount of time since the previous frame, for detecting hitches, to prevent false positives from built-up packets" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_HitchTimeQuotaMS = { "HitchTimeQuotaMS", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URPCDoSDetectionConfig, HitchTimeQuotaMS), METADATA_PARAMS(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_HitchTimeQuotaMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_HitchTimeQuotaMS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_HitchSuspendDetectionTimeMS_MetaData[] = {
		{ "Comment", "/** The amount of time to suspend RPC DoS Detection, once a hitch is encountered, prevent false positives from built-up packets */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "The amount of time to suspend RPC DoS Detection, once a hitch is encountered, prevent false positives from built-up packets" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_HitchSuspendDetectionTimeMS = { "HitchSuspendDetectionTimeMS", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URPCDoSDetectionConfig, HitchSuspendDetectionTimeMS), METADATA_PARAMS(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_HitchSuspendDetectionTimeMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_HitchSuspendDetectionTimeMS_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_DetectionSeverity_Inner = { "DetectionSeverity", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_DetectionSeverity_MetaData[] = {
		{ "Comment", "/** Names of the different RPC DoS detection states, for escalating severity, depending on the amount of RPC spam */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Names of the different RPC DoS detection states, for escalating severity, depending on the amount of RPC spam" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_DetectionSeverity = { "DetectionSeverity", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URPCDoSDetectionConfig, DetectionSeverity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_DetectionSeverity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_DetectionSeverity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_InitialConnectToleranceMS_MetaData[] = {
		{ "Comment", "/** The amount of time since the client connected, before time-based checks should become active (to reduce false positives) */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "The amount of time since the client connected, before time-based checks should become active (to reduce false positives)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_InitialConnectToleranceMS = { "InitialConnectToleranceMS", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URPCDoSDetectionConfig, InitialConnectToleranceMS), METADATA_PARAMS(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_InitialConnectToleranceMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_InitialConnectToleranceMS_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockWhitelist_Inner = { "RPCBlockWhitelist", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockWhitelist_MetaData[] = {
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockWhitelist = { "RPCBlockWhitelist", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URPCDoSDetectionConfig, RPCBlockWhitelist), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockWhitelist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockWhitelist_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockAllowlist_Inner = { "RPCBlockAllowlist", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockAllowlist_MetaData[] = {
		{ "Comment", "/** List of RPC's which should never be blocked */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "List of RPC's which should never be blocked" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockAllowlist = { "RPCBlockAllowlist", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URPCDoSDetectionConfig, RPCBlockAllowlist), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockAllowlist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockAllowlist_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsThresholds_Inner = { "RPCAnalyticsThresholds", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRPCAnalyticsThreshold, METADATA_PARAMS(nullptr, 0) }; // 1839863235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsThresholds_MetaData[] = {
		{ "Comment", "/** Custom thresholds for when specific RPC's should be included in analytics */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Custom thresholds for when specific RPC's should be included in analytics" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsThresholds = { "RPCAnalyticsThresholds", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URPCDoSDetectionConfig, RPCAnalyticsThresholds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsThresholds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsThresholds_MetaData)) }; // 1839863235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsOverrideChance_MetaData[] = {
		{ "Comment", "/** Specifies a random chance, between 0.0 and 1.0, for when RPCAnalyticsThresholds should be overridden (adds to separate analytics) */" },
		{ "ModuleRelativePath", "Private/Net/RPCDoSDetectionConfig.h" },
		{ "ToolTip", "Specifies a random chance, between 0.0 and 1.0, for when RPCAnalyticsThresholds should be overridden (adds to separate analytics)" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsOverrideChance = { "RPCAnalyticsOverrideChance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URPCDoSDetectionConfig, RPCAnalyticsOverrideChance), METADATA_PARAMS(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsOverrideChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsOverrideChance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPCDoSDetectionConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSDetection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_bRPCDoSAnalytics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_HitchTimeQuotaMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_HitchSuspendDetectionTimeMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_DetectionSeverity_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_DetectionSeverity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_InitialConnectToleranceMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockWhitelist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockWhitelist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockAllowlist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCBlockAllowlist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsThresholds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsThresholds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPCDoSDetectionConfig_Statics::NewProp_RPCAnalyticsOverrideChance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPCDoSDetectionConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPCDoSDetectionConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URPCDoSDetectionConfig_Statics::ClassParams = {
		&URPCDoSDetectionConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URPCDoSDetectionConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::PropPointers),
		0,
		0x000004A4u,
		METADATA_PARAMS(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPCDoSDetectionConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPCDoSDetectionConfig()
	{
		if (!Z_Registration_Info_UClass_URPCDoSDetectionConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPCDoSDetectionConfig.OuterSingleton, Z_Construct_UClass_URPCDoSDetectionConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URPCDoSDetectionConfig.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<URPCDoSDetectionConfig>()
	{
		return URPCDoSDetectionConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPCDoSDetectionConfig);
	URPCDoSDetectionConfig::~URPCDoSDetectionConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_Statics::ScriptStructInfo[] = {
		{ FRPCAnalyticsThreshold::StaticStruct, Z_Construct_UScriptStruct_FRPCAnalyticsThreshold_Statics::NewStructOps, TEXT("RPCAnalyticsThreshold"), &Z_Registration_Info_UScriptStruct_RPCAnalyticsThreshold, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPCAnalyticsThreshold), 1839863235U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URPCDoSDetectionConfig, URPCDoSDetectionConfig::StaticClass, TEXT("URPCDoSDetectionConfig"), &Z_Registration_Info_UClass_URPCDoSDetectionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPCDoSDetectionConfig), 3852534045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_2615905149(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_Net_RPCDoSDetectionConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
