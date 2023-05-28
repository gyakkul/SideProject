// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkPredictionConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkPredictionConfig() {}
// Cross Module References
	NETWORKPREDICTION_API UEnum* Z_Construct_UEnum_NetworkPrediction_ENetworkLOD();
	NETWORKPREDICTION_API UEnum* Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionTickingPolicy();
	UPackage* Z_Construct_UPackage__Script_NetworkPrediction();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENetworkPredictionTickingPolicy;
	static UEnum* ENetworkPredictionTickingPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENetworkPredictionTickingPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENetworkPredictionTickingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionTickingPolicy, (UObject*)Z_Construct_UPackage__Script_NetworkPrediction(), TEXT("ENetworkPredictionTickingPolicy"));
		}
		return Z_Registration_Info_UEnum_ENetworkPredictionTickingPolicy.OuterSingleton;
	}
	template<> NETWORKPREDICTION_API UEnum* StaticEnum<ENetworkPredictionTickingPolicy>()
	{
		return ENetworkPredictionTickingPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionTickingPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionTickingPolicy_Statics::Enumerators[] = {
		{ "ENetworkPredictionTickingPolicy::Independent", (int64)ENetworkPredictionTickingPolicy::Independent },
		{ "ENetworkPredictionTickingPolicy::Fixed", (int64)ENetworkPredictionTickingPolicy::Fixed },
		{ "ENetworkPredictionTickingPolicy::All", (int64)ENetworkPredictionTickingPolicy::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionTickingPolicy_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "// Everyone ticks at same fixed rate. Supports group rollback and physics.\n" },
		{ "All.Hidden", "" },
		{ "All.Name", "ENetworkPredictionTickingPolicy::All" },
		{ "All.ToolTip", "Everyone ticks at same fixed rate. Supports group rollback and physics." },
		{ "Comment", "// Must be kept in sync with ENP_TickingPolicy\n" },
		{ "Fixed.Comment", "// Client ticks at local frame rate. Server ticks clients independently at client input cmd rate.\n" },
		{ "Fixed.Name", "ENetworkPredictionTickingPolicy::Fixed" },
		{ "Fixed.ToolTip", "Client ticks at local frame rate. Server ticks clients independently at client input cmd rate." },
		{ "Independent.Name", "ENetworkPredictionTickingPolicy::Independent" },
		{ "ModuleRelativePath", "Public/NetworkPredictionConfig.h" },
		{ "ToolTip", "Must be kept in sync with ENP_TickingPolicy" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionTickingPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NetworkPrediction,
		nullptr,
		"ENetworkPredictionTickingPolicy",
		"ENetworkPredictionTickingPolicy",
		Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionTickingPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionTickingPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionTickingPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionTickingPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionTickingPolicy()
	{
		if (!Z_Registration_Info_UEnum_ENetworkPredictionTickingPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENetworkPredictionTickingPolicy.InnerSingleton, Z_Construct_UEnum_NetworkPrediction_ENetworkPredictionTickingPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENetworkPredictionTickingPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENetworkLOD;
	static UEnum* ENetworkLOD_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENetworkLOD.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENetworkLOD.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NetworkPrediction_ENetworkLOD, (UObject*)Z_Construct_UPackage__Script_NetworkPrediction(), TEXT("ENetworkLOD"));
		}
		return Z_Registration_Info_UEnum_ENetworkLOD.OuterSingleton;
	}
	template<> NETWORKPREDICTION_API UEnum* StaticEnum<ENetworkLOD>()
	{
		return ENetworkLOD_StaticEnum();
	}
	struct Z_Construct_UEnum_NetworkPrediction_ENetworkLOD_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NetworkPrediction_ENetworkLOD_Statics::Enumerators[] = {
		{ "ENetworkLOD::Interpolated", (int64)ENetworkLOD::Interpolated },
		{ "ENetworkLOD::SimExtrapolate", (int64)ENetworkLOD::SimExtrapolate },
		{ "ENetworkLOD::ForwardPredict", (int64)ENetworkLOD::ForwardPredict },
		{ "ENetworkLOD::All", (int64)ENetworkLOD::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NetworkPrediction_ENetworkLOD_Statics::Enum_MetaDataParams[] = {
		{ "All.Hidden", "" },
		{ "All.Name", "ENetworkLOD::All" },
		{ "Comment", "// Must be kept in sync with ENP_NetworkLOD\n" },
		{ "ForwardPredict.Comment", "// Not currently implemented\n" },
		{ "ForwardPredict.Name", "ENetworkLOD::ForwardPredict" },
		{ "ForwardPredict.ToolTip", "Not currently implemented" },
		{ "Interpolated.Name", "ENetworkLOD::Interpolated" },
		{ "ModuleRelativePath", "Public/NetworkPredictionConfig.h" },
		{ "SimExtrapolate.Hidden", "" },
		{ "SimExtrapolate.Name", "ENetworkLOD::SimExtrapolate" },
		{ "ToolTip", "Must be kept in sync with ENP_NetworkLOD" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NetworkPrediction_ENetworkLOD_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NetworkPrediction,
		nullptr,
		"ENetworkLOD",
		"ENetworkLOD",
		Z_Construct_UEnum_NetworkPrediction_ENetworkLOD_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NetworkPrediction_ENetworkLOD_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NetworkPrediction_ENetworkLOD_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NetworkPrediction_ENetworkLOD_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NetworkPrediction_ENetworkLOD()
	{
		if (!Z_Registration_Info_UEnum_ENetworkLOD.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENetworkLOD.InnerSingleton, Z_Construct_UEnum_NetworkPrediction_ENetworkLOD_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENetworkLOD.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionConfig_h_Statics::EnumInfo[] = {
		{ ENetworkPredictionTickingPolicy_StaticEnum, TEXT("ENetworkPredictionTickingPolicy"), &Z_Registration_Info_UEnum_ENetworkPredictionTickingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1722051631U) },
		{ ENetworkLOD_StaticEnum, TEXT("ENetworkLOD"), &Z_Registration_Info_UEnum_ENetworkLOD, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2057376198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionConfig_h_3914440879(TEXT("/Script/NetworkPrediction"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
