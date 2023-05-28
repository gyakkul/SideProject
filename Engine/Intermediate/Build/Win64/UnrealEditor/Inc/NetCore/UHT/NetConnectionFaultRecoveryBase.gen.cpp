// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetConnectionFaultRecoveryBase() {}
// Cross Module References
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEscalationState();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetFaultState();
	UPackage* Z_Construct_UPackage__Script_NetCore();
// End Cross Module References

static_assert(std::is_polymorphic<FNetFaultState>() == std::is_polymorphic<FEscalationState>(), "USTRUCT FNetFaultState cannot be polymorphic unless super FEscalationState is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetFaultState;
class UScriptStruct* FNetFaultState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetFaultState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetFaultState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetFaultState, (UObject*)Z_Construct_UPackage__Script_NetCore(), TEXT("NetFaultState"));
	}
	return Z_Registration_Info_UScriptStruct_NetFaultState.OuterSingleton;
}
template<> NETCORE_API UScriptStruct* StaticStruct<FNetFaultState>()
{
	return FNetFaultState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetFaultState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCloseConnection_MetaData[];
#endif
		static void NewProp_bCloseConnection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCloseConnection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscalateQuotaFaultsPerPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_EscalateQuotaFaultsPerPeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscalateQuotaFaultPercentPerPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_EscalateQuotaFaultPercentPerPeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DescalateQuotaFaultsPerPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_DescalateQuotaFaultsPerPeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DescalateQuotaFaultPercentPerPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_DescalateQuotaFaultPercentPerPeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscalateQuotaTimePeriod_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_EscalateQuotaTimePeriod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetFaultState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Generic escalation state definition used to implement attempted recovery from faults/errors in the NetConnection level netcode.\n * Fault handlers may have their own separate escalation tracking.\n */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h" },
		{ "ToolTip", "Generic escalation state definition used to implement attempted recovery from faults/errors in the NetConnection level netcode.\nFault handlers may have their own separate escalation tracking." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetFaultState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetFaultState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_bCloseConnection_MetaData[] = {
		{ "Comment", "/** Whether or not the current escalation state should immediately Close the connection */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h" },
		{ "ToolTip", "Whether or not the current escalation state should immediately Close the connection" },
	};
#endif
	void Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_bCloseConnection_SetBit(void* Obj)
	{
		((FNetFaultState*)Obj)->bCloseConnection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_bCloseConnection = { "bCloseConnection", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNetFaultState), &Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_bCloseConnection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_bCloseConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_bCloseConnection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaFaultsPerPeriod_MetaData[] = {
		{ "Comment", "/** The number of faults per period before the next stage of escalation is triggered */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h" },
		{ "ToolTip", "The number of faults per period before the next stage of escalation is triggered" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaFaultsPerPeriod = { "EscalateQuotaFaultsPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetFaultState, EscalateQuotaFaultsPerPeriod), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaFaultsPerPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaFaultsPerPeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaFaultPercentPerPeriod_MetaData[] = {
		{ "Comment", "/** Percentage of faults out of total number of recent packets, before the next stage of escalation is triggered */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h" },
		{ "ToolTip", "Percentage of faults out of total number of recent packets, before the next stage of escalation is triggered" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaFaultPercentPerPeriod = { "EscalateQuotaFaultPercentPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetFaultState, EscalateQuotaFaultPercentPerPeriod), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaFaultPercentPerPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaFaultPercentPerPeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_DescalateQuotaFaultsPerPeriod_MetaData[] = {
		{ "Comment", "/** The number of faults per period before de-escalating into this state (adds hysteresis/lag to state changes) */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h" },
		{ "ToolTip", "The number of faults per period before de-escalating into this state (adds hysteresis/lag to state changes)" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_DescalateQuotaFaultsPerPeriod = { "DescalateQuotaFaultsPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetFaultState, DescalateQuotaFaultsPerPeriod), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_DescalateQuotaFaultsPerPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_DescalateQuotaFaultsPerPeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_DescalateQuotaFaultPercentPerPeriod_MetaData[] = {
		{ "Comment", "/** Percentage of faults out of total number of recent packets, before de-escalating into this state (adds hysteresis/lag to state changes) */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h" },
		{ "ToolTip", "Percentage of faults out of total number of recent packets, before de-escalating into this state (adds hysteresis/lag to state changes)" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_DescalateQuotaFaultPercentPerPeriod = { "DescalateQuotaFaultPercentPerPeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetFaultState, DescalateQuotaFaultPercentPerPeriod), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_DescalateQuotaFaultPercentPerPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_DescalateQuotaFaultPercentPerPeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaTimePeriod_MetaData[] = {
		{ "Comment", "/** The time period to use for determining escalation/de-escalation quotas (Max: 16) */" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetConnectionFaultRecoveryBase.h" },
		{ "ToolTip", "The time period to use for determining escalation/de-escalation quotas (Max: 16)" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaTimePeriod = { "EscalateQuotaTimePeriod", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetFaultState, EscalateQuotaTimePeriod), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaTimePeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaTimePeriod_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetFaultState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_bCloseConnection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaFaultsPerPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaFaultPercentPerPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_DescalateQuotaFaultsPerPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_DescalateQuotaFaultPercentPerPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetFaultState_Statics::NewProp_EscalateQuotaTimePeriod,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetFaultState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetCore,
		Z_Construct_UScriptStruct_FEscalationState,
		&NewStructOps,
		"NetFaultState",
		sizeof(FNetFaultState),
		alignof(FNetFaultState),
		Z_Construct_UScriptStruct_FNetFaultState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetFaultState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetFaultState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetFaultState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetFaultState()
	{
		if (!Z_Registration_Info_UScriptStruct_NetFaultState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetFaultState.InnerSingleton, Z_Construct_UScriptStruct_FNetFaultState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetFaultState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetConnectionFaultRecoveryBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetConnectionFaultRecoveryBase_h_Statics::ScriptStructInfo[] = {
		{ FNetFaultState::StaticStruct, Z_Construct_UScriptStruct_FNetFaultState_Statics::NewStructOps, TEXT("NetFaultState"), &Z_Registration_Info_UScriptStruct_NetFaultState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetFaultState), 1016777609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetConnectionFaultRecoveryBase_h_316705560(TEXT("/Script/NetCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetConnectionFaultRecoveryBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetConnectionFaultRecoveryBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
