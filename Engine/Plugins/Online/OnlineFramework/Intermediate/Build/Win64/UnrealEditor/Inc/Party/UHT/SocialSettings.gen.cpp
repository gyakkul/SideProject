// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PARTY_API UClass* Z_Construct_UClass_USocialSettings();
	PARTY_API UClass* Z_Construct_UClass_USocialSettings_NoRegister();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FSocialPlatformDescription();
	UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SocialPlatformDescription;
class UScriptStruct* FSocialPlatformDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SocialPlatformDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SocialPlatformDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSocialPlatformDescription, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("SocialPlatformDescription"));
	}
	return Z_Registration_Info_UScriptStruct_SocialPlatformDescription.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FSocialPlatformDescription>()
{
	return FSocialPlatformDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnlineSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OnlineSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalAccountType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrossplayPool_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CrossplayPool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSocialPlatformDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of this platform\n\x09 * @see IOnlineSubsystem::GetLocalPlatformName\n\x09 */" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
		{ "ToolTip", "The name of this platform\n@see IOnlineSubsystem::GetLocalPlatformName" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSocialPlatformDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_PlatformType_MetaData[] = {
		{ "Comment", "/** The type of this platform.  For example DESKTOP or MOBILE */" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
		{ "ToolTip", "The type of this platform.  For example DESKTOP or MOBILE" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_PlatformType = { "PlatformType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSocialPlatformDescription, PlatformType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_PlatformType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_PlatformType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_OnlineSubsystem_MetaData[] = {
		{ "Comment", "/** The online subsystem this platform uses */" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
		{ "ToolTip", "The online subsystem this platform uses" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_OnlineSubsystem = { "OnlineSubsystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSocialPlatformDescription, OnlineSubsystem), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_OnlineSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_OnlineSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_SessionType_MetaData[] = {
		{ "Comment", "/** The session type this platform uses */" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
		{ "ToolTip", "The session type this platform uses" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSocialPlatformDescription, SessionType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_SessionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_SessionType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_ExternalAccountType_MetaData[] = {
		{ "Comment", "/** The external association type for this platform */" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
		{ "ToolTip", "The external association type for this platform" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_ExternalAccountType = { "ExternalAccountType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSocialPlatformDescription, ExternalAccountType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_ExternalAccountType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_ExternalAccountType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_CrossplayPool_MetaData[] = {
		{ "Comment", "/** The crossplay pool this platform belongs to */" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
		{ "ToolTip", "The crossplay pool this platform belongs to" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_CrossplayPool = { "CrossplayPool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSocialPlatformDescription, CrossplayPool), METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_CrossplayPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_CrossplayPool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_PlatformType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_OnlineSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_SessionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_ExternalAccountType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewProp_CrossplayPool,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		&NewStructOps,
		"SocialPlatformDescription",
		sizeof(FSocialPlatformDescription),
		alignof(FSocialPlatformDescription),
		Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSocialPlatformDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_SocialPlatformDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SocialPlatformDescription.InnerSingleton, Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SocialPlatformDescription.InnerSingleton;
	}
	void USocialSettings::StaticRegisterNativesUSocialSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialSettings);
	UClass* Z_Construct_UClass_USocialSettings_NoRegister()
	{
		return USocialSettings::StaticClass();
	}
	struct Z_Construct_UClass_USocialSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OssNamesWithEnvironmentIdPrefix_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OssNamesWithEnvironmentIdPrefix_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OssNamesWithEnvironmentIdPrefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaxPartySize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultMaxPartySize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreferPlatformInvites_MetaData[];
#endif
		static void NewProp_bPreferPlatformInvites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferPlatformInvites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMustSendPrimaryInvites_MetaData[];
#endif
		static void NewProp_bMustSendPrimaryInvites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMustSendPrimaryInvites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLeavePartyOnDisconnect_MetaData[];
#endif
		static void NewProp_bLeavePartyOnDisconnect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeavePartyOnDisconnect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader_MetaData[];
#endif
		static void NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserListAutoUpdateRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UserListAutoUpdateRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinNicknameLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinNicknameLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNicknameLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNicknameLength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocialPlatformDescriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocialPlatformDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SocialPlatformDescriptions;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SonyOSSNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SonyOSSNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SonyOSSNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Config-driven settings object for the social framework.\n * Only the CDO is ever expected to be used, no instance is ever expected to be created.\n */" },
		{ "IncludePath", "SocialSettings.h" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
		{ "ToolTip", "Config-driven settings object for the social framework.\nOnly the CDO is ever expected to be used, no instance is ever expected to be created." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_OssNamesWithEnvironmentIdPrefix_Inner = { "OssNamesWithEnvironmentIdPrefix", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialSettings_Statics::NewProp_OssNamesWithEnvironmentIdPrefix_MetaData[] = {
		{ "Comment", "/**\n\x09 * The specific OSS' that have their IDs stored with an additional prefix for the environment to which they pertain.\n\x09 * This is only necessary for OSS' (ex: Switch) that do not have separate environments, just one big pot with both dev and prod users/friendships/etc.\n\x09 * For these cases, the linked account ID stored on the Primary UserInfo for this particular OSS will be prefixed with the specific environment in which the linkage exists.\n\x09 * Additionally, the prefix must be prepended when mapping the external ID to a primary ID.\n\x09 * Overall, it's a major hassle that can hopefully be done away with eventually, but for now is necessary to fake environmental behavior on OSS' without environments.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
		{ "ToolTip", "The specific OSS' that have their IDs stored with an additional prefix for the environment to which they pertain.\nThis is only necessary for OSS' (ex: Switch) that do not have separate environments, just one big pot with both dev and prod users/friendships/etc.\nFor these cases, the linked account ID stored on the Primary UserInfo for this particular OSS will be prefixed with the specific environment in which the linkage exists.\nAdditionally, the prefix must be prepended when mapping the external ID to a primary ID.\nOverall, it's a major hassle that can hopefully be done away with eventually, but for now is necessary to fake environmental behavior on OSS' without environments." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_OssNamesWithEnvironmentIdPrefix = { "OssNamesWithEnvironmentIdPrefix", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialSettings, OssNamesWithEnvironmentIdPrefix), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USocialSettings_Statics::NewProp_OssNamesWithEnvironmentIdPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::NewProp_OssNamesWithEnvironmentIdPrefix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialSettings_Statics::NewProp_DefaultMaxPartySize_MetaData[] = {
		{ "Comment", "/** How many players are in a party by default */" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
		{ "ToolTip", "How many players are in a party by default" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_DefaultMaxPartySize = { "DefaultMaxPartySize", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialSettings, DefaultMaxPartySize), METADATA_PARAMS(Z_Construct_UClass_USocialSettings_Statics::NewProp_DefaultMaxPartySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::NewProp_DefaultMaxPartySize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialSettings_Statics::NewProp_bPreferPlatformInvites_MetaData[] = {
		{ "Comment", "/** If true, prioritize the platform's social system over the publisher's */" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
		{ "ToolTip", "If true, prioritize the platform's social system over the publisher's" },
	};
#endif
	void Z_Construct_UClass_USocialSettings_Statics::NewProp_bPreferPlatformInvites_SetBit(void* Obj)
	{
		((USocialSettings*)Obj)->bPreferPlatformInvites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_bPreferPlatformInvites = { "bPreferPlatformInvites", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USocialSettings), &Z_Construct_UClass_USocialSettings_Statics::NewProp_bPreferPlatformInvites_SetBit, METADATA_PARAMS(Z_Construct_UClass_USocialSettings_Statics::NewProp_bPreferPlatformInvites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::NewProp_bPreferPlatformInvites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialSettings_Statics::NewProp_bMustSendPrimaryInvites_MetaData[] = {
		{ "Comment", "/** If true, always send invites using the publisher's system even if already sent via a platform system */" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
		{ "ToolTip", "If true, always send invites using the publisher's system even if already sent via a platform system" },
	};
#endif
	void Z_Construct_UClass_USocialSettings_Statics::NewProp_bMustSendPrimaryInvites_SetBit(void* Obj)
	{
		((USocialSettings*)Obj)->bMustSendPrimaryInvites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_bMustSendPrimaryInvites = { "bMustSendPrimaryInvites", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USocialSettings), &Z_Construct_UClass_USocialSettings_Statics::NewProp_bMustSendPrimaryInvites_SetBit, METADATA_PARAMS(Z_Construct_UClass_USocialSettings_Statics::NewProp_bMustSendPrimaryInvites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::NewProp_bMustSendPrimaryInvites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialSettings_Statics::NewProp_bLeavePartyOnDisconnect_MetaData[] = {
		{ "Comment", "/** Should we leave a party when it enters the disconnected state? */" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
		{ "ToolTip", "Should we leave a party when it enters the disconnected state?" },
	};
#endif
	void Z_Construct_UClass_USocialSettings_Statics::NewProp_bLeavePartyOnDisconnect_SetBit(void* Obj)
	{
		((USocialSettings*)Obj)->bLeavePartyOnDisconnect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_bLeavePartyOnDisconnect = { "bLeavePartyOnDisconnect", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USocialSettings), &Z_Construct_UClass_USocialSettings_Statics::NewProp_bLeavePartyOnDisconnect_SetBit, METADATA_PARAMS(Z_Construct_UClass_USocialSettings_Statics::NewProp_bLeavePartyOnDisconnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::NewProp_bLeavePartyOnDisconnect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialSettings_Statics::NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader_MetaData[] = {
		{ "Comment", "/** How often the user list will update in seconds */" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
		{ "ToolTip", "How often the user list will update in seconds" },
	};
#endif
	void Z_Construct_UClass_USocialSettings_Statics::NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader_SetBit(void* Obj)
	{
		((USocialSettings*)Obj)->bSetDesiredPrivacyOnLocalPlayerBecomesLeader = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader = { "bSetDesiredPrivacyOnLocalPlayerBecomesLeader", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USocialSettings), &Z_Construct_UClass_USocialSettings_Statics::NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader_SetBit, METADATA_PARAMS(Z_Construct_UClass_USocialSettings_Statics::NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialSettings_Statics::NewProp_UserListAutoUpdateRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_UserListAutoUpdateRate = { "UserListAutoUpdateRate", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialSettings, UserListAutoUpdateRate), METADATA_PARAMS(Z_Construct_UClass_USocialSettings_Statics::NewProp_UserListAutoUpdateRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::NewProp_UserListAutoUpdateRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialSettings_Statics::NewProp_MinNicknameLength_MetaData[] = {
		{ "Comment", "/** Shortest possible player nickname */" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
		{ "ToolTip", "Shortest possible player nickname" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_MinNicknameLength = { "MinNicknameLength", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialSettings, MinNicknameLength), METADATA_PARAMS(Z_Construct_UClass_USocialSettings_Statics::NewProp_MinNicknameLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::NewProp_MinNicknameLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialSettings_Statics::NewProp_MaxNicknameLength_MetaData[] = {
		{ "Comment", "/** Longest possible player nickname */" },
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
		{ "ToolTip", "Longest possible player nickname" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_MaxNicknameLength = { "MaxNicknameLength", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialSettings, MaxNicknameLength), METADATA_PARAMS(Z_Construct_UClass_USocialSettings_Statics::NewProp_MaxNicknameLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::NewProp_MaxNicknameLength_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_SocialPlatformDescriptions_Inner = { "SocialPlatformDescriptions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSocialPlatformDescription, METADATA_PARAMS(nullptr, 0) }; // 532234911
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialSettings_Statics::NewProp_SocialPlatformDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_SocialPlatformDescriptions = { "SocialPlatformDescriptions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialSettings, SocialPlatformDescriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USocialSettings_Statics::NewProp_SocialPlatformDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::NewProp_SocialPlatformDescriptions_MetaData)) }; // 532234911
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_SonyOSSNames_Inner = { "SonyOSSNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialSettings_Statics::NewProp_SonyOSSNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USocialSettings_Statics::NewProp_SonyOSSNames = { "SonyOSSNames", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialSettings, SonyOSSNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USocialSettings_Statics::NewProp_SonyOSSNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::NewProp_SonyOSSNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_OssNamesWithEnvironmentIdPrefix_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_OssNamesWithEnvironmentIdPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_DefaultMaxPartySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_bPreferPlatformInvites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_bMustSendPrimaryInvites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_bLeavePartyOnDisconnect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_bSetDesiredPrivacyOnLocalPlayerBecomesLeader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_UserListAutoUpdateRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_MinNicknameLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_MaxNicknameLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_SocialPlatformDescriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_SocialPlatformDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_SonyOSSNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialSettings_Statics::NewProp_SonyOSSNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialSettings_Statics::ClassParams = {
		&USocialSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USocialSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USocialSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USocialSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialSettings()
	{
		if (!Z_Registration_Info_UClass_USocialSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialSettings.OuterSingleton, Z_Construct_UClass_USocialSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USocialSettings.OuterSingleton;
	}
	template<> PARTY_API UClass* StaticClass<USocialSettings>()
	{
		return USocialSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialSettings);
	USocialSettings::~USocialSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_Statics::ScriptStructInfo[] = {
		{ FSocialPlatformDescription::StaticStruct, Z_Construct_UScriptStruct_FSocialPlatformDescription_Statics::NewStructOps, TEXT("SocialPlatformDescription"), &Z_Registration_Info_UScriptStruct_SocialPlatformDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSocialPlatformDescription), 532234911U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USocialSettings, USocialSettings::StaticClass, TEXT("USocialSettings"), &Z_Registration_Info_UClass_USocialSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialSettings), 2851525398U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_2291752364(TEXT("/Script/Party"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
