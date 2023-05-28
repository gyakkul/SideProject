// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkMessages.h"
#include "LiveLinkRefSkeleton.h"
#include "LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkMessages() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCurveElement();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMetaData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkClearSubject();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkConnectMessage();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPingMessage();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPongMessage();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage();
	LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMessageBusFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkPingMessage;
class UScriptStruct* FLiveLinkPingMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkPingMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkPingMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPingMessage, (UObject*)Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkPingMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkPingMessage.OuterSingleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkPingMessage>()
{
	return FLiveLinkPingMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PollRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PollRequest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LiveLinkVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkPingMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_PollRequest_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_PollRequest = { "PollRequest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPingMessage, PollRequest), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_PollRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_PollRequest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_LiveLinkVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_LiveLinkVersion = { "LiveLinkVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPingMessage, LiveLinkVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_LiveLinkVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_LiveLinkVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_PollRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewProp_LiveLinkVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
		nullptr,
		&NewStructOps,
		"LiveLinkPingMessage",
		sizeof(FLiveLinkPingMessage),
		alignof(FLiveLinkPingMessage),
		Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPingMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkPingMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkPingMessage.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkPingMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkPongMessage;
class UScriptStruct* FLiveLinkPongMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkPongMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkPongMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPongMessage, (UObject*)Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkPongMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkPongMessage.OuterSingleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkPongMessage>()
{
	return FLiveLinkPongMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProviderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProviderName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MachineName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MachineName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PollRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PollRequest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LiveLinkVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreationPlatformTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CreationPlatformTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkPongMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_ProviderName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_ProviderName = { "ProviderName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPongMessage, ProviderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_ProviderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_ProviderName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_MachineName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_MachineName = { "MachineName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPongMessage, MachineName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_MachineName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_MachineName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_PollRequest_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_PollRequest = { "PollRequest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPongMessage, PollRequest), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_PollRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_PollRequest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_LiveLinkVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_LiveLinkVersion = { "LiveLinkVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPongMessage, LiveLinkVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_LiveLinkVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_LiveLinkVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_CreationPlatformTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_CreationPlatformTime = { "CreationPlatformTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPongMessage, CreationPlatformTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_CreationPlatformTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_CreationPlatformTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_ProviderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_MachineName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_PollRequest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_LiveLinkVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewProp_CreationPlatformTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
		nullptr,
		&NewStructOps,
		"LiveLinkPongMessage",
		sizeof(FLiveLinkPongMessage),
		alignof(FLiveLinkPongMessage),
		Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPongMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkPongMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkPongMessage.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkPongMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage;
class UScriptStruct* FLiveLinkConnectMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkConnectMessage, (UObject*)Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkConnectMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage.OuterSingleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkConnectMessage>()
{
	return FLiveLinkConnectMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LiveLinkVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkConnectMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewProp_LiveLinkVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewProp_LiveLinkVersion = { "LiveLinkVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkConnectMessage, LiveLinkVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewProp_LiveLinkVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewProp_LiveLinkVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewProp_LiveLinkVersion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
		nullptr,
		&NewStructOps,
		"LiveLinkConnectMessage",
		sizeof(FLiveLinkConnectMessage),
		alignof(FLiveLinkConnectMessage),
		Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkConnectMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage;
class UScriptStruct* FLiveLinkHeartbeatMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage, (UObject*)Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkHeartbeatMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage.OuterSingleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkHeartbeatMessage>()
{
	return FLiveLinkHeartbeatMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkHeartbeatMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
		nullptr,
		&NewStructOps,
		"LiveLinkHeartbeatMessage",
		sizeof(FLiveLinkHeartbeatMessage),
		alignof(FLiveLinkHeartbeatMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkClearSubject;
class UScriptStruct* FLiveLinkClearSubject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkClearSubject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkClearSubject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkClearSubject, (UObject*)Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkClearSubject"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkClearSubject.OuterSingleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkClearSubject>()
{
	return FLiveLinkClearSubject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkClearSubject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Comment", "// Name of the subject to clear\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
		{ "ToolTip", "Name of the subject to clear" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkClearSubject, SubjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewProp_SubjectName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewProp_SubjectName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
		nullptr,
		&NewStructOps,
		"LiveLinkClearSubject",
		sizeof(FLiveLinkClearSubject),
		alignof(FLiveLinkClearSubject),
		Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkClearSubject()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkClearSubject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkClearSubject.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkClearSubject.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage;
class UScriptStruct* FLiveLinkSubjectDataMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage, (UObject*)Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkSubjectDataMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage.OuterSingleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkSubjectDataMessage>()
{
	return FLiveLinkSubjectDataMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RefSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectDataMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_RefSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_RefSkeleton = { "RefSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectDataMessage, RefSkeleton), Z_Construct_UScriptStruct_FLiveLinkRefSkeleton, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_RefSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_RefSkeleton_MetaData)) }; // 3254312841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_SubjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectDataMessage, SubjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_SubjectName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_RefSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewProp_SubjectName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
		nullptr,
		&NewStructOps,
		"LiveLinkSubjectDataMessage",
		sizeof(FLiveLinkSubjectDataMessage),
		alignof(FLiveLinkSubjectDataMessage),
		Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage;
class UScriptStruct* FLiveLinkSubjectFrameMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage, (UObject*)Z_Construct_UPackage__Script_LiveLinkMessageBusFramework(), TEXT("LiveLinkSubjectFrameMessage"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage.OuterSingleton;
}
template<> LIVELINKMESSAGEBUSFRAMEWORK_API UScriptStruct* StaticStruct<FLiveLinkSubjectFrameMessage>()
{
	return FLiveLinkSubjectFrameMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Curves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectFrameMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_SubjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, SubjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_SubjectName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms_MetaData[] = {
		{ "Comment", "// Bone Transform data for this frame\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
		{ "ToolTip", "Bone Transform data for this frame" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLiveLinkCurveElement, METADATA_PARAMS(nullptr, 0) }; // 2347311509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves_MetaData[] = {
		{ "Comment", "// Curve data for this frame\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
		{ "ToolTip", "Curve data for this frame" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, Curves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves_MetaData)) }; // 2347311509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_MetaData_MetaData[] = {
		{ "Comment", "// Subject MetaData for this frame\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
		{ "ToolTip", "Subject MetaData for this frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, MetaData), Z_Construct_UScriptStruct_FLiveLinkMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_MetaData_MetaData)) }; // 282121272
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "// Incrementing time for interpolation\n" },
		{ "ModuleRelativePath", "Public/LiveLinkMessages.h" },
		{ "ToolTip", "Incrementing time for interpolation" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectFrameMessage, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_SubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Curves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_MetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMessageBusFramework,
		nullptr,
		&NewStructOps,
		"LiveLinkSubjectFrameMessage",
		sizeof(FLiveLinkSubjectFrameMessage),
		alignof(FLiveLinkSubjectFrameMessage),
		Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkPingMessage::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkPingMessage_Statics::NewStructOps, TEXT("LiveLinkPingMessage"), &Z_Registration_Info_UScriptStruct_LiveLinkPingMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkPingMessage), 3419053122U) },
		{ FLiveLinkPongMessage::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkPongMessage_Statics::NewStructOps, TEXT("LiveLinkPongMessage"), &Z_Registration_Info_UScriptStruct_LiveLinkPongMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkPongMessage), 4243747293U) },
		{ FLiveLinkConnectMessage::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkConnectMessage_Statics::NewStructOps, TEXT("LiveLinkConnectMessage"), &Z_Registration_Info_UScriptStruct_LiveLinkConnectMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkConnectMessage), 1310342315U) },
		{ FLiveLinkHeartbeatMessage::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkHeartbeatMessage_Statics::NewStructOps, TEXT("LiveLinkHeartbeatMessage"), &Z_Registration_Info_UScriptStruct_LiveLinkHeartbeatMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkHeartbeatMessage), 4008189566U) },
		{ FLiveLinkClearSubject::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkClearSubject_Statics::NewStructOps, TEXT("LiveLinkClearSubject"), &Z_Registration_Info_UScriptStruct_LiveLinkClearSubject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkClearSubject), 2537226041U) },
		{ FLiveLinkSubjectDataMessage::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSubjectDataMessage_Statics::NewStructOps, TEXT("LiveLinkSubjectDataMessage"), &Z_Registration_Info_UScriptStruct_LiveLinkSubjectDataMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSubjectDataMessage), 2446248770U) },
		{ FLiveLinkSubjectFrameMessage::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSubjectFrameMessage_Statics::NewStructOps, TEXT("LiveLinkSubjectFrameMessage"), &Z_Registration_Info_UScriptStruct_LiveLinkSubjectFrameMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSubjectFrameMessage), 62978306U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_816924446(TEXT("/Script/LiveLinkMessageBusFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkMessageBusFramework_Public_LiveLinkMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
