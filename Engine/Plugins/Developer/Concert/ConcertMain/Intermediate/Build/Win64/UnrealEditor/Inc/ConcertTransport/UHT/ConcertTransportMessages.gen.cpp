// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertTransportMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertTransportMessages() {}
// Cross Module References
	CONCERTTRANSPORT_API UEnum* Z_Construct_UEnum_ConcertTransport_EConcertMessageFlags();
	CONCERTTRANSPORT_API UEnum* Z_Construct_UEnum_ConcertTransport_EConcertMessageVersion();
	CONCERTTRANSPORT_API UEnum* Z_Construct_UEnum_ConcertTransport_EConcertReliableHandshakeState();
	CONCERTTRANSPORT_API UEnum* Z_Construct_UEnum_ConcertTransport_EConcertResponseCode();
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertAckData();
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertEndpointClosedData();
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent();
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertEventData();
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertKeepAlive();
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertMessageData();
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertReliableHandshakeData();
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertRequestData();
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertResponseData();
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSendResendPending();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_ConcertTransport();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertMessageFlags;
	static UEnum* EConcertMessageFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertMessageFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertMessageFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertTransport_EConcertMessageFlags, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("EConcertMessageFlags"));
		}
		return Z_Registration_Info_UEnum_EConcertMessageFlags.OuterSingleton;
	}
	template<> CONCERTTRANSPORT_API UEnum* StaticEnum<EConcertMessageFlags>()
	{
		return EConcertMessageFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertTransport_EConcertMessageFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertTransport_EConcertMessageFlags_Statics::Enumerators[] = {
		{ "EConcertMessageFlags::None", (int64)EConcertMessageFlags::None },
		{ "EConcertMessageFlags::ReliableOrdered", (int64)EConcertMessageFlags::ReliableOrdered },
		{ "EConcertMessageFlags::UniqueId", (int64)EConcertMessageFlags::UniqueId },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertTransport_EConcertMessageFlags_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Message Flags when sent */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "None.Comment", "/** No special flags */" },
		{ "None.Name", "EConcertMessageFlags::None" },
		{ "None.ToolTip", "No special flags" },
		{ "ReliableOrdered.Comment", "/** Guarantee that this message is received by the client(s) and processed in the order they were sent */" },
		{ "ReliableOrdered.Name", "EConcertMessageFlags::ReliableOrdered" },
		{ "ReliableOrdered.ToolTip", "Guarantee that this message is received by the client(s) and processed in the order they were sent" },
		{ "ToolTip", "Message Flags when sent" },
		{ "UniqueId.Comment", "/** Message sent with this flag should be uniquely identifiable across clients. */" },
		{ "UniqueId.Name", "EConcertMessageFlags::UniqueId" },
		{ "UniqueId.ToolTip", "Message sent with this flag should be uniquely identifiable across clients." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertTransport_EConcertMessageFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertTransport,
		nullptr,
		"EConcertMessageFlags",
		"EConcertMessageFlags",
		Z_Construct_UEnum_ConcertTransport_EConcertMessageFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertTransport_EConcertMessageFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertTransport_EConcertMessageFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertTransport_EConcertMessageFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertTransport_EConcertMessageFlags()
	{
		if (!Z_Registration_Info_UEnum_EConcertMessageFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertMessageFlags.InnerSingleton, Z_Construct_UEnum_ConcertTransport_EConcertMessageFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertMessageFlags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertResponseCode;
	static UEnum* EConcertResponseCode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertResponseCode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertResponseCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertTransport_EConcertResponseCode, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("EConcertResponseCode"));
		}
		return Z_Registration_Info_UEnum_EConcertResponseCode.OuterSingleton;
	}
	template<> CONCERTTRANSPORT_API UEnum* StaticEnum<EConcertResponseCode>()
	{
		return EConcertResponseCode_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertTransport_EConcertResponseCode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertTransport_EConcertResponseCode_Statics::Enumerators[] = {
		{ "EConcertResponseCode::Pending", (int64)EConcertResponseCode::Pending },
		{ "EConcertResponseCode::Success", (int64)EConcertResponseCode::Success },
		{ "EConcertResponseCode::Failed", (int64)EConcertResponseCode::Failed },
		{ "EConcertResponseCode::InvalidRequest", (int64)EConcertResponseCode::InvalidRequest },
		{ "EConcertResponseCode::UnknownRequest", (int64)EConcertResponseCode::UnknownRequest },
		{ "EConcertResponseCode::TimedOut", (int64)EConcertResponseCode::TimedOut },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertTransport_EConcertResponseCode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Response codes to a sent request */" },
		{ "Failed.Comment", "/** The request data was valid, but the request failed. A response was generated. */" },
		{ "Failed.Name", "EConcertResponseCode::Failed" },
		{ "Failed.ToolTip", "The request data was valid, but the request failed. A response was generated." },
		{ "InvalidRequest.Comment", "/** The request data was invalid. No response was generated. */" },
		{ "InvalidRequest.Name", "EConcertResponseCode::InvalidRequest" },
		{ "InvalidRequest.ToolTip", "The request data was invalid. No response was generated." },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "Pending.Comment", "/** The response code is still pending. */" },
		{ "Pending.Name", "EConcertResponseCode::Pending" },
		{ "Pending.ToolTip", "The response code is still pending." },
		{ "Success.Comment", "/** The request data was valid. A response was generated. */" },
		{ "Success.Name", "EConcertResponseCode::Success" },
		{ "Success.ToolTip", "The request data was valid. A response was generated." },
		{ "TimedOut.Comment", "/** The request failed to reach the target instance. No response was generated. */" },
		{ "TimedOut.Name", "EConcertResponseCode::TimedOut" },
		{ "TimedOut.ToolTip", "The request failed to reach the target instance. No response was generated." },
		{ "ToolTip", "Response codes to a sent request" },
		{ "UnknownRequest.Comment", "/** The request type was unknown on the target instance. No response was generated. */" },
		{ "UnknownRequest.Name", "EConcertResponseCode::UnknownRequest" },
		{ "UnknownRequest.ToolTip", "The request type was unknown on the target instance. No response was generated." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertTransport_EConcertResponseCode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertTransport,
		nullptr,
		"EConcertResponseCode",
		"EConcertResponseCode",
		Z_Construct_UEnum_ConcertTransport_EConcertResponseCode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertTransport_EConcertResponseCode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertTransport_EConcertResponseCode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertTransport_EConcertResponseCode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertTransport_EConcertResponseCode()
	{
		if (!Z_Registration_Info_UEnum_EConcertResponseCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertResponseCode.InnerSingleton, Z_Construct_UEnum_ConcertTransport_EConcertResponseCode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertResponseCode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertReliableHandshakeState;
	static UEnum* EConcertReliableHandshakeState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertReliableHandshakeState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertReliableHandshakeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertTransport_EConcertReliableHandshakeState, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("EConcertReliableHandshakeState"));
		}
		return Z_Registration_Info_UEnum_EConcertReliableHandshakeState.OuterSingleton;
	}
	template<> CONCERTTRANSPORT_API UEnum* StaticEnum<EConcertReliableHandshakeState>()
	{
		return EConcertReliableHandshakeState_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertTransport_EConcertReliableHandshakeState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertTransport_EConcertReliableHandshakeState_Statics::Enumerators[] = {
		{ "EConcertReliableHandshakeState::None", (int64)EConcertReliableHandshakeState::None },
		{ "EConcertReliableHandshakeState::Negotiate", (int64)EConcertReliableHandshakeState::Negotiate },
		{ "EConcertReliableHandshakeState::Success", (int64)EConcertReliableHandshakeState::Success },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertTransport_EConcertReliableHandshakeState_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Handshake codes used during reliable channel negotiation */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "Negotiate.Comment", "/** Handshake is being negotiated */" },
		{ "Negotiate.Name", "EConcertReliableHandshakeState::Negotiate" },
		{ "Negotiate.ToolTip", "Handshake is being negotiated" },
		{ "None.Comment", "/** Handshake initialization state */" },
		{ "None.Name", "EConcertReliableHandshakeState::None" },
		{ "None.ToolTip", "Handshake initialization state" },
		{ "Success.Comment", "/** Handshake was successfully negotiated */" },
		{ "Success.Name", "EConcertReliableHandshakeState::Success" },
		{ "Success.ToolTip", "Handshake was successfully negotiated" },
		{ "ToolTip", "Handshake codes used during reliable channel negotiation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertTransport_EConcertReliableHandshakeState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertTransport,
		nullptr,
		"EConcertReliableHandshakeState",
		"EConcertReliableHandshakeState",
		Z_Construct_UEnum_ConcertTransport_EConcertReliableHandshakeState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertTransport_EConcertReliableHandshakeState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertTransport_EConcertReliableHandshakeState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertTransport_EConcertReliableHandshakeState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertTransport_EConcertReliableHandshakeState()
	{
		if (!Z_Registration_Info_UEnum_EConcertReliableHandshakeState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertReliableHandshakeState.InnerSingleton, Z_Construct_UEnum_ConcertTransport_EConcertReliableHandshakeState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertReliableHandshakeState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertMessageVersion;
	static UEnum* EConcertMessageVersion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertMessageVersion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertMessageVersion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertTransport_EConcertMessageVersion, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("EConcertMessageVersion"));
		}
		return Z_Registration_Info_UEnum_EConcertMessageVersion.OuterSingleton;
	}
	template<> CONCERTTRANSPORT_API UEnum* StaticEnum<EConcertMessageVersion>()
	{
		return EConcertMessageVersion_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertTransport_EConcertMessageVersion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertTransport_EConcertMessageVersion_Statics::Enumerators[] = {
		{ "EConcertMessageVersion::BeforeVersioning", (int64)EConcertMessageVersion::BeforeVersioning },
		{ "EConcertMessageVersion::Initial", (int64)EConcertMessageVersion::Initial },
		{ "EConcertMessageVersion::VersionPlusOne", (int64)EConcertMessageVersion::VersionPlusOne },
		{ "EConcertMessageVersion::LatestVersion", (int64)EConcertMessageVersion::LatestVersion },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertTransport_EConcertMessageVersion_Statics::Enum_MetaDataParams[] = {
		{ "BeforeVersioning.Name", "EConcertMessageVersion::BeforeVersioning" },
		{ "Comment", "/** Versioning for concert message protocol */" },
		{ "Initial.Name", "EConcertMessageVersion::Initial" },
		{ "LatestVersion.Name", "EConcertMessageVersion::LatestVersion" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Versioning for concert message protocol" },
		{ "VersionPlusOne.Comment", "// -----<new versions can be added above this line>-------------------------------------------------\n" },
		{ "VersionPlusOne.Name", "EConcertMessageVersion::VersionPlusOne" },
		{ "VersionPlusOne.ToolTip", "-----<new versions can be added above this line>-------------------------------------------------" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertTransport_EConcertMessageVersion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertTransport,
		nullptr,
		"EConcertMessageVersion",
		"EConcertMessageVersion",
		Z_Construct_UEnum_ConcertTransport_EConcertMessageVersion_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertTransport_EConcertMessageVersion_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertTransport_EConcertMessageVersion_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertTransport_EConcertMessageVersion_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertTransport_EConcertMessageVersion()
	{
		if (!Z_Registration_Info_UEnum_EConcertMessageVersion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertMessageVersion.InnerSingleton, Z_Construct_UEnum_ConcertTransport_EConcertMessageVersion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertMessageVersion.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertMessageData;
class UScriptStruct* FConcertMessageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertMessageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertMessageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertMessageData, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("ConcertMessageData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertMessageData.OuterSingleton;
}
template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<FConcertMessageData>()
{
	return FConcertMessageData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertMessageData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConcertEndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConcertEndpointId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageOrderIndex_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_MessageOrderIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ChannelId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertMessageData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base class for all message data sent through concert */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Base class for all message data sent through concert" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertMessageData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_ConcertEndpointId_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "Comment", "/** ID of the Endpoint this was sent from */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "ID of the Endpoint this was sent from" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_ConcertEndpointId = { "ConcertEndpointId", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertMessageData, ConcertEndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_ConcertEndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_ConcertEndpointId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_MessageId_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "Comment", "/** ID of the message */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "ID of the message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_MessageId = { "MessageId", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertMessageData, MessageId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_MessageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_MessageId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_MessageOrderIndex_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "Comment", "/** Order index of the message (for ordering reliable messages, used when ChannelId != UnreliableChannelId) */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Order index of the message (for ordering reliable messages, used when ChannelId != UnreliableChannelId)" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_MessageOrderIndex = { "MessageOrderIndex", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertMessageData, MessageOrderIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_MessageOrderIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_MessageOrderIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_ChannelId_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "Comment", "/** ID of the channel this message was sent from */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "ID of the channel this message was sent from" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertMessageData, ChannelId), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_ChannelId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertMessageData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_ConcertEndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_MessageId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_MessageOrderIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewProp_ChannelId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertMessageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTransport,
		nullptr,
		&NewStructOps,
		"ConcertMessageData",
		sizeof(FConcertMessageData),
		alignof(FConcertMessageData),
		Z_Construct_UScriptStruct_FConcertMessageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertMessageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertMessageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertMessageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertMessageData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertMessageData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertMessageData.InnerSingleton, Z_Construct_UScriptStruct_FConcertMessageData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertMessageData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertEventData>() == std::is_polymorphic<FConcertMessageData>(), "USTRUCT FConcertEventData cannot be polymorphic unless super FConcertMessageData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertEventData;
class UScriptStruct* FConcertEventData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertEventData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertEventData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertEventData, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("ConcertEventData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertEventData.OuterSingleton;
}
template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<FConcertEventData>()
{
	return FConcertEventData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertEventData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertEventData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base struct for all concert event messages */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Base struct for all concert event messages" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertEventData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTransport,
		Z_Construct_UScriptStruct_FConcertMessageData,
		&NewStructOps,
		"ConcertEventData",
		sizeof(FConcertEventData),
		alignof(FConcertEventData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertEventData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertEventData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertEventData.InnerSingleton, Z_Construct_UScriptStruct_FConcertEventData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertEventData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertRequestData>() == std::is_polymorphic<FConcertMessageData>(), "USTRUCT FConcertRequestData cannot be polymorphic unless super FConcertMessageData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertRequestData;
class UScriptStruct* FConcertRequestData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertRequestData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertRequestData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertRequestData, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("ConcertRequestData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertRequestData.OuterSingleton;
}
template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<FConcertRequestData>()
{
	return FConcertRequestData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertRequestData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertRequestData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base struct for all concert request messages */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Base struct for all concert request messages" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertRequestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertRequestData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertRequestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTransport,
		Z_Construct_UScriptStruct_FConcertMessageData,
		&NewStructOps,
		"ConcertRequestData",
		sizeof(FConcertRequestData),
		alignof(FConcertRequestData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertRequestData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertRequestData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertRequestData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertRequestData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertRequestData.InnerSingleton, Z_Construct_UScriptStruct_FConcertRequestData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertRequestData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertResponseData>() == std::is_polymorphic<FConcertMessageData>(), "USTRUCT FConcertResponseData cannot be polymorphic unless super FConcertMessageData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertResponseData;
class UScriptStruct* FConcertResponseData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertResponseData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertResponseData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertResponseData, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("ConcertResponseData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertResponseData.OuterSingleton;
}
template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<FConcertResponseData>()
{
	return FConcertResponseData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertResponseData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestMessageId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestMessageId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResponseCode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseCode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResponseCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertResponseData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base struct for all concert request response messages */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Base struct for all concert request response messages" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertResponseData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_RequestMessageId_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "Comment", "/** ID of the request message we're responding to */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "ID of the request message we're responding to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_RequestMessageId = { "RequestMessageId", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertResponseData, RequestMessageId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_RequestMessageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_RequestMessageId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_ResponseCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_ResponseCode_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "Comment", "/** Response code for the response */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Response code for the response" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertResponseData, ResponseCode), Z_Construct_UEnum_ConcertTransport_EConcertResponseCode, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_ResponseCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_ResponseCode_MetaData)) }; // 4255192983
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_Reason_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "Comment", "/** If the code isn't successful, a reason for it */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "If the code isn't successful, a reason for it" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertResponseData, Reason), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_Reason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertResponseData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_RequestMessageId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_ResponseCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_ResponseCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewProp_Reason,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertResponseData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTransport,
		Z_Construct_UScriptStruct_FConcertMessageData,
		&NewStructOps,
		"ConcertResponseData",
		sizeof(FConcertResponseData),
		alignof(FConcertResponseData),
		Z_Construct_UScriptStruct_FConcertResponseData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResponseData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertResponseData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertResponseData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertResponseData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertResponseData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertResponseData.InnerSingleton, Z_Construct_UScriptStruct_FConcertResponseData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertResponseData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertEndpointDiscoveryEvent>() == std::is_polymorphic<FConcertEventData>(), "USTRUCT FConcertEndpointDiscoveryEvent cannot be polymorphic unless super FConcertEventData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertEndpointDiscoveryEvent;
class UScriptStruct* FConcertEndpointDiscoveryEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertEndpointDiscoveryEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertEndpointDiscoveryEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("ConcertEndpointDiscoveryEvent"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertEndpointDiscoveryEvent.OuterSingleton;
}
template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<FConcertEndpointDiscoveryEvent>()
{
	return FConcertEndpointDiscoveryEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ConcertProtocolVersion_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConcertProtocolVersion_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConcertProtocolVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Special event message base struct that is also caught by the endpoint to discover remote endpoint before passing it to handlers */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Special event message base struct that is also caught by the endpoint to discover remote endpoint before passing it to handlers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertEndpointDiscoveryEvent>();
	}
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::NewProp_ConcertProtocolVersion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::NewProp_ConcertProtocolVersion_MetaData[] = {
		{ "Comment", "/** Holds the concert messages protocol version, default initialize to `BeforeVersioning` to handle message sent from older protocol. */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Holds the concert messages protocol version, default initialize to `BeforeVersioning` to handle message sent from older protocol." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::NewProp_ConcertProtocolVersion = { "ConcertProtocolVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertEndpointDiscoveryEvent, ConcertProtocolVersion), Z_Construct_UEnum_ConcertTransport_EConcertMessageVersion, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::NewProp_ConcertProtocolVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::NewProp_ConcertProtocolVersion_MetaData)) }; // 3203941577
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::NewProp_ConcertProtocolVersion_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::NewProp_ConcertProtocolVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTransport,
		Z_Construct_UScriptStruct_FConcertEventData,
		&NewStructOps,
		"ConcertEndpointDiscoveryEvent",
		sizeof(FConcertEndpointDiscoveryEvent),
		alignof(FConcertEndpointDiscoveryEvent),
		Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertEndpointDiscoveryEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertEndpointDiscoveryEvent.InnerSingleton, Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertEndpointDiscoveryEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertEndpointClosedData>() == std::is_polymorphic<FConcertMessageData>(), "USTRUCT FConcertEndpointClosedData cannot be polymorphic unless super FConcertMessageData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertEndpointClosedData;
class UScriptStruct* FConcertEndpointClosedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertEndpointClosedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertEndpointClosedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertEndpointClosedData, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("ConcertEndpointClosedData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertEndpointClosedData.OuterSingleton;
}
template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<FConcertEndpointClosedData>()
{
	return FConcertEndpointClosedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertEndpointClosedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertEndpointClosedData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Message send when an endpoint is closed on a remote peer */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Message send when an endpoint is closed on a remote peer" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertEndpointClosedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertEndpointClosedData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertEndpointClosedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTransport,
		Z_Construct_UScriptStruct_FConcertMessageData,
		&NewStructOps,
		"ConcertEndpointClosedData",
		sizeof(FConcertEndpointClosedData),
		alignof(FConcertEndpointClosedData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertEndpointClosedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertEndpointClosedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertEndpointClosedData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertEndpointClosedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertEndpointClosedData.InnerSingleton, Z_Construct_UScriptStruct_FConcertEndpointClosedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertEndpointClosedData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertReliableHandshakeData>() == std::is_polymorphic<FConcertEndpointDiscoveryEvent>(), "USTRUCT FConcertReliableHandshakeData cannot be polymorphic unless super FConcertEndpointDiscoveryEvent is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertReliableHandshakeData;
class UScriptStruct* FConcertReliableHandshakeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertReliableHandshakeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertReliableHandshakeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertReliableHandshakeData, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("ConcertReliableHandshakeData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertReliableHandshakeData.OuterSingleton;
}
template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<FConcertReliableHandshakeData>()
{
	return FConcertReliableHandshakeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandshakeState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandshakeState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandshakeState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReliableChannelId_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ReliableChannelId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextMessageIndex_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_NextMessageIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointTimeoutTick_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_EndpointTimeoutTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Handshake used to negotiate a reliable channel between endpoints (also uses the ReliableChannelId from the base message) */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Handshake used to negotiate a reliable channel between endpoints (also uses the ReliableChannelId from the base message)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertReliableHandshakeData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_HandshakeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_HandshakeState_MetaData[] = {
		{ "Comment", "/** State of the handshake */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "State of the handshake" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_HandshakeState = { "HandshakeState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertReliableHandshakeData, HandshakeState), Z_Construct_UEnum_ConcertTransport_EConcertReliableHandshakeState, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_HandshakeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_HandshakeState_MetaData)) }; // 1039155934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_ReliableChannelId_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "Comment", "/** Channel ID we're going to send reliable messages of */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Channel ID we're going to send reliable messages of" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_ReliableChannelId = { "ReliableChannelId", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertReliableHandshakeData, ReliableChannelId), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_ReliableChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_ReliableChannelId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_NextMessageIndex_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "Comment", "/** The next message index that the remote endpoint is going to send */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "The next message index that the remote endpoint is going to send" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_NextMessageIndex = { "NextMessageIndex", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertReliableHandshakeData, NextMessageIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_NextMessageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_NextMessageIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_EndpointTimeoutTick_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "Comment", "/** It's a timespan encoded in ticks. EndpointTimeoutTick represent the time it takes for the sending endpoint to consider another endpoint timed out */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "It's a timespan encoded in ticks. EndpointTimeoutTick represent the time it takes for the sending endpoint to consider another endpoint timed out" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_EndpointTimeoutTick = { "EndpointTimeoutTick", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertReliableHandshakeData, EndpointTimeoutTick), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_EndpointTimeoutTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_EndpointTimeoutTick_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_HandshakeState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_HandshakeState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_ReliableChannelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_NextMessageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewProp_EndpointTimeoutTick,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTransport,
		Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent,
		&NewStructOps,
		"ConcertReliableHandshakeData",
		sizeof(FConcertReliableHandshakeData),
		alignof(FConcertReliableHandshakeData),
		Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertReliableHandshakeData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertReliableHandshakeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertReliableHandshakeData.InnerSingleton, Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertReliableHandshakeData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertAckData>() == std::is_polymorphic<FConcertMessageData>(), "USTRUCT FConcertAckData cannot be polymorphic unless super FConcertMessageData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertAckData;
class UScriptStruct* FConcertAckData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertAckData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertAckData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertAckData, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("ConcertAckData"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertAckData.OuterSingleton;
}
template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<FConcertAckData>()
{
	return FConcertAckData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertAckData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AckSendTimeTicks_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_AckSendTimeTicks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMessageId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceMessageId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertAckData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Acknowledgment messages to reliable events */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Acknowledgment messages to reliable events" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertAckData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertAckData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertAckData_Statics::NewProp_AckSendTimeTicks_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "Comment", "/** Time when this acknowledgment was sent (UTC) */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Time when this acknowledgment was sent (UTC)" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FConcertAckData_Statics::NewProp_AckSendTimeTicks = { "AckSendTimeTicks", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertAckData, AckSendTimeTicks), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertAckData_Statics::NewProp_AckSendTimeTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertAckData_Statics::NewProp_AckSendTimeTicks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertAckData_Statics::NewProp_SourceMessageId_MetaData[] = {
		{ "Category", "Concert Message" },
		{ "Comment", "/** ID of the source message we're acknowledging */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "ID of the source message we're acknowledging" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertAckData_Statics::NewProp_SourceMessageId = { "SourceMessageId", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertAckData, SourceMessageId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertAckData_Statics::NewProp_SourceMessageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertAckData_Statics::NewProp_SourceMessageId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertAckData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertAckData_Statics::NewProp_AckSendTimeTicks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertAckData_Statics::NewProp_SourceMessageId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertAckData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTransport,
		Z_Construct_UScriptStruct_FConcertMessageData,
		&NewStructOps,
		"ConcertAckData",
		sizeof(FConcertAckData),
		alignof(FConcertAckData),
		Z_Construct_UScriptStruct_FConcertAckData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertAckData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertAckData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertAckData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertAckData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertAckData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertAckData.InnerSingleton, Z_Construct_UScriptStruct_FConcertAckData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertAckData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FConcertKeepAlive>() == std::is_polymorphic<FConcertMessageData>(), "USTRUCT FConcertKeepAlive cannot be polymorphic unless super FConcertMessageData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertKeepAlive;
class UScriptStruct* FConcertKeepAlive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertKeepAlive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertKeepAlive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertKeepAlive, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("ConcertKeepAlive"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertKeepAlive.OuterSingleton;
}
template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<FConcertKeepAlive>()
{
	return FConcertKeepAlive::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertKeepAlive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertKeepAlive_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Keep alive message */" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Keep alive message" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertKeepAlive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertKeepAlive>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertKeepAlive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTransport,
		Z_Construct_UScriptStruct_FConcertMessageData,
		&NewStructOps,
		"ConcertKeepAlive",
		sizeof(FConcertKeepAlive),
		alignof(FConcertKeepAlive),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertKeepAlive_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertKeepAlive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertKeepAlive()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertKeepAlive.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertKeepAlive.InnerSingleton, Z_Construct_UScriptStruct_FConcertKeepAlive_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertKeepAlive.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSendResendPending;
class UScriptStruct* FConcertSendResendPending::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSendResendPending.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSendResendPending.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSendResendPending, (UObject*)Z_Construct_UPackage__Script_ConcertTransport(), TEXT("ConcertSendResendPending"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSendResendPending.OuterSingleton;
}
template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<FConcertSendResendPending>()
{
	return FConcertSendResendPending::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSendResendPending_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSendResendPending_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Force the endpoint to resend pending packages.*/" },
		{ "ModuleRelativePath", "Public/ConcertTransportMessages.h" },
		{ "ToolTip", "Force the endpoint to resend pending packages." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSendResendPending_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSendResendPending>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSendResendPending_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertTransport,
		nullptr,
		&NewStructOps,
		"ConcertSendResendPending",
		sizeof(FConcertSendResendPending),
		alignof(FConcertSendResendPending),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSendResendPending_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSendResendPending_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSendResendPending()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSendResendPending.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSendResendPending.InnerSingleton, Z_Construct_UScriptStruct_FConcertSendResendPending_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSendResendPending.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_Statics::EnumInfo[] = {
		{ EConcertMessageFlags_StaticEnum, TEXT("EConcertMessageFlags"), &Z_Registration_Info_UEnum_EConcertMessageFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1737395335U) },
		{ EConcertResponseCode_StaticEnum, TEXT("EConcertResponseCode"), &Z_Registration_Info_UEnum_EConcertResponseCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4255192983U) },
		{ EConcertReliableHandshakeState_StaticEnum, TEXT("EConcertReliableHandshakeState"), &Z_Registration_Info_UEnum_EConcertReliableHandshakeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1039155934U) },
		{ EConcertMessageVersion_StaticEnum, TEXT("EConcertMessageVersion"), &Z_Registration_Info_UEnum_EConcertMessageVersion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3203941577U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_Statics::ScriptStructInfo[] = {
		{ FConcertMessageData::StaticStruct, Z_Construct_UScriptStruct_FConcertMessageData_Statics::NewStructOps, TEXT("ConcertMessageData"), &Z_Registration_Info_UScriptStruct_ConcertMessageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertMessageData), 3035518872U) },
		{ FConcertEventData::StaticStruct, Z_Construct_UScriptStruct_FConcertEventData_Statics::NewStructOps, TEXT("ConcertEventData"), &Z_Registration_Info_UScriptStruct_ConcertEventData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertEventData), 341986644U) },
		{ FConcertRequestData::StaticStruct, Z_Construct_UScriptStruct_FConcertRequestData_Statics::NewStructOps, TEXT("ConcertRequestData"), &Z_Registration_Info_UScriptStruct_ConcertRequestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertRequestData), 1866515471U) },
		{ FConcertResponseData::StaticStruct, Z_Construct_UScriptStruct_FConcertResponseData_Statics::NewStructOps, TEXT("ConcertResponseData"), &Z_Registration_Info_UScriptStruct_ConcertResponseData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertResponseData), 4144553759U) },
		{ FConcertEndpointDiscoveryEvent::StaticStruct, Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics::NewStructOps, TEXT("ConcertEndpointDiscoveryEvent"), &Z_Registration_Info_UScriptStruct_ConcertEndpointDiscoveryEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertEndpointDiscoveryEvent), 638471678U) },
		{ FConcertEndpointClosedData::StaticStruct, Z_Construct_UScriptStruct_FConcertEndpointClosedData_Statics::NewStructOps, TEXT("ConcertEndpointClosedData"), &Z_Registration_Info_UScriptStruct_ConcertEndpointClosedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertEndpointClosedData), 502996708U) },
		{ FConcertReliableHandshakeData::StaticStruct, Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics::NewStructOps, TEXT("ConcertReliableHandshakeData"), &Z_Registration_Info_UScriptStruct_ConcertReliableHandshakeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertReliableHandshakeData), 3230320423U) },
		{ FConcertAckData::StaticStruct, Z_Construct_UScriptStruct_FConcertAckData_Statics::NewStructOps, TEXT("ConcertAckData"), &Z_Registration_Info_UScriptStruct_ConcertAckData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertAckData), 2535157358U) },
		{ FConcertKeepAlive::StaticStruct, Z_Construct_UScriptStruct_FConcertKeepAlive_Statics::NewStructOps, TEXT("ConcertKeepAlive"), &Z_Registration_Info_UScriptStruct_ConcertKeepAlive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertKeepAlive), 2563380234U) },
		{ FConcertSendResendPending::StaticStruct, Z_Construct_UScriptStruct_FConcertSendResendPending_Statics::NewStructOps, TEXT("ConcertSendResendPending"), &Z_Registration_Info_UScriptStruct_ConcertSendResendPending, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSendResendPending), 1137497199U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_409667002(TEXT("/Script/ConcertTransport"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
