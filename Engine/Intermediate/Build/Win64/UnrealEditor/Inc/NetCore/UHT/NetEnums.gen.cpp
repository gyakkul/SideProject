// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/Net/Core/Connection/NetEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetEnums() {}
// Cross Module References
	NETCORE_API UEnum* Z_Construct_UEnum_NetCore_ENetworkFailure();
	UPackage* Z_Construct_UPackage__Script_NetCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENetworkFailure;
	static UEnum* ENetworkFailure_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NetCore_ENetworkFailure, (UObject*)Z_Construct_UPackage__Script_NetCore(), TEXT("ENetworkFailure"));
		}
		return Z_Registration_Info_UEnum_ENetworkFailure.OuterSingleton;
	}
	template<> NETCORE_API UEnum* StaticEnum<ENetworkFailure::Type>()
	{
		return ENetworkFailure_StaticEnum();
	}
	struct Z_Construct_UEnum_NetCore_ENetworkFailure_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NetCore_ENetworkFailure_Statics::Enumerators[] = {
		{ "ENetworkFailure::NetDriverAlreadyExists", (int64)ENetworkFailure::NetDriverAlreadyExists },
		{ "ENetworkFailure::NetDriverCreateFailure", (int64)ENetworkFailure::NetDriverCreateFailure },
		{ "ENetworkFailure::NetDriverListenFailure", (int64)ENetworkFailure::NetDriverListenFailure },
		{ "ENetworkFailure::ConnectionLost", (int64)ENetworkFailure::ConnectionLost },
		{ "ENetworkFailure::ConnectionTimeout", (int64)ENetworkFailure::ConnectionTimeout },
		{ "ENetworkFailure::FailureReceived", (int64)ENetworkFailure::FailureReceived },
		{ "ENetworkFailure::OutdatedClient", (int64)ENetworkFailure::OutdatedClient },
		{ "ENetworkFailure::OutdatedServer", (int64)ENetworkFailure::OutdatedServer },
		{ "ENetworkFailure::PendingConnectionFailure", (int64)ENetworkFailure::PendingConnectionFailure },
		{ "ENetworkFailure::NetGuidMismatch", (int64)ENetworkFailure::NetGuidMismatch },
		{ "ENetworkFailure::NetChecksumMismatch", (int64)ENetworkFailure::NetChecksumMismatch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NetCore_ENetworkFailure_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Types of network failures broadcast from the engine */" },
		{ "ConnectionLost.Comment", "/** A connection to the net driver has been lost */" },
		{ "ConnectionLost.Name", "ENetworkFailure::ConnectionLost" },
		{ "ConnectionLost.ToolTip", "A connection to the net driver has been lost" },
		{ "ConnectionTimeout.Comment", "/** A connection to the net driver has timed out */" },
		{ "ConnectionTimeout.Name", "ENetworkFailure::ConnectionTimeout" },
		{ "ConnectionTimeout.ToolTip", "A connection to the net driver has timed out" },
		{ "FailureReceived.Comment", "/** The net driver received an NMT_Failure message */" },
		{ "FailureReceived.Name", "ENetworkFailure::FailureReceived" },
		{ "FailureReceived.ToolTip", "The net driver received an NMT_Failure message" },
		{ "ModuleRelativePath", "Public/Net/Core/Connection/NetEnums.h" },
		{ "NetChecksumMismatch.Comment", "/** Network checksum mismatch */" },
		{ "NetChecksumMismatch.Name", "ENetworkFailure::NetChecksumMismatch" },
		{ "NetChecksumMismatch.ToolTip", "Network checksum mismatch" },
		{ "NetDriverAlreadyExists.Comment", "/** A relevant net driver has already been created for this service */" },
		{ "NetDriverAlreadyExists.Name", "ENetworkFailure::NetDriverAlreadyExists" },
		{ "NetDriverAlreadyExists.ToolTip", "A relevant net driver has already been created for this service" },
		{ "NetDriverCreateFailure.Comment", "/** The net driver creation failed */" },
		{ "NetDriverCreateFailure.Name", "ENetworkFailure::NetDriverCreateFailure" },
		{ "NetDriverCreateFailure.ToolTip", "The net driver creation failed" },
		{ "NetDriverListenFailure.Comment", "/** The net driver failed its Listen() call */" },
		{ "NetDriverListenFailure.Name", "ENetworkFailure::NetDriverListenFailure" },
		{ "NetDriverListenFailure.ToolTip", "The net driver failed its Listen() call" },
		{ "NetGuidMismatch.Comment", "/** NetGuid mismatch */" },
		{ "NetGuidMismatch.Name", "ENetworkFailure::NetGuidMismatch" },
		{ "NetGuidMismatch.ToolTip", "NetGuid mismatch" },
		{ "OutdatedClient.Comment", "/** The client needs to upgrade their game */" },
		{ "OutdatedClient.Name", "ENetworkFailure::OutdatedClient" },
		{ "OutdatedClient.ToolTip", "The client needs to upgrade their game" },
		{ "OutdatedServer.Comment", "/** The server needs to upgrade their game */" },
		{ "OutdatedServer.Name", "ENetworkFailure::OutdatedServer" },
		{ "OutdatedServer.ToolTip", "The server needs to upgrade their game" },
		{ "PendingConnectionFailure.Comment", "/** There was an error during connection to the game */" },
		{ "PendingConnectionFailure.Name", "ENetworkFailure::PendingConnectionFailure" },
		{ "PendingConnectionFailure.ToolTip", "There was an error during connection to the game" },
		{ "ToolTip", "Types of network failures broadcast from the engine" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NetCore_ENetworkFailure_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NetCore,
		nullptr,
		"ENetworkFailure",
		"ENetworkFailure::Type",
		Z_Construct_UEnum_NetCore_ENetworkFailure_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NetCore_ENetworkFailure_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_NetCore_ENetworkFailure_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NetCore_ENetworkFailure_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NetCore_ENetworkFailure()
	{
		if (!Z_Registration_Info_UEnum_ENetworkFailure.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENetworkFailure.InnerSingleton, Z_Construct_UEnum_NetCore_ENetworkFailure_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENetworkFailure.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetEnums_h_Statics::EnumInfo[] = {
		{ ENetworkFailure_StaticEnum, TEXT("ENetworkFailure"), &Z_Registration_Info_UEnum_ENetworkFailure, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2906493918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetEnums_h_2376532491(TEXT("/Script/NetCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Net_Core_Public_Net_Core_Connection_NetEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
