// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkPredictionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPredictionSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_ANetworkPredictionReplicatedManager_NoRegister();
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionSettingsObject();
	NETWORKPREDICTION_API UClass* Z_Construct_UClass_UNetworkPredictionSettingsObject_NoRegister();
	NETWORKPREDICTION_API UEnum* Z_Construct_UEnum_NetworkPrediction_ENetworkLOD();
	NETWORKPREDICTION_API UEnum* Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionTickingPolicy();
	NETWORKPREDICTION_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPredictionDevHUD();
	NETWORKPREDICTION_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem();
	NETWORKPREDICTION_API UScriptStruct* Z_Construct_UScriptStruct_FNetworkPredictionSettings();
	UPackage* Z_Construct_UPackage__Script_NetworkPrediction();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPredictionSettings;
class UScriptStruct* FNetworkPredictionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPredictionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPredictionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPredictionSettings, (UObject*)Z_Construct_UPackage__Script_NetworkPrediction(), TEXT("NetworkPredictionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPredictionSettings.OuterSingleton;
}
template<> NETWORKPREDICTION_API UScriptStruct* StaticStruct<FNetworkPredictionSettings>()
{
	return FNetworkPredictionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreferredTickingPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredTickingPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreferredTickingPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedManagerClassOverride_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReplicatedManagerClassOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedTickFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FixedTickFrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceEngineFixTickForcePhysics_MetaData[];
#endif
		static void NewProp_bForceEngineFixTickForcePhysics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceEngineFixTickForcePhysics;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimulatedProxyNetworkLOD_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulatedProxyNetworkLOD_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimulatedProxyNetworkLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedTickInterpolationBufferedMS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FixedTickInterpolationBufferedMS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndependentTickInterpolationBufferedMS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndependentTickInterpolationBufferedMS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndependentTickInterpolationMaxBufferedMS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndependentTickInterpolationMaxBufferedMS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedTickInputSendCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FixedTickInputSendCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndependentTickInputSendCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndependentTickInputSendCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumRemoteInputFaultLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumRemoteInputFaultLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPredictionSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_PreferredTickingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_PreferredTickingPolicy_MetaData[] = {
		{ "Category", "Global" },
		{ "Comment", "// Which ticking policy to use in cases where both are supported by the underlying simulation.\n// Leave this on Fixed if you intend to use physics based simulations.\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "Which ticking policy to use in cases where both are supported by the underlying simulation.\nLeave this on Fixed if you intend to use physics based simulations." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_PreferredTickingPolicy = { "PreferredTickingPolicy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkPredictionSettings, PreferredTickingPolicy), Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionTickingPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_PreferredTickingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_PreferredTickingPolicy_MetaData)) }; // 1722051631
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_ReplicatedManagerClassOverride_MetaData[] = {
		{ "Category", "Global" },
		{ "Comment", "// Replicated Manager class\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "Replicated Manager class" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_ReplicatedManagerClassOverride = { "ReplicatedManagerClassOverride", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkPredictionSettings, ReplicatedManagerClassOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_ANetworkPredictionReplicatedManager_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_ReplicatedManagerClassOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_ReplicatedManagerClassOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_FixedTickFrameRate_MetaData[] = {
		{ "Category", "FixedTick" },
		{ "Comment", "// Frame rate to use when running Fixed Tick simulations. Note: Engine::FixedFrameRate will take precedence if manually set.\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "Frame rate to use when running Fixed Tick simulations. Note: Engine::FixedFrameRate will take precedence if manually set." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_FixedTickFrameRate = { "FixedTickFrameRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkPredictionSettings, FixedTickFrameRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_FixedTickFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_FixedTickFrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_bForceEngineFixTickForcePhysics_MetaData[] = {
		{ "Category", "FixedTick" },
		{ "Comment", "// Forces the engine to run in fixed tick mode when a NP physics simulation is running.\n// This is the same as settings UEngine::bUseFixedFrameRate / FixedFrameRate manually.\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "Forces the engine to run in fixed tick mode when a NP physics simulation is running.\nThis is the same as settings UEngine::bUseFixedFrameRate / FixedFrameRate manually." },
	};
#endif
	void Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_bForceEngineFixTickForcePhysics_SetBit(void* Obj)
	{
		((FNetworkPredictionSettings*)Obj)->bForceEngineFixTickForcePhysics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_bForceEngineFixTickForcePhysics = { "bForceEngineFixTickForcePhysics", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNetworkPredictionSettings), &Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_bForceEngineFixTickForcePhysics_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_bForceEngineFixTickForcePhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_bForceEngineFixTickForcePhysics_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_SimulatedProxyNetworkLOD_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_SimulatedProxyNetworkLOD_MetaData[] = {
		{ "Category", "FixedTick" },
		{ "Comment", "// Default NetworkLOD for simulated proxy simulations.\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "Default NetworkLOD for simulated proxy simulations." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_SimulatedProxyNetworkLOD = { "SimulatedProxyNetworkLOD", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkPredictionSettings, SimulatedProxyNetworkLOD), Z_Construct_UEnum_NetworkPrediction_ENetworkLOD, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_SimulatedProxyNetworkLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_SimulatedProxyNetworkLOD_MetaData)) }; // 2057376198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_FixedTickInterpolationBufferedMS_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "// How much buffered time to keep for fixed ticking interpolated sims (client only).\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "How much buffered time to keep for fixed ticking interpolated sims (client only)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_FixedTickInterpolationBufferedMS = { "FixedTickInterpolationBufferedMS", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkPredictionSettings, FixedTickInterpolationBufferedMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_FixedTickInterpolationBufferedMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_FixedTickInterpolationBufferedMS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_IndependentTickInterpolationBufferedMS_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "// How much buffered time to keep for fixed independent interpolated sims (client only).\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "How much buffered time to keep for fixed independent interpolated sims (client only)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_IndependentTickInterpolationBufferedMS = { "IndependentTickInterpolationBufferedMS", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkPredictionSettings, IndependentTickInterpolationBufferedMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_IndependentTickInterpolationBufferedMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_IndependentTickInterpolationBufferedMS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_IndependentTickInterpolationMaxBufferedMS_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "// Max buffered time to keep for fixed independent interpolated sims (client only).\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "Max buffered time to keep for fixed independent interpolated sims (client only)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_IndependentTickInterpolationMaxBufferedMS = { "IndependentTickInterpolationMaxBufferedMS", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkPredictionSettings, IndependentTickInterpolationMaxBufferedMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_IndependentTickInterpolationMaxBufferedMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_IndependentTickInterpolationMaxBufferedMS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_FixedTickInputSendCount_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Clients should send this number of most recent input commands together per update, for a Fixed Tick simulation\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "Clients should send this number of most recent input commands together per update, for a Fixed Tick simulation" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_FixedTickInputSendCount = { "FixedTickInputSendCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkPredictionSettings, FixedTickInputSendCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_FixedTickInputSendCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_FixedTickInputSendCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_IndependentTickInputSendCount_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Clients should send this number of most recent input commands together per update, for an Independent Tick simulation\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "Clients should send this number of most recent input commands together per update, for an Independent Tick simulation" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_IndependentTickInputSendCount = { "IndependentTickInputSendCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkPredictionSettings, IndependentTickInputSendCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_IndependentTickInputSendCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_IndependentTickInputSendCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_MaximumRemoteInputFaultLimit_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Cap the number of remote input commands required to be buffered before resuming input consumption after a fault\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "Cap the number of remote input commands required to be buffered before resuming input consumption after a fault" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_MaximumRemoteInputFaultLimit = { "MaximumRemoteInputFaultLimit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkPredictionSettings, MaximumRemoteInputFaultLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_MaximumRemoteInputFaultLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_MaximumRemoteInputFaultLimit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_PreferredTickingPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_PreferredTickingPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_ReplicatedManagerClassOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_FixedTickFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_bForceEngineFixTickForcePhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_SimulatedProxyNetworkLOD_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_SimulatedProxyNetworkLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_FixedTickInterpolationBufferedMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_IndependentTickInterpolationBufferedMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_IndependentTickInterpolationMaxBufferedMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_FixedTickInputSendCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_IndependentTickInputSendCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewProp_MaximumRemoteInputFaultLimit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPrediction,
		nullptr,
		&NewStructOps,
		"NetworkPredictionSettings",
		sizeof(FNetworkPredictionSettings),
		alignof(FNetworkPredictionSettings),
		Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetworkPredictionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_NetworkPredictionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPredictionSettings.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetworkPredictionSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUDItem;
class UScriptStruct* FNetworkPredictionDevHUDItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUDItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUDItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem, (UObject*)Z_Construct_UPackage__Script_NetworkPrediction(), TEXT("NetworkPredictionDevHUDItem"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUDItem.OuterSingleton;
}
template<> NETWORKPREDICTION_API UScriptStruct* StaticStruct<FNetworkPredictionDevHUDItem>()
{
	return FNetworkPredictionDevHUDItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecCommand_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExecCommand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBack_MetaData[];
#endif
		static void NewProp_bAutoBack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequirePIE_MetaData[];
#endif
		static void NewProp_bRequirePIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequirePIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireNotPIE_MetaData[];
#endif
		static void NewProp_bRequireNotPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNotPIE;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPredictionDevHUDItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "DevHUD" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkPredictionDevHUDItem, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_ExecCommand_MetaData[] = {
		{ "Category", "DevHUD" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_ExecCommand = { "ExecCommand", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkPredictionDevHUDItem, ExecCommand), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_ExecCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_ExecCommand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bAutoBack_MetaData[] = {
		{ "Category", "DevHUD" },
		{ "Comment", "// Return to to level HUD menu after selecting this\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "Return to to level HUD menu after selecting this" },
	};
#endif
	void Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bAutoBack_SetBit(void* Obj)
	{
		((FNetworkPredictionDevHUDItem*)Obj)->bAutoBack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bAutoBack = { "bAutoBack", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNetworkPredictionDevHUDItem), &Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bAutoBack_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bAutoBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bAutoBack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bRequirePIE_MetaData[] = {
		{ "Category", "DevHUD" },
		{ "Comment", "// only works in PIE\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "only works in PIE" },
	};
#endif
	void Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bRequirePIE_SetBit(void* Obj)
	{
		((FNetworkPredictionDevHUDItem*)Obj)->bRequirePIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bRequirePIE = { "bRequirePIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNetworkPredictionDevHUDItem), &Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bRequirePIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bRequirePIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bRequirePIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bRequireNotPIE_MetaData[] = {
		{ "Category", "DevHUD" },
		{ "Comment", "// only works in non PIE\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "only works in non PIE" },
	};
#endif
	void Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bRequireNotPIE_SetBit(void* Obj)
	{
		((FNetworkPredictionDevHUDItem*)Obj)->bRequireNotPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bRequireNotPIE = { "bRequireNotPIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNetworkPredictionDevHUDItem), &Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bRequireNotPIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bRequireNotPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bRequireNotPIE_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_ExecCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bAutoBack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bRequirePIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewProp_bRequireNotPIE,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPrediction,
		nullptr,
		&NewStructOps,
		"NetworkPredictionDevHUDItem",
		sizeof(FNetworkPredictionDevHUDItem),
		alignof(FNetworkPredictionDevHUDItem),
		Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem()
	{
		if (!Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUDItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUDItem.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUDItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUD;
class UScriptStruct* FNetworkPredictionDevHUD::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUD.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUD.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPredictionDevHUD, (UObject*)Z_Construct_UPackage__Script_NetworkPrediction(), TEXT("NetworkPredictionDevHUD"));
	}
	return Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUD.OuterSingleton;
}
template<> NETWORKPREDICTION_API UScriptStruct* StaticStruct<FNetworkPredictionDevHUD>()
{
	return FNetworkPredictionDevHUD::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HUDName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequirePIE_MetaData[];
#endif
		static void NewProp_bRequirePIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequirePIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireNotPIE_MetaData[];
#endif
		static void NewProp_bRequireNotPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireNotPIE;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetworkPredictionDevHUD>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_HUDName_MetaData[] = {
		{ "Category", "DevHUD" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_HUDName = { "HUDName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkPredictionDevHUD, HUDName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_HUDName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_HUDName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem, METADATA_PARAMS(nullptr, 0) }; // 2866287003
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "DevHUD" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetworkPredictionDevHUD, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_Items_MetaData)) }; // 2866287003
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_bRequirePIE_MetaData[] = {
		{ "Category", "DevHUD" },
		{ "Comment", "// only works in PIE\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "only works in PIE" },
	};
#endif
	void Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_bRequirePIE_SetBit(void* Obj)
	{
		((FNetworkPredictionDevHUD*)Obj)->bRequirePIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_bRequirePIE = { "bRequirePIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNetworkPredictionDevHUD), &Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_bRequirePIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_bRequirePIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_bRequirePIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_bRequireNotPIE_MetaData[] = {
		{ "Category", "DevHUD" },
		{ "Comment", "// only works in non PIE\n" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ToolTip", "only works in non PIE" },
	};
#endif
	void Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_bRequireNotPIE_SetBit(void* Obj)
	{
		((FNetworkPredictionDevHUD*)Obj)->bRequireNotPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_bRequireNotPIE = { "bRequireNotPIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNetworkPredictionDevHUD), &Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_bRequireNotPIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_bRequireNotPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_bRequireNotPIE_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_HUDName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_bRequirePIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewProp_bRequireNotPIE,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPrediction,
		nullptr,
		&NewStructOps,
		"NetworkPredictionDevHUD",
		sizeof(FNetworkPredictionDevHUD),
		alignof(FNetworkPredictionDevHUD),
		Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetworkPredictionDevHUD()
	{
		if (!Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUD.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUD.InnerSingleton, Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUD.InnerSingleton;
	}
	void UNetworkPredictionSettingsObject::StaticRegisterNativesUNetworkPredictionSettingsObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetworkPredictionSettingsObject);
	UClass* Z_Construct_UClass_UNetworkPredictionSettingsObject_NoRegister()
	{
		return UNetworkPredictionSettingsObject::StaticClass();
	}
	struct Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DevHUDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DevHUDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DevHUDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPrediction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Network Prediction" },
		{ "IncludePath", "NetworkPredictionSettings.h" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Network Prediction" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetworkPredictionSettingsObject, Settings), Z_Construct_UScriptStruct_FNetworkPredictionSettings, METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::NewProp_Settings_MetaData)) }; // 3329738864
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::NewProp_DevHUDs_Inner = { "DevHUDs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNetworkPredictionDevHUD, METADATA_PARAMS(nullptr, 0) }; // 3931981997
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::NewProp_DevHUDs_MetaData[] = {
		{ "Category", "DevHUD" },
		{ "ModuleRelativePath", "Public/NetworkPredictionSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::NewProp_DevHUDs = { "DevHUDs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetworkPredictionSettingsObject, DevHUDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::NewProp_DevHUDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::NewProp_DevHUDs_MetaData)) }; // 3931981997
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::NewProp_DevHUDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::NewProp_DevHUDs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworkPredictionSettingsObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::ClassParams = {
		&UNetworkPredictionSettingsObject::StaticClass,
		"NetworkPrediction",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetworkPredictionSettingsObject()
	{
		if (!Z_Registration_Info_UClass_UNetworkPredictionSettingsObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetworkPredictionSettingsObject.OuterSingleton, Z_Construct_UClass_UNetworkPredictionSettingsObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetworkPredictionSettingsObject.OuterSingleton;
	}
	template<> NETWORKPREDICTION_API UClass* StaticClass<UNetworkPredictionSettingsObject>()
	{
		return UNetworkPredictionSettingsObject::StaticClass();
	}
	UNetworkPredictionSettingsObject::UNetworkPredictionSettingsObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworkPredictionSettingsObject);
	UNetworkPredictionSettingsObject::~UNetworkPredictionSettingsObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_Statics::ScriptStructInfo[] = {
		{ FNetworkPredictionSettings::StaticStruct, Z_Construct_UScriptStruct_FNetworkPredictionSettings_Statics::NewStructOps, TEXT("NetworkPredictionSettings"), &Z_Registration_Info_UScriptStruct_NetworkPredictionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPredictionSettings), 3329738864U) },
		{ FNetworkPredictionDevHUDItem::StaticStruct, Z_Construct_UScriptStruct_FNetworkPredictionDevHUDItem_Statics::NewStructOps, TEXT("NetworkPredictionDevHUDItem"), &Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUDItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPredictionDevHUDItem), 2866287003U) },
		{ FNetworkPredictionDevHUD::StaticStruct, Z_Construct_UScriptStruct_FNetworkPredictionDevHUD_Statics::NewStructOps, TEXT("NetworkPredictionDevHUD"), &Z_Registration_Info_UScriptStruct_NetworkPredictionDevHUD, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetworkPredictionDevHUD), 3931981997U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetworkPredictionSettingsObject, UNetworkPredictionSettingsObject::StaticClass, TEXT("UNetworkPredictionSettingsObject"), &Z_Registration_Info_UClass_UNetworkPredictionSettingsObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetworkPredictionSettingsObject), 3634475772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_1983899723(TEXT("/Script/NetworkPrediction"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
