// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DisasterRecoverySessionInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisasterRecoverySessionInfo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DISASTERRECOVERYCLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo();
	DISASTERRECOVERYCLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FDisasterRecoveryInfo();
	DISASTERRECOVERYCLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FDisasterRecoverySession();
	UPackage* Z_Construct_UPackage__Script_DisasterRecoveryClient();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisasterRecoverySession;
class UScriptStruct* FDisasterRecoverySession::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisasterRecoverySession.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisasterRecoverySession.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisasterRecoverySession, (UObject*)Z_Construct_UPackage__Script_DisasterRecoveryClient(), TEXT("DisasterRecoverySession"));
	}
	return Z_Registration_Info_UScriptStruct_DisasterRecoverySession.OuterSingleton;
}
template<> DISASTERRECOVERYCLIENT_API UScriptStruct* StaticStruct<FDisasterRecoverySession>()
{
	return FDisasterRecoverySession::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepositoryId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RepositoryId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepositoryRootDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RepositoryRootDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MountedByProcessId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MountedByProcessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientProcessId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ClientProcessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about a single session info. */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "Information about a single session info." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisasterRecoverySession>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_RepositoryId_MetaData[] = {
		{ "Comment", "/** The repository ID created on the server to store that session. */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "The repository ID created on the server to store that session." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_RepositoryId = { "RepositoryId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisasterRecoverySession, RepositoryId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_RepositoryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_RepositoryId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_RepositoryRootDir_MetaData[] = {
		{ "Comment", "/** The immediate parent directory containing this session repository. */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "The immediate parent directory containing this session repository." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_RepositoryRootDir = { "RepositoryRootDir", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisasterRecoverySession, RepositoryRootDir), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_RepositoryRootDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_RepositoryRootDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_SessionName_MetaData[] = {
		{ "Comment", "/** The name of the session. */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "The name of the session." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisasterRecoverySession, SessionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_SessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_SessionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_MountedByProcessId_MetaData[] = {
		{ "Comment", "/** The client that mounted that session repository. */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "The client that mounted that session repository." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_MountedByProcessId = { "MountedByProcessId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisasterRecoverySession, MountedByProcessId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_MountedByProcessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_MountedByProcessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_ClientProcessId_MetaData[] = {
		{ "Comment", "/** The process ID of the client connected to the session (the session is live and recording transactions for this client process). */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "The process ID of the client connected to the session (the session is live and recording transactions for this client process)." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_ClientProcessId = { "ClientProcessId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisasterRecoverySession, ClientProcessId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_ClientProcessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_ClientProcessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_Flags_MetaData[] = {
		{ "Comment", "/** Information about the session. */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "Information about the session." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisasterRecoverySession, Flags), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_Flags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_RepositoryId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_RepositoryRootDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_MountedByProcessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_ClientProcessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewProp_Flags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisasterRecoveryClient,
		nullptr,
		&NewStructOps,
		"DisasterRecoverySession",
		sizeof(FDisasterRecoverySession),
		alignof(FDisasterRecoverySession),
		Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisasterRecoverySession()
	{
		if (!Z_Registration_Info_UScriptStruct_DisasterRecoverySession.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisasterRecoverySession.InnerSingleton, Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisasterRecoverySession.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisasterRecoveryClientInfo;
class UScriptStruct* FDisasterRecoveryClientInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisasterRecoveryClientInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisasterRecoveryClientInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo, (UObject*)Z_Construct_UPackage__Script_DisasterRecoveryClient(), TEXT("DisasterRecoveryClientInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DisasterRecoveryClientInfo.OuterSingleton;
}
template<> DISASTERRECOVERYCLIENT_API UScriptStruct* StaticStruct<FDisasterRecoveryClientInfo>()
{
	return FDisasterRecoveryClientInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientProcessId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ClientProcessId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientAppId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientAppId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about a disaster recovery client. */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "Information about a disaster recovery client." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisasterRecoveryClientInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::NewProp_ClientProcessId_MetaData[] = {
		{ "Comment", "/** The client process ID. */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "The client process ID." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::NewProp_ClientProcessId = { "ClientProcessId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisasterRecoveryClientInfo, ClientProcessId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::NewProp_ClientProcessId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::NewProp_ClientProcessId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::NewProp_ClientAppId_MetaData[] = {
		{ "Comment", "/** The client app ID. */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "The client app ID." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::NewProp_ClientAppId = { "ClientAppId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisasterRecoveryClientInfo, ClientAppId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::NewProp_ClientAppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::NewProp_ClientAppId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::NewProp_ClientProcessId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::NewProp_ClientAppId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisasterRecoveryClient,
		nullptr,
		&NewStructOps,
		"DisasterRecoveryClientInfo",
		sizeof(FDisasterRecoveryClientInfo),
		alignof(FDisasterRecoveryClientInfo),
		Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DisasterRecoveryClientInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisasterRecoveryClientInfo.InnerSingleton, Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisasterRecoveryClientInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisasterRecoveryInfo;
class UScriptStruct* FDisasterRecoveryInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisasterRecoveryInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisasterRecoveryInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisasterRecoveryInfo, (UObject*)Z_Construct_UPackage__Script_DisasterRecoveryClient(), TEXT("DisasterRecoveryInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DisasterRecoveryInfo.OuterSingleton;
}
template<> DISASTERRECOVERYCLIENT_API UScriptStruct* StaticStruct<FDisasterRecoveryInfo>()
{
	return FDisasterRecoveryInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Revision_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Revision;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveSessions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSessions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveSessions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecentSessions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecentSessions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RecentSessions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportedSessions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedSessions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportedSessions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingSessions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingSessions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingSessions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DiscardedRepositoryIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscardedRepositoryIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DiscardedRepositoryIds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Clients_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Clients_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Clients;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Hold the information for multiple disaster recovery sessions.\n */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "Hold the information for multiple disaster recovery sessions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisasterRecoveryInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_Revision_MetaData[] = {
		{ "Comment", "/** The revision number of the information. Updated everytime the recovery info file is written. */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "The revision number of the information. Updated everytime the recovery info file is written." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_Revision = { "Revision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisasterRecoveryInfo, Revision), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_Revision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_Revision_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_ActiveSessions_Inner = { "ActiveSessions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDisasterRecoverySession, METADATA_PARAMS(nullptr, 0) }; // 585604168
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_ActiveSessions_MetaData[] = {
		{ "Comment", "/** The list of running/crashing/crashed sessions. */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "The list of running/crashing/crashed sessions." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_ActiveSessions = { "ActiveSessions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisasterRecoveryInfo, ActiveSessions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_ActiveSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_ActiveSessions_MetaData)) }; // 585604168
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_RecentSessions_Inner = { "RecentSessions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDisasterRecoverySession, METADATA_PARAMS(nullptr, 0) }; // 585604168
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_RecentSessions_MetaData[] = {
		{ "Comment", "/** The list of recent sessions (rotated over time). */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "The list of recent sessions (rotated over time)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_RecentSessions = { "RecentSessions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisasterRecoveryInfo, RecentSessions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_RecentSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_RecentSessions_MetaData)) }; // 585604168
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_ImportedSessions_Inner = { "ImportedSessions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDisasterRecoverySession, METADATA_PARAMS(nullptr, 0) }; // 585604168
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_ImportedSessions_MetaData[] = {
		{ "Comment", "/** The list of imported sessions (rotated over time). */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "The list of imported sessions (rotated over time)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_ImportedSessions = { "ImportedSessions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisasterRecoveryInfo, ImportedSessions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_ImportedSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_ImportedSessions_MetaData)) }; // 585604168
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_PendingSessions_Inner = { "PendingSessions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDisasterRecoverySession, METADATA_PARAMS(nullptr, 0) }; // 585604168
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_PendingSessions_MetaData[] = {
		{ "Comment", "/** The list of session being created, for which the repository was created and mounted, but the session not yet started. */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "The list of session being created, for which the repository was created and mounted, but the session not yet started." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_PendingSessions = { "PendingSessions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisasterRecoveryInfo, PendingSessions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_PendingSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_PendingSessions_MetaData)) }; // 585604168
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_DiscardedRepositoryIds_Inner = { "DiscardedRepositoryIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_DiscardedRepositoryIds_MetaData[] = {
		{ "Comment", "/** The list of session reporitories ID that are scheduled to be discarded, but kept around until the server confirms the deletion. */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "The list of session reporitories ID that are scheduled to be discarded, but kept around until the server confirms the deletion." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_DiscardedRepositoryIds = { "DiscardedRepositoryIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisasterRecoveryInfo, DiscardedRepositoryIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_DiscardedRepositoryIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_DiscardedRepositoryIds_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_Clients_Inner = { "Clients", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo, METADATA_PARAMS(nullptr, 0) }; // 642670717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_Clients_MetaData[] = {
		{ "Comment", "/** The list of client currently executing (in different processes). */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySessionInfo.h" },
		{ "ToolTip", "The list of client currently executing (in different processes)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_Clients = { "Clients", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisasterRecoveryInfo, Clients), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_Clients_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_Clients_MetaData)) }; // 642670717
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_Revision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_ActiveSessions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_ActiveSessions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_RecentSessions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_RecentSessions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_ImportedSessions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_ImportedSessions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_PendingSessions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_PendingSessions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_DiscardedRepositoryIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_DiscardedRepositoryIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_Clients_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewProp_Clients,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisasterRecoveryClient,
		nullptr,
		&NewStructOps,
		"DisasterRecoveryInfo",
		sizeof(FDisasterRecoveryInfo),
		alignof(FDisasterRecoveryInfo),
		Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisasterRecoveryInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DisasterRecoveryInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisasterRecoveryInfo.InnerSingleton, Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisasterRecoveryInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_DisasterRecoveryClient_Source_DisasterRecoveryClient_Private_DisasterRecoverySessionInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_DisasterRecoveryClient_Source_DisasterRecoveryClient_Private_DisasterRecoverySessionInfo_h_Statics::ScriptStructInfo[] = {
		{ FDisasterRecoverySession::StaticStruct, Z_Construct_UScriptStruct_FDisasterRecoverySession_Statics::NewStructOps, TEXT("DisasterRecoverySession"), &Z_Registration_Info_UScriptStruct_DisasterRecoverySession, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisasterRecoverySession), 585604168U) },
		{ FDisasterRecoveryClientInfo::StaticStruct, Z_Construct_UScriptStruct_FDisasterRecoveryClientInfo_Statics::NewStructOps, TEXT("DisasterRecoveryClientInfo"), &Z_Registration_Info_UScriptStruct_DisasterRecoveryClientInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisasterRecoveryClientInfo), 642670717U) },
		{ FDisasterRecoveryInfo::StaticStruct, Z_Construct_UScriptStruct_FDisasterRecoveryInfo_Statics::NewStructOps, TEXT("DisasterRecoveryInfo"), &Z_Registration_Info_UScriptStruct_DisasterRecoveryInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisasterRecoveryInfo), 1019706531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_DisasterRecoveryClient_Source_DisasterRecoveryClient_Private_DisasterRecoverySessionInfo_h_2855697761(TEXT("/Script/DisasterRecoveryClient"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_DisasterRecoveryClient_Source_DisasterRecoveryClient_Private_DisasterRecoverySessionInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_DisasterRecoveryClient_Source_DisasterRecoveryClient_Private_DisasterRecoverySessionInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
