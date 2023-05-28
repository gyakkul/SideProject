// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SwarmMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwarmMessages() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmAlertMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmInfoMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmJobStateMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmPingMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmPongMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmQuitMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskStateMessage();
	SWARMINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSwarmTimingMessage();
	UPackage* Z_Construct_UPackage__Script_SwarmInterface();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwarmPingMessage;
class UScriptStruct* FSwarmPingMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwarmPingMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwarmPingMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmPingMessage, (UObject*)Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmPingMessage"));
	}
	return Z_Registration_Info_UScriptStruct_SwarmPingMessage.OuterSingleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmPingMessage>()
{
	return FSwarmPingMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwarmPingMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmPingMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmPingMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmPingMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmPingMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmPingMessage",
		sizeof(FSwarmPingMessage),
		alignof(FSwarmPingMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmPingMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmPingMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmPingMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_SwarmPingMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwarmPingMessage.InnerSingleton, Z_Construct_UScriptStruct_FSwarmPingMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwarmPingMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwarmPongMessage;
class UScriptStruct* FSwarmPongMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwarmPongMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwarmPongMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmPongMessage, (UObject*)Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmPongMessage"));
	}
	return Z_Registration_Info_UScriptStruct_SwarmPongMessage.OuterSingleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmPongMessage>()
{
	return FSwarmPongMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwarmPongMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditor_MetaData[];
#endif
		static void NewProp_bIsEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComputerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComputerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmPongMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_bIsEditor_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_bIsEditor_SetBit(void* Obj)
	{
		((FSwarmPongMessage*)Obj)->bIsEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_bIsEditor = { "bIsEditor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSwarmPongMessage), &Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_bIsEditor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_bIsEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_bIsEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_ComputerName_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_ComputerName = { "ComputerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmPongMessage, ComputerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_ComputerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_ComputerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_bIsEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewProp_ComputerName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmPongMessage",
		sizeof(FSwarmPongMessage),
		alignof(FSwarmPongMessage),
		Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmPongMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_SwarmPongMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwarmPongMessage.InnerSingleton, Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwarmPongMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwarmInfoMessage;
class UScriptStruct* FSwarmInfoMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwarmInfoMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwarmInfoMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmInfoMessage, (UObject*)Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmInfoMessage"));
	}
	return Z_Registration_Info_UScriptStruct_SwarmInfoMessage.OuterSingleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmInfoMessage>()
{
	return FSwarmInfoMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmInfoMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::NewProp_TextMessage_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::NewProp_TextMessage = { "TextMessage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmInfoMessage, TextMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::NewProp_TextMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::NewProp_TextMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::NewProp_TextMessage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmInfoMessage",
		sizeof(FSwarmInfoMessage),
		alignof(FSwarmInfoMessage),
		Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmInfoMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_SwarmInfoMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwarmInfoMessage.InnerSingleton, Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwarmInfoMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwarmAlertMessage;
class UScriptStruct* FSwarmAlertMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwarmAlertMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwarmAlertMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmAlertMessage, (UObject*)Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmAlertMessage"));
	}
	return Z_Registration_Info_UScriptStruct_SwarmAlertMessage.OuterSingleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmAlertMessage>()
{
	return FSwarmAlertMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JobGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JobGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlertLevel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AlertLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TypeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmAlertMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_JobGuid_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The Job Guid */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The Job Guid" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_JobGuid = { "JobGuid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmAlertMessage, JobGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_JobGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_JobGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_AlertLevel_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The type of alert */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The type of alert" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_AlertLevel = { "AlertLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmAlertMessage, AlertLevel), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_AlertLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_AlertLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_ObjectGuid_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The identifier for the object that is associated with the issue */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The identifier for the object that is associated with the issue" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_ObjectGuid = { "ObjectGuid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmAlertMessage, ObjectGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_ObjectGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_ObjectGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TypeId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** App-specific identifier for the type of the object */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "App-specific identifier for the type of the object" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TypeId = { "TypeId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmAlertMessage, TypeId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TypeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TypeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TextMessage_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Generic text message for informational purposes */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "Generic text message for informational purposes" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TextMessage = { "TextMessage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmAlertMessage, TextMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TextMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TextMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_JobGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_AlertLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_ObjectGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TypeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewProp_TextMessage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmAlertMessage",
		sizeof(FSwarmAlertMessage),
		alignof(FSwarmAlertMessage),
		Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmAlertMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_SwarmAlertMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwarmAlertMessage.InnerSingleton, Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwarmAlertMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwarmTimingMessage;
class UScriptStruct* FSwarmTimingMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwarmTimingMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwarmTimingMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmTimingMessage, (UObject*)Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmTimingMessage"));
	}
	return Z_Registration_Info_UScriptStruct_SwarmTimingMessage.OuterSingleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmTimingMessage>()
{
	return FSwarmTimingMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThreadNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ThreadNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmTimingMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** State that the distributed job is transitioning to */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "State that the distributed job is transitioning to" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmTimingMessage, State), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_ThreadNum_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The thread this state is referring to */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The thread this state is referring to" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_ThreadNum = { "ThreadNum", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmTimingMessage, ThreadNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_ThreadNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_ThreadNum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewProp_ThreadNum,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmTimingMessage",
		sizeof(FSwarmTimingMessage),
		alignof(FSwarmTimingMessage),
		Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmTimingMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_SwarmTimingMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwarmTimingMessage.InnerSingleton, Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwarmTimingMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwarmTaskRequestMessage;
class UScriptStruct* FSwarmTaskRequestMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwarmTaskRequestMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwarmTaskRequestMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmTaskRequestMessage, (UObject*)Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmTaskRequestMessage"));
	}
	return Z_Registration_Info_UScriptStruct_SwarmTaskRequestMessage.OuterSingleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmTaskRequestMessage>()
{
	return FSwarmTaskRequestMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmTaskRequestMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmTaskRequestMessage",
		sizeof(FSwarmTaskRequestMessage),
		alignof(FSwarmTaskRequestMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_SwarmTaskRequestMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwarmTaskRequestMessage.InnerSingleton, Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwarmTaskRequestMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwarmTaskRequestReleaseMessage;
class UScriptStruct* FSwarmTaskRequestReleaseMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwarmTaskRequestReleaseMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwarmTaskRequestReleaseMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage, (UObject*)Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmTaskRequestReleaseMessage"));
	}
	return Z_Registration_Info_UScriptStruct_SwarmTaskRequestReleaseMessage.OuterSingleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmTaskRequestReleaseMessage>()
{
	return FSwarmTaskRequestReleaseMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmTaskRequestReleaseMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmTaskRequestReleaseMessage",
		sizeof(FSwarmTaskRequestReleaseMessage),
		alignof(FSwarmTaskRequestReleaseMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_SwarmTaskRequestReleaseMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwarmTaskRequestReleaseMessage.InnerSingleton, Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwarmTaskRequestReleaseMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwarmTaskRequestReservationMessage;
class UScriptStruct* FSwarmTaskRequestReservationMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwarmTaskRequestReservationMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwarmTaskRequestReservationMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage, (UObject*)Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmTaskRequestReservationMessage"));
	}
	return Z_Registration_Info_UScriptStruct_SwarmTaskRequestReservationMessage.OuterSingleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmTaskRequestReservationMessage>()
{
	return FSwarmTaskRequestReservationMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmTaskRequestReservationMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmTaskRequestReservationMessage",
		sizeof(FSwarmTaskRequestReservationMessage),
		alignof(FSwarmTaskRequestReservationMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_SwarmTaskRequestReservationMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwarmTaskRequestReservationMessage.InnerSingleton, Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwarmTaskRequestReservationMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwarmTaskRequestSpecificationMessage;
class UScriptStruct* FSwarmTaskRequestSpecificationMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwarmTaskRequestSpecificationMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwarmTaskRequestSpecificationMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage, (UObject*)Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmTaskRequestSpecificationMessage"));
	}
	return Z_Registration_Info_UScriptStruct_SwarmTaskRequestSpecificationMessage.OuterSingleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmTaskRequestSpecificationMessage>()
{
	return FSwarmTaskRequestSpecificationMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaskGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaskGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Cost;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Dependencies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dependencies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmTaskRequestSpecificationMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_TaskGuid_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The GUID used for identifying the Task being referred to */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The GUID used for identifying the Task being referred to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_TaskGuid = { "TaskGuid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmTaskRequestSpecificationMessage, TaskGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_TaskGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_TaskGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The Task's parameter string specified with AddTask */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The Task's parameter string specified with AddTask" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmTaskRequestSpecificationMessage, Parameters), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Parameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Flags used to control the behavior of the Task, subject to overrides from the containing Job */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "Flags used to control the behavior of the Task, subject to overrides from the containing Job" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmTaskRequestSpecificationMessage, Flags), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Flags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Cost_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The Task's cost, relative to all other Tasks in the same Job, used for even distribution and scheduling */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The Task's cost, relative to all other Tasks in the same Job, used for even distribution and scheduling" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmTaskRequestSpecificationMessage, Cost), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Cost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Cost_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Dependencies_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Any additional Task dependencies */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "Any additional Task dependencies" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmTaskRequestSpecificationMessage, Dependencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Dependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Dependencies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_TaskGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Cost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Dependencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewProp_Dependencies,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmTaskRequestSpecificationMessage",
		sizeof(FSwarmTaskRequestSpecificationMessage),
		alignof(FSwarmTaskRequestSpecificationMessage),
		Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_SwarmTaskRequestSpecificationMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwarmTaskRequestSpecificationMessage.InnerSingleton, Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwarmTaskRequestSpecificationMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwarmJobStateMessage;
class UScriptStruct* FSwarmJobStateMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwarmJobStateMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwarmJobStateMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmJobStateMessage, (UObject*)Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmJobStateMessage"));
	}
	return Z_Registration_Info_UScriptStruct_SwarmJobStateMessage.OuterSingleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmJobStateMessage>()
{
	return FSwarmJobStateMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExitCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunningTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RunningTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmJobStateMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The Job GUID used for identifying the Job */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The Job GUID used for identifying the Job" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmJobStateMessage, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The current state and arbitrary message */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The current state and arbitrary message" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmJobStateMessage, State), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmJobStateMessage, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_ExitCode_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Various stats, including run time, exit codes, etc. */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "Various stats, including run time, exit codes, etc." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_ExitCode = { "ExitCode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmJobStateMessage, ExitCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_ExitCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_ExitCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_RunningTime_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_RunningTime = { "RunningTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmJobStateMessage, RunningTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_RunningTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_RunningTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_ExitCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewProp_RunningTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmJobStateMessage",
		sizeof(FSwarmJobStateMessage),
		alignof(FSwarmJobStateMessage),
		Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmJobStateMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_SwarmJobStateMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwarmJobStateMessage.InnerSingleton, Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwarmJobStateMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwarmTaskStateMessage;
class UScriptStruct* FSwarmTaskStateMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwarmTaskStateMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwarmTaskStateMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmTaskStateMessage, (UObject*)Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmTaskStateMessage"));
	}
	return Z_Registration_Info_UScriptStruct_SwarmTaskStateMessage.OuterSingleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmTaskStateMessage>()
{
	return FSwarmTaskStateMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExitCode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExitCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunningTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RunningTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmTaskStateMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The Task GUID used for identifying the Task */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The Task GUID used for identifying the Task" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmTaskStateMessage, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The current state and arbitrary message */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "The current state and arbitrary message" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmTaskStateMessage, State), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmTaskStateMessage, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_ExitCode_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Various stats, including run time, exit codes, etc. */" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
		{ "ToolTip", "Various stats, including run time, exit codes, etc." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_ExitCode = { "ExitCode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmTaskStateMessage, ExitCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_ExitCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_ExitCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_RunningTime_MetaData[] = {
		{ "Category", "Message" },
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_RunningTime = { "RunningTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSwarmTaskStateMessage, RunningTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_RunningTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_RunningTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_ExitCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewProp_RunningTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmTaskStateMessage",
		sizeof(FSwarmTaskStateMessage),
		alignof(FSwarmTaskStateMessage),
		Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmTaskStateMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_SwarmTaskStateMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwarmTaskStateMessage.InnerSingleton, Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwarmTaskStateMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwarmQuitMessage;
class UScriptStruct* FSwarmQuitMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwarmQuitMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwarmQuitMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwarmQuitMessage, (UObject*)Z_Construct_UPackage__Script_SwarmInterface(), TEXT("SwarmQuitMessage"));
	}
	return Z_Registration_Info_UScriptStruct_SwarmQuitMessage.OuterSingleton;
}
template<> SWARMINTERFACE_API UScriptStruct* StaticStruct<FSwarmQuitMessage>()
{
	return FSwarmQuitMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwarmQuitMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwarmQuitMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SwarmMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwarmQuitMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwarmQuitMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwarmQuitMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SwarmInterface,
		nullptr,
		&NewStructOps,
		"SwarmQuitMessage",
		sizeof(FSwarmQuitMessage),
		alignof(FSwarmQuitMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwarmQuitMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwarmQuitMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwarmQuitMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_SwarmQuitMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwarmQuitMessage.InnerSingleton, Z_Construct_UScriptStruct_FSwarmQuitMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwarmQuitMessage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SwarmInterface_Private_SwarmMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SwarmInterface_Private_SwarmMessages_h_Statics::ScriptStructInfo[] = {
		{ FSwarmPingMessage::StaticStruct, Z_Construct_UScriptStruct_FSwarmPingMessage_Statics::NewStructOps, TEXT("SwarmPingMessage"), &Z_Registration_Info_UScriptStruct_SwarmPingMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwarmPingMessage), 3575465707U) },
		{ FSwarmPongMessage::StaticStruct, Z_Construct_UScriptStruct_FSwarmPongMessage_Statics::NewStructOps, TEXT("SwarmPongMessage"), &Z_Registration_Info_UScriptStruct_SwarmPongMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwarmPongMessage), 2208605382U) },
		{ FSwarmInfoMessage::StaticStruct, Z_Construct_UScriptStruct_FSwarmInfoMessage_Statics::NewStructOps, TEXT("SwarmInfoMessage"), &Z_Registration_Info_UScriptStruct_SwarmInfoMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwarmInfoMessage), 2683007931U) },
		{ FSwarmAlertMessage::StaticStruct, Z_Construct_UScriptStruct_FSwarmAlertMessage_Statics::NewStructOps, TEXT("SwarmAlertMessage"), &Z_Registration_Info_UScriptStruct_SwarmAlertMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwarmAlertMessage), 3706830653U) },
		{ FSwarmTimingMessage::StaticStruct, Z_Construct_UScriptStruct_FSwarmTimingMessage_Statics::NewStructOps, TEXT("SwarmTimingMessage"), &Z_Registration_Info_UScriptStruct_SwarmTimingMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwarmTimingMessage), 3525044526U) },
		{ FSwarmTaskRequestMessage::StaticStruct, Z_Construct_UScriptStruct_FSwarmTaskRequestMessage_Statics::NewStructOps, TEXT("SwarmTaskRequestMessage"), &Z_Registration_Info_UScriptStruct_SwarmTaskRequestMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwarmTaskRequestMessage), 2700690749U) },
		{ FSwarmTaskRequestReleaseMessage::StaticStruct, Z_Construct_UScriptStruct_FSwarmTaskRequestReleaseMessage_Statics::NewStructOps, TEXT("SwarmTaskRequestReleaseMessage"), &Z_Registration_Info_UScriptStruct_SwarmTaskRequestReleaseMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwarmTaskRequestReleaseMessage), 1731741936U) },
		{ FSwarmTaskRequestReservationMessage::StaticStruct, Z_Construct_UScriptStruct_FSwarmTaskRequestReservationMessage_Statics::NewStructOps, TEXT("SwarmTaskRequestReservationMessage"), &Z_Registration_Info_UScriptStruct_SwarmTaskRequestReservationMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwarmTaskRequestReservationMessage), 935431516U) },
		{ FSwarmTaskRequestSpecificationMessage::StaticStruct, Z_Construct_UScriptStruct_FSwarmTaskRequestSpecificationMessage_Statics::NewStructOps, TEXT("SwarmTaskRequestSpecificationMessage"), &Z_Registration_Info_UScriptStruct_SwarmTaskRequestSpecificationMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwarmTaskRequestSpecificationMessage), 3425354702U) },
		{ FSwarmJobStateMessage::StaticStruct, Z_Construct_UScriptStruct_FSwarmJobStateMessage_Statics::NewStructOps, TEXT("SwarmJobStateMessage"), &Z_Registration_Info_UScriptStruct_SwarmJobStateMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwarmJobStateMessage), 3550533287U) },
		{ FSwarmTaskStateMessage::StaticStruct, Z_Construct_UScriptStruct_FSwarmTaskStateMessage_Statics::NewStructOps, TEXT("SwarmTaskStateMessage"), &Z_Registration_Info_UScriptStruct_SwarmTaskStateMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwarmTaskStateMessage), 3583163662U) },
		{ FSwarmQuitMessage::StaticStruct, Z_Construct_UScriptStruct_FSwarmQuitMessage_Statics::NewStructOps, TEXT("SwarmQuitMessage"), &Z_Registration_Info_UScriptStruct_SwarmQuitMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwarmQuitMessage), 2384288251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SwarmInterface_Private_SwarmMessages_h_1371207458(TEXT("/Script/SwarmInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SwarmInterface_Private_SwarmMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SwarmInterface_Private_SwarmMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
