// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/RemoteControlRequest.h"
#include "../Private/RemoteControlModels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlRequest() {}
// Cross Module References
	REMOTECONTROL_API UEnum* Z_Construct_UEnum_RemoteControl_ERCAccess();
	REMOTECONTROL_API UEnum* Z_Construct_UEnum_RemoteControl_ERCModifyOperation();
	REMOTECONTROL_API UEnum* Z_Construct_UEnum_RemoteControl_ERCTransactionMode();
	UPackage* Z_Construct_UPackage__Script_WebRemoteControl();
	WEBREMOTECONTROL_API UEnum* Z_Construct_UEnum_WebRemoteControl_ERemoteControlEvent();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FDescribeObjectRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FGetObjectThumbnailRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCAssetFilter();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCBatchRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCCallRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCObjectRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetCallRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetSetControllerRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCRequestWrapper();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketBatchRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketCallBody();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FSearchActorRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FSearchAssetRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FSearchObjectRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FSetEntityLabelRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FSetEntityMetadataRequest();
	WEBREMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FSetPresetMetadataRequest();
// End Cross Module References

static_assert(std::is_polymorphic<FRCRequestWrapper>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCRequestWrapper cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCRequestWrapper;
class UScriptStruct* FRCRequestWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCRequestWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCRequestWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCRequestWrapper, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCRequestWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_RCRequestWrapper.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCRequestWrapper>()
{
	return FRCRequestWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCRequestWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verb_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Verb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequestId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCRequestWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewProp_URL_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCRequestWrapper, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewProp_Verb_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCRequestWrapper, Verb), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewProp_Verb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewProp_Verb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewProp_RequestId_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCRequestWrapper, RequestId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewProp_RequestId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewProp_RequestId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewProp_Verb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewProp_RequestId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCRequestWrapper",
		sizeof(FRCRequestWrapper),
		alignof(FRCRequestWrapper),
		Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCRequestWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_RCRequestWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCRequestWrapper.InnerSingleton, Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCRequestWrapper.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCBatchRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCBatchRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCBatchRequest;
class UScriptStruct* FRCBatchRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCBatchRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCBatchRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCBatchRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCBatchRequest"));
	}
	return Z_Registration_Info_UScriptStruct_RCBatchRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCBatchRequest>()
{
	return FRCBatchRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCBatchRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Requests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Requests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Requests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCBatchRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request that wraps multiple requests..\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request that wraps multiple requests.." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCBatchRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCBatchRequest>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCBatchRequest_Statics::NewProp_Requests_Inner = { "Requests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCRequestWrapper, METADATA_PARAMS(nullptr, 0) }; // 1534201751
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCBatchRequest_Statics::NewProp_Requests_MetaData[] = {
		{ "Comment", "/**\n\x09 * The list of batched requests.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The list of batched requests." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCBatchRequest_Statics::NewProp_Requests = { "Requests", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCBatchRequest, Requests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCBatchRequest_Statics::NewProp_Requests_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCBatchRequest_Statics::NewProp_Requests_MetaData)) }; // 1534201751
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCBatchRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCBatchRequest_Statics::NewProp_Requests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCBatchRequest_Statics::NewProp_Requests,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCBatchRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCBatchRequest",
		sizeof(FRCBatchRequest),
		alignof(FRCBatchRequest),
		Z_Construct_UScriptStruct_FRCBatchRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCBatchRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCBatchRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCBatchRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCBatchRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_RCBatchRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCBatchRequest.InnerSingleton, Z_Construct_UScriptStruct_FRCBatchRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCBatchRequest.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERemoteControlEvent;
	static UEnum* ERemoteControlEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERemoteControlEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERemoteControlEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WebRemoteControl_ERemoteControlEvent, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("ERemoteControlEvent"));
		}
		return Z_Registration_Info_UEnum_ERemoteControlEvent.OuterSingleton;
	}
	template<> WEBREMOTECONTROL_API UEnum* StaticEnum<ERemoteControlEvent>()
	{
		return ERemoteControlEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_WebRemoteControl_ERemoteControlEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WebRemoteControl_ERemoteControlEvent_Statics::Enumerators[] = {
		{ "ERemoteControlEvent::PreObjectPropertyChanged", (int64)ERemoteControlEvent::PreObjectPropertyChanged },
		{ "ERemoteControlEvent::ObjectPropertyChanged", (int64)ERemoteControlEvent::ObjectPropertyChanged },
		{ "ERemoteControlEvent::EventCount", (int64)ERemoteControlEvent::EventCount },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WebRemoteControl_ERemoteControlEvent_Statics::Enum_MetaDataParams[] = {
		{ "EventCount.Name", "ERemoteControlEvent::EventCount" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ObjectPropertyChanged.Name", "ERemoteControlEvent::ObjectPropertyChanged" },
		{ "PreObjectPropertyChanged.Name", "ERemoteControlEvent::PreObjectPropertyChanged" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WebRemoteControl_ERemoteControlEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WebRemoteControl,
		nullptr,
		"ERemoteControlEvent",
		"ERemoteControlEvent",
		Z_Construct_UEnum_WebRemoteControl_ERemoteControlEvent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WebRemoteControl_ERemoteControlEvent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WebRemoteControl_ERemoteControlEvent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WebRemoteControl_ERemoteControlEvent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WebRemoteControl_ERemoteControlEvent()
	{
		if (!Z_Registration_Info_UEnum_ERemoteControlEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERemoteControlEvent.InnerSingleton, Z_Construct_UEnum_WebRemoteControl_ERemoteControlEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERemoteControlEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRemoteControlObjectEventHookRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRemoteControlObjectEventHookRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlObjectEventHookRequest;
class UScriptStruct* FRemoteControlObjectEventHookRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlObjectEventHookRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlObjectEventHookRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RemoteControlObjectEventHookRequest"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlObjectEventHookRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlObjectEventHookRequest>()
{
	return FRemoteControlObjectEventHookRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EventType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request to create an event hook.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request to create an event hook." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlObjectEventHookRequest>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_EventType_MetaData[] = {
		{ "Comment", "/**\n\x09 * What type of event should be listened to.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "What type of event should be listened to." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlObjectEventHookRequest, EventType), Z_Construct_UEnum_WebRemoteControl_ERemoteControlEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_EventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_EventType_MetaData)) }; // 3966195217
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "Comment", "/**\n\x09 * The path of the target object.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The path of the target object." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlObjectEventHookRequest, ObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_ObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the property to watch for changes.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The name of the property to watch for changes." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlObjectEventHookRequest, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_PropertyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_EventType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_EventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_ObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewProp_PropertyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RemoteControlObjectEventHookRequest",
		sizeof(FRemoteControlObjectEventHookRequest),
		alignof(FRemoteControlObjectEventHookRequest),
		Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlObjectEventHookRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlObjectEventHookRequest.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlObjectEventHookRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCCallRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCCallRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCCallRequest;
class UScriptStruct* FRCCallRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCCallRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCCallRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCCallRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCCallRequest"));
	}
	return Z_Registration_Info_UScriptStruct_RCCallRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCCallRequest>()
{
	return FRCCallRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCCallRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateTransaction_MetaData[];
#endif
		static void NewProp_GenerateTransaction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerateTransaction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCCallRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request to call a function\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request to call a function" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCCallRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "Comment", "/**\n\x09 * The path of the target object.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The path of the target object." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCCallRequest, ObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_ObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the function to call.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The name of the function to call." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCCallRequest, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_GenerateTransaction_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether a transaction should be created for the call.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Whether a transaction should be created for the call." },
	};
#endif
	void Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_GenerateTransaction_SetBit(void* Obj)
	{
		((FRCCallRequest*)Obj)->GenerateTransaction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_GenerateTransaction = { "GenerateTransaction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCCallRequest), &Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_GenerateTransaction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_GenerateTransaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_GenerateTransaction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCCallRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_ObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewProp_GenerateTransaction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCCallRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCCallRequest",
		sizeof(FRCCallRequest),
		alignof(FRCCallRequest),
		Z_Construct_UScriptStruct_FRCCallRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCCallRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCCallRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCCallRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCCallRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_RCCallRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCCallRequest.InnerSingleton, Z_Construct_UScriptStruct_FRCCallRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCCallRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCObjectRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCObjectRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCObjectRequest;
class UScriptStruct* FRCObjectRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCObjectRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCObjectRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCObjectRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCObjectRequest"));
	}
	return Z_Registration_Info_UScriptStruct_RCObjectRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCObjectRequest>()
{
	return FRCObjectRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCObjectRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetToDefault_MetaData[];
#endif
		static void NewProp_ResetToDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetToDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateTransaction_MetaData[];
#endif
		static void NewProp_GenerateTransaction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerateTransaction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Access_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Access_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Access;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCObjectRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request to access an object\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request to access an object" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCObjectRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "Comment", "/**\n\x09 * The path of the target object.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The path of the target object." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCObjectRequest, ObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_ObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The property to read or modify.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The property to read or modify." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCObjectRequest, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_ResetToDefault_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether the property should be reset to default.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Whether the property should be reset to default." },
	};
#endif
	void Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_ResetToDefault_SetBit(void* Obj)
	{
		((FRCObjectRequest*)Obj)->ResetToDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_ResetToDefault = { "ResetToDefault", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCObjectRequest), &Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_ResetToDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_ResetToDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_ResetToDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_GenerateTransaction_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether a transaction should be created for the call.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Whether a transaction should be created for the call." },
	};
#endif
	void Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_GenerateTransaction_SetBit(void* Obj)
	{
		((FRCObjectRequest*)Obj)->GenerateTransaction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_GenerateTransaction = { "GenerateTransaction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCObjectRequest), &Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_GenerateTransaction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_GenerateTransaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_GenerateTransaction_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_Operation_MetaData[] = {
		{ "Comment", "/**\n\x09 * Which type of operation should be performed if this is modifying a property.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Which type of operation should be performed if this is modifying a property." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCObjectRequest, Operation), Z_Construct_UEnum_RemoteControl_ERCModifyOperation, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_Operation_MetaData)) }; // 3937981195
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_Access_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_Access_MetaData[] = {
		{ "Comment", "/**\n\x09 * Indicates if the property should be read or written to.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Indicates if the property should be read or written to." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_Access = { "Access", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCObjectRequest, Access), Z_Construct_UEnum_RemoteControl_ERCAccess, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_Access_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_Access_MetaData)) }; // 3547601977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCObjectRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_ObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_ResetToDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_GenerateTransaction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_Access_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewProp_Access,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCObjectRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCObjectRequest",
		sizeof(FRCObjectRequest),
		alignof(FRCObjectRequest),
		Z_Construct_UScriptStruct_FRCObjectRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCObjectRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCObjectRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCObjectRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCObjectRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_RCObjectRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCObjectRequest.InnerSingleton, Z_Construct_UScriptStruct_FRCObjectRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCObjectRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCPresetSetPropertyRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCPresetSetPropertyRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetSetPropertyRequest;
class UScriptStruct* FRCPresetSetPropertyRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetSetPropertyRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetSetPropertyRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetSetPropertyRequest"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetSetPropertyRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetSetPropertyRequest>()
{
	return FRCPresetSetPropertyRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateTransaction_MetaData[];
#endif
		static void NewProp_GenerateTransaction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerateTransaction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetToDefault_MetaData[];
#endif
		static void NewProp_ResetToDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetToDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request to set a property on a preset\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request to set a property on a preset" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetSetPropertyRequest>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_Operation_MetaData[] = {
		{ "Comment", "/**\n\x09 * Which type of operation should be performed on the value of the property.\n\x09 * This will be ignored if ResetToDefault is true.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Which type of operation should be performed on the value of the property.\nThis will be ignored if ResetToDefault is true." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetSetPropertyRequest, Operation), Z_Construct_UEnum_RemoteControl_ERCModifyOperation, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_Operation_MetaData)) }; // 3937981195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_GenerateTransaction_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether a transaction should be created for the call.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Whether a transaction should be created for the call." },
	};
#endif
	void Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_GenerateTransaction_SetBit(void* Obj)
	{
		((FRCPresetSetPropertyRequest*)Obj)->GenerateTransaction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_GenerateTransaction = { "GenerateTransaction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCPresetSetPropertyRequest), &Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_GenerateTransaction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_GenerateTransaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_GenerateTransaction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_ResetToDefault_MetaData[] = {
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_ResetToDefault_SetBit(void* Obj)
	{
		((FRCPresetSetPropertyRequest*)Obj)->ResetToDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_ResetToDefault = { "ResetToDefault", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCPresetSetPropertyRequest), &Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_ResetToDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_ResetToDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_ResetToDefault_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_GenerateTransaction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewProp_ResetToDefault,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCPresetSetPropertyRequest",
		sizeof(FRCPresetSetPropertyRequest),
		alignof(FRCPresetSetPropertyRequest),
		Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetSetPropertyRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetSetPropertyRequest.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetSetPropertyRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCPresetCallRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCPresetCallRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetCallRequest;
class UScriptStruct* FRCPresetCallRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetCallRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetCallRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetCallRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetCallRequest"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetCallRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetCallRequest>()
{
	return FRCPresetCallRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateTransaction_MetaData[];
#endif
		static void NewProp_GenerateTransaction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerateTransaction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request to call a function on a preset\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request to call a function on a preset" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetCallRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::NewProp_GenerateTransaction_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether a transaction should be created for the call.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Whether a transaction should be created for the call." },
	};
#endif
	void Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::NewProp_GenerateTransaction_SetBit(void* Obj)
	{
		((FRCPresetCallRequest*)Obj)->GenerateTransaction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::NewProp_GenerateTransaction = { "GenerateTransaction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCPresetCallRequest), &Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::NewProp_GenerateTransaction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::NewProp_GenerateTransaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::NewProp_GenerateTransaction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::NewProp_GenerateTransaction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCPresetCallRequest",
		sizeof(FRCPresetCallRequest),
		alignof(FRCPresetCallRequest),
		Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetCallRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetCallRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetCallRequest.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetCallRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCPresetExposePropertyRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCPresetExposePropertyRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetExposePropertyRequest;
class UScriptStruct* FRCPresetExposePropertyRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetExposePropertyRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetExposePropertyRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetExposePropertyRequest"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetExposePropertyRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetExposePropertyRequest>()
{
	return FRCPresetExposePropertyRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableEditCondition_MetaData[];
#endif
		static void NewProp_EnableEditCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableEditCondition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request to expose a property on a preset\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request to expose a property on a preset" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetExposePropertyRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "Comment", "/**\n\x09 * The path of the target object.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The path of the target object." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetExposePropertyRequest, ObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_ObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The property to expose.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The property to expose." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetExposePropertyRequest, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_Label_MetaData[] = {
		{ "Comment", "/**\n\x09 * The label to give the new exposed property (optional).\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The label to give the new exposed property (optional)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetExposePropertyRequest, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_GroupName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the group in which to place the new exposed property (optional).\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The name of the group in which to place the new exposed property (optional)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetExposePropertyRequest, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_EnableEditCondition_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether to automatically enable the edit condition for the exposed property.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Whether to automatically enable the edit condition for the exposed property." },
	};
#endif
	void Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_EnableEditCondition_SetBit(void* Obj)
	{
		((FRCPresetExposePropertyRequest*)Obj)->EnableEditCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_EnableEditCondition = { "EnableEditCondition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCPresetExposePropertyRequest), &Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_EnableEditCondition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_EnableEditCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_EnableEditCondition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_ObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewProp_EnableEditCondition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCPresetExposePropertyRequest",
		sizeof(FRCPresetExposePropertyRequest),
		alignof(FRCPresetExposePropertyRequest),
		Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetExposePropertyRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetExposePropertyRequest.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetExposePropertyRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDescribeObjectRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FDescribeObjectRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DescribeObjectRequest;
class UScriptStruct* FDescribeObjectRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DescribeObjectRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DescribeObjectRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDescribeObjectRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("DescribeObjectRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DescribeObjectRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FDescribeObjectRequest>()
{
	return FDescribeObjectRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request to describe an object using its path.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request to describe an object using its path." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDescribeObjectRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "Comment", "/**\n\x09 * The target object's path.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The target object's path." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDescribeObjectRequest, ObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics::NewProp_ObjectPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics::NewProp_ObjectPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"DescribeObjectRequest",
		sizeof(FDescribeObjectRequest),
		alignof(FDescribeObjectRequest),
		Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDescribeObjectRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_DescribeObjectRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DescribeObjectRequest.InnerSingleton, Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DescribeObjectRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSearchAssetRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FSearchAssetRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SearchAssetRequest;
class UScriptStruct* FSearchAssetRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SearchAssetRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SearchAssetRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchAssetRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("SearchAssetRequest"));
	}
	return Z_Registration_Info_UScriptStruct_SearchAssetRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FSearchAssetRequest>()
{
	return FSearchAssetRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSearchAssetRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request to search for an asset.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request to search for an asset." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchAssetRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewProp_Query_MetaData[] = {
		{ "Comment", "/**\n\x09 * The search query which will be compared with the asset names.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The search query which will be compared with the asset names." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchAssetRequest, Query), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewProp_Query_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewProp_Filter_MetaData[] = {
		{ "Comment", "/*\n\x09 * The filter applied to this search.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "* The filter applied to this search." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchAssetRequest, Filter), Z_Construct_UScriptStruct_FRCAssetFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewProp_Filter_MetaData)) }; // 3547860302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewProp_Limit_MetaData[] = {
		{ "Comment", "/**\n\x09 * The maximum number of search results returned.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The maximum number of search results returned." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchAssetRequest, Limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewProp_Limit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewProp_Limit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"SearchAssetRequest",
		sizeof(FSearchAssetRequest),
		alignof(FSearchAssetRequest),
		Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSearchAssetRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_SearchAssetRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SearchAssetRequest.InnerSingleton, Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SearchAssetRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSearchActorRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FSearchActorRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SearchActorRequest;
class UScriptStruct* FSearchActorRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SearchActorRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SearchActorRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchActorRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("SearchActorRequest"));
	}
	return Z_Registration_Info_UScriptStruct_SearchActorRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FSearchActorRequest>()
{
	return FSearchActorRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSearchActorRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchActorRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request to search for an actor.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request to search for an actor." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchActorRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewProp_Query_MetaData[] = {
		{ "Comment", "/*\n\x09 * The search query.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "* The search query." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchActorRequest, Query), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewProp_Query_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewProp_Class_MetaData[] = {
		{ "Comment", "/**\n\x09 * The target actor's class. \n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The target actor's class." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchActorRequest, Class), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewProp_Limit_MetaData[] = {
		{ "Comment", "/**\n\x09 * The maximum number of search results returned.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The maximum number of search results returned." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchActorRequest, Limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewProp_Limit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchActorRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewProp_Limit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchActorRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"SearchActorRequest",
		sizeof(FSearchActorRequest),
		alignof(FSearchActorRequest),
		Z_Construct_UScriptStruct_FSearchActorRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchActorRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchActorRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchActorRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSearchActorRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_SearchActorRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SearchActorRequest.InnerSingleton, Z_Construct_UScriptStruct_FSearchActorRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SearchActorRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSearchObjectRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FSearchObjectRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SearchObjectRequest;
class UScriptStruct* FSearchObjectRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SearchObjectRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SearchObjectRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSearchObjectRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("SearchObjectRequest"));
	}
	return Z_Registration_Info_UScriptStruct_SearchObjectRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FSearchObjectRequest>()
{
	return FSearchObjectRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSearchObjectRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Query;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Outer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Limit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Limit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request to search for an asset.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request to search for an asset." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSearchObjectRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Query_MetaData[] = {
		{ "Comment", "/*\n\x09 * The search query.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "* The search query." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchObjectRequest, Query), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Query_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Class_MetaData[] = {
		{ "Comment", "/**\n\x09 * The target object's class.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The target object's class." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchObjectRequest, Class), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Outer_MetaData[] = {
		{ "Comment", "/**\n\x09 * The search target's outer object.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The search target's outer object." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchObjectRequest, Outer), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Outer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Outer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Limit_MetaData[] = {
		{ "Comment", "/**\n\x09 * The maximum number of search results returned.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The maximum number of search results returned." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Limit = { "Limit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSearchObjectRequest, Limit), METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Limit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Limit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewProp_Limit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"SearchObjectRequest",
		sizeof(FSearchObjectRequest),
		alignof(FSearchObjectRequest),
		Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSearchObjectRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_SearchObjectRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SearchObjectRequest.InnerSingleton, Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SearchObjectRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSetPresetMetadataRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FSetPresetMetadataRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetPresetMetadataRequest;
class UScriptStruct* FSetPresetMetadataRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetPresetMetadataRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetPresetMetadataRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetPresetMetadataRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("SetPresetMetadataRequest"));
	}
	return Z_Registration_Info_UScriptStruct_SetPresetMetadataRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FSetPresetMetadataRequest>()
{
	return FSetPresetMetadataRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request to set a metadata field.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request to set a metadata field." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetPresetMetadataRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "/**\n\x09 * The new value for the metadata field.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The new value for the metadata field." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetPresetMetadataRequest, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"SetPresetMetadataRequest",
		sizeof(FSetPresetMetadataRequest),
		alignof(FSetPresetMetadataRequest),
		Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSetPresetMetadataRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_SetPresetMetadataRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetPresetMetadataRequest.InnerSingleton, Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SetPresetMetadataRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSetEntityMetadataRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FSetEntityMetadataRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetEntityMetadataRequest;
class UScriptStruct* FSetEntityMetadataRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetEntityMetadataRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetEntityMetadataRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetEntityMetadataRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("SetEntityMetadataRequest"));
	}
	return Z_Registration_Info_UScriptStruct_SetEntityMetadataRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FSetEntityMetadataRequest>()
{
	return FSetEntityMetadataRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request to set a metadata field.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request to set a metadata field." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetEntityMetadataRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "/**\n\x09 * The new value for the metadata field.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The new value for the metadata field." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetEntityMetadataRequest, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"SetEntityMetadataRequest",
		sizeof(FSetEntityMetadataRequest),
		alignof(FSetEntityMetadataRequest),
		Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSetEntityMetadataRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_SetEntityMetadataRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetEntityMetadataRequest.InnerSingleton, Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SetEntityMetadataRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSetEntityLabelRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FSetEntityLabelRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetEntityLabelRequest;
class UScriptStruct* FSetEntityLabelRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetEntityLabelRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetEntityLabelRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetEntityLabelRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("SetEntityLabelRequest"));
	}
	return Z_Registration_Info_UScriptStruct_SetEntityLabelRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FSetEntityLabelRequest>()
{
	return FSetEntityLabelRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request to set an entity's label.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request to set an entity's label." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetEntityLabelRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics::NewProp_NewLabel_MetaData[] = {
		{ "Comment", "/**\n\x09 * The new label to assign.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The new label to assign." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics::NewProp_NewLabel = { "NewLabel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetEntityLabelRequest, NewLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics::NewProp_NewLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics::NewProp_NewLabel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics::NewProp_NewLabel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"SetEntityLabelRequest",
		sizeof(FSetEntityLabelRequest),
		alignof(FSetEntityLabelRequest),
		Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSetEntityLabelRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_SetEntityLabelRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetEntityLabelRequest.InnerSingleton, Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SetEntityLabelRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGetObjectThumbnailRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FGetObjectThumbnailRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetObjectThumbnailRequest;
class UScriptStruct* FGetObjectThumbnailRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetObjectThumbnailRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetObjectThumbnailRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetObjectThumbnailRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("GetObjectThumbnailRequest"));
	}
	return Z_Registration_Info_UScriptStruct_GetObjectThumbnailRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FGetObjectThumbnailRequest>()
{
	return FGetObjectThumbnailRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request to get an asset's thumbnail.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request to get an asset's thumbnail." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetObjectThumbnailRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "Comment", "/**\n\x09 * The target object's path.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The target object's path." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetObjectThumbnailRequest, ObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics::NewProp_ObjectPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics::NewProp_ObjectPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"GetObjectThumbnailRequest",
		sizeof(FGetObjectThumbnailRequest),
		alignof(FGetObjectThumbnailRequest),
		Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetObjectThumbnailRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_GetObjectThumbnailRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetObjectThumbnailRequest.InnerSingleton, Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetObjectThumbnailRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketRequest;
class UScriptStruct* FRCWebSocketRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCWebSocketRequest"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCWebSocketRequest>()
{
	return FRCWebSocketRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardedFor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ForwardedFor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made for web socket.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request made for web socket." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewProp_MessageName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Name of the websocket message.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Name of the websocket message." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewProp_MessageName = { "MessageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketRequest, MessageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewProp_MessageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewProp_MessageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "/**\n\x09 * (Optional) Id of the incoming message, used to identify a deferred response to the clients.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "(Optional) Id of the incoming message, used to identify a deferred response to the clients." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketRequest, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewProp_ForwardedFor_MetaData[] = {
		{ "Comment", "/**\n\x09 * (Optional) If the request was forwared for a remote client, this will contain the forwarded IP.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "(Optional) If the request was forwared for a remote client, this will contain the forwarded IP." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewProp_ForwardedFor = { "ForwardedFor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketRequest, ForwardedFor), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewProp_ForwardedFor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewProp_ForwardedFor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewProp_MessageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewProp_ForwardedFor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketRequest",
		sizeof(FRCWebSocketRequest),
		alignof(FRCWebSocketRequest),
		Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketRequest.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketBatchRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketBatchRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketBatchRequest;
class UScriptStruct* FRCWebSocketBatchRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketBatchRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketBatchRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketBatchRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCWebSocketBatchRequest"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketBatchRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCWebSocketBatchRequest>()
{
	return FRCWebSocketBatchRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Requests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Requests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Requests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request that wraps multiple requests..\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request that wraps multiple requests.." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketBatchRequest>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::NewProp_Requests_Inner = { "Requests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCWebSocketRequest, METADATA_PARAMS(nullptr, 0) }; // 496941367
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::NewProp_Requests_MetaData[] = {
		{ "Comment", "/**\n\x09 * The list of batched requests.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The list of batched requests." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::NewProp_Requests = { "Requests", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketBatchRequest, Requests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::NewProp_Requests_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::NewProp_Requests_MetaData)) }; // 496941367
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::NewProp_Requests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::NewProp_Requests,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketBatchRequest",
		sizeof(FRCWebSocketBatchRequest),
		alignof(FRCWebSocketBatchRequest),
		Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketBatchRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketBatchRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketBatchRequest.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketBatchRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketPresetRegisterBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketPresetRegisterBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketPresetRegisterBody;
class UScriptStruct* FRCWebSocketPresetRegisterBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketPresetRegisterBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketPresetRegisterBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCWebSocketPresetRegisterBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketPresetRegisterBody.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCWebSocketPresetRegisterBody>()
{
	return FRCWebSocketPresetRegisterBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreRemoteChanges_MetaData[];
#endif
		static void NewProp_IgnoreRemoteChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreRemoteChanges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to register for events about a given preset.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to register for events about a given preset." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketPresetRegisterBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::NewProp_PresetName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Name of the preset its registering.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Name of the preset its registering." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketPresetRegisterBody, PresetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::NewProp_PresetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::NewProp_IgnoreRemoteChanges_MetaData[] = {
		{ "Comment", "/** Whether changes to properties triggered remotely should fire an event. */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Whether changes to properties triggered remotely should fire an event." },
	};
#endif
	void Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::NewProp_IgnoreRemoteChanges_SetBit(void* Obj)
	{
		((FRCWebSocketPresetRegisterBody*)Obj)->IgnoreRemoteChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::NewProp_IgnoreRemoteChanges = { "IgnoreRemoteChanges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCWebSocketPresetRegisterBody), &Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::NewProp_IgnoreRemoteChanges_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::NewProp_IgnoreRemoteChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::NewProp_IgnoreRemoteChanges_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::NewProp_IgnoreRemoteChanges,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketPresetRegisterBody",
		sizeof(FRCWebSocketPresetRegisterBody),
		alignof(FRCWebSocketPresetRegisterBody),
		Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketPresetRegisterBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketPresetRegisterBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketPresetRegisterBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketTransientPresetAutoDestroyBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketTransientPresetAutoDestroyBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketTransientPresetAutoDestroyBody;
class UScriptStruct* FRCWebSocketTransientPresetAutoDestroyBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketTransientPresetAutoDestroyBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketTransientPresetAutoDestroyBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCWebSocketTransientPresetAutoDestroyBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketTransientPresetAutoDestroyBody.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCWebSocketTransientPresetAutoDestroyBody>()
{
	return FRCWebSocketTransientPresetAutoDestroyBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to automatically destroy a transient preset when the calling client disconnects.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to automatically destroy a transient preset when the calling client disconnects." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketTransientPresetAutoDestroyBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics::NewProp_PresetName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Name of the transient preset to mark for automatic destruction.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Name of the transient preset to mark for automatic destruction." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketTransientPresetAutoDestroyBody, PresetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics::NewProp_PresetName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics::NewProp_PresetName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketTransientPresetAutoDestroyBody",
		sizeof(FRCWebSocketTransientPresetAutoDestroyBody),
		alignof(FRCWebSocketTransientPresetAutoDestroyBody),
		Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketTransientPresetAutoDestroyBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketTransientPresetAutoDestroyBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketTransientPresetAutoDestroyBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketActorRegisterBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketActorRegisterBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketActorRegisterBody;
class UScriptStruct* FRCWebSocketActorRegisterBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketActorRegisterBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketActorRegisterBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCWebSocketActorRegisterBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketActorRegisterBody.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCWebSocketActorRegisterBody>()
{
	return FRCWebSocketActorRegisterBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to register for spawn/destroy events about a given actor type.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to register for spawn/destroy events about a given actor type." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketActorRegisterBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics::NewProp_ClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Name of the actor class to register for.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Name of the actor class to register for." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketActorRegisterBody, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics::NewProp_ClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics::NewProp_ClassName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketActorRegisterBody",
		sizeof(FRCWebSocketActorRegisterBody),
		alignof(FRCWebSocketActorRegisterBody),
		Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketActorRegisterBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketActorRegisterBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketActorRegisterBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketPresetSetPropertyBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketPresetSetPropertyBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketPresetSetPropertyBody;
class UScriptStruct* FRCWebSocketPresetSetPropertyBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketPresetSetPropertyBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketPresetSetPropertyBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCWebSocketPresetSetPropertyBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketPresetSetPropertyBody.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCWebSocketPresetSetPropertyBody>()
{
	return FRCWebSocketPresetSetPropertyBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PresetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyLabel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyLabel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransactionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransactionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransactionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResetToDefault_MetaData[];
#endif
		static void NewProp_ResetToDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetToDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceNumber_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SequenceNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to modify a property exposed in a preset.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to modify a property exposed in a preset." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketPresetSetPropertyBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_PresetName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the remote control preset to which the property belongs.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The name of the remote control preset to which the property belongs." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketPresetSetPropertyBody, PresetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_PresetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_PropertyLabel_MetaData[] = {
		{ "Comment", "/**\n\x09 * The label of the property to modify.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The label of the property to modify." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_PropertyLabel = { "PropertyLabel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketPresetSetPropertyBody, PropertyLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_PropertyLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_PropertyLabel_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_Operation_MetaData[] = {
		{ "Comment", "/**\n\x09 * Which type of operation should be performed on the value of the property.\n\x09 * This will be ignored if ResetToDefault is true.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Which type of operation should be performed on the value of the property.\nThis will be ignored if ResetToDefault is true." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketPresetSetPropertyBody, Operation), Z_Construct_UEnum_RemoteControl_ERCModifyOperation, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_Operation_MetaData)) }; // 3937981195
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_TransactionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_TransactionMode_MetaData[] = {
		{ "Comment", "/**\n\x09 * How to handle generating transactions for this property change.\n\x09 * If NONE, don't generate a transaction immediately.\n\x09 * If AUTOMATIC, let the Remote Control system automatically start and end the transaction after enough time passes.\n\x09 * If MANUAL, TransactionId must also be set and the changes will only be applied if that transaction is still active.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "How to handle generating transactions for this property change.\nIf NONE, don't generate a transaction immediately.\nIf AUTOMATIC, let the Remote Control system automatically start and end the transaction after enough time passes.\nIf MANUAL, TransactionId must also be set and the changes will only be applied if that transaction is still active." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_TransactionMode = { "TransactionMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketPresetSetPropertyBody, TransactionMode), Z_Construct_UEnum_RemoteControl_ERCTransactionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_TransactionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_TransactionMode_MetaData)) }; // 863120045
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_TransactionId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID of the transaction with which to associate these changes. Must be provided if TransactionMode is Manual.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The ID of the transaction with which to associate these changes. Must be provided if TransactionMode is Manual." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketPresetSetPropertyBody, TransactionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_TransactionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_TransactionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_ResetToDefault_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, ignore the other parameters and just reset the property to its default value.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "If true, ignore the other parameters and just reset the property to its default value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_ResetToDefault_SetBit(void* Obj)
	{
		((FRCWebSocketPresetSetPropertyBody*)Obj)->ResetToDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_ResetToDefault = { "ResetToDefault", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCWebSocketPresetSetPropertyBody), &Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_ResetToDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_ResetToDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_ResetToDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_SequenceNumber_MetaData[] = {
		{ "Comment", "/**\n\x09 * The sequence number of this change. The highest sequence number received from this client will be\n\x09 * sent back to the client in future PresetFieldsChanged events.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The sequence number of this change. The highest sequence number received from this client will be\nsent back to the client in future PresetFieldsChanged events." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_SequenceNumber = { "SequenceNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketPresetSetPropertyBody, SequenceNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_SequenceNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_SequenceNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_PropertyLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_TransactionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_TransactionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_TransactionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_ResetToDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewProp_SequenceNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketPresetSetPropertyBody",
		sizeof(FRCWebSocketPresetSetPropertyBody),
		alignof(FRCWebSocketPresetSetPropertyBody),
		Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketPresetSetPropertyBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketPresetSetPropertyBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketPresetSetPropertyBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketCallBody>() == std::is_polymorphic<FRCCallRequest>(), "USTRUCT FRCWebSocketCallBody cannot be polymorphic unless super FRCCallRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketCallBody;
class UScriptStruct* FRCWebSocketCallBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketCallBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketCallBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketCallBody, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCWebSocketCallBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketCallBody.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCWebSocketCallBody>()
{
	return FRCWebSocketCallBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransactionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransactionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransactionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceNumber_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SequenceNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to call an exposed function on an object.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to call an exposed function on an object." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketCallBody>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_TransactionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_TransactionMode_MetaData[] = {
		{ "Comment", "/**\n\x09 * How to handle generating transactions for this property change.\n\x09 * If NONE, don't generate a transaction immediately.\n\x09 * If AUTOMATIC, let the Remote Control system automatically start and end the transaction after enough time passes.\n\x09 * If MANUAL, TransactionId must also be set and the changes will only be applied if that transaction is still active.\n\x09 * If bGenerateTransaction is true, this value will be treated as if it was AUTOMATIC.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "How to handle generating transactions for this property change.\nIf NONE, don't generate a transaction immediately.\nIf AUTOMATIC, let the Remote Control system automatically start and end the transaction after enough time passes.\nIf MANUAL, TransactionId must also be set and the changes will only be applied if that transaction is still active.\nIf bGenerateTransaction is true, this value will be treated as if it was AUTOMATIC." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_TransactionMode = { "TransactionMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketCallBody, TransactionMode), Z_Construct_UEnum_RemoteControl_ERCTransactionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_TransactionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_TransactionMode_MetaData)) }; // 863120045
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_TransactionId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID of the transaction with which to associate these changes. Must be provided if TransactionMode is Manual.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The ID of the transaction with which to associate these changes. Must be provided if TransactionMode is Manual." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketCallBody, TransactionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_TransactionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_TransactionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_SequenceNumber_MetaData[] = {
		{ "Comment", "/**\n\x09 * The sequence number of this change. The highest sequence number received from this client will be\n\x09 * sent back to the client in future PresetFieldsChanged events.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The sequence number of this change. The highest sequence number received from this client will be\nsent back to the client in future PresetFieldsChanged events." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_SequenceNumber = { "SequenceNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketCallBody, SequenceNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_SequenceNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_SequenceNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_TransactionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_TransactionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_TransactionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewProp_SequenceNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCCallRequest,
		&NewStructOps,
		"RCWebSocketCallBody",
		sizeof(FRCWebSocketCallBody),
		alignof(FRCWebSocketCallBody),
		Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketCallBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketCallBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketCallBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketCallBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketTransactionStartBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketTransactionStartBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketTransactionStartBody;
class UScriptStruct* FRCWebSocketTransactionStartBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketTransactionStartBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketTransactionStartBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCWebSocketTransactionStartBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketTransactionStartBody.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCWebSocketTransactionStartBody>()
{
	return FRCWebSocketTransactionStartBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransactionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to start a transaction.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to start a transaction." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketTransactionStartBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::NewProp_Description_MetaData[] = {
		{ "Comment", "/**\n\x09 * The description of the transaction.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The description of the transaction." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketTransactionStartBody, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::NewProp_TransactionId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID that will be used to refer to the transaction in future messages.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The ID that will be used to refer to the transaction in future messages." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketTransactionStartBody, TransactionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::NewProp_TransactionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::NewProp_TransactionId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::NewProp_TransactionId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketTransactionStartBody",
		sizeof(FRCWebSocketTransactionStartBody),
		alignof(FRCWebSocketTransactionStartBody),
		Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketTransactionStartBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketTransactionStartBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketTransactionStartBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCWebSocketTransactionEndBody>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCWebSocketTransactionEndBody cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCWebSocketTransactionEndBody;
class UScriptStruct* FRCWebSocketTransactionEndBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCWebSocketTransactionEndBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCWebSocketTransactionEndBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCWebSocketTransactionEndBody"));
	}
	return Z_Registration_Info_UScriptStruct_RCWebSocketTransactionEndBody.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCWebSocketTransactionEndBody>()
{
	return FRCWebSocketTransactionEndBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransactionId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds a request made via websocket to end a transaction.\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Holds a request made via websocket to end a transaction." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCWebSocketTransactionEndBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics::NewProp_TransactionId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID of the transaction. If this doesn't match the current editor transaction, it won't be ended.\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The ID of the transaction. If this doesn't match the current editor transaction, it won't be ended." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCWebSocketTransactionEndBody, TransactionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics::NewProp_TransactionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics::NewProp_TransactionId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics::NewProp_TransactionId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCWebSocketTransactionEndBody",
		sizeof(FRCWebSocketTransactionEndBody),
		alignof(FRCWebSocketTransactionEndBody),
		Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody()
	{
		if (!Z_Registration_Info_UScriptStruct_RCWebSocketTransactionEndBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCWebSocketTransactionEndBody.InnerSingleton, Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCWebSocketTransactionEndBody.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRCPresetSetControllerRequest>() == std::is_polymorphic<FRCRequest>(), "USTRUCT FRCPresetSetControllerRequest cannot be polymorphic unless super FRCRequest is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPresetSetControllerRequest;
class UScriptStruct* FRCPresetSetControllerRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPresetSetControllerRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPresetSetControllerRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPresetSetControllerRequest, (UObject*)Z_Construct_UPackage__Script_WebRemoteControl(), TEXT("RCPresetSetControllerRequest"));
	}
	return Z_Registration_Info_UScriptStruct_RCPresetSetControllerRequest.OuterSingleton;
}
template<> WEBREMOTECONTROL_API UScriptStruct* StaticStruct<FRCPresetSetControllerRequest>()
{
	return FRCPresetSetControllerRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ControllerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct representation of SetPresetController HTTP request\n */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "Struct representation of SetPresetController HTTP request" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPresetSetControllerRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics::NewProp_ControllerName_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the Controller being set (for a given Remote Control Preset asset)\n\x09 */" },
		{ "ModuleRelativePath", "Private/RemoteControlRequest.h" },
		{ "ToolTip", "The name of the Controller being set (for a given Remote Control Preset asset)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics::NewProp_ControllerName = { "ControllerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPresetSetControllerRequest, ControllerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics::NewProp_ControllerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics::NewProp_ControllerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics::NewProp_ControllerName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebRemoteControl,
		Z_Construct_UScriptStruct_FRCRequest,
		&NewStructOps,
		"RCPresetSetControllerRequest",
		sizeof(FRCPresetSetControllerRequest),
		alignof(FRCPresetSetControllerRequest),
		Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPresetSetControllerRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPresetSetControllerRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPresetSetControllerRequest.InnerSingleton, Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPresetSetControllerRequest.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRequest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRequest_h_Statics::EnumInfo[] = {
		{ ERemoteControlEvent_StaticEnum, TEXT("ERemoteControlEvent"), &Z_Registration_Info_UEnum_ERemoteControlEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3966195217U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRequest_h_Statics::ScriptStructInfo[] = {
		{ FRCRequestWrapper::StaticStruct, Z_Construct_UScriptStruct_FRCRequestWrapper_Statics::NewStructOps, TEXT("RCRequestWrapper"), &Z_Registration_Info_UScriptStruct_RCRequestWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCRequestWrapper), 1534201751U) },
		{ FRCBatchRequest::StaticStruct, Z_Construct_UScriptStruct_FRCBatchRequest_Statics::NewStructOps, TEXT("RCBatchRequest"), &Z_Registration_Info_UScriptStruct_RCBatchRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCBatchRequest), 517794952U) },
		{ FRemoteControlObjectEventHookRequest::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlObjectEventHookRequest_Statics::NewStructOps, TEXT("RemoteControlObjectEventHookRequest"), &Z_Registration_Info_UScriptStruct_RemoteControlObjectEventHookRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlObjectEventHookRequest), 1423146910U) },
		{ FRCCallRequest::StaticStruct, Z_Construct_UScriptStruct_FRCCallRequest_Statics::NewStructOps, TEXT("RCCallRequest"), &Z_Registration_Info_UScriptStruct_RCCallRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCCallRequest), 3924048859U) },
		{ FRCObjectRequest::StaticStruct, Z_Construct_UScriptStruct_FRCObjectRequest_Statics::NewStructOps, TEXT("RCObjectRequest"), &Z_Registration_Info_UScriptStruct_RCObjectRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCObjectRequest), 2259047990U) },
		{ FRCPresetSetPropertyRequest::StaticStruct, Z_Construct_UScriptStruct_FRCPresetSetPropertyRequest_Statics::NewStructOps, TEXT("RCPresetSetPropertyRequest"), &Z_Registration_Info_UScriptStruct_RCPresetSetPropertyRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetSetPropertyRequest), 1910823243U) },
		{ FRCPresetCallRequest::StaticStruct, Z_Construct_UScriptStruct_FRCPresetCallRequest_Statics::NewStructOps, TEXT("RCPresetCallRequest"), &Z_Registration_Info_UScriptStruct_RCPresetCallRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetCallRequest), 1191009728U) },
		{ FRCPresetExposePropertyRequest::StaticStruct, Z_Construct_UScriptStruct_FRCPresetExposePropertyRequest_Statics::NewStructOps, TEXT("RCPresetExposePropertyRequest"), &Z_Registration_Info_UScriptStruct_RCPresetExposePropertyRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetExposePropertyRequest), 1835726964U) },
		{ FDescribeObjectRequest::StaticStruct, Z_Construct_UScriptStruct_FDescribeObjectRequest_Statics::NewStructOps, TEXT("DescribeObjectRequest"), &Z_Registration_Info_UScriptStruct_DescribeObjectRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDescribeObjectRequest), 1375027167U) },
		{ FSearchAssetRequest::StaticStruct, Z_Construct_UScriptStruct_FSearchAssetRequest_Statics::NewStructOps, TEXT("SearchAssetRequest"), &Z_Registration_Info_UScriptStruct_SearchAssetRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSearchAssetRequest), 878062795U) },
		{ FSearchActorRequest::StaticStruct, Z_Construct_UScriptStruct_FSearchActorRequest_Statics::NewStructOps, TEXT("SearchActorRequest"), &Z_Registration_Info_UScriptStruct_SearchActorRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSearchActorRequest), 2600963136U) },
		{ FSearchObjectRequest::StaticStruct, Z_Construct_UScriptStruct_FSearchObjectRequest_Statics::NewStructOps, TEXT("SearchObjectRequest"), &Z_Registration_Info_UScriptStruct_SearchObjectRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSearchObjectRequest), 2286058014U) },
		{ FSetPresetMetadataRequest::StaticStruct, Z_Construct_UScriptStruct_FSetPresetMetadataRequest_Statics::NewStructOps, TEXT("SetPresetMetadataRequest"), &Z_Registration_Info_UScriptStruct_SetPresetMetadataRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetPresetMetadataRequest), 2036255648U) },
		{ FSetEntityMetadataRequest::StaticStruct, Z_Construct_UScriptStruct_FSetEntityMetadataRequest_Statics::NewStructOps, TEXT("SetEntityMetadataRequest"), &Z_Registration_Info_UScriptStruct_SetEntityMetadataRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetEntityMetadataRequest), 429764809U) },
		{ FSetEntityLabelRequest::StaticStruct, Z_Construct_UScriptStruct_FSetEntityLabelRequest_Statics::NewStructOps, TEXT("SetEntityLabelRequest"), &Z_Registration_Info_UScriptStruct_SetEntityLabelRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetEntityLabelRequest), 2619915891U) },
		{ FGetObjectThumbnailRequest::StaticStruct, Z_Construct_UScriptStruct_FGetObjectThumbnailRequest_Statics::NewStructOps, TEXT("GetObjectThumbnailRequest"), &Z_Registration_Info_UScriptStruct_GetObjectThumbnailRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetObjectThumbnailRequest), 4135820965U) },
		{ FRCWebSocketRequest::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketRequest_Statics::NewStructOps, TEXT("RCWebSocketRequest"), &Z_Registration_Info_UScriptStruct_RCWebSocketRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketRequest), 496941367U) },
		{ FRCWebSocketBatchRequest::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketBatchRequest_Statics::NewStructOps, TEXT("RCWebSocketBatchRequest"), &Z_Registration_Info_UScriptStruct_RCWebSocketBatchRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketBatchRequest), 3223967652U) },
		{ FRCWebSocketPresetRegisterBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketPresetRegisterBody_Statics::NewStructOps, TEXT("RCWebSocketPresetRegisterBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketPresetRegisterBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketPresetRegisterBody), 1979351056U) },
		{ FRCWebSocketTransientPresetAutoDestroyBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketTransientPresetAutoDestroyBody_Statics::NewStructOps, TEXT("RCWebSocketTransientPresetAutoDestroyBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketTransientPresetAutoDestroyBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketTransientPresetAutoDestroyBody), 2216933592U) },
		{ FRCWebSocketActorRegisterBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketActorRegisterBody_Statics::NewStructOps, TEXT("RCWebSocketActorRegisterBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketActorRegisterBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketActorRegisterBody), 1539338493U) },
		{ FRCWebSocketPresetSetPropertyBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketPresetSetPropertyBody_Statics::NewStructOps, TEXT("RCWebSocketPresetSetPropertyBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketPresetSetPropertyBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketPresetSetPropertyBody), 2456646667U) },
		{ FRCWebSocketCallBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketCallBody_Statics::NewStructOps, TEXT("RCWebSocketCallBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketCallBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketCallBody), 1622745136U) },
		{ FRCWebSocketTransactionStartBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketTransactionStartBody_Statics::NewStructOps, TEXT("RCWebSocketTransactionStartBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketTransactionStartBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketTransactionStartBody), 168564714U) },
		{ FRCWebSocketTransactionEndBody::StaticStruct, Z_Construct_UScriptStruct_FRCWebSocketTransactionEndBody_Statics::NewStructOps, TEXT("RCWebSocketTransactionEndBody"), &Z_Registration_Info_UScriptStruct_RCWebSocketTransactionEndBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCWebSocketTransactionEndBody), 1991276935U) },
		{ FRCPresetSetControllerRequest::StaticStruct, Z_Construct_UScriptStruct_FRCPresetSetControllerRequest_Statics::NewStructOps, TEXT("RCPresetSetControllerRequest"), &Z_Registration_Info_UScriptStruct_RCPresetSetControllerRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPresetSetControllerRequest), 3208523024U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRequest_h_4213542229(TEXT("/Script/WebRemoteControl"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRequest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRequest_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRequest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_WebRemoteControl_Private_RemoteControlRequest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
