// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertServerSettings.h"
#include "ConcertSettings.h"
#include "ConcertTransportSettings.h"
#include "ConcertVersion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertServerSettings() {}
// Cross Module References
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionSettings();
	CONCERT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSessionVersionInfo();
	CONCERTSERVER_API UClass* Z_Construct_UClass_UConcertServerConfig();
	CONCERTSERVER_API UClass* Z_Construct_UClass_UConcertServerConfig_NoRegister();
	CONCERTSERVER_API UScriptStruct* Z_Construct_UScriptStruct_FConcertServerSettings();
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertEndpointSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ConcertServer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertServerSettings;
class UScriptStruct* FConcertServerSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertServerSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertServerSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertServerSettings, (UObject*)Z_Construct_UPackage__Script_ConcertServer(), TEXT("ConcertServerSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertServerSettings.OuterSingleton;
}
template<> CONCERTSERVER_API UScriptStruct* StaticStruct<FConcertServerSettings>()
{
	return FConcertServerSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertServerSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSessionSettingsRestriction_MetaData[];
#endif
		static void NewProp_bIgnoreSessionSettingsRestriction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSessionSettingsRestriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionTickFrequencySeconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionTickFrequencySeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertServerSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertServerSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerSettings_Statics::NewProp_bIgnoreSessionSettingsRestriction_MetaData[] = {
		{ "Category", "Server Settings" },
		{ "Comment", "/** The server will allow client to join potentially incompatible sessions */" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "The server will allow client to join potentially incompatible sessions" },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertServerSettings_Statics::NewProp_bIgnoreSessionSettingsRestriction_SetBit(void* Obj)
	{
		((FConcertServerSettings*)Obj)->bIgnoreSessionSettingsRestriction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertServerSettings_Statics::NewProp_bIgnoreSessionSettingsRestriction = { "bIgnoreSessionSettingsRestriction", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertServerSettings), &Z_Construct_UScriptStruct_FConcertServerSettings_Statics::NewProp_bIgnoreSessionSettingsRestriction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerSettings_Statics::NewProp_bIgnoreSessionSettingsRestriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerSettings_Statics::NewProp_bIgnoreSessionSettingsRestriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertServerSettings_Statics::NewProp_SessionTickFrequencySeconds_MetaData[] = {
		{ "Category", "Server Settings" },
		{ "Comment", "/** The timespan at which session updates are processed. */" },
		{ "DisplayName", "Session Tick Frequency" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "The timespan at which session updates are processed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertServerSettings_Statics::NewProp_SessionTickFrequencySeconds = { "SessionTickFrequencySeconds", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertServerSettings, SessionTickFrequencySeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerSettings_Statics::NewProp_SessionTickFrequencySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerSettings_Statics::NewProp_SessionTickFrequencySeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertServerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerSettings_Statics::NewProp_bIgnoreSessionSettingsRestriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertServerSettings_Statics::NewProp_SessionTickFrequencySeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertServerSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertServer,
		nullptr,
		&NewStructOps,
		"ConcertServerSettings",
		sizeof(FConcertServerSettings),
		alignof(FConcertServerSettings),
		Z_Construct_UScriptStruct_FConcertServerSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertServerSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertServerSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertServerSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertServerSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertServerSettings.InnerSingleton, Z_Construct_UScriptStruct_FConcertServerSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertServerSettings.InnerSingleton;
	}
	void UConcertServerConfig::StaticRegisterNativesUConcertServerConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConcertServerConfig);
	UClass* Z_Construct_UClass_UConcertServerConfig_NoRegister()
	{
		return UConcertServerConfig::StaticClass();
	}
	struct Z_Construct_UClass_UConcertServerConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoArchiveOnReboot_MetaData[];
#endif
		static void NewProp_bAutoArchiveOnReboot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoArchiveOnReboot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoArchiveOnShutdown_MetaData[];
#endif
		static void NewProp_bAutoArchiveOnShutdown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoArchiveOnShutdown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCleanWorkingDir_MetaData[];
#endif
		static void NewProp_bCleanWorkingDir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCleanWorkingDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSessionsToKeep_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSessionsToKeep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSessionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSessionName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AuthorizedClientKeys_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthorizedClientKeys_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AuthorizedClientKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSessionToRestore_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSessionToRestore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultVersionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultVersionInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSessionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSessionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ServerSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndpointSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkingDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_WorkingDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArchiveDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ArchiveDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionRepositoryRootDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionRepositoryRootDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMountDefaultSessionRepository_MetaData[];
#endif
		static void NewProp_bMountDefaultSessionRepository_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMountDefaultSessionRepository;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConcertServerConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertServer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConcertServerSettings.h" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bAutoArchiveOnReboot_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, instruct the server to auto-archive sessions that were left in the working directory because the server did not exit properly rather than\n\x09 * restoring them as 'live' (the default).\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "If true, instruct the server to auto-archive sessions that were left in the working directory because the server did not exit properly rather than\nrestoring them as 'live' (the default)." },
	};
#endif
	void Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bAutoArchiveOnReboot_SetBit(void* Obj)
	{
		((UConcertServerConfig*)Obj)->bAutoArchiveOnReboot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bAutoArchiveOnReboot = { "bAutoArchiveOnReboot", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertServerConfig), &Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bAutoArchiveOnReboot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bAutoArchiveOnReboot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bAutoArchiveOnReboot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bAutoArchiveOnShutdown_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, instruct the server to auto-archive live sessions on shutdown.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "If true, instruct the server to auto-archive live sessions on shutdown." },
	};
#endif
	void Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bAutoArchiveOnShutdown_SetBit(void* Obj)
	{
		((UConcertServerConfig*)Obj)->bAutoArchiveOnShutdown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bAutoArchiveOnShutdown = { "bAutoArchiveOnShutdown", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertServerConfig), &Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bAutoArchiveOnShutdown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bAutoArchiveOnShutdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bAutoArchiveOnShutdown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bCleanWorkingDir_MetaData[] = {
		{ "Category", "Server Settings" },
		{ "Comment", "/**\n\x09 * Clean server sessions working directory when booting\n\x09 * Can be specified on the server cmd with `-CONCERTCLEAN`\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "Clean server sessions working directory when booting\nCan be specified on the server cmd with `-CONCERTCLEAN`" },
	};
#endif
	void Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bCleanWorkingDir_SetBit(void* Obj)
	{
		((UConcertServerConfig*)Obj)->bCleanWorkingDir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bCleanWorkingDir = { "bCleanWorkingDir", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertServerConfig), &Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bCleanWorkingDir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bCleanWorkingDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bCleanWorkingDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_NumSessionsToKeep_MetaData[] = {
		{ "Category", "Server Settings" },
		{ "Comment", "/**\n\x09 * Number of archived sessions to keep when booting, or <0 to keep all archived sessions\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "Number of archived sessions to keep when booting, or <0 to keep all archived sessions" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_NumSessionsToKeep = { "NumSessionsToKeep", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertServerConfig, NumSessionsToKeep), METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_NumSessionsToKeep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_NumSessionsToKeep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_ServerName_MetaData[] = {
		{ "Category", "Server Settings" },
		{ "Comment", "/** \n\x09 * Name of the server, or empty to use the default name.\n\x09 * Can be specified on the server cmd with `-CONCERTSERVER=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "Name of the server, or empty to use the default name.\nCan be specified on the server cmd with `-CONCERTSERVER=`" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertServerConfig, ServerName), METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_ServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_ServerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultSessionName_MetaData[] = {
		{ "Category", "Session Settings" },
		{ "Comment", "/** \n\x09 * Name of the default session created on the server.\n\x09 * Can be specified on the server cmd with `-CONCERTSESSION=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "Name of the default session created on the server.\nCan be specified on the server cmd with `-CONCERTSESSION=`" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultSessionName = { "DefaultSessionName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertServerConfig, DefaultSessionName), METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultSessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultSessionName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_AuthorizedClientKeys_ElementProp = { "AuthorizedClientKeys", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_AuthorizedClientKeys_MetaData[] = {
		{ "Comment", "/** \n\x09 * A set of keys identifying the clients that can discover and access the server. If empty, the server can be discovered and used by any clients.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "A set of keys identifying the clients that can discover and access the server. If empty, the server can be discovered and used by any clients." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_AuthorizedClientKeys = { "AuthorizedClientKeys", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertServerConfig, AuthorizedClientKeys), METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_AuthorizedClientKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_AuthorizedClientKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultSessionToRestore_MetaData[] = {
		{ "Category", "Session Settings" },
		{ "Comment", "/**\n\x09 * Name of the default session to restore on the server.\n\x09 * Set the name of the desired save to restore its content in your session.\n\x09 * Leave this blank if you want to create an empty session.\n\x09 * Can be specified on the editor cmd with `-CONCERTSESSIONTORESTORE=`.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "Name of the default session to restore on the server.\nSet the name of the desired save to restore its content in your session.\nLeave this blank if you want to create an empty session.\nCan be specified on the editor cmd with `-CONCERTSESSIONTORESTORE=`." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultSessionToRestore = { "DefaultSessionToRestore", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertServerConfig, DefaultSessionToRestore), METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultSessionToRestore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultSessionToRestore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultVersionInfo_MetaData[] = {
		{ "Comment", "/** \n\x09 * The version string for the default server created.\n\x09 * Can be specified on the server cmd with `-CONCERTVERSION=`\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "The version string for the default server created.\nCan be specified on the server cmd with `-CONCERTVERSION=`" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultVersionInfo = { "DefaultVersionInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertServerConfig, DefaultVersionInfo), Z_Construct_UScriptStruct_FConcertSessionVersionInfo, METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultVersionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultVersionInfo_MetaData)) }; // 1164273605
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultSessionSettings_MetaData[] = {
		{ "Category", "Session Settings" },
		{ "Comment", "/** Default server session settings */" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "Default server session settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultSessionSettings = { "DefaultSessionSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertServerConfig, DefaultSessionSettings), Z_Construct_UScriptStruct_FConcertSessionSettings, METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultSessionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultSessionSettings_MetaData)) }; // 2384793603
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_ServerSettings_MetaData[] = {
		{ "Category", "Server Settings" },
		{ "Comment", "/** Server & server session settings */" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Server & server session settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_ServerSettings = { "ServerSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertServerConfig, ServerSettings), Z_Construct_UScriptStruct_FConcertServerSettings, METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_ServerSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_ServerSettings_MetaData)) }; // 4087884990
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_EndpointSettings_MetaData[] = {
		{ "Category", "Endpoint Settings" },
		{ "Comment", "/** Endpoint settings passed down to endpoints on creation */" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Endpoint settings passed down to endpoints on creation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_EndpointSettings = { "EndpointSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertServerConfig, EndpointSettings), Z_Construct_UScriptStruct_FConcertEndpointSettings, METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_EndpointSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_EndpointSettings_MetaData)) }; // 1377010211
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_WorkingDir_MetaData[] = {
		{ "Comment", "/** The default directory where the server keeps the live session files. Can be specified on the server command line with `-CONCERTWORKINGDIR=`*/" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "The default directory where the server keeps the live session files. Can be specified on the server command line with `-CONCERTWORKINGDIR=`" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_WorkingDir = { "WorkingDir", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertServerConfig, WorkingDir), METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_WorkingDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_WorkingDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_ArchiveDir_MetaData[] = {
		{ "Comment", "/** The default directory where the server keeps the archived session files. Can be specified on the server command line with `-CONCERTSAVEDDIR=`*/" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "The default directory where the server keeps the archived session files. Can be specified on the server command line with `-CONCERTSAVEDDIR=`" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_ArchiveDir = { "ArchiveDir", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertServerConfig, ArchiveDir), METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_ArchiveDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_ArchiveDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_SessionRepositoryRootDir_MetaData[] = {
		{ "Comment", "/** The root directory where the server creates new session repositories (unless the client request specifies its own root). If empty or invalid, the server will use a default. */" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "The root directory where the server creates new session repositories (unless the client request specifies its own root). If empty or invalid, the server will use a default." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_SessionRepositoryRootDir = { "SessionRepositoryRootDir", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertServerConfig, SessionRepositoryRootDir), METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_SessionRepositoryRootDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_SessionRepositoryRootDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bMountDefaultSessionRepository_MetaData[] = {
		{ "Comment", "/** If neither of WorkingDir and ArchiveDir are set, determine whether the server should mount a standard default session repository where new session will be created. */" },
		{ "ModuleRelativePath", "Public/ConcertServerSettings.h" },
		{ "ToolTip", "If neither of WorkingDir and ArchiveDir are set, determine whether the server should mount a standard default session repository where new session will be created." },
	};
#endif
	void Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bMountDefaultSessionRepository_SetBit(void* Obj)
	{
		((UConcertServerConfig*)Obj)->bMountDefaultSessionRepository = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bMountDefaultSessionRepository = { "bMountDefaultSessionRepository", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertServerConfig), &Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bMountDefaultSessionRepository_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bMountDefaultSessionRepository_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bMountDefaultSessionRepository_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConcertServerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bAutoArchiveOnReboot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bAutoArchiveOnShutdown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bCleanWorkingDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_NumSessionsToKeep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_ServerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultSessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_AuthorizedClientKeys_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_AuthorizedClientKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultSessionToRestore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultVersionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_DefaultSessionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_ServerSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_EndpointSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_WorkingDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_ArchiveDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_SessionRepositoryRootDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertServerConfig_Statics::NewProp_bMountDefaultSessionRepository,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConcertServerConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConcertServerConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConcertServerConfig_Statics::ClassParams = {
		&UConcertServerConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConcertServerConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UConcertServerConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertServerConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConcertServerConfig()
	{
		if (!Z_Registration_Info_UClass_UConcertServerConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConcertServerConfig.OuterSingleton, Z_Construct_UClass_UConcertServerConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConcertServerConfig.OuterSingleton;
	}
	template<> CONCERTSERVER_API UClass* StaticClass<UConcertServerConfig>()
	{
		return UConcertServerConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConcertServerConfig);
	UConcertServerConfig::~UConcertServerConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_Statics::ScriptStructInfo[] = {
		{ FConcertServerSettings::StaticStruct, Z_Construct_UScriptStruct_FConcertServerSettings_Statics::NewStructOps, TEXT("ConcertServerSettings"), &Z_Registration_Info_UScriptStruct_ConcertServerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertServerSettings), 4087884990U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConcertServerConfig, UConcertServerConfig::StaticClass, TEXT("UConcertServerConfig"), &Z_Registration_Info_UClass_UConcertServerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConcertServerConfig), 1170666674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_2889799864(TEXT("/Script/ConcertServer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertServer_Public_ConcertServerSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
