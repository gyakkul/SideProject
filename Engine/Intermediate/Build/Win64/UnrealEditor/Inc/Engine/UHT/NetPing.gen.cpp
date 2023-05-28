// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Net/NetPing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetPing() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPingAverageType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPingType();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPingType;
	static UEnum* EPingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPingType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPingType"));
		}
		return Z_Registration_Info_UEnum_EPingType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPingType>()
	{
		return EPingType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPingType_Statics::Enumerators[] = {
		{ "EPingType::None", (int64)EPingType::None },
		{ "EPingType::RoundTrip", (int64)EPingType::RoundTrip },
		{ "EPingType::RoundTripExclFrame", (int64)EPingType::RoundTripExclFrame },
		{ "EPingType::ICMP", (int64)EPingType::ICMP },
		{ "EPingType::UDPQoS", (int64)EPingType::UDPQoS },
		{ "EPingType::Max", (int64)EPingType::Max },
		{ "EPingType::Count", (int64)EPingType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPingType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Flags specifying different types of ping.\n */" },
		{ "Count.Name", "EPingType::Count" },
		{ "ICMP.Comment", "// Round Trip ping which may attempt to exclude server frame time delay (inaccurate)\n" },
		{ "ICMP.Name", "EPingType::ICMP" },
		{ "ICMP.ToolTip", "Round Trip ping which may attempt to exclude server frame time delay (inaccurate)" },
		{ "Max.Comment", "// UDP based ping used with QoS ping host on server (more accurate than ICMP)\n" },
		{ "Max.Name", "EPingType::Max" },
		{ "Max.ToolTip", "UDP based ping used with QoS ping host on server (more accurate than ICMP)" },
		{ "ModuleRelativePath", "Public/Net/NetPing.h" },
		{ "None.Name", "EPingType::None" },
		{ "RoundTrip.Name", "EPingType::RoundTrip" },
		{ "RoundTripExclFrame.Comment", "// Round Trip ping which includes any server/client frame time delay\n" },
		{ "RoundTripExclFrame.Name", "EPingType::RoundTripExclFrame" },
		{ "RoundTripExclFrame.ToolTip", "Round Trip ping which includes any server/client frame time delay" },
		{ "ToolTip", "Flags specifying different types of ping." },
		{ "UDPQoS.Comment", "// Standard ICMP ping (GameNetDriver client only, accuracy affected by network ICMP throttling)\n" },
		{ "UDPQoS.Name", "EPingType::UDPQoS" },
		{ "UDPQoS.ToolTip", "Standard ICMP ping (GameNetDriver client only, accuracy affected by network ICMP throttling)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPingType",
		"EPingType",
		Z_Construct_UEnum_Engine_EPingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPingType()
	{
		if (!Z_Registration_Info_UEnum_EPingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPingType.InnerSingleton, Z_Construct_UEnum_Engine_EPingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPingType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPingAverageType;
	static UEnum* EPingAverageType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPingAverageType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPingAverageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPingAverageType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPingAverageType"));
		}
		return Z_Registration_Info_UEnum_EPingAverageType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPingAverageType>()
	{
		return EPingAverageType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPingAverageType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPingAverageType_Statics::Enumerators[] = {
		{ "EPingAverageType::None", (int64)EPingAverageType::None },
		{ "EPingAverageType::MovingAverage", (int64)EPingAverageType::MovingAverage },
		{ "EPingAverageType::PlayerStateAvg", (int64)EPingAverageType::PlayerStateAvg },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPingAverageType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * The type of averaging to perform on ping values\n */" },
		{ "ModuleRelativePath", "Public/Net/NetPing.h" },
		{ "MovingAverage.Comment", "// No averaging\n" },
		{ "MovingAverage.Name", "EPingAverageType::MovingAverage" },
		{ "MovingAverage.ToolTip", "No averaging" },
		{ "None.Name", "EPingAverageType::None" },
		{ "PlayerStateAvg.Comment", "// Moving average of the last 4 seconds of ping data\n" },
		{ "PlayerStateAvg.Name", "EPingAverageType::PlayerStateAvg" },
		{ "PlayerStateAvg.ToolTip", "Moving average of the last 4 seconds of ping data" },
		{ "ToolTip", "The type of averaging to perform on ping values" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPingAverageType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPingAverageType",
		"EPingAverageType",
		Z_Construct_UEnum_Engine_EPingAverageType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPingAverageType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPingAverageType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPingAverageType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPingAverageType()
	{
		if (!Z_Registration_Info_UEnum_EPingAverageType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPingAverageType.InnerSingleton, Z_Construct_UEnum_Engine_EPingAverageType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPingAverageType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetPing_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetPing_h_Statics::EnumInfo[] = {
		{ EPingType_StaticEnum, TEXT("EPingType"), &Z_Registration_Info_UEnum_EPingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1160594674U) },
		{ EPingAverageType_StaticEnum, TEXT("EPingAverageType"), &Z_Registration_Info_UEnum_EPingAverageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3591315210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetPing_h_3380932761(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetPing_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_NetPing_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
