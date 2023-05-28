// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/SocialParty.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Party/PartyTypes.h"
#include "SocialManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialParty() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_APartyBeaconClient_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ASpectatorBeaconClient_NoRegister();
	PARTY_API UClass* Z_Construct_UClass_UPartyMember_NoRegister();
	PARTY_API UClass* Z_Construct_UClass_USocialParty();
	PARTY_API UClass* Z_Construct_UClass_USocialParty_NoRegister();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FOnlinePartyRepDataBase();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyPlatformSessionInfo();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyPrivacySettings();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyRepData();
	UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References

static_assert(std::is_polymorphic<FPartyRepData>() == std::is_polymorphic<FOnlinePartyRepDataBase>(), "USTRUCT FPartyRepData cannot be polymorphic unless super FOnlinePartyRepDataBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyRepData;
class UScriptStruct* FPartyRepData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyRepData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyRepData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyRepData, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("PartyRepData"));
	}
	return Z_Registration_Info_UScriptStruct_PartyRepData.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FPartyRepData>()
{
	return FPartyRepData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPartyRepData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivacySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrivacySettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformSessions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformSessions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlatformSessions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyRepData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base struct used to replicate data about the state of the party to all members. */" },
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
		{ "ToolTip", "Base struct used to replicate data about the state of the party to all members." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartyRepData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyRepData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PrivacySettings_MetaData[] = {
		{ "Comment", "/** The privacy settings for the party */" },
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
		{ "ToolTip", "The privacy settings for the party" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PrivacySettings = { "PrivacySettings", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyRepData, PrivacySettings), Z_Construct_UScriptStruct_FPartyPrivacySettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PrivacySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PrivacySettings_MetaData)) }; // 1103018630
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PlatformSessions_Inner = { "PlatformSessions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPartyPlatformSessionInfo, METADATA_PARAMS(nullptr, 0) }; // 3094477015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PlatformSessions_MetaData[] = {
		{ "Comment", "/** List of platform sessions for the party. Includes one entry per platform that needs a session and has a member of that session. */" },
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
		{ "ToolTip", "List of platform sessions for the party. Includes one entry per platform that needs a session and has a member of that session." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PlatformSessions = { "PlatformSessions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyRepData, PlatformSessions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PlatformSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PlatformSessions_MetaData)) }; // 3094477015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyRepData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PrivacySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PlatformSessions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyRepData_Statics::NewProp_PlatformSessions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyRepData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
		Z_Construct_UScriptStruct_FOnlinePartyRepDataBase,
		&NewStructOps,
		"PartyRepData",
		sizeof(FPartyRepData),
		alignof(FPartyRepData),
		Z_Construct_UScriptStruct_FPartyRepData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyRepData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyRepData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyRepData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartyRepData()
	{
		if (!Z_Registration_Info_UScriptStruct_PartyRepData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyRepData.InnerSingleton, Z_Construct_UScriptStruct_FPartyRepData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PartyRepData.InnerSingleton;
	}
	void USocialParty::StaticRegisterNativesUSocialParty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USocialParty);
	UClass* Z_Construct_UClass_USocialParty_NoRegister()
	{
		return USocialParty::StaticClass();
	}
	struct Z_Construct_UClass_USocialParty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReservationBeaconClientClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReservationBeaconClientClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpectatorBeaconClientClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpectatorBeaconClientClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningLocalUserId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwningLocalUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLeaderId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLeaderId;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PartyMembersById_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PartyMembersById_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartyMembersById_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PartyMembersById;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutomaticPartyRejoin_MetaData[];
#endif
		static void NewProp_bEnableAutomaticPartyRejoin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutomaticPartyRejoin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformUserInviteCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PlatformUserInviteCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryUserInviteCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PrimaryUserInviteCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReservationBeaconClient_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ReservationBeaconClient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpectatorBeaconClient_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SpectatorBeaconClient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressTimerRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JoinInProgressTimerRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressRequestTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_JoinInProgressRequestTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressResponseTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_JoinInProgressResponseTimeout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USocialParty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialParty_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Party game state that contains all information relevant to the communication within a party\n * Keeps all players in sync with the state of the party and its individual members\n */" },
		{ "IncludePath", "Party/SocialParty.h" },
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
		{ "ToolTip", "Party game state that contains all information relevant to the communication within a party\nKeeps all players in sync with the state of the party and its individual members" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialParty_Statics::NewProp_ReservationBeaconClientClass_MetaData[] = {
		{ "Comment", "/** Reservation beacon class for getting server approval for new party members while in a game */" },
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
		{ "ToolTip", "Reservation beacon class for getting server approval for new party members while in a game" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_ReservationBeaconClientClass = { "ReservationBeaconClientClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialParty, ReservationBeaconClientClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APartyBeaconClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialParty_Statics::NewProp_ReservationBeaconClientClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::NewProp_ReservationBeaconClientClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialParty_Statics::NewProp_SpectatorBeaconClientClass_MetaData[] = {
		{ "Comment", "/** Spectator beacon class for getting server approval for new spectators while in a game */" },
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
		{ "ToolTip", "Spectator beacon class for getting server approval for new spectators while in a game" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_SpectatorBeaconClientClass = { "SpectatorBeaconClientClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialParty, SpectatorBeaconClientClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASpectatorBeaconClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialParty_Statics::NewProp_SpectatorBeaconClientClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::NewProp_SpectatorBeaconClientClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialParty_Statics::NewProp_OwningLocalUserId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_OwningLocalUserId = { "OwningLocalUserId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialParty, OwningLocalUserId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_USocialParty_Statics::NewProp_OwningLocalUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::NewProp_OwningLocalUserId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialParty_Statics::NewProp_CurrentLeaderId_MetaData[] = {
		{ "Comment", "/** Tracked explicitly so we know which player was demoted whenever the leader changes */" },
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
		{ "ToolTip", "Tracked explicitly so we know which player was demoted whenever the leader changes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_CurrentLeaderId = { "CurrentLeaderId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialParty, CurrentLeaderId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_USocialParty_Statics::NewProp_CurrentLeaderId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::NewProp_CurrentLeaderId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_PartyMembersById_ValueProp = { "PartyMembersById", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UPartyMember_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_PartyMembersById_Key_KeyProp = { "PartyMembersById_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialParty_Statics::NewProp_PartyMembersById_MetaData[] = {
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_PartyMembersById = { "PartyMembersById", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialParty, PartyMembersById), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USocialParty_Statics::NewProp_PartyMembersById_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::NewProp_PartyMembersById_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialParty_Statics::NewProp_bEnableAutomaticPartyRejoin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
	};
#endif
	void Z_Construct_UClass_USocialParty_Statics::NewProp_bEnableAutomaticPartyRejoin_SetBit(void* Obj)
	{
		((USocialParty*)Obj)->bEnableAutomaticPartyRejoin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_bEnableAutomaticPartyRejoin = { "bEnableAutomaticPartyRejoin", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USocialParty), &Z_Construct_UClass_USocialParty_Statics::NewProp_bEnableAutomaticPartyRejoin_SetBit, METADATA_PARAMS(Z_Construct_UClass_USocialParty_Statics::NewProp_bEnableAutomaticPartyRejoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::NewProp_bEnableAutomaticPartyRejoin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialParty_Statics::NewProp_PlatformUserInviteCooldown_MetaData[] = {
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_PlatformUserInviteCooldown = { "PlatformUserInviteCooldown", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialParty, PlatformUserInviteCooldown), METADATA_PARAMS(Z_Construct_UClass_USocialParty_Statics::NewProp_PlatformUserInviteCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::NewProp_PlatformUserInviteCooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialParty_Statics::NewProp_PrimaryUserInviteCooldown_MetaData[] = {
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_PrimaryUserInviteCooldown = { "PrimaryUserInviteCooldown", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialParty, PrimaryUserInviteCooldown), METADATA_PARAMS(Z_Construct_UClass_USocialParty_Statics::NewProp_PrimaryUserInviteCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::NewProp_PrimaryUserInviteCooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialParty_Statics::NewProp_ReservationBeaconClient_MetaData[] = {
		{ "Comment", "/** Reservation beacon client instance while getting approval for new party members*/" },
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
		{ "ToolTip", "Reservation beacon client instance while getting approval for new party members" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_ReservationBeaconClient = { "ReservationBeaconClient", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialParty, ReservationBeaconClient), Z_Construct_UClass_APartyBeaconClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialParty_Statics::NewProp_ReservationBeaconClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::NewProp_ReservationBeaconClient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialParty_Statics::NewProp_SpectatorBeaconClient_MetaData[] = {
		{ "Comment", "/** Spectator beacon client instance while getting approval for spectator*/" },
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
		{ "ToolTip", "Spectator beacon client instance while getting approval for spectator" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_SpectatorBeaconClient = { "SpectatorBeaconClient", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialParty, SpectatorBeaconClient), Z_Construct_UClass_ASpectatorBeaconClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USocialParty_Statics::NewProp_SpectatorBeaconClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::NewProp_SpectatorBeaconClient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressTimerRate_MetaData[] = {
		{ "Comment", "/** How often the timer should check in seconds for stale data when running. */" },
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
		{ "ToolTip", "How often the timer should check in seconds for stale data when running." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressTimerRate = { "JoinInProgressTimerRate", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialParty, JoinInProgressTimerRate), METADATA_PARAMS(Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressTimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressTimerRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressRequestTimeout_MetaData[] = {
		{ "Comment", "/** How long in seconds before join in progress requests timeout and are cleared from member data. */" },
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
		{ "ToolTip", "How long in seconds before join in progress requests timeout and are cleared from member data." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressRequestTimeout = { "JoinInProgressRequestTimeout", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialParty, JoinInProgressRequestTimeout), METADATA_PARAMS(Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressRequestTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressRequestTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressResponseTimeout_MetaData[] = {
		{ "Comment", "/** How long in seconds before join in progress responses are cleared from member data. */" },
		{ "ModuleRelativePath", "Public/Party/SocialParty.h" },
		{ "ToolTip", "How long in seconds before join in progress responses are cleared from member data." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressResponseTimeout = { "JoinInProgressResponseTimeout", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USocialParty, JoinInProgressResponseTimeout), METADATA_PARAMS(Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressResponseTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressResponseTimeout_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USocialParty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_ReservationBeaconClientClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_SpectatorBeaconClientClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_OwningLocalUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_CurrentLeaderId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_PartyMembersById_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_PartyMembersById_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_PartyMembersById,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_bEnableAutomaticPartyRejoin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_PlatformUserInviteCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_PrimaryUserInviteCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_ReservationBeaconClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_SpectatorBeaconClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressTimerRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressRequestTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USocialParty_Statics::NewProp_JoinInProgressResponseTimeout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USocialParty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USocialParty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USocialParty_Statics::ClassParams = {
		&USocialParty::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USocialParty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::PropPointers),
		0,
		0x001000ADu,
		METADATA_PARAMS(Z_Construct_UClass_USocialParty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USocialParty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USocialParty()
	{
		if (!Z_Registration_Info_UClass_USocialParty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USocialParty.OuterSingleton, Z_Construct_UClass_USocialParty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USocialParty.OuterSingleton;
	}
	template<> PARTY_API UClass* StaticClass<USocialParty>()
	{
		return USocialParty::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USocialParty);
	USocialParty::~USocialParty() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_Statics::ScriptStructInfo[] = {
		{ FPartyRepData::StaticStruct, Z_Construct_UScriptStruct_FPartyRepData_Statics::NewStructOps, TEXT("PartyRepData"), &Z_Registration_Info_UScriptStruct_PartyRepData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyRepData), 502873068U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USocialParty, USocialParty::StaticClass, TEXT("USocialParty"), &Z_Registration_Info_UClass_USocialParty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USocialParty), 4175153086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_1018309989(TEXT("/Script/Party"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_SocialParty_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
