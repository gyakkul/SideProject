// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SessionServiceMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionServiceMessages() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SESSIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLog();
	SESSIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLogSubscribe();
	SESSIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe();
	SESSIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FSessionServicePing();
	SESSIONMESSAGES_API UScriptStruct* Z_Construct_UScriptStruct_FSessionServicePong();
	UPackage* Z_Construct_UPackage__Script_SessionMessages();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionServicePing;
class UScriptStruct* FSessionServicePing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionServicePing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionServicePing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionServicePing, (UObject*)Z_Construct_UPackage__Script_SessionMessages(), TEXT("SessionServicePing"));
	}
	return Z_Registration_Info_UScriptStruct_SessionServicePing.OuterSingleton;
}
template<> SESSIONMESSAGES_API UScriptStruct* StaticStruct<FSessionServicePing>()
{
	return FSessionServicePing::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSessionServicePing_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePing_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is published to discover existing application sessions.\n */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Implements a message that is published to discover existing application sessions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionServicePing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionServicePing>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePing_Statics::NewProp_UserName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** The name of the user who sent this ping. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "The name of the user who sent this ping." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServicePing_Statics::NewProp_UserName = { "UserName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionServicePing, UserName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePing_Statics::NewProp_UserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePing_Statics::NewProp_UserName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionServicePing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePing_Statics::NewProp_UserName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionServicePing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SessionMessages,
		nullptr,
		&NewStructOps,
		"SessionServicePing",
		sizeof(FSessionServicePing),
		alignof(FSessionServicePing),
		Z_Construct_UScriptStruct_FSessionServicePing_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePing_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePing_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionServicePing()
	{
		if (!Z_Registration_Info_UScriptStruct_SessionServicePing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionServicePing.InnerSingleton, Z_Construct_UScriptStruct_FSessionServicePing_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SessionServicePing.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionServicePong;
class UScriptStruct* FSessionServicePong::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionServicePong.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionServicePong.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionServicePong, (UObject*)Z_Construct_UPackage__Script_SessionMessages(), TEXT("SessionServicePong"));
	}
	return Z_Registration_Info_UScriptStruct_SessionServicePong.OuterSingleton;
}
template<> SESSIONMESSAGES_API UScriptStruct* StaticStruct<FSessionServicePong>()
{
	return FSessionServicePong::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSessionServicePong_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Authorized_MetaData[];
#endif
		static void NewProp_Authorized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Authorized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildDate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BuildDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InstanceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionOwner_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Standalone_MetaData[];
#endif
		static void NewProp_Standalone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Standalone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that is published in response to FSessionServicePing.\n */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Implements a message that is published in response to FSessionServicePing." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionServicePong>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Authorized_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Indicates whether the pinging user is authorized to interact with this session. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Indicates whether the pinging user is authorized to interact with this session." },
	};
#endif
	void Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Authorized_SetBit(void* Obj)
	{
		((FSessionServicePong*)Obj)->Authorized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Authorized = { "Authorized", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSessionServicePong), &Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Authorized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Authorized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Authorized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_BuildDate_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the application's build date. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the application's build date." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_BuildDate = { "BuildDate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionServicePong, BuildDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_BuildDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_BuildDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the device that the application is running on. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the name of the device that the application is running on." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionServicePong, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_DeviceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the application's instance identifier. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the application's instance identifier." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionServicePong, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the application's instance name. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the application's instance name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionServicePong, InstanceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_PlatformName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the platform that the application is running on. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the name of the platform that the application is running on." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_PlatformName = { "PlatformName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionServicePong, PlatformName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_PlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_PlatformName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the identifier of the session that the application belongs to. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the identifier of the session that the application belongs to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionServicePong, SessionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionName_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the user defined name of the session. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the user defined name of the session." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionServicePong, SessionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionOwner_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the name of the user that started the session. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the name of the user that started the session." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionOwner = { "SessionOwner", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionServicePong, SessionOwner), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Standalone_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Indicates whether the application is the only one in that session. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Indicates whether the application is the only one in that session." },
	};
