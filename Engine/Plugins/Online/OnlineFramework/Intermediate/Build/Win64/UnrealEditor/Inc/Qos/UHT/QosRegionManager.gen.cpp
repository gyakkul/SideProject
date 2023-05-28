// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QosRegionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQosRegionManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	QOS_API UClass* Z_Construct_UClass_UQosEvaluator_NoRegister();
	QOS_API UClass* Z_Construct_UClass_UQosRegionManager();
	QOS_API UClass* Z_Construct_UClass_UQosRegionManager_NoRegister();
	QOS_API UEnum* Z_Construct_UEnum_Qos_EQosCompletionResult();
	QOS_API UEnum* Z_Construct_UEnum_Qos_EQosDatacenterResult();
	QOS_API UScriptStruct* Z_Construct_UScriptStruct_FDatacenterQosInstance();
	QOS_API UScriptStruct* Z_Construct_UScriptStruct_FQosDatacenterInfo();
	QOS_API UScriptStruct* Z_Construct_UScriptStruct_FQosPingServerInfo();
	QOS_API UScriptStruct* Z_Construct_UScriptStruct_FQosRegionInfo();
	QOS_API UScriptStruct* Z_Construct_UScriptStruct_FQosSubspaceComparisonParams();
	QOS_API UScriptStruct* Z_Construct_UScriptStruct_FRegionQosInstance();
	UPackage* Z_Construct_UPackage__Script_Qos();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQosDatacenterResult;
	static UEnum* EQosDatacenterResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQosDatacenterResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQosDatacenterResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Qos_EQosDatacenterResult, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("EQosDatacenterResult"));
		}
		return Z_Registration_Info_UEnum_EQosDatacenterResult.OuterSingleton;
	}
	template<> QOS_API UEnum* StaticEnum<EQosDatacenterResult>()
	{
		return EQosDatacenterResult_StaticEnum();
	}
	struct Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics::Enumerators[] = {
		{ "EQosDatacenterResult::Invalid", (int64)EQosDatacenterResult::Invalid },
		{ "EQosDatacenterResult::Success", (int64)EQosDatacenterResult::Success },
		{ "EQosDatacenterResult::Incomplete", (int64)EQosDatacenterResult::Incomplete },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum for single region QoS return codes */" },
		{ "Incomplete.Comment", "/** QoS operation with one or more ping failures */" },
		{ "Incomplete.Name", "EQosDatacenterResult::Incomplete" },
		{ "Incomplete.ToolTip", "QoS operation with one or more ping failures" },
		{ "Invalid.Comment", "/** Incomplete, invalid result */" },
		{ "Invalid.Name", "EQosDatacenterResult::Invalid" },
		{ "Invalid.ToolTip", "Incomplete, invalid result" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "Success.Comment", "/** QoS operation was successful */" },
		{ "Success.Name", "EQosDatacenterResult::Success" },
		{ "Success.ToolTip", "QoS operation was successful" },
		{ "ToolTip", "Enum for single region QoS return codes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Qos,
		nullptr,
		"EQosDatacenterResult",
		"EQosDatacenterResult",
		Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Qos_EQosDatacenterResult()
	{
		if (!Z_Registration_Info_UEnum_EQosDatacenterResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQosDatacenterResult.InnerSingleton, Z_Construct_UEnum_Qos_EQosDatacenterResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQosDatacenterResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQosCompletionResult;
	static UEnum* EQosCompletionResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQosCompletionResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQosCompletionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Qos_EQosCompletionResult, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("EQosCompletionResult"));
		}
		return Z_Registration_Info_UEnum_EQosCompletionResult.OuterSingleton;
	}
	template<> QOS_API UEnum* StaticEnum<EQosCompletionResult>()
	{
		return EQosCompletionResult_StaticEnum();
	}
	struct Z_Construct_UEnum_Qos_EQosCompletionResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Qos_EQosCompletionResult_Statics::Enumerators[] = {
		{ "EQosCompletionResult::Invalid", (int64)EQosCompletionResult::Invalid },
		{ "EQosCompletionResult::Success", (int64)EQosCompletionResult::Success },
		{ "EQosCompletionResult::Failure", (int64)EQosCompletionResult::Failure },
		{ "EQosCompletionResult::Canceled", (int64)EQosCompletionResult::Canceled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Qos_EQosCompletionResult_Statics::Enum_MetaDataParams[] = {
		{ "Canceled.Comment", "/** QoS operation was canceled */" },
		{ "Canceled.Name", "EQosCompletionResult::Canceled" },
		{ "Canceled.ToolTip", "QoS operation was canceled" },
		{ "Comment", "/** Enum for possible QoS return codes */" },
		{ "Failure.Comment", "/** QoS operation ended in failure */" },
		{ "Failure.Name", "EQosCompletionResult::Failure" },
		{ "Failure.ToolTip", "QoS operation ended in failure" },
		{ "Invalid.Comment", "/** Incomplete, invalid result */" },
		{ "Invalid.Name", "EQosCompletionResult::Invalid" },
		{ "Invalid.ToolTip", "Incomplete, invalid result" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "Success.Comment", "/** QoS operation was successful */" },
		{ "Success.Name", "EQosCompletionResult::Success" },
		{ "Success.ToolTip", "QoS operation was successful" },
		{ "ToolTip", "Enum for possible QoS return codes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Qos_EQosCompletionResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Qos,
		nullptr,
		"EQosCompletionResult",
		"EQosCompletionResult",
		Z_Construct_UEnum_Qos_EQosCompletionResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Qos_EQosCompletionResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Qos_EQosCompletionResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Qos_EQosCompletionResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Qos_EQosCompletionResult()
	{
		if (!Z_Registration_Info_UEnum_EQosCompletionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQosCompletionResult.InnerSingleton, Z_Construct_UEnum_Qos_EQosCompletionResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQosCompletionResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams;
class UScriptStruct* FQosSubspaceComparisonParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("QosSubspaceComparisonParams"));
	}
	return Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams.OuterSingleton;
}
template<> QOS_API UScriptStruct* StaticStruct<FQosSubspaceComparisonParams>()
{
	return FQosSubspaceComparisonParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNonSubspacePingMs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNonSubspacePingMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSubspacePingMs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinSubspacePingMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstantMaxToleranceMs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConstantMaxToleranceMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaledMaxTolerancePct_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaledMaxTolerancePct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Parameters to control the rules-based comparison of subspace vs non-subspace datacenter QoS results.\n * \n * @see FDatacenterQosInstance::IsNonSubspaceRecommended(const FDatacenterQosInstance&, const FDatacenterQosInstance&, const FQosSubspaceComparisonParams&)\n */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Parameters to control the rules-based comparison of subspace vs non-subspace datacenter QoS results.\n\n@see FDatacenterQosInstance::IsNonSubspaceRecommended(const FDatacenterQosInstance&, const FDatacenterQosInstance&, const FQosSubspaceComparisonParams&)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQosSubspaceComparisonParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_MaxNonSubspacePingMs_MetaData[] = {
		{ "Comment", "/**\n\x09 * Maximum allowed ping of the non-subspace.\n\x09 * If greater than this value, it is too slow, so fails to qualify.\n\x09 * Set to zero or less to disable checks against this field.\n\x09 */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Maximum allowed ping of the non-subspace.\nIf greater than this value, it is too slow, so fails to qualify.\nSet to zero or less to disable checks against this field." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_MaxNonSubspacePingMs = { "MaxNonSubspacePingMs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQosSubspaceComparisonParams, MaxNonSubspacePingMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_MaxNonSubspacePingMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_MaxNonSubspacePingMs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_MinSubspacePingMs_MetaData[] = {
		{ "Comment", "/**\n\x09 * Minimum allowed ping of the subspace.\n\x09 * If below this value, it should not be overridden by the non-subspace.\n\x09 * Set to zero or less to disable checks against this field.\n\x09 */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Minimum allowed ping of the subspace.\nIf below this value, it should not be overridden by the non-subspace.\nSet to zero or less to disable checks against this field." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_MinSubspacePingMs = { "MinSubspacePingMs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQosSubspaceComparisonParams, MinSubspacePingMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_MinSubspacePingMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_MinSubspacePingMs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_ConstantMaxToleranceMs_MetaData[] = {
		{ "Comment", "/**\n\x09 * Maximum allowed difference between the subspace and non-subspace's ping values in milliseconds.\n\x09 * If greater than this value, the non-subspace is too slow, so fails to qualify.\n\x09 * Set to zero or less to disable checks against this field.\n\x09 */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Maximum allowed difference between the subspace and non-subspace's ping values in milliseconds.\nIf greater than this value, the non-subspace is too slow, so fails to qualify.\nSet to zero or less to disable checks against this field." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_ConstantMaxToleranceMs = { "ConstantMaxToleranceMs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQosSubspaceComparisonParams, ConstantMaxToleranceMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_ConstantMaxToleranceMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_ConstantMaxToleranceMs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_ScaledMaxTolerancePct_MetaData[] = {
		{ "Comment", "/**\n\x09 * Maximum allowed difference between the subspace and non-subspace's ping values,\n\x09 * which scales as a proportion of the non-subspace's ping, so will differ between\n\x09 * comparisons when sorting a single list of datacenters.\n\x09 * If greater than the scaled difference, the non-subspace is too slow, so fails to qualify. \n\x09 * Set to zero or less to disable checks against this field.\n\x09 */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Maximum allowed difference between the subspace and non-subspace's ping values,\nwhich scales as a proportion of the non-subspace's ping, so will differ between\ncomparisons when sorting a single list of datacenters.\nIf greater than the scaled difference, the non-subspace is too slow, so fails to qualify.\nSet to zero or less to disable checks against this field." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_ScaledMaxTolerancePct = { "ScaledMaxTolerancePct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQosSubspaceComparisonParams, ScaledMaxTolerancePct), METADATA_PARAMS(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_ScaledMaxTolerancePct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_ScaledMaxTolerancePct_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_MaxNonSubspacePingMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_MinSubspacePingMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_ConstantMaxToleranceMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewProp_ScaledMaxTolerancePct,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Qos,
		nullptr,
		&NewStructOps,
		"QosSubspaceComparisonParams",
		sizeof(FQosSubspaceComparisonParams),
		alignof(FQosSubspaceComparisonParams),
		Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQosSubspaceComparisonParams()
	{
		if (!Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams.InnerSingleton, Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QosPingServerInfo;
class UScriptStruct* FQosPingServerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QosPingServerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QosPingServerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQosPingServerInfo, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("QosPingServerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_QosPingServerInfo.OuterSingleton;
}
template<> QOS_API UScriptStruct* StaticStruct<FQosPingServerInfo>()
{
	return FQosPingServerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQosPingServerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Individual ping server details\n */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Individual ping server details" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQosPingServerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewProp_Address_MetaData[] = {
		{ "Comment", "/** Address of server */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Address of server" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQosPingServerInfo, Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewProp_Address_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewProp_Port_MetaData[] = {
		{ "Comment", "/** Port of server */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Port of server" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQosPingServerInfo, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewProp_Port_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewProp_Port,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Qos,
		nullptr,
		&NewStructOps,
		"QosPingServerInfo",
		sizeof(FQosPingServerInfo),
		alignof(FQosPingServerInfo),
		Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQosPingServerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_QosPingServerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QosPingServerInfo.InnerSingleton, Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QosPingServerInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QosDatacenterInfo;
class UScriptStruct* FQosDatacenterInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QosDatacenterInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QosDatacenterInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQosDatacenterInfo, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("QosDatacenterInfo"));
	}
	return Z_Registration_Info_UScriptStruct_QosDatacenterInfo.OuterSingleton;
}
template<> QOS_API UScriptStruct* StaticStruct<FQosDatacenterInfo>()
{
	return FQosDatacenterInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RegionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Servers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Servers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Servers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Metadata about datacenters that can be queried\n */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Metadata about datacenters that can be queried" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQosDatacenterInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "/** Id for this datacenter */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Id for this datacenter" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQosDatacenterInfo, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_RegionId_MetaData[] = {
		{ "Comment", "/** Parent Region */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Parent Region" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_RegionId = { "RegionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQosDatacenterInfo, RegionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_RegionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_RegionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** Is this region tested (only valid if region is enabled) */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Is this region tested (only valid if region is enabled)" },
	};
#endif
	void Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FQosDatacenterInfo*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FQosDatacenterInfo), &Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Servers_Inner = { "Servers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQosPingServerInfo, METADATA_PARAMS(nullptr, 0) }; // 902362765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Servers_MetaData[] = {
		{ "Comment", "/** Addresses of ping servers */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Addresses of ping servers" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Servers = { "Servers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQosDatacenterInfo, Servers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Servers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Servers_MetaData)) }; // 902362765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_RegionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Servers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewProp_Servers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Qos,
		nullptr,
		&NewStructOps,
		"QosDatacenterInfo",
		sizeof(FQosDatacenterInfo),
		alignof(FQosDatacenterInfo),
		Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQosDatacenterInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_QosDatacenterInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QosDatacenterInfo.InnerSingleton, Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QosDatacenterInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QosRegionInfo;
class UScriptStruct* FQosRegionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QosRegionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QosRegionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQosRegionInfo, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("QosRegionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_QosRegionInfo.OuterSingleton;
}
template<> QOS_API UScriptStruct* StaticStruct<FQosRegionInfo>()
{
	return FQosRegionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQosRegionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RegionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAssignable_MetaData[];
#endif
		static void NewProp_bAutoAssignable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAssignable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSubspaceBias_MetaData[];
#endif
		static void NewProp_bAllowSubspaceBias_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSubspaceBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubspaceBiasParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubspaceBiasParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosRegionInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Metadata about regions made up of datacenters\n */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Metadata about regions made up of datacenters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQosRegionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "/** Localized name of the region */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Localized name of the region" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQosRegionInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_RegionId_MetaData[] = {
		{ "Comment", "/** Id for the region, all datacenters must reference one of these */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Id for the region, all datacenters must reference one of these" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_RegionId = { "RegionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQosRegionInfo, RegionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_RegionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_RegionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** Is this region tested at all (if false, overrides individual datacenters) */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Is this region tested at all (if false, overrides individual datacenters)" },
	};
#endif
	void Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FQosRegionInfo*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FQosRegionInfo), &Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bVisible_MetaData[] = {
		{ "Comment", "/** Is this region visible in the UI (can be saved by user, replaced with auto if region disappears */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Is this region visible in the UI (can be saved by user, replaced with auto if region disappears" },
	};
#endif
	void Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((FQosRegionInfo*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FQosRegionInfo), &Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAutoAssignable_MetaData[] = {
		{ "Comment", "/** Can this region be considered for auto detection */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Can this region be considered for auto detection" },
	};
#endif
	void Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAutoAssignable_SetBit(void* Obj)
	{
		((FQosRegionInfo*)Obj)->bAutoAssignable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAutoAssignable = { "bAutoAssignable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FQosRegionInfo), &Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAutoAssignable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAutoAssignable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAutoAssignable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAllowSubspaceBias_MetaData[] = {
		{ "Comment", "/** Enable biased sorting algorithm on results for this region, which prefers non-subspaces over subspaces */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Enable biased sorting algorithm on results for this region, which prefers non-subspaces over subspaces" },
	};
#endif
	void Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAllowSubspaceBias_SetBit(void* Obj)
	{
		((FQosRegionInfo*)Obj)->bAllowSubspaceBias = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAllowSubspaceBias = { "bAllowSubspaceBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FQosRegionInfo), &Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAllowSubspaceBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAllowSubspaceBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAllowSubspaceBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_SubspaceBiasParams_MetaData[] = {
		{ "Comment", "/** Granular settings for biased subspace-based sorting algorithm, if enabled for this region */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Granular settings for biased subspace-based sorting algorithm, if enabled for this region" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_SubspaceBiasParams = { "SubspaceBiasParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQosRegionInfo, SubspaceBiasParams), Z_Construct_UScriptStruct_FQosSubspaceComparisonParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_SubspaceBiasParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_SubspaceBiasParams_MetaData)) }; // 8746786
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQosRegionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_RegionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAutoAssignable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_bAllowSubspaceBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewProp_SubspaceBiasParams,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQosRegionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Qos,
		nullptr,
		&NewStructOps,
		"QosRegionInfo",
		sizeof(FQosRegionInfo),
		alignof(FQosRegionInfo),
		Z_Construct_UScriptStruct_FQosRegionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQosRegionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQosRegionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_QosRegionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QosRegionInfo.InnerSingleton, Z_Construct_UScriptStruct_FQosRegionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QosRegionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatacenterQosInstance;
class UScriptStruct* FDatacenterQosInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatacenterQosInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatacenterQosInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatacenterQosInstance, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("DatacenterQosInstance"));
	}
	return Z_Registration_Info_UScriptStruct_DatacenterQosInstance.OuterSingleton;
}
template<> QOS_API UScriptStruct* StaticStruct<FDatacenterQosInstance>()
{
	return FDatacenterQosInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvgPingMs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AvgPingMs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PingResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PingResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PingResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastCheckTimestamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastCheckTimestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsable_MetaData[];
#endif
		static void NewProp_bUsable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Runtime information about a given region */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Runtime information about a given region" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatacenterQosInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Definition_MetaData[] = {
		{ "Comment", "/** Information about the datacenter */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Information about the datacenter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatacenterQosInstance, Definition), Z_Construct_UScriptStruct_FQosDatacenterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Definition_MetaData)) }; // 1450290482
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Result_MetaData[] = {
		{ "Comment", "/** Success of the qos evaluation */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Success of the qos evaluation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatacenterQosInstance, Result), Z_Construct_UEnum_Qos_EQosDatacenterResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Result_MetaData)) }; // 4154580110
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_AvgPingMs_MetaData[] = {
		{ "Comment", "/** Avg ping times across all search results */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Avg ping times across all search results" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_AvgPingMs = { "AvgPingMs", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatacenterQosInstance, AvgPingMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_AvgPingMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_AvgPingMs_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_PingResults_Inner = { "PingResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_PingResults_MetaData[] = {
		{ "Comment", "/** Transient list of ping times obtained for this datacenter */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Transient list of ping times obtained for this datacenter" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_PingResults = { "PingResults", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatacenterQosInstance, PingResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_PingResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_PingResults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_LastCheckTimestamp_MetaData[] = {
		{ "Comment", "/** Last time this datacenter was checked */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Last time this datacenter was checked" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_LastCheckTimestamp = { "LastCheckTimestamp", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatacenterQosInstance, LastCheckTimestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_LastCheckTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_LastCheckTimestamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_bUsable_MetaData[] = {
		{ "Comment", "/** Is the parent region usable */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Is the parent region usable" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_bUsable_SetBit(void* Obj)
	{
		((FDatacenterQosInstance*)Obj)->bUsable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_bUsable = { "bUsable", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDatacenterQosInstance), &Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_bUsable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_bUsable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_bUsable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Definition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_AvgPingMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_PingResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_PingResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_LastCheckTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewProp_bUsable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Qos,
		nullptr,
		&NewStructOps,
		"DatacenterQosInstance",
		sizeof(FDatacenterQosInstance),
		alignof(FDatacenterQosInstance),
		Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatacenterQosInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_DatacenterQosInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatacenterQosInstance.InnerSingleton, Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DatacenterQosInstance.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RegionQosInstance;
class UScriptStruct* FRegionQosInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RegionQosInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RegionQosInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegionQosInstance, (UObject*)Z_Construct_UPackage__Script_Qos(), TEXT("RegionQosInstance"));
	}
	return Z_Registration_Info_UScriptStruct_RegionQosInstance.OuterSingleton;
}
template<> QOS_API UScriptStruct* StaticStruct<FRegionQosInstance>()
{
	return FRegionQosInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRegionQosInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Definition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DatacenterOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatacenterOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DatacenterOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegionQosInstance_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegionQosInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_Definition_MetaData[] = {
		{ "Comment", "/** Information about the region */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Information about the region" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRegionQosInstance, Definition), Z_Construct_UScriptStruct_FQosRegionInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_Definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_Definition_MetaData)) }; // 2999806027
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_DatacenterOptions_Inner = { "DatacenterOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDatacenterQosInstance, METADATA_PARAMS(nullptr, 0) }; // 1160900792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_DatacenterOptions_MetaData[] = {
		{ "Comment", "/** Array of all known datacenters and their status */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Array of all known datacenters and their status" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_DatacenterOptions = { "DatacenterOptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRegionQosInstance, DatacenterOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_DatacenterOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_DatacenterOptions_MetaData)) }; // 1160900792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegionQosInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_Definition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_DatacenterOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewProp_DatacenterOptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegionQosInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Qos,
		nullptr,
		&NewStructOps,
		"RegionQosInstance",
		sizeof(FRegionQosInstance),
		alignof(FRegionQosInstance),
		Z_Construct_UScriptStruct_FRegionQosInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionQosInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRegionQosInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionQosInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRegionQosInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_RegionQosInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RegionQosInstance.InnerSingleton, Z_Construct_UScriptStruct_FRegionQosInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RegionQosInstance.InnerSingleton;
	}
	void UQosRegionManager::StaticRegisterNativesUQosRegionManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQosRegionManager);
	UClass* Z_Construct_UClass_UQosRegionManager_NoRegister()
	{
		return UQosRegionManager::StaticClass();
	}
	struct Z_Construct_UClass_UQosRegionManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTestsPerRegion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTestsPerRegion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PingTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PingTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSubspaceBiasOrder_MetaData[];
#endif
		static void NewProp_bEnableSubspaceBiasOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSubspaceBiasOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubspaceDelimiter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubspaceDelimiter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegionDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegionDefinitions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DatacenterDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DatacenterDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DatacenterDefinitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastCheckTimestamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastCheckTimestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Evaluator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Evaluator;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QosEvalResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QosEvalResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QosEvalResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegionOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegionOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceRegionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ForceRegionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRegionForcedViaCommandline_MetaData[];
#endif
		static void NewProp_bRegionForcedViaCommandline_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegionForcedViaCommandline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedRegionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedRegionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQosRegionManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Qos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosRegionManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Main Qos interface for actions related to server quality of service\n */" },
		{ "IncludePath", "QosRegionManager.h" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Main Qos interface for actions related to server quality of service" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosRegionManager_Statics::NewProp_NumTestsPerRegion_MetaData[] = {
		{ "Comment", "/** Number of times to ping a given region using random sampling of available servers */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Number of times to ping a given region using random sampling of available servers" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_NumTestsPerRegion = { "NumTestsPerRegion", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQosRegionManager, NumTestsPerRegion), METADATA_PARAMS(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_NumTestsPerRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_NumTestsPerRegion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosRegionManager_Statics::NewProp_PingTimeout_MetaData[] = {
		{ "Comment", "/** Timeout value for each ping request */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Timeout value for each ping request" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_PingTimeout = { "PingTimeout", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQosRegionManager, PingTimeout), METADATA_PARAMS(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_PingTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_PingTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bEnableSubspaceBiasOrder_MetaData[] = {
		{ "Comment", "/**\n\x09 * Global switch to enable/disable sorting of QoS datacenter results using rules-based comparison,\n\x09 * where subspaces are encountered.\n\x09 */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Global switch to enable/disable sorting of QoS datacenter results using rules-based comparison,\nwhere subspaces are encountered." },
	};
#endif
	void Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bEnableSubspaceBiasOrder_SetBit(void* Obj)
	{
		((UQosRegionManager*)Obj)->bEnableSubspaceBiasOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bEnableSubspaceBiasOrder = { "bEnableSubspaceBiasOrder", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UQosRegionManager), &Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bEnableSubspaceBiasOrder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bEnableSubspaceBiasOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bEnableSubspaceBiasOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosRegionManager_Statics::NewProp_SubspaceDelimiter_MetaData[] = {
		{ "Comment", "/**\n\x09 * Delimiter string that identifies a subspace datacenter ID.\n\x09 * e.g. \"DE_S\" would be a subspace of the \"DE\" subregion, using \"_\" as the delimiter.\n\x09 */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Delimiter string that identifies a subspace datacenter ID.\ne.g. \"DE_S\" would be a subspace of the \"DE\" subregion, using \"_\" as the delimiter." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_SubspaceDelimiter = { "SubspaceDelimiter", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQosRegionManager, SubspaceDelimiter), METADATA_PARAMS(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_SubspaceDelimiter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_SubspaceDelimiter_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionDefinitions_Inner = { "RegionDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQosRegionInfo, METADATA_PARAMS(nullptr, 0) }; // 2999806027
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionDefinitions_MetaData[] = {
		{ "Comment", "/** Metadata about existing regions */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Metadata about existing regions" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionDefinitions = { "RegionDefinitions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQosRegionManager, RegionDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionDefinitions_MetaData)) }; // 2999806027
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_DatacenterDefinitions_Inner = { "DatacenterDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQosDatacenterInfo, METADATA_PARAMS(nullptr, 0) }; // 1450290482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosRegionManager_Statics::NewProp_DatacenterDefinitions_MetaData[] = {
		{ "Comment", "/** Metadata about datacenters within existing regions */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Metadata about datacenters within existing regions" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_DatacenterDefinitions = { "DatacenterDefinitions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQosRegionManager, DatacenterDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_DatacenterDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_DatacenterDefinitions_MetaData)) }; // 1450290482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosRegionManager_Statics::NewProp_LastCheckTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_LastCheckTimestamp = { "LastCheckTimestamp", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQosRegionManager, LastCheckTimestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_LastCheckTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_LastCheckTimestamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosRegionManager_Statics::NewProp_Evaluator_MetaData[] = {
		{ "Comment", "/** Reference to the evaluator for making datacenter determinations (null when not active) */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Reference to the evaluator for making datacenter determinations (null when not active)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_Evaluator = { "Evaluator", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQosRegionManager, Evaluator), Z_Construct_UClass_UQosEvaluator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_Evaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_Evaluator_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_QosEvalResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosRegionManager_Statics::NewProp_QosEvalResult_MetaData[] = {
		{ "Comment", "/** Result of the last datacenter test */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Result of the last datacenter test" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_QosEvalResult = { "QosEvalResult", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQosRegionManager, QosEvalResult), Z_Construct_UEnum_Qos_EQosCompletionResult, METADATA_PARAMS(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_QosEvalResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_QosEvalResult_MetaData)) }; // 57424365
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionOptions_Inner = { "RegionOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRegionQosInstance, METADATA_PARAMS(nullptr, 0) }; // 3700207779
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionOptions_MetaData[] = {
		{ "Comment", "/** Array of all known regions and the datacenters in them */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Array of all known regions and the datacenters in them" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionOptions = { "RegionOptions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQosRegionManager, RegionOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionOptions_MetaData)) }; // 3700207779
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosRegionManager_Statics::NewProp_ForceRegionId_MetaData[] = {
		{ "Comment", "/** Value forced to be the region (development) */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Value forced to be the region (development)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_ForceRegionId = { "ForceRegionId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQosRegionManager, ForceRegionId), METADATA_PARAMS(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_ForceRegionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_ForceRegionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bRegionForcedViaCommandline_MetaData[] = {
		{ "Comment", "/** Was the region forced via commandline */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Was the region forced via commandline" },
	};
#endif
	void Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bRegionForcedViaCommandline_SetBit(void* Obj)
	{
		((UQosRegionManager*)Obj)->bRegionForcedViaCommandline = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bRegionForcedViaCommandline = { "bRegionForcedViaCommandline", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UQosRegionManager), &Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bRegionForcedViaCommandline_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bRegionForcedViaCommandline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bRegionForcedViaCommandline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQosRegionManager_Statics::NewProp_SelectedRegionId_MetaData[] = {
		{ "Comment", "/** Value set by the game to be the current region */" },
		{ "ModuleRelativePath", "Public/QosRegionManager.h" },
		{ "ToolTip", "Value set by the game to be the current region" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQosRegionManager_Statics::NewProp_SelectedRegionId = { "SelectedRegionId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQosRegionManager, SelectedRegionId), METADATA_PARAMS(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_SelectedRegionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::NewProp_SelectedRegionId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQosRegionManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_NumTestsPerRegion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_PingTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bEnableSubspaceBiasOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_SubspaceDelimiter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_DatacenterDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_DatacenterDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_LastCheckTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_Evaluator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_QosEvalResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_QosEvalResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_RegionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_ForceRegionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_bRegionForcedViaCommandline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQosRegionManager_Statics::NewProp_SelectedRegionId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQosRegionManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQosRegionManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQosRegionManager_Statics::ClassParams = {
		&UQosRegionManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQosRegionManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQosRegionManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQosRegionManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQosRegionManager()
	{
		if (!Z_Registration_Info_UClass_UQosRegionManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQosRegionManager.OuterSingleton, Z_Construct_UClass_UQosRegionManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQosRegionManager.OuterSingleton;
	}
	template<> QOS_API UClass* StaticClass<UQosRegionManager>()
	{
		return UQosRegionManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQosRegionManager);
	UQosRegionManager::~UQosRegionManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics::EnumInfo[] = {
		{ EQosDatacenterResult_StaticEnum, TEXT("EQosDatacenterResult"), &Z_Registration_Info_UEnum_EQosDatacenterResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4154580110U) },
		{ EQosCompletionResult_StaticEnum, TEXT("EQosCompletionResult"), &Z_Registration_Info_UEnum_EQosCompletionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 57424365U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics::ScriptStructInfo[] = {
		{ FQosSubspaceComparisonParams::StaticStruct, Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics::NewStructOps, TEXT("QosSubspaceComparisonParams"), &Z_Registration_Info_UScriptStruct_QosSubspaceComparisonParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQosSubspaceComparisonParams), 8746786U) },
		{ FQosPingServerInfo::StaticStruct, Z_Construct_UScriptStruct_FQosPingServerInfo_Statics::NewStructOps, TEXT("QosPingServerInfo"), &Z_Registration_Info_UScriptStruct_QosPingServerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQosPingServerInfo), 902362765U) },
		{ FQosDatacenterInfo::StaticStruct, Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics::NewStructOps, TEXT("QosDatacenterInfo"), &Z_Registration_Info_UScriptStruct_QosDatacenterInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQosDatacenterInfo), 1450290482U) },
		{ FQosRegionInfo::StaticStruct, Z_Construct_UScriptStruct_FQosRegionInfo_Statics::NewStructOps, TEXT("QosRegionInfo"), &Z_Registration_Info_UScriptStruct_QosRegionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQosRegionInfo), 2999806027U) },
		{ FDatacenterQosInstance::StaticStruct, Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics::NewStructOps, TEXT("DatacenterQosInstance"), &Z_Registration_Info_UScriptStruct_DatacenterQosInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatacenterQosInstance), 1160900792U) },
		{ FRegionQosInstance::StaticStruct, Z_Construct_UScriptStruct_FRegionQosInstance_Statics::NewStructOps, TEXT("RegionQosInstance"), &Z_Registration_Info_UScriptStruct_RegionQosInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRegionQosInstance), 3700207779U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQosRegionManager, UQosRegionManager::StaticClass, TEXT("UQosRegionManager"), &Z_Registration_Info_UClass_UQosRegionManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQosRegionManager), 2097072285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_3541975368(TEXT("/Script/Qos"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
