// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MQTTProtocol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMQTTProtocol() {}
// Cross Module References
	MQTTCORE_API UEnum* Z_Construct_UEnum_MQTTCore_EMQTTConnectReturnCode();
	MQTTCORE_API UEnum* Z_Construct_UEnum_MQTTCore_EMQTTSubscribeReturnCode();
	UPackage* Z_Construct_UPackage__Script_MQTTCore();
// End Cross Module References
	static_assert(!int64(EMQTTConnectReturnCode::Accepted)||!int64(EMQTTConnectReturnCode::RefusedProtocolVersion)||!int64(EMQTTConnectReturnCode::RefusedIdentifierRejected)||!int64(EMQTTConnectReturnCode::RefusedServerUnavailable)||!int64(EMQTTConnectReturnCode::RefusedBadUsernamePassword)||!int64(EMQTTConnectReturnCode::RefusedNotAuthorized)||!int64(EMQTTConnectReturnCode::AlreadyConnected)||!int64(EMQTTConnectReturnCode::InvalidURL)||!int64(EMQTTConnectReturnCode::SocketError), "'EMQTTConnectReturnCode' does not have a 0 entry!(This is a problem when the enum is initalized by default)");
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMQTTConnectReturnCode;
	static UEnum* EMQTTConnectReturnCode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMQTTConnectReturnCode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMQTTConnectReturnCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MQTTCore_EMQTTConnectReturnCode, (UObject*)Z_Construct_UPackage__Script_MQTTCore(), TEXT("EMQTTConnectReturnCode"));
		}
		return Z_Registration_Info_UEnum_EMQTTConnectReturnCode.OuterSingleton;
	}
	template<> MQTTCORE_API UEnum* StaticEnum<EMQTTConnectReturnCode>()
	{
		return EMQTTConnectReturnCode_StaticEnum();
	}
	struct Z_Construct_UEnum_MQTTCore_EMQTTConnectReturnCode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MQTTCore_EMQTTConnectReturnCode_Statics::Enumerators[] = {
		{ "EMQTTConnectReturnCode::Accepted", (int64)EMQTTConnectReturnCode::Accepted },
		{ "EMQTTConnectReturnCode::RefusedProtocolVersion", (int64)EMQTTConnectReturnCode::RefusedProtocolVersion },
		{ "EMQTTConnectReturnCode::RefusedIdentifierRejected", (int64)EMQTTConnectReturnCode::RefusedIdentifierRejected },
		{ "EMQTTConnectReturnCode::RefusedServerUnavailable", (int64)EMQTTConnectReturnCode::RefusedServerUnavailable },
		{ "EMQTTConnectReturnCode::RefusedBadUsernamePassword", (int64)EMQTTConnectReturnCode::RefusedBadUsernamePassword },
		{ "EMQTTConnectReturnCode::RefusedNotAuthorized", (int64)EMQTTConnectReturnCode::RefusedNotAuthorized },
		{ "EMQTTConnectReturnCode::AlreadyConnected", (int64)EMQTTConnectReturnCode::AlreadyConnected },
		{ "EMQTTConnectReturnCode::InvalidURL", (int64)EMQTTConnectReturnCode::InvalidURL },
		{ "EMQTTConnectReturnCode::SocketError", (int64)EMQTTConnectReturnCode::SocketError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MQTTCore_EMQTTConnectReturnCode_Statics::Enum_MetaDataParams[] = {
		{ "Accepted.Comment", "/** Connection accepted. */" },
		{ "Accepted.Name", "EMQTTConnectReturnCode::Accepted" },
		{ "Accepted.ToolTip", "Connection accepted." },
		{ "AlreadyConnected.Comment", "/** The Client is already connected to the Server. */" },
		{ "AlreadyConnected.Name", "EMQTTConnectReturnCode::AlreadyConnected" },
		{ "AlreadyConnected.ToolTip", "The Client is already connected to the Server." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** MQTT v3.1.1 */" },
		{ "InvalidURL.Comment", "/** The provided URL is malformed. */" },
		{ "InvalidURL.Name", "EMQTTConnectReturnCode::InvalidURL" },
		{ "InvalidURL.ToolTip", "The provided URL is malformed." },
		{ "ModuleRelativePath", "Public/MQTTProtocol.h" },
		{ "RefusedBadUsernamePassword.Comment", "/** The data in the user name or password is malformed. */" },
		{ "RefusedBadUsernamePassword.Name", "EMQTTConnectReturnCode::RefusedBadUsernamePassword" },
		{ "RefusedBadUsernamePassword.ToolTip", "The data in the user name or password is malformed." },
		{ "RefusedIdentifierRejected.Comment", "/** The Client identifier is correct UTF-8 but not allowed by the Server. */" },
		{ "RefusedIdentifierRejected.Name", "EMQTTConnectReturnCode::RefusedIdentifierRejected" },
		{ "RefusedIdentifierRejected.ToolTip", "The Client identifier is correct UTF-8 but not allowed by the Server." },
		{ "RefusedNotAuthorized.Comment", "/** The Client is not authorized to connect. */" },
		{ "RefusedNotAuthorized.Name", "EMQTTConnectReturnCode::RefusedNotAuthorized" },
		{ "RefusedNotAuthorized.ToolTip", "The Client is not authorized to connect." },
		{ "RefusedProtocolVersion.Comment", "/** The Server does not the support the level of the MQTT protocol requested by the Client. */" },
		{ "RefusedProtocolVersion.Name", "EMQTTConnectReturnCode::RefusedProtocolVersion" },
		{ "RefusedProtocolVersion.ToolTip", "The Server does not the support the level of the MQTT protocol requested by the Client." },
		{ "RefusedServerUnavailable.Comment", "/** The Network Connection has been made but the MQTT service is unavailable. */" },
		{ "RefusedServerUnavailable.Name", "EMQTTConnectReturnCode::RefusedServerUnavailable" },
		{ "RefusedServerUnavailable.ToolTip", "The Network Connection has been made but the MQTT service is unavailable." },
		{ "SocketError.Comment", "/** Socket error. */" },
		{ "SocketError.Name", "EMQTTConnectReturnCode::SocketError" },
		{ "SocketError.ToolTip", "Socket error." },
		{ "ToolTip", "MQTT v3.1.1" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MQTTCore_EMQTTConnectReturnCode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MQTTCore,
		nullptr,
		"EMQTTConnectReturnCode",
		"EMQTTConnectReturnCode",
		Z_Construct_UEnum_MQTTCore_EMQTTConnectReturnCode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MQTTCore_EMQTTConnectReturnCode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MQTTCore_EMQTTConnectReturnCode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MQTTCore_EMQTTConnectReturnCode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MQTTCore_EMQTTConnectReturnCode()
	{
		if (!Z_Registration_Info_UEnum_EMQTTConnectReturnCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMQTTConnectReturnCode.InnerSingleton, Z_Construct_UEnum_MQTTCore_EMQTTConnectReturnCode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMQTTConnectReturnCode.InnerSingleton;
	}
	static_assert(!int64(EMQTTSubscribeReturnCode::Success_QoS0)||!int64(EMQTTSubscribeReturnCode::Success_QoS1)||!int64(EMQTTSubscribeReturnCode::Success_QoS2)||!int64(EMQTTSubscribeReturnCode::Failure), "'EMQTTSubscribeReturnCode' does not have a 0 entry!(This is a problem when the enum is initalized by default)");
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMQTTSubscribeReturnCode;
	static UEnum* EMQTTSubscribeReturnCode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMQTTSubscribeReturnCode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMQTTSubscribeReturnCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MQTTCore_EMQTTSubscribeReturnCode, (UObject*)Z_Construct_UPackage__Script_MQTTCore(), TEXT("EMQTTSubscribeReturnCode"));
		}
		return Z_Registration_Info_UEnum_EMQTTSubscribeReturnCode.OuterSingleton;
	}
	template<> MQTTCORE_API UEnum* StaticEnum<EMQTTSubscribeReturnCode>()
	{
		return EMQTTSubscribeReturnCode_StaticEnum();
	}
	struct Z_Construct_UEnum_MQTTCore_EMQTTSubscribeReturnCode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MQTTCore_EMQTTSubscribeReturnCode_Statics::Enumerators[] = {
		{ "EMQTTSubscribeReturnCode::Success_QoS0", (int64)EMQTTSubscribeReturnCode::Success_QoS0 },
		{ "EMQTTSubscribeReturnCode::Success_QoS1", (int64)EMQTTSubscribeReturnCode::Success_QoS1 },
		{ "EMQTTSubscribeReturnCode::Success_QoS2", (int64)EMQTTSubscribeReturnCode::Success_QoS2 },
		{ "EMQTTSubscribeReturnCode::Failure", (int64)EMQTTSubscribeReturnCode::Failure },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MQTTCore_EMQTTSubscribeReturnCode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** MQTT v3.1.1 */" },
		{ "Failure.Comment", "/* SubscribeAcknowledge */" },
		{ "Failure.Name", "EMQTTSubscribeReturnCode::Failure" },
		{ "Failure.ToolTip", "SubscribeAcknowledge" },
		{ "ModuleRelativePath", "Public/MQTTProtocol.h" },
		{ "Success_QoS0.Name", "EMQTTSubscribeReturnCode::Success_QoS0" },
		{ "Success_QoS1.Comment", "/* SubscribeAcknowledge */" },
		{ "Success_QoS1.Name", "EMQTTSubscribeReturnCode::Success_QoS1" },
		{ "Success_QoS1.ToolTip", "SubscribeAcknowledge" },
		{ "Success_QoS2.Comment", "/* SubscribeAcknowledge */" },
		{ "Success_QoS2.Name", "EMQTTSubscribeReturnCode::Success_QoS2" },
		{ "Success_QoS2.ToolTip", "SubscribeAcknowledge" },
		{ "ToolTip", "MQTT v3.1.1" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MQTTCore_EMQTTSubscribeReturnCode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MQTTCore,
		nullptr,
		"EMQTTSubscribeReturnCode",
		"EMQTTSubscribeReturnCode",
		Z_Construct_UEnum_MQTTCore_EMQTTSubscribeReturnCode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MQTTCore_EMQTTSubscribeReturnCode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MQTTCore_EMQTTSubscribeReturnCode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MQTTCore_EMQTTSubscribeReturnCode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MQTTCore_EMQTTSubscribeReturnCode()
	{
		if (!Z_Registration_Info_UEnum_EMQTTSubscribeReturnCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMQTTSubscribeReturnCode.InnerSingleton, Z_Construct_UEnum_MQTTCore_EMQTTSubscribeReturnCode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMQTTSubscribeReturnCode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTProtocol_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTProtocol_h_Statics::EnumInfo[] = {
		{ EMQTTConnectReturnCode_StaticEnum, TEXT("EMQTTConnectReturnCode"), &Z_Registration_Info_UEnum_EMQTTConnectReturnCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2257584140U) },
		{ EMQTTSubscribeReturnCode_StaticEnum, TEXT("EMQTTSubscribeReturnCode"), &Z_Registration_Info_UEnum_EMQTTSubscribeReturnCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3197732961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTProtocol_h_465689888(TEXT("/Script/MQTTCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTProtocol_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTProtocol_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