#endif
	void Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Standalone_SetBit(void* Obj)
	{
		((FSessionServicePong*)Obj)->Standalone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Standalone = { "Standalone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSessionServicePong), &Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Standalone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Standalone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Standalone_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionServicePong_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Authorized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_BuildDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_DeviceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_InstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_PlatformName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_SessionOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewProp_Standalone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionServicePong_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SessionMessages,
		nullptr,
		&NewStructOps,
		"SessionServicePong",
		sizeof(FSessionServicePong),
		alignof(FSessionServicePong),
		Z_Construct_UScriptStruct_FSessionServicePong_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServicePong_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServicePong_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionServicePong()
	{
		if (!Z_Registration_Info_UScriptStruct_SessionServicePong.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionServicePong.InnerSingleton, Z_Construct_UScriptStruct_FSessionServicePong_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SessionServicePong.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionServiceLog;
class UScriptStruct* FSessionServiceLog::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionServiceLog.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionServiceLog.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionServiceLog, (UObject*)Z_Construct_UPackage__Script_SessionMessages(), TEXT("SessionServiceLog"));
	}
	return Z_Registration_Info_UScriptStruct_SessionServiceLog.OuterSingleton;
}
template<> SESSIONMESSAGES_API UScriptStruct* StaticStruct<FSessionServiceLog>()
{
	return FSessionServiceLog::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSessionServiceLog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verbosity_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLog_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message that contains a console log entry.\n */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Implements a message that contains a console log entry." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionServiceLog>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the log message category. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the log message category." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionServiceLog, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the log message data. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the log message data." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionServiceLog, Data), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_InstanceId_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the application instance identifier. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the application instance identifier." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_InstanceId = { "InstanceId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionServiceLog, InstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_InstanceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_InstanceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_TimeSeconds_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the time in seconds since the application was started. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the time in seconds since the application was started." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionServiceLog, TimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_TimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_TimeSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Verbosity_MetaData[] = {
		{ "Category", "Message" },
		{ "Comment", "/** Holds the log message's verbosity level. */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Holds the log message's verbosity level." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSessionServiceLog, Verbosity), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Verbosity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Verbosity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionServiceLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_InstanceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_TimeSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewProp_Verbosity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionServiceLog_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SessionMessages,
		nullptr,
		&NewStructOps,
		"SessionServiceLog",
		sizeof(FSessionServiceLog),
		alignof(FSessionServiceLog),
		Z_Construct_UScriptStruct_FSessionServiceLog_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLog_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLog()
	{
		if (!Z_Registration_Info_UScriptStruct_SessionServiceLog.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionServiceLog.InnerSingleton, Z_Construct_UScriptStruct_FSessionServiceLog_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SessionServiceLog.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionServiceLogSubscribe;
class UScriptStruct* FSessionServiceLogSubscribe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionServiceLogSubscribe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionServiceLogSubscribe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionServiceLogSubscribe, (UObject*)Z_Construct_UPackage__Script_SessionMessages(), TEXT("SessionServiceLogSubscribe"));
	}
	return Z_Registration_Info_UScriptStruct_SessionServiceLogSubscribe.OuterSingleton;
}
template<> SESSIONMESSAGES_API UScriptStruct* StaticStruct<FSessionServiceLogSubscribe>()
{
	return FSessionServiceLogSubscribe::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message to subscribe to an application's console log.\n */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Implements a message to subscribe to an application's console log." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionServiceLogSubscribe>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SessionMessages,
		nullptr,
		&NewStructOps,
		"SessionServiceLogSubscribe",
		sizeof(FSessionServiceLogSubscribe),
		alignof(FSessionServiceLogSubscribe),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLogSubscribe()
	{
		if (!Z_Registration_Info_UScriptStruct_SessionServiceLogSubscribe.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionServiceLogSubscribe.InnerSingleton, Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SessionServiceLogSubscribe.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SessionServiceLogUnsubscribe;
class UScriptStruct* FSessionServiceLogUnsubscribe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SessionServiceLogUnsubscribe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SessionServiceLogUnsubscribe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe, (UObject*)Z_Construct_UPackage__Script_SessionMessages(), TEXT("SessionServiceLogUnsubscribe"));
	}
	return Z_Registration_Info_UScriptStruct_SessionServiceLogUnsubscribe.OuterSingleton;
}
template<> SESSIONMESSAGES_API UScriptStruct* StaticStruct<FSessionServiceLogUnsubscribe>()
{
	return FSessionServiceLogUnsubscribe::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a message to unsubscribe from an application's console log.\n */" },
		{ "ModuleRelativePath", "Public/SessionServiceMessages.h" },
		{ "ToolTip", "Implements a message to unsubscribe from an application's console log." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionServiceLogUnsubscribe>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SessionMessages,
		nullptr,
		&NewStructOps,
		"SessionServiceLogUnsubscribe",
		sizeof(FSessionServiceLogUnsubscribe),
		alignof(FSessionServiceLogUnsubscribe),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe()
	{
		if (!Z_Registration_Info_UScriptStruct_SessionServiceLogUnsubscribe.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SessionServiceLogUnsubscribe.InnerSingleton, Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SessionServiceLogUnsubscribe.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SessionMessages_Public_SessionServiceMessages_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SessionMessages_Public_SessionServiceMessages_h_Statics::ScriptStructInfo[] = {
		{ FSessionServicePing::StaticStruct, Z_Construct_UScriptStruct_FSessionServicePing_Statics::NewStructOps, TEXT("SessionServicePing"), &Z_Registration_Info_UScriptStruct_SessionServicePing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionServicePing), 2571580322U) },
		{ FSessionServicePong::StaticStruct, Z_Construct_UScriptStruct_FSessionServicePong_Statics::NewStructOps, TEXT("SessionServicePong"), &Z_Registration_Info_UScriptStruct_SessionServicePong, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionServicePong), 1493211610U) },
		{ FSessionServiceLog::StaticStruct, Z_Construct_UScriptStruct_FSessionServiceLog_Statics::NewStructOps, TEXT("SessionServiceLog"), &Z_Registration_Info_UScriptStruct_SessionServiceLog, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionServiceLog), 348438534U) },
		{ FSessionServiceLogSubscribe::StaticStruct, Z_Construct_UScriptStruct_FSessionServiceLogSubscribe_Statics::NewStructOps, TEXT("SessionServiceLogSubscribe"), &Z_Registration_Info_UScriptStruct_SessionServiceLogSubscribe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionServiceLogSubscribe), 2739758769U) },
		{ FSessionServiceLogUnsubscribe::StaticStruct, Z_Construct_UScriptStruct_FSessionServiceLogUnsubscribe_Statics::NewStructOps, TEXT("SessionServiceLogUnsubscribe"), &Z_Registration_Info_UScriptStruct_SessionServiceLogUnsubscribe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSessionServiceLogUnsubscribe), 494087949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SessionMessages_Public_SessionServiceMessages_h_1807049243(TEXT("/Script/SessionMessages"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SessionMessages_Public_SessionServiceMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SessionMessages_Public_SessionServiceMessages_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
