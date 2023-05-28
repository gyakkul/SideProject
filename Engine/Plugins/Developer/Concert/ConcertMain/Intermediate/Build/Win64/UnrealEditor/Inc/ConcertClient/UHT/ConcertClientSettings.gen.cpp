// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertClientSettings.h"
#include "ConcertTransportSettings.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertClientSettings() {}
// Cross Module References
	CONCERTCLIENT_API UClass* Z_Construct_UClass_UConcertClientConfig();
	CONCERTCLIENT_API UClass* Z_Construct_UClass_UConcertClientConfig_NoRegister();
	CONCERTCLIENT_API UEnum* Z_Construct_UEnum_ConcertClient_EConcertServerType();
	CONCERTCLIENT_API UEnum* Z_Construct_UEnum_ConcertClient_EConcertSourceValidationMode();
	CONCERTCLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertClientSettings();
	CONCERTCLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertSourceControlSettings();
	CONCERTTRANSPORT_API UScriptStruct* Z_Construct_UScriptStruct_FConcertEndpointSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_ConcertClient();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertClientSettings;
class UScriptStruct* FConcertClientSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertClientSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertClientSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertClientSettings, (UObject*)Z_Construct_UPackage__Script_ConcertClient(), TEXT("ConcertClientSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertClientSettings.OuterSingleton;
}
template<> CONCERTCLIENT_API UScriptStruct* StaticStruct<FConcertClientSettings>()
{
	return FConcertClientSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertClientSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvatarColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesktopAvatarActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesktopAvatarActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRAvatarActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VRAvatarActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerPort_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ServerPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscoveryTimeoutSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DiscoveryTimeoutSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionTickFrequencySeconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SessionTickFrequencySeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LatencyCompensationMs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LatencyCompensationMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReflectLevelEditorInGame_MetaData[];
#endif
		static void NewProp_bReflectLevelEditorInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReflectLevelEditorInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportMixedBuildTypes_MetaData[];
#endif
		static void NewProp_bSupportMixedBuildTypes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportMixedBuildTypes;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientAuthenticationKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientAuthenticationKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertClientSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/** \n\x09 * The display name to use when in a session. \n\x09 * Can be specified on the editor cmd with `-CONCERTDISPLAYNAME=`.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "The display name to use when in a session.\nCan be specified on the editor cmd with `-CONCERTDISPLAYNAME=`." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientSettings, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_AvatarColor_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/** The color used for the presence avatar in a session. */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "The color used for the presence avatar in a session." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_AvatarColor = { "AvatarColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientSettings, AvatarColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_AvatarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_AvatarColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_DesktopAvatarActorClass_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/** The desktop representation of this editor's user to other connected users */" },
		{ "MetaClass", "/Script/ConcertSyncClient.ConcertClientDesktopPresenceActor" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "The desktop representation of this editor's user to other connected users" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_DesktopAvatarActorClass = { "DesktopAvatarActorClass", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientSettings, DesktopAvatarActorClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_DesktopAvatarActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_DesktopAvatarActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_VRAvatarActorClass_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/** The VR representation of this editor's user to other connected users */" },
		{ "DisplayName", "VR Avatar Actor Class" },
		{ "MetaClass", "/Script/ConcertSyncClient.ConcertClientVRPresenceActor" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "The VR representation of this editor's user to other connected users" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_VRAvatarActorClass = { "VRAvatarActorClass", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientSettings, VRAvatarActorClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_VRAvatarActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_VRAvatarActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_ServerPort_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/** The port to use to reach the server with static endpoints when launched through the editor. This port will be used over the unicast endpoint port in the UDP Messagging settings if non 0 when transferring the editor settings to the launched server. */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "The port to use to reach the server with static endpoints when launched through the editor. This port will be used over the unicast endpoint port in the UDP Messagging settings if non 0 when transferring the editor settings to the launched server." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientSettings, ServerPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_ServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_ServerPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_DiscoveryTimeoutSeconds_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/** The timespan at which discovered Multi-User server are considered stale if they haven't answered back */" },
		{ "DisplayName", "Discovery Timeout" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "The timespan at which discovered Multi-User server are considered stale if they haven't answered back" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_DiscoveryTimeoutSeconds = { "DiscoveryTimeoutSeconds", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientSettings, DiscoveryTimeoutSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_DiscoveryTimeoutSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_DiscoveryTimeoutSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_SessionTickFrequencySeconds_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/** The timespan at which session updates are processed. */" },
		{ "DisplayName", "Session Tick Frequency" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "The timespan at which session updates are processed." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_SessionTickFrequencySeconds = { "SessionTickFrequencySeconds", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientSettings, SessionTickFrequencySeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_SessionTickFrequencySeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_SessionTickFrequencySeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_LatencyCompensationMs_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/** Amount of latency compensation to apply to time-synchronization sensitive interactions */" },
		{ "DisplayName", "Latency Compensation" },
		{ "ForceUnits", "ms" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "Amount of latency compensation to apply to time-synchronization sensitive interactions" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_LatencyCompensationMs = { "LatencyCompensationMs", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientSettings, LatencyCompensationMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_LatencyCompensationMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_LatencyCompensationMs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_bReflectLevelEditorInGame_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/**\n\x09 * When level editor changes are made, reflect those changes to the game equivalent property.\n\x09 * This settings can be specified on the editor cmd with `-CONCERTREFLECTVISIBILITY=`.\n\x09 */" },
		{ "DisplayName", "Reflect Level Visibility to Game" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "When level editor changes are made, reflect those changes to the game equivalent property.\nThis settings can be specified on the editor cmd with `-CONCERTREFLECTVISIBILITY=`." },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_bReflectLevelEditorInGame_SetBit(void* Obj)
	{
		((FConcertClientSettings*)Obj)->bReflectLevelEditorInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_bReflectLevelEditorInGame = { "bReflectLevelEditorInGame", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertClientSettings), &Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_bReflectLevelEditorInGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_bReflectLevelEditorInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_bReflectLevelEditorInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_bSupportMixedBuildTypes_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/**\n\x09 * Enable extended version support when using Multi-user with precompiled and source builds.  When using Unreal Game\n\x09 * Sync, it is possible to have the same engine CL but different engine version due to content changes.\x09 This setting\n\x09 * enables reading engine version CL from the Build.version file produced by UGS to determine engine version\n\x09 * information when joining a session.\x09This only applies when you intend to mix precompiled with source builds.\n\x09*/" },
		{ "DisplayName", "Support Mixed Build Types" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "Enable extended version support when using Multi-user with precompiled and source builds.  When using Unreal Game\nSync, it is possible to have the same engine CL but different engine version due to content changes.  This setting\nenables reading engine version CL from the Build.version file produced by UGS to determine engine version\ninformation when joining a session.  This only applies when you intend to mix precompiled with source builds." },
	};
#endif
	void Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_bSupportMixedBuildTypes_SetBit(void* Obj)
	{
		((FConcertClientSettings*)Obj)->bSupportMixedBuildTypes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_bSupportMixedBuildTypes = { "bSupportMixedBuildTypes", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConcertClientSettings), &Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_bSupportMixedBuildTypes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_bSupportMixedBuildTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_bSupportMixedBuildTypes_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/** Array of tags that can be used for grouping and categorizing. */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "Array of tags that can be used for grouping and categorizing." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientSettings, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_ClientAuthenticationKey_MetaData[] = {
		{ "Comment", "/** A key used to identify the clients during server discovery. If the server was configured to restrict access, the client key must be know of the server. Can be left empty. */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "A key used to identify the clients during server discovery. If the server was configured to restrict access, the client key must be know of the server. Can be left empty." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_ClientAuthenticationKey = { "ClientAuthenticationKey", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertClientSettings, ClientAuthenticationKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_ClientAuthenticationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_ClientAuthenticationKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertClientSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_AvatarColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_DesktopAvatarActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_VRAvatarActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_ServerPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_DiscoveryTimeoutSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_SessionTickFrequencySeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_LatencyCompensationMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_bReflectLevelEditorInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_bSupportMixedBuildTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewProp_ClientAuthenticationKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertClientSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertClient,
		nullptr,
		&NewStructOps,
		"ConcertClientSettings",
		sizeof(FConcertClientSettings),
		alignof(FConcertClientSettings),
		Z_Construct_UScriptStruct_FConcertClientSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertClientSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertClientSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertClientSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertClientSettings.InnerSingleton, Z_Construct_UScriptStruct_FConcertClientSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertClientSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertSourceValidationMode;
	static UEnum* EConcertSourceValidationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertSourceValidationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertSourceValidationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertClient_EConcertSourceValidationMode, (UObject*)Z_Construct_UPackage__Script_ConcertClient(), TEXT("EConcertSourceValidationMode"));
		}
		return Z_Registration_Info_UEnum_EConcertSourceValidationMode.OuterSingleton;
	}
	template<> CONCERTCLIENT_API UEnum* StaticEnum<EConcertSourceValidationMode>()
	{
		return EConcertSourceValidationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertClient_EConcertSourceValidationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertClient_EConcertSourceValidationMode_Statics::Enumerators[] = {
		{ "EConcertSourceValidationMode::Hard", (int64)EConcertSourceValidationMode::Hard },
		{ "EConcertSourceValidationMode::Soft", (int64)EConcertSourceValidationMode::Soft },
		{ "EConcertSourceValidationMode::SoftAutoProceed", (int64)EConcertSourceValidationMode::SoftAutoProceed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertClient_EConcertSourceValidationMode_Statics::Enum_MetaDataParams[] = {
		{ "Hard.Comment", "/** Source control validation will fail on any changes when connecting to a Multi-User Session. */" },
		{ "Hard.Name", "EConcertSourceValidationMode::Hard" },
		{ "Hard.ToolTip", "Source control validation will fail on any changes when connecting to a Multi-User Session." },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "Soft.Comment", "/** \n\x09 * Source control validation will warn and prompt on any changes when connecting to a Multi-User session. \n\x09 * In Memory changes will be hot-reloaded.\n\x09 * Source control changes aren't affected but will be stashed/shelved in the future.\n\x09 */" },
		{ "Soft.Name", "EConcertSourceValidationMode::Soft" },
		{ "Soft.ToolTip", "Source control validation will warn and prompt on any changes when connecting to a Multi-User session.\nIn Memory changes will be hot-reloaded.\nSource control changes aren't affected but will be stashed/shelved in the future." },
		{ "SoftAutoProceed.Comment", "/** Soft validation mode with auto proceed on prompts. */" },
		{ "SoftAutoProceed.Name", "EConcertSourceValidationMode::SoftAutoProceed" },
		{ "SoftAutoProceed.ToolTip", "Soft validation mode with auto proceed on prompts." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertClient_EConcertSourceValidationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertClient,
		nullptr,
		"EConcertSourceValidationMode",
		"EConcertSourceValidationMode",
		Z_Construct_UEnum_ConcertClient_EConcertSourceValidationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertClient_EConcertSourceValidationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertClient_EConcertSourceValidationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertClient_EConcertSourceValidationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertClient_EConcertSourceValidationMode()
	{
		if (!Z_Registration_Info_UEnum_EConcertSourceValidationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertSourceValidationMode.InnerSingleton, Z_Construct_UEnum_ConcertClient_EConcertSourceValidationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertSourceValidationMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConcertSourceControlSettings;
class UScriptStruct* FConcertSourceControlSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConcertSourceControlSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConcertSourceControlSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConcertSourceControlSettings, (UObject*)Z_Construct_UPackage__Script_ConcertClient(), TEXT("ConcertSourceControlSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ConcertSourceControlSettings.OuterSingleton;
}
template<> CONCERTCLIENT_API UScriptStruct* StaticStruct<FConcertSourceControlSettings>()
{
	return FConcertSourceControlSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValidationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ValidationMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConcertSourceControlSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::NewProp_ValidationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::NewProp_ValidationMode_MetaData[] = {
		{ "Category", "Revision Control Settings" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::NewProp_ValidationMode = { "ValidationMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConcertSourceControlSettings, ValidationMode), Z_Construct_UEnum_ConcertClient_EConcertSourceValidationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::NewProp_ValidationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::NewProp_ValidationMode_MetaData)) }; // 386259774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::NewProp_ValidationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::NewProp_ValidationMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertClient,
		nullptr,
		&NewStructOps,
		"ConcertSourceControlSettings",
		sizeof(FConcertSourceControlSettings),
		alignof(FConcertSourceControlSettings),
		Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConcertSourceControlSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ConcertSourceControlSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConcertSourceControlSettings.InnerSingleton, Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConcertSourceControlSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConcertServerType;
	static UEnum* EConcertServerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConcertServerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConcertServerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ConcertClient_EConcertServerType, (UObject*)Z_Construct_UPackage__Script_ConcertClient(), TEXT("EConcertServerType"));
		}
		return Z_Registration_Info_UEnum_EConcertServerType.OuterSingleton;
	}
	template<> CONCERTCLIENT_API UEnum* StaticEnum<EConcertServerType>()
	{
		return EConcertServerType_StaticEnum();
	}
	struct Z_Construct_UEnum_ConcertClient_EConcertServerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ConcertClient_EConcertServerType_Statics::Enumerators[] = {
		{ "EConcertServerType::Console", (int64)EConcertServerType::Console },
		{ "EConcertServerType::Slate", (int64)EConcertServerType::Slate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ConcertClient_EConcertServerType_Statics::Enum_MetaDataParams[] = {
		{ "Console.Name", "EConcertServerType::Console" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "Slate.Name", "EConcertServerType::Slate" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ConcertClient_EConcertServerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ConcertClient,
		nullptr,
		"EConcertServerType",
		"EConcertServerType",
		Z_Construct_UEnum_ConcertClient_EConcertServerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertClient_EConcertServerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ConcertClient_EConcertServerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ConcertClient_EConcertServerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ConcertClient_EConcertServerType()
	{
		if (!Z_Registration_Info_UEnum_EConcertServerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConcertServerType.InnerSingleton, Z_Construct_UEnum_ConcertClient_EConcertServerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConcertServerType.InnerSingleton;
	}
	void UConcertClientConfig::StaticRegisterNativesUConcertClientConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConcertClientConfig);
	UClass* Z_Construct_UClass_UConcertClientConfig_NoRegister()
	{
		return UConcertClientConfig::StaticClass();
	}
	struct Z_Construct_UClass_UConcertClientConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHeadless_MetaData[];
#endif
		static void NewProp_bIsHeadless_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHeadless;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInstallEditorToolbarButton_MetaData[];
#endif
		static void NewProp_bInstallEditorToolbarButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstallEditorToolbarButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoConnect_MetaData[];
#endif
		static void NewProp_bAutoConnect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoConnect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetryAutoConnectOnError_MetaData[];
#endif
		static void NewProp_bRetryAutoConnectOnError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetryAutoConnectOnError;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ServerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ServerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultServerURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultServerURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSessionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSessionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSessionToRestore_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSessionToRestore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSaveSessionAs_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSaveSessionAs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReadOnlyAssignment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReadOnlyAssignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendOnlyAssignment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SendOnlyAssignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldPromptForHotReloadOnLevel_MetaData[];
#endif
		static void NewProp_bShouldPromptForHotReloadOnLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldPromptForHotReloadOnLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceControlSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceControlSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndpointSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndpointSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConcertClientConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertClient,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConcertClientSettings.h" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bIsHeadless_MetaData[] = {
		{ "Comment", "/**\n\x09 * True if this client should be \"headless\"? (ie, not display any UI).\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "True if this client should be \"headless\"? (ie, not display any UI)." },
	};
#endif
	void Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bIsHeadless_SetBit(void* Obj)
	{
		((UConcertClientConfig*)Obj)->bIsHeadless = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bIsHeadless = { "bIsHeadless", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertClientConfig), &Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bIsHeadless_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bIsHeadless_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bIsHeadless_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bInstallEditorToolbarButton_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/**\n\x09 * True if the Multi-User module should install shortcut button and its drop-down menu in the level editor toolbar.\n\x09 */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable Multi-User Toolbar Button" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "True if the Multi-User module should install shortcut button and its drop-down menu in the level editor toolbar." },
	};
#endif
	void Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bInstallEditorToolbarButton_SetBit(void* Obj)
	{
		((UConcertClientConfig*)Obj)->bInstallEditorToolbarButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bInstallEditorToolbarButton = { "bInstallEditorToolbarButton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertClientConfig), &Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bInstallEditorToolbarButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bInstallEditorToolbarButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bInstallEditorToolbarButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bAutoConnect_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/** \n\x09 * Automatically connect or create default session on default server.\n\x09 * Can be specified on the editor cmd with `-CONCERTAUTOCONNECT` or `-CONCERTAUTOCONNECT=<true/false>`.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "Automatically connect or create default session on default server.\nCan be specified on the editor cmd with `-CONCERTAUTOCONNECT` or `-CONCERTAUTOCONNECT=<true/false>`." },
	};
#endif
	void Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bAutoConnect_SetBit(void* Obj)
	{
		((UConcertClientConfig*)Obj)->bAutoConnect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bAutoConnect = { "bAutoConnect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertClientConfig), &Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bAutoConnect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bAutoConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bAutoConnect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bRetryAutoConnectOnError_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/** \n\x09 * If auto-connect is on, retry connecting to the default server/session until it succeeds or the user cancels.\n\x09 * Can be specified on the editor cmd with `-CONCERTRETRYAUTOCONNECTONERROR` or `-CONCERTRETRYAUTOCONNECTONERROR=<true/false>`.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "If auto-connect is on, retry connecting to the default server/session until it succeeds or the user cancels.\nCan be specified on the editor cmd with `-CONCERTRETRYAUTOCONNECTONERROR` or `-CONCERTRETRYAUTOCONNECTONERROR=<true/false>`." },
	};
#endif
	void Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bRetryAutoConnectOnError_SetBit(void* Obj)
	{
		((UConcertClientConfig*)Obj)->bRetryAutoConnectOnError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bRetryAutoConnectOnError = { "bRetryAutoConnectOnError", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertClientConfig), &Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bRetryAutoConnectOnError_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bRetryAutoConnectOnError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bRetryAutoConnectOnError_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ServerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ServerType_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/**\n\x09 * Determines which server executable with be launched:\n\x09 *\x09\x09""Console -> UnrealMultiUserServer.exe\n\x09 *\x09\x09Slate\x09-> UnrealMultiUserSlateServer.exe\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "Determines which server executable with be launched:\n             Console -> UnrealMultiUserServer.exe\n             Slate   -> UnrealMultiUserSlateServer.exe" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ServerType = { "ServerType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertClientConfig, ServerType), Z_Construct_UEnum_ConcertClient_EConcertServerType, METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ServerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ServerType_MetaData)) }; // 1935436095
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultServerURL_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/** \n\x09 * Default server url (just a name for now) to look for on auto or default connect. \n \x09 * Can be specified on the editor cmd with `-CONCERTSERVER=`.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "Default server url (just a name for now) to look for on auto or default connect.\nCan be specified on the editor cmd with `-CONCERTSERVER=`." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultServerURL = { "DefaultServerURL", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertClientConfig, DefaultServerURL), METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultServerURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultServerURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultSessionName_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/** \n\x09 * Default session name to look for on auto connect or default connect.\n\x09 * Can be specified on the editor cmd with `-CONCERTSESSION=`.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "Default session name to look for on auto connect or default connect.\nCan be specified on the editor cmd with `-CONCERTSESSION=`." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultSessionName = { "DefaultSessionName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertClientConfig, DefaultSessionName), METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultSessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultSessionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultSessionToRestore_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/**\n\x09 * If this client create the default session, should the session restore a saved session.\n\x09 * Set the name of the desired save to restore its content in your session.\n\x09 * Leave this blank if you want to create an empty session.\n\x09 * Can be specified on the editor cmd with `-CONCERTSESSIONTORESTORE=`.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "If this client create the default session, should the session restore a saved session.\nSet the name of the desired save to restore its content in your session.\nLeave this blank if you want to create an empty session.\nCan be specified on the editor cmd with `-CONCERTSESSIONTORESTORE=`." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultSessionToRestore = { "DefaultSessionToRestore", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertClientConfig, DefaultSessionToRestore), METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultSessionToRestore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultSessionToRestore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultSaveSessionAs_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/**\n\x09 * If this client create the default session, should the session data be saved when it's deleted.\n\x09 * Set the name desired for the save and the session data will be moved in that save when the session is deleted\n\x09 * Leave this blank if you don't want to save the session data.\n\x09 * Can be specified on the editor cmd with `-CONCERTSAVESESSIONAS=`.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "If this client create the default session, should the session data be saved when it's deleted.\nSet the name desired for the save and the session data will be moved in that save when the session is deleted\nLeave this blank if you don't want to save the session data.\nCan be specified on the editor cmd with `-CONCERTSAVESESSIONAS=`." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultSaveSessionAs = { "DefaultSaveSessionAs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertClientConfig, DefaultSaveSessionAs), METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultSaveSessionAs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultSaveSessionAs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ReadOnlyAssignment_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/**\n\x09 * A list of roles that should enter multi-user in read-only mode. If a role is in both SendOnlyAssignment and\n\x09 * ReadOnlyassignment then the client will enter the session as full read/write.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "A list of roles that should enter multi-user in read-only mode. If a role is in both SendOnlyAssignment and\nReadOnlyassignment then the client will enter the session as full read/write." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ReadOnlyAssignment = { "ReadOnlyAssignment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertClientConfig, ReadOnlyAssignment), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ReadOnlyAssignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ReadOnlyAssignment_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_SendOnlyAssignment_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/**\n\x09 * A list of roles that should enter multi-user in send-only mode. If a role is in both SendOnlyAssignment and\n\x09 * ReadOnlyAssignment then the client will enter the session as full read/write.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "A list of roles that should enter multi-user in send-only mode. If a role is in both SendOnlyAssignment and\nReadOnlyAssignment then the client will enter the session as full read/write." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_SendOnlyAssignment = { "SendOnlyAssignment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertClientConfig, SendOnlyAssignment), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_SendOnlyAssignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_SendOnlyAssignment_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bShouldPromptForHotReloadOnLevel_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/**\n\x09 * Hot reload of a level happens automatically when level / sublevel is changed. This property allows users\n\x09 * to receive a prompt before hot reload occurs so that it does not interrupt the user in the current level.\n\x09 * Can be specified on the editor command with `-CONCERTSHOULDPROMPTFORHOTRELOAD`\n\x09 */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ToolTip", "Hot reload of a level happens automatically when level / sublevel is changed. This property allows users\nto receive a prompt before hot reload occurs so that it does not interrupt the user in the current level.\nCan be specified on the editor command with `-CONCERTSHOULDPROMPTFORHOTRELOAD`" },
	};
#endif
	void Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bShouldPromptForHotReloadOnLevel_SetBit(void* Obj)
	{
		((UConcertClientConfig*)Obj)->bShouldPromptForHotReloadOnLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bShouldPromptForHotReloadOnLevel = { "bShouldPromptForHotReloadOnLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConcertClientConfig), &Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bShouldPromptForHotReloadOnLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bShouldPromptForHotReloadOnLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bShouldPromptForHotReloadOnLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ClientSettings_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/** Client & client session settings */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Client & client session settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ClientSettings = { "ClientSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertClientConfig, ClientSettings), Z_Construct_UScriptStruct_FConcertClientSettings, METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ClientSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ClientSettings_MetaData)) }; // 3050081593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_SourceControlSettings_MetaData[] = {
		{ "Category", "Revision Control Settings" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_SourceControlSettings = { "SourceControlSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertClientConfig, SourceControlSettings), Z_Construct_UScriptStruct_FConcertSourceControlSettings, METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_SourceControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_SourceControlSettings_MetaData)) }; // 1825909575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_EndpointSettings_MetaData[] = {
		{ "Category", "Endpoint Settings" },
		{ "Comment", "/** Endpoint settings passed down to endpoints on creation */" },
		{ "ModuleRelativePath", "Public/ConcertClientSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Endpoint settings passed down to endpoints on creation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_EndpointSettings = { "EndpointSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConcertClientConfig, EndpointSettings), Z_Construct_UScriptStruct_FConcertEndpointSettings, METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_EndpointSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_EndpointSettings_MetaData)) }; // 1377010211
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConcertClientConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bIsHeadless,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bInstallEditorToolbarButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bAutoConnect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bRetryAutoConnectOnError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ServerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ServerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultServerURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultSessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultSessionToRestore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_DefaultSaveSessionAs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ReadOnlyAssignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_SendOnlyAssignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_bShouldPromptForHotReloadOnLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_ClientSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_SourceControlSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConcertClientConfig_Statics::NewProp_EndpointSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConcertClientConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConcertClientConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConcertClientConfig_Statics::ClassParams = {
		&UConcertClientConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConcertClientConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UConcertClientConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConcertClientConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConcertClientConfig()
	{
		if (!Z_Registration_Info_UClass_UConcertClientConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConcertClientConfig.OuterSingleton, Z_Construct_UClass_UConcertClientConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConcertClientConfig.OuterSingleton;
	}
	template<> CONCERTCLIENT_API UClass* StaticClass<UConcertClientConfig>()
	{
		return UConcertClientConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConcertClientConfig);
	UConcertClientConfig::~UConcertClientConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_Statics::EnumInfo[] = {
		{ EConcertSourceValidationMode_StaticEnum, TEXT("EConcertSourceValidationMode"), &Z_Registration_Info_UEnum_EConcertSourceValidationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 386259774U) },
		{ EConcertServerType_StaticEnum, TEXT("EConcertServerType"), &Z_Registration_Info_UEnum_EConcertServerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1935436095U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_Statics::ScriptStructInfo[] = {
		{ FConcertClientSettings::StaticStruct, Z_Construct_UScriptStruct_FConcertClientSettings_Statics::NewStructOps, TEXT("ConcertClientSettings"), &Z_Registration_Info_UScriptStruct_ConcertClientSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertClientSettings), 3050081593U) },
		{ FConcertSourceControlSettings::StaticStruct, Z_Construct_UScriptStruct_FConcertSourceControlSettings_Statics::NewStructOps, TEXT("ConcertSourceControlSettings"), &Z_Registration_Info_UScriptStruct_ConcertSourceControlSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConcertSourceControlSettings), 1825909575U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConcertClientConfig, UConcertClientConfig::StaticClass, TEXT("UConcertClientConfig"), &Z_Registration_Info_UClass_UConcertClientConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConcertClientConfig), 370554057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_1961493212(TEXT("/Script/ConcertClient"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertClient_Public_ConcertClientSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
