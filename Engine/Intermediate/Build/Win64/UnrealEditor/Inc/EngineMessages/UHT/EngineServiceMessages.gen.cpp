// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EngineServiceMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineServiceMessages() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthDeny();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthGrant();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceExecuteCommand();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceNotification();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePing();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePong();
	ENGINEMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceTerminate();
	UPackage* Z_Construct_UPackage__Script_EngineMessages();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineServicePing;
class UScriptStruct* FEngineServicePing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServicePing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineServicePing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServicePing, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServicePing"));
	}
	return Z_Registration_Info_UScriptStruct_EngineServicePing.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServicePing>()
{
	return FEngineServicePing::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEngineServicePing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePing_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for discovering engine instances on the network.\n */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for discovering engine instances on the network." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineServicePing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServicePing>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServicePing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
		nullptr,
		&NewStructOps,
		"EngineServicePing",
		sizeof(FEngineServicePing),
		alignof(FEngineServicePing),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePing_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePing()
	{
		if (!Z_Registration_Info_UScriptStruct_EngineServicePing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineServicePing.InnerSingleton, Z_Construct_UScriptStruct_FEngineServicePing_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EngineServicePing.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineServicePong;
class UScriptStruct* FEngineServicePong::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServicePong.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineServicePong.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServicePong, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServicePong"));
	}
	return Z_Registration_Info_UScriptStruct_EngineServicePong.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServicePong>()
{
	return FEngineServicePong::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEngineServicePong_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EngineVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasBegunPlay_MetaData[];
#endif
		static void NewProp_HasBegunPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasBegunPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTimeSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldTimeSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for responding to a request to discover engine instances on the network.\n */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for responding to a request to discover engine instances on the network." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServicePong>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the currently loaded level, if any. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the currently loaded level, if any." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineServicePong, CurrentLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_CurrentLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_CurrentLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_EngineVersion_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the engine version. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the engine version." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_EngineVersion = { "EngineVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineServicePong, EngineVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_EngineVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_EngineVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds a flag indicating whether game play has begun. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds a flag indicating whether game play has begun." },
	};
#endif
	void Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay_SetBit(void* Obj)
	{
		((FEngineServicePong*)Obj)->HasBegunPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay = { "HasBegunPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEngineServicePong), &Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the instance identifier. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the instance identifier." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineServicePong, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceType_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the type of the engine instance. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the type of the engine instance." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineServicePong, InstanceType), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the identifier of the session that the application belongs to. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the session that the application belongs to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineServicePong, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_WorldTimeSeconds_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the time in seconds since the world was loaded. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the time in seconds since the world was loaded." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_WorldTimeSeconds = { "WorldTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineServicePong, WorldTimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_WorldTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_WorldTimeSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServicePong_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_CurrentLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_EngineVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_HasBegunPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_InstanceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewProp_WorldTimeSeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServicePong_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
		nullptr,
		&NewStructOps,
		"EngineServicePong",
		sizeof(FEngineServicePong),
		alignof(FEngineServicePong),
		Z_Construct_UScriptStruct_FEngineServicePong_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServicePong_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServicePong_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServicePong()
	{
		if (!Z_Registration_Info_UScriptStruct_EngineServicePong.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineServicePong.InnerSingleton, Z_Construct_UScriptStruct_FEngineServicePong_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EngineServicePong.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny;
class UScriptStruct* FEngineServiceAuthDeny::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceAuthDeny, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceAuthDeny"));
	}
	return Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServiceAuthDeny>()
{
	return FEngineServiceAuthDeny::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserToDeny_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserToDeny;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for denying service access to a remote user.\n */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for denying service access to a remote user." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceAuthDeny>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that denied access. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that denied access." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineServiceAuthDeny, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserToDeny_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that access is denied to. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that access is denied to." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserToDeny = { "UserToDeny", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineServiceAuthDeny, UserToDeny), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserToDeny_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserToDeny_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewProp_UserToDeny,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
		nullptr,
		&NewStructOps,
		"EngineServiceAuthDeny",
		sizeof(FEngineServiceAuthDeny),
		alignof(FEngineServiceAuthDeny),
		Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthDeny()
	{
		if (!Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny.InnerSingleton, Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant;
class UScriptStruct* FEngineServiceAuthGrant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceAuthGrant, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceAuthGrant"));
	}
	return Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServiceAuthGrant>()
{
	return FEngineServiceAuthGrant::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserToGrant_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserToGrant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for granting service access to a remote user.\n */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for granting service access to a remote user." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceAuthGrant>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that granted access. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that granted access." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineServiceAuthGrant, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserToGrant_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that access is granted to. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that access is granted to." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserToGrant = { "UserToGrant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineServiceAuthGrant, UserToGrant), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserToGrant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserToGrant_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewProp_UserToGrant,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
		nullptr,
		&NewStructOps,
		"EngineServiceAuthGrant",
		sizeof(FEngineServiceAuthGrant),
		alignof(FEngineServiceAuthGrant),
		Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceAuthGrant()
	{
		if (!Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant.InnerSingleton, Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand;
class UScriptStruct* FEngineServiceExecuteCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceExecuteCommand"));
	}
	return Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServiceExecuteCommand>()
{
	return FEngineServiceExecuteCommand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for executing a console command.\n */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for executing a console command." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceExecuteCommand>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_Command_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the command to execute. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the command to execute." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineServiceExecuteCommand, Command), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_Command_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that wants to execute the command. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that wants to execute the command." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineServiceExecuteCommand, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_UserName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_Command,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewProp_UserName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
		nullptr,
		&NewStructOps,
		"EngineServiceExecuteCommand",
		sizeof(FEngineServiceExecuteCommand),
		alignof(FEngineServiceExecuteCommand),
		Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceExecuteCommand()
	{
		if (!Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand.InnerSingleton, Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineServiceTerminate;
class UScriptStruct* FEngineServiceTerminate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServiceTerminate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineServiceTerminate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceTerminate, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceTerminate"));
	}
	return Z_Registration_Info_UScriptStruct_EngineServiceTerminate.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServiceTerminate>()
{
	return FEngineServiceTerminate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message for terminating the engine.\n */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message for terminating the engine." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceTerminate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that wants to terminate the engine. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that wants to terminate the engine." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineServiceTerminate, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewProp_UserName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewProp_UserName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
		nullptr,
		&NewStructOps,
		"EngineServiceTerminate",
		sizeof(FEngineServiceTerminate),
		alignof(FEngineServiceTerminate),
		Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceTerminate()
	{
		if (!Z_Registration_Info_UScriptStruct_EngineServiceTerminate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineServiceTerminate.InnerSingleton, Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EngineServiceTerminate.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineServiceNotification;
class UScriptStruct* FEngineServiceNotification::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineServiceNotification.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineServiceNotification.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineServiceNotification, (UObject*)Z_Construct_UPackage__Script_EngineMessages(), TEXT("EngineServiceNotification"));
	}
	return Z_Registration_Info_UScriptStruct_EngineServiceNotification.OuterSingleton;
}
template<> ENGINEMESSAGES_API UScriptStruct* StaticStruct<FEngineServiceNotification>()
{
	return FEngineServiceNotification::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEngineServiceNotification_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that contains a notification or log output.\n */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Implements a message that contains a notification or log output." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineServiceNotification>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the notification text. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the notification text." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineServiceNotification, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_TimeSeconds_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the time in seconds since the engine started. */" },
		{ "ModuleRelativePath", "Public/EngineServiceMessages.h" },
		{ "ToolTip", "Holds the time in seconds since the engine started." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineServiceNotification, TimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_TimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_TimeSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewProp_TimeSeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EngineMessages,
		nullptr,
		&NewStructOps,
		"EngineServiceNotification",
		sizeof(FEngineServiceNotification),
		alignof(FEngineServiceNotification),
		Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineServiceNotification()
	{
		if (!Z_Registration_Info_UScriptStruct_EngineServiceNotification.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineServiceNotification.InnerSingleton, Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EngineServiceNotification.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_EngineServiceMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_EngineServiceMessages_h_Statics::ScriptStructInfo[] = {
		{ FEngineServicePing::StaticStruct, Z_Construct_UScriptStruct_FEngineServicePing_Statics::NewStructOps, TEXT("EngineServicePing"), &Z_Registration_Info_UScriptStruct_EngineServicePing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineServicePing), 3484013609U) },
		{ FEngineServicePong::StaticStruct, Z_Construct_UScriptStruct_FEngineServicePong_Statics::NewStructOps, TEXT("EngineServicePong"), &Z_Registration_Info_UScriptStruct_EngineServicePong, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineServicePong), 2484441156U) },
		{ FEngineServiceAuthDeny::StaticStruct, Z_Construct_UScriptStruct_FEngineServiceAuthDeny_Statics::NewStructOps, TEXT("EngineServiceAuthDeny"), &Z_Registration_Info_UScriptStruct_EngineServiceAuthDeny, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineServiceAuthDeny), 1264262285U) },
		{ FEngineServiceAuthGrant::StaticStruct, Z_Construct_UScriptStruct_FEngineServiceAuthGrant_Statics::NewStructOps, TEXT("EngineServiceAuthGrant"), &Z_Registration_Info_UScriptStruct_EngineServiceAuthGrant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineServiceAuthGrant), 3571462307U) },
		{ FEngineServiceExecuteCommand::StaticStruct, Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_Statics::NewStructOps, TEXT("EngineServiceExecuteCommand"), &Z_Registration_Info_UScriptStruct_EngineServiceExecuteCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineServiceExecuteCommand), 2722629733U) },
		{ FEngineServiceTerminate::StaticStruct, Z_Construct_UScriptStruct_FEngineServiceTerminate_Statics::NewStructOps, TEXT("EngineServiceTerminate"), &Z_Registration_Info_UScriptStruct_EngineServiceTerminate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineServiceTerminate), 2744362160U) },
		{ FEngineServiceNotification::StaticStruct, Z_Construct_UScriptStruct_FEngineServiceNotification_Statics::NewStructOps, TEXT("EngineServiceNotification"), &Z_Registration_Info_UScriptStruct_EngineServiceNotification, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineServiceNotification), 3662168720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_EngineServiceMessages_h_3213380482(TEXT("/Script/EngineMessages"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_EngineServiceMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EngineMessages_Public_EngineServiceMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
