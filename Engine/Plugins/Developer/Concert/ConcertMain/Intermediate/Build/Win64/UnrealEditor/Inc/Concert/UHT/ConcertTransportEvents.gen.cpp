// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertTransportEvents.h"
#include "ConcertMessageData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertTransportEvents() {}
// Cross Module References
	CONCERT_API UEnum* Z_Construct_UEnum_Concert_EConcertLogMessageAction();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertLog();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionSerializedPayload();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_Concert();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertLogMessageAction;
	static UEnum* EConcertLogMessageAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertLogMessageAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertLogMessageAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Concert_EConcertLogMessageAction, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("EConcertLogMessageAction"));
		}
		return Z_Registration_Info_UEnum_EConcertLogMessageAction.OuterSingleton;
	}
	template<> CONCERT_API UEnum* StaticEnum<EConcertLogMessageAction>()
	{
		return EConcertLogMessageAction_StaticEnum();
	}
	struct Z_Construct_UEnum_Concert_EConcertLogMessageAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Concert_EConcertLogMessageAction_Statics::Enumerators[] = {
		{ "EConcertLogMessageAction::None", (int64)EConcertLogMessageAction::None },
		{ "EConcertLogMessageAction::Send", (int64)EConcertLogMessageAction::Send },
		{ "EConcertLogMessageAction::Publish", (int64)EConcertLogMessageAction::Publish },
		{ "EConcertLogMessageAction::Receive", (int64)EConcertLogMessageAction::Receive },
		{ "EConcertLogMessageAction::Queue", (int64)EConcertLogMessageAction::Queue },
		{ "EConcertLogMessageAction::Discard", (int64)EConcertLogMessageAction::Discard },
		{ "EConcertLogMessageAction::Duplicate", (int64)EConcertLogMessageAction::Duplicate },
		{ "EConcertLogMessageAction::TimeOut", (int64)EConcertLogMessageAction::TimeOut },
		{ "EConcertLogMessageAction::Process", (int64)EConcertLogMessageAction::Process },
		{ "EConcertLogMessageAction::EndpointDiscovery", (int64)EConcertLogMessageAction::EndpointDiscovery },
		{ "EConcertLogMessageAction::EndpointTimeOut", (int64)EConcertLogMessageAction::EndpointTimeOut },
		{ "EConcertLogMessageAction::EndpointClosure", (int64)EConcertLogMessageAction::EndpointClosure },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Concert_EConcertLogMessageAction_Statics::Enum_MetaDataParams[] = {
		{ "Discard.Name", "EConcertLogMessageAction::Discard" },
		{ "Duplicate.Name", "EConcertLogMessageAction::Duplicate" },
		{ "EndpointClosure.Name", "EConcertLogMessageAction::EndpointClosure" },
		{ "EndpointDiscovery.Name", "EConcertLogMessageAction::EndpointDiscovery" },
		{ "EndpointTimeOut.Name", "EConcertLogMessageAction::EndpointTimeOut" },
		{ "ModuleRelativePath", "Public/ConcertTransportEvents.h" },
		{ "None.Name", "EConcertLogMessageAction::None" },
		{ "Process.Name", "EConcertLogMessageAction::Process" },
		{ "Publish.Name", "EConcertLogMessageAction::Publish" },
		{ "Queue.Name", "EConcertLogMessageAction::Queue" },
		{ "Receive.Name", "EConcertLogMessageAction::Receive" },
		{ "Send.Name", "EConcertLogMessageAction::Send" },
		{ "TimeOut.Name", "EConcertLogMessageAction::TimeOut" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Concert_EConcertLogMessageAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		"EConcertLogMessageAction",
		"EConcertLogMessageAction",
		Z_Construct_UEnum_Concert_EConcertLogMessageAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Concert_EConcertLogMessageAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Concert_EConcertLogMessageAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Concert_EConcertLogMessageAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Concert_EConcertLogMessageAction()
	{
		if (!Z_Registration_Info_UEnum_EConcertLogMessageAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertLogMessageAction.InnerSingleton, Z_Construct_UEnum_Concert_EConcertLogMessageAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertLogMessageAction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertLog;
class UScriptStruct* FConcertLog::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertLog.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertLog.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertLog, (UObject*)Z_Construct_UPackage__Script_Concert(), TEXT("ConcertLog"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertLog.OuterSingleton;
}
template<> CONCERT_API UScriptStruct* StaticStruct<FConcertLog>()
{
	return FConcertLog::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertLog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_Frame;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Timestamp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MessageAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MessageAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageTypeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MessageTypeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginEndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginEndpointId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationEndpointId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationEndpointId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPayloadTypename_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomPayloadTypename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPayloadUncompressedByteSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomPayloadUncompressedByteSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringPayload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLog_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertTransportEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertLog_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertLog>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_Frame_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransportEvents.h" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertLog, Frame), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_Frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_Frame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransportEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageId = { "MessageId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertLog, MessageId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageOrderIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransportEvents.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageOrderIndex = { "MessageOrderIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertLog, MessageOrderIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageOrderIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageOrderIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_ChannelId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransportEvents.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_ChannelId = { "ChannelId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertLog, ChannelId), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_ChannelId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_ChannelId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_Timestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransportEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertLog, Timestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_Timestamp_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransportEvents.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageAction = { "MessageAction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertLog, MessageAction), Z_Construct_UEnum_Concert_EConcertLogMessageAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageAction_MetaData)) }; // 2335980544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageTypeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransportEvents.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageTypeName = { "MessageTypeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertLog, MessageTypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageTypeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_OriginEndpointId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransportEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_OriginEndpointId = { "OriginEndpointId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertLog, OriginEndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_OriginEndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_OriginEndpointId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_DestinationEndpointId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransportEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_DestinationEndpointId = { "DestinationEndpointId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertLog, DestinationEndpointId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_DestinationEndpointId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_DestinationEndpointId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_CustomPayloadTypename_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransportEvents.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_CustomPayloadTypename = { "CustomPayloadTypename", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertLog, CustomPayloadTypename), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_CustomPayloadTypename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_CustomPayloadTypename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_CustomPayloadUncompressedByteSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransportEvents.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_CustomPayloadUncompressedByteSize = { "CustomPayloadUncompressedByteSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertLog, CustomPayloadUncompressedByteSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_CustomPayloadUncompressedByteSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_CustomPayloadUncompressedByteSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_StringPayload_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransportEvents.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_StringPayload = { "StringPayload", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertLog, StringPayload), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_StringPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_StringPayload_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_SerializedPayload_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertTransportEvents.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_SerializedPayload = { "SerializedPayload", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertLog, SerializedPayload), Z_Construct_UScriptStruct_FConcertSessionSerializedPayload, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_SerializedPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_SerializedPayload_MetaData)) }; // 661764570
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageOrderIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_ChannelId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_MessageTypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_OriginEndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_DestinationEndpointId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_CustomPayloadTypename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_CustomPayloadUncompressedByteSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_StringPayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertLog_Statics::NewProp_SerializedPayload,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertLog_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Concert,
		nullptr,
		&NewStructOps,
		"ConcertLog",
		sizeof(FConcertLog),
		alignof(FConcertLog),
		Z_Construct_UScriptStruct_FConcertLog_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLog_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertLog_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertLog_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertLog()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertLog.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertLog.InnerSingleton, Z_Construct_UScriptStruct_FConcertLog_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertLog.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertTransportEvents_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertTransportEvents_h_Statics::EnumInfo[] = {
		{ EConcertLogMessageAction_StaticEnum, TEXT("EConcertLogMessageAction"), &Z_Registration_Info_UEnum_EConcertLogMessageAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2335980544U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertTransportEvents_h_Statics::ScriptStructInfo[] = {
		{ FConcertLog::StaticStruct, Z_Construct_UScriptStruct_FConcertLog_Statics::NewStructOps, TEXT("ConcertLog"), &Z_Registration_Info_UScriptStruct_ConcertLog, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertLog), 3654754889U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertTransportEvents_h_2795486647(TEXT("/Script/Concert"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertTransportEvents_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertTransportEvents_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertTransportEvents_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertTransportEvents_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
