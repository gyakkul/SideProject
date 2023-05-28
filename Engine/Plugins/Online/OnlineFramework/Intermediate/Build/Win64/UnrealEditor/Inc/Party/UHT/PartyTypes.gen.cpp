// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Party/PartyTypes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	PARTY_API UEnum* Z_Construct_UEnum_Party_EApprovalAction();
	PARTY_API UEnum* Z_Construct_UEnum_Party_EPartyInviteRestriction();
	PARTY_API UEnum* Z_Construct_UEnum_Party_EPartyJoinDenialReason();
	PARTY_API UEnum* Z_Construct_UEnum_Party_EPartyType();
	PARTY_API UEnum* Z_Construct_UEnum_Party_ESocialPartyInviteFailureReason();
	PARTY_API UEnum* Z_Construct_UEnum_Party_ESocialPartyInviteMethod();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FOnlinePartyRepDataBase();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyPlatformSessionInfo();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FPartyPrivacySettings();
	UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPartyType;
	static UEnum* EPartyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPartyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPartyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Party_EPartyType, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("EPartyType"));
		}
		return Z_Registration_Info_UEnum_EPartyType.OuterSingleton;
	}
	template<> PARTY_API UEnum* StaticEnum<EPartyType>()
	{
		return EPartyType_StaticEnum();
	}
	struct Z_Construct_UEnum_Party_EPartyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Party_EPartyType_Statics::Enumerators[] = {
		{ "EPartyType::Public", (int64)EPartyType::Public },
		{ "EPartyType::FriendsOnly", (int64)EPartyType::FriendsOnly },
		{ "EPartyType::Private", (int64)EPartyType::Private },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Party_EPartyType_Statics::Enum_MetaDataParams[] = {
		{ "FriendsOnly.Comment", "/** This party is joinable by friends */" },
		{ "FriendsOnly.Name", "EPartyType::FriendsOnly" },
		{ "FriendsOnly.ToolTip", "This party is joinable by friends" },
		{ "ModuleRelativePath", "Public/Party/PartyTypes.h" },
		{ "Private.Comment", "/** This party requires an invite from someone within the party */" },
		{ "Private.Name", "EPartyType::Private" },
		{ "Private.ToolTip", "This party requires an invite from someone within the party" },
		{ "Public.Comment", "/** This party is public (not really supported right now) */" },
		{ "Public.Name", "EPartyType::Public" },
		{ "Public.ToolTip", "This party is public (not really supported right now)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Party_EPartyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		"EPartyType",
		"EPartyType",
		Z_Construct_UEnum_Party_EPartyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Party_EPartyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Party_EPartyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Party_EPartyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Party_EPartyType()
	{
		if (!Z_Registration_Info_UEnum_EPartyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPartyType.InnerSingleton, Z_Construct_UEnum_Party_EPartyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPartyType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPartyInviteRestriction;
	static UEnum* EPartyInviteRestriction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPartyInviteRestriction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPartyInviteRestriction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Party_EPartyInviteRestriction, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("EPartyInviteRestriction"));
		}
		return Z_Registration_Info_UEnum_EPartyInviteRestriction.OuterSingleton;
	}
	template<> PARTY_API UEnum* StaticEnum<EPartyInviteRestriction>()
	{
		return EPartyInviteRestriction_StaticEnum();
	}
	struct Z_Construct_UEnum_Party_EPartyInviteRestriction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Party_EPartyInviteRestriction_Statics::Enumerators[] = {
		{ "EPartyInviteRestriction::AnyMember", (int64)EPartyInviteRestriction::AnyMember },
		{ "EPartyInviteRestriction::LeaderOnly", (int64)EPartyInviteRestriction::LeaderOnly },
		{ "EPartyInviteRestriction::NoInvites", (int64)EPartyInviteRestriction::NoInvites },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Party_EPartyInviteRestriction_Statics::Enum_MetaDataParams[] = {
		{ "AnyMember.Comment", "/** Any party member can send invites */" },
		{ "AnyMember.Name", "EPartyInviteRestriction::AnyMember" },
		{ "AnyMember.ToolTip", "Any party member can send invites" },
		{ "LeaderOnly.Comment", "/** Only the leader can send invites */" },
		{ "LeaderOnly.Name", "EPartyInviteRestriction::LeaderOnly" },
		{ "LeaderOnly.ToolTip", "Only the leader can send invites" },
		{ "ModuleRelativePath", "Public/Party/PartyTypes.h" },
		{ "NoInvites.Comment", "/** Nobody can invite anyone to this party */" },
		{ "NoInvites.Name", "EPartyInviteRestriction::NoInvites" },
		{ "NoInvites.ToolTip", "Nobody can invite anyone to this party" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Party_EPartyInviteRestriction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		"EPartyInviteRestriction",
		"EPartyInviteRestriction",
		Z_Construct_UEnum_Party_EPartyInviteRestriction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Party_EPartyInviteRestriction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Party_EPartyInviteRestriction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Party_EPartyInviteRestriction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Party_EPartyInviteRestriction()
	{
		if (!Z_Registration_Info_UEnum_EPartyInviteRestriction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPartyInviteRestriction.InnerSingleton, Z_Construct_UEnum_Party_EPartyInviteRestriction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPartyInviteRestriction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPartyJoinDenialReason;
	static UEnum* EPartyJoinDenialReason_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPartyJoinDenialReason.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPartyJoinDenialReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Party_EPartyJoinDenialReason, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("EPartyJoinDenialReason"));
		}
		return Z_Registration_Info_UEnum_EPartyJoinDenialReason.OuterSingleton;
	}
	template<> PARTY_API UEnum* StaticEnum<EPartyJoinDenialReason>()
	{
		return EPartyJoinDenialReason_StaticEnum();
	}
	struct Z_Construct_UEnum_Party_EPartyJoinDenialReason_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Party_EPartyJoinDenialReason_Statics::Enumerators[] = {
		{ "EPartyJoinDenialReason::NoReason", (int64)EPartyJoinDenialReason::NoReason },
		{ "EPartyJoinDenialReason::JoinAttemptAborted", (int64)EPartyJoinDenialReason::JoinAttemptAborted },
		{ "EPartyJoinDenialReason::Busy", (int64)EPartyJoinDenialReason::Busy },
		{ "EPartyJoinDenialReason::OssUnavailable", (int64)EPartyJoinDenialReason::OssUnavailable },
		{ "EPartyJoinDenialReason::PartyFull", (int64)EPartyJoinDenialReason::PartyFull },
		{ "EPartyJoinDenialReason::GameFull", (int64)EPartyJoinDenialReason::GameFull },
		{ "EPartyJoinDenialReason::NotPartyLeader", (int64)EPartyJoinDenialReason::NotPartyLeader },
		{ "EPartyJoinDenialReason::PartyPrivate", (int64)EPartyJoinDenialReason::PartyPrivate },
		{ "EPartyJoinDenialReason::JoinerCrossplayRestricted", (int64)EPartyJoinDenialReason::JoinerCrossplayRestricted },
		{ "EPartyJoinDenialReason::MemberCrossplayRestricted", (int64)EPartyJoinDenialReason::MemberCrossplayRestricted },
		{ "EPartyJoinDenialReason::GameModeRestricted", (int64)EPartyJoinDenialReason::GameModeRestricted },
		{ "EPartyJoinDenialReason::Banned", (int64)EPartyJoinDenialReason::Banned },
		{ "EPartyJoinDenialReason::NotLoggedIn", (int64)EPartyJoinDenialReason::NotLoggedIn },
		{ "EPartyJoinDenialReason::CheckingForRejoin", (int64)EPartyJoinDenialReason::CheckingForRejoin },
		{ "EPartyJoinDenialReason::TargetUserMissingPresence", (int64)EPartyJoinDenialReason::TargetUserMissingPresence },
		{ "EPartyJoinDenialReason::TargetUserUnjoinable", (int64)EPartyJoinDenialReason::TargetUserUnjoinable },
		{ "EPartyJoinDenialReason::TargetUserAway", (int64)EPartyJoinDenialReason::TargetUserAway },
		{ "EPartyJoinDenialReason::AlreadyLeaderInPlatformSession", (int64)EPartyJoinDenialReason::AlreadyLeaderInPlatformSession },
		{ "EPartyJoinDenialReason::TargetUserPlayingDifferentGame", (int64)EPartyJoinDenialReason::TargetUserPlayingDifferentGame },
		{ "EPartyJoinDenialReason::TargetUserMissingPlatformSession", (int64)EPartyJoinDenialReason::TargetUserMissingPlatformSession },
		{ "EPartyJoinDenialReason::PlatformSessionMissingJoinInfo", (int64)EPartyJoinDenialReason::PlatformSessionMissingJoinInfo },
		{ "EPartyJoinDenialReason::FailedToStartFindConsoleSession", (int64)EPartyJoinDenialReason::FailedToStartFindConsoleSession },
		{ "EPartyJoinDenialReason::MissingPartyClassForTypeId", (int64)EPartyJoinDenialReason::MissingPartyClassForTypeId },
		{ "EPartyJoinDenialReason::TargetUserBlocked", (int64)EPartyJoinDenialReason::TargetUserBlocked },
		{ "EPartyJoinDenialReason::CustomReason0", (int64)EPartyJoinDenialReason::CustomReason0 },
		{ "EPartyJoinDenialReason::CustomReason1", (int64)EPartyJoinDenialReason::CustomReason1 },
		{ "EPartyJoinDenialReason::CustomReason2", (int64)EPartyJoinDenialReason::CustomReason2 },
		{ "EPartyJoinDenialReason::CustomReason3", (int64)EPartyJoinDenialReason::CustomReason3 },
		{ "EPartyJoinDenialReason::CustomReason4", (int64)EPartyJoinDenialReason::CustomReason4 },
		{ "EPartyJoinDenialReason::CustomReason5", (int64)EPartyJoinDenialReason::CustomReason5 },
		{ "EPartyJoinDenialReason::CustomReason6", (int64)EPartyJoinDenialReason::CustomReason6 },
		{ "EPartyJoinDenialReason::CustomReason7", (int64)EPartyJoinDenialReason::CustomReason7 },
		{ "EPartyJoinDenialReason::CustomReason8", (int64)EPartyJoinDenialReason::CustomReason8 },
		{ "EPartyJoinDenialReason::CustomReason9", (int64)EPartyJoinDenialReason::CustomReason9 },
		{ "EPartyJoinDenialReason::CustomReason10", (int64)EPartyJoinDenialReason::CustomReason10 },
		{ "EPartyJoinDenialReason::CustomReason11", (int64)EPartyJoinDenialReason::CustomReason11 },
		{ "EPartyJoinDenialReason::CustomReason12", (int64)EPartyJoinDenialReason::CustomReason12 },
		{ "EPartyJoinDenialReason::CustomReason13", (int64)EPartyJoinDenialReason::CustomReason13 },
		{ "EPartyJoinDenialReason::CustomReason14", (int64)EPartyJoinDenialReason::CustomReason14 },
		{ "EPartyJoinDenialReason::CustomReason15", (int64)EPartyJoinDenialReason::CustomReason15 },
		{ "EPartyJoinDenialReason::CustomReason16", (int64)EPartyJoinDenialReason::CustomReason16 },
		{ "EPartyJoinDenialReason::CustomReason17", (int64)EPartyJoinDenialReason::CustomReason17 },
		{ "EPartyJoinDenialReason::CustomReason18", (int64)EPartyJoinDenialReason::CustomReason18 },
		{ "EPartyJoinDenialReason::CustomReason19", (int64)EPartyJoinDenialReason::CustomReason19 },
		{ "EPartyJoinDenialReason::CustomReason20", (int64)EPartyJoinDenialReason::CustomReason20 },
		{ "EPartyJoinDenialReason::CustomReason21", (int64)EPartyJoinDenialReason::CustomReason21 },
		{ "EPartyJoinDenialReason::CustomReason22", (int64)EPartyJoinDenialReason::CustomReason22 },
		{ "EPartyJoinDenialReason::CustomReason23", (int64)EPartyJoinDenialReason::CustomReason23 },
		{ "EPartyJoinDenialReason::CustomReason24", (int64)EPartyJoinDenialReason::CustomReason24 },
		{ "EPartyJoinDenialReason::CustomReason25", (int64)EPartyJoinDenialReason::CustomReason25 },
		{ "EPartyJoinDenialReason::CustomReason26", (int64)EPartyJoinDenialReason::CustomReason26 },
		{ "EPartyJoinDenialReason::CustomReason27", (int64)EPartyJoinDenialReason::CustomReason27 },
		{ "EPartyJoinDenialReason::CustomReason28", (int64)EPartyJoinDenialReason::CustomReason28 },
		{ "EPartyJoinDenialReason::CustomReason29", (int64)EPartyJoinDenialReason::CustomReason29 },
		{ "EPartyJoinDenialReason::CustomReason30", (int64)EPartyJoinDenialReason::CustomReason30 },
		{ "EPartyJoinDenialReason::CustomReason31", (int64)EPartyJoinDenialReason::CustomReason31 },
		{ "EPartyJoinDenialReason::CustomReason32", (int64)EPartyJoinDenialReason::CustomReason32 },
		{ "EPartyJoinDenialReason::CustomReason33", (int64)EPartyJoinDenialReason::CustomReason33 },
		{ "EPartyJoinDenialReason::CustomReason34", (int64)EPartyJoinDenialReason::CustomReason34 },
		{ "EPartyJoinDenialReason::CustomReason35", (int64)EPartyJoinDenialReason::CustomReason35 },
		{ "EPartyJoinDenialReason::CustomReason36", (int64)EPartyJoinDenialReason::CustomReason36 },
		{ "EPartyJoinDenialReason::CustomReason37", (int64)EPartyJoinDenialReason::CustomReason37 },
		{ "EPartyJoinDenialReason::CustomReason38", (int64)EPartyJoinDenialReason::CustomReason38 },
		{ "EPartyJoinDenialReason::CustomReason39", (int64)EPartyJoinDenialReason::CustomReason39 },
		{ "EPartyJoinDenialReason::MAX", (int64)EPartyJoinDenialReason::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Party_EPartyJoinDenialReason_Statics::Enum_MetaDataParams[] = {
		{ "AlreadyLeaderInPlatformSession.Comment", "/** We found ourself to be the leader of the friend's party according to the console session */" },
		{ "AlreadyLeaderInPlatformSession.Name", "EPartyJoinDenialReason::AlreadyLeaderInPlatformSession" },
		{ "AlreadyLeaderInPlatformSession.ToolTip", "We found ourself to be the leader of the friend's party according to the console session" },
		{ "Banned.Comment", "/** Player is currently banned */" },
		{ "Banned.Name", "EPartyJoinDenialReason::Banned" },
		{ "Banned.ToolTip", "Player is currently banned" },
		{ "Busy.Comment", "/** Party leader is busy or at inopportune time to allow joins - to be used as a fallback when there isn't a more specific reason (more specific reasons are preferred) */" },
		{ "Busy.Name", "EPartyJoinDenialReason::Busy" },
		{ "Busy.ToolTip", "Party leader is busy or at inopportune time to allow joins - to be used as a fallback when there isn't a more specific reason (more specific reasons are preferred)" },
		{ "CheckingForRejoin.Comment", "/** Unable to start joining - we are checking for a session to rejoin */" },
		{ "CheckingForRejoin.Name", "EPartyJoinDenialReason::CheckingForRejoin" },
		{ "CheckingForRejoin.ToolTip", "Unable to start joining - we are checking for a session to rejoin" },
		{ "CustomReason0.Comment", "/**\n\x09* Customizable denial reasons.\n\x09* Expected usage is to assign the entries in the custom enum to the arbitrary custom entry placeholders below.\n\x09* App level users of the system can then cast to/from their custom enum as desired.\n\x09*/" },
		{ "CustomReason0.Name", "EPartyJoinDenialReason::CustomReason0" },
		{ "CustomReason0.ToolTip", "Customizable denial reasons.\nExpected usage is to assign the entries in the custom enum to the arbitrary custom entry placeholders below.\nApp level users of the system can then cast to/from their custom enum as desired." },
		{ "CustomReason1.Name", "EPartyJoinDenialReason::CustomReason1" },
		{ "CustomReason10.Name", "EPartyJoinDenialReason::CustomReason10" },
		{ "CustomReason11.Name", "EPartyJoinDenialReason::CustomReason11" },
		{ "CustomReason12.Name", "EPartyJoinDenialReason::CustomReason12" },
		{ "CustomReason13.Name", "EPartyJoinDenialReason::CustomReason13" },
		{ "CustomReason14.Name", "EPartyJoinDenialReason::CustomReason14" },
		{ "CustomReason15.Name", "EPartyJoinDenialReason::CustomReason15" },
		{ "CustomReason16.Name", "EPartyJoinDenialReason::CustomReason16" },
		{ "CustomReason17.Name", "EPartyJoinDenialReason::CustomReason17" },
		{ "CustomReason18.Name", "EPartyJoinDenialReason::CustomReason18" },
		{ "CustomReason19.Name", "EPartyJoinDenialReason::CustomReason19" },
		{ "CustomReason2.Name", "EPartyJoinDenialReason::CustomReason2" },
		{ "CustomReason20.Name", "EPartyJoinDenialReason::CustomReason20" },
		{ "CustomReason21.Name", "EPartyJoinDenialReason::CustomReason21" },
		{ "CustomReason22.Name", "EPartyJoinDenialReason::CustomReason22" },
		{ "CustomReason23.Name", "EPartyJoinDenialReason::CustomReason23" },
		{ "CustomReason24.Name", "EPartyJoinDenialReason::CustomReason24" },
		{ "CustomReason25.Name", "EPartyJoinDenialReason::CustomReason25" },
		{ "CustomReason26.Name", "EPartyJoinDenialReason::CustomReason26" },
		{ "CustomReason27.Name", "EPartyJoinDenialReason::CustomReason27" },
		{ "CustomReason28.Name", "EPartyJoinDenialReason::CustomReason28" },
		{ "CustomReason29.Name", "EPartyJoinDenialReason::CustomReason29" },
		{ "CustomReason3.Name", "EPartyJoinDenialReason::CustomReason3" },
		{ "CustomReason30.Name", "EPartyJoinDenialReason::CustomReason30" },
		{ "CustomReason31.Name", "EPartyJoinDenialReason::CustomReason31" },
		{ "CustomReason32.Name", "EPartyJoinDenialReason::CustomReason32" },
		{ "CustomReason33.Name", "EPartyJoinDenialReason::CustomReason33" },
		{ "CustomReason34.Name", "EPartyJoinDenialReason::CustomReason34" },
		{ "CustomReason35.Name", "EPartyJoinDenialReason::CustomReason35" },
		{ "CustomReason36.Name", "EPartyJoinDenialReason::CustomReason36" },
		{ "CustomReason37.Name", "EPartyJoinDenialReason::CustomReason37" },
		{ "CustomReason38.Name", "EPartyJoinDenialReason::CustomReason38" },
		{ "CustomReason39.Name", "EPartyJoinDenialReason::CustomReason39" },
		{ "CustomReason4.Name", "EPartyJoinDenialReason::CustomReason4" },
		{ "CustomReason5.Name", "EPartyJoinDenialReason::CustomReason5" },
		{ "CustomReason6.Name", "EPartyJoinDenialReason::CustomReason6" },
		{ "CustomReason7.Name", "EPartyJoinDenialReason::CustomReason7" },
		{ "CustomReason8.Name", "EPartyJoinDenialReason::CustomReason8" },
		{ "CustomReason9.Name", "EPartyJoinDenialReason::CustomReason9" },
		{ "FailedToStartFindConsoleSession.Comment", "/** We were unable to launch the query to find the platform friend's session (platform friends only) */" },
		{ "FailedToStartFindConsoleSession.Name", "EPartyJoinDenialReason::FailedToStartFindConsoleSession" },
		{ "FailedToStartFindConsoleSession.ToolTip", "We were unable to launch the query to find the platform friend's session (platform friends only)" },
		{ "GameFull.Comment", "/** Game is full, but not party */" },
		{ "GameFull.Name", "EPartyJoinDenialReason::GameFull" },
		{ "GameFull.ToolTip", "Game is full, but not party" },
		{ "GameModeRestricted.Comment", "/** Player is in a game mode that restricts joining */" },
		{ "GameModeRestricted.Name", "EPartyJoinDenialReason::GameModeRestricted" },
		{ "GameModeRestricted.ToolTip", "Player is in a game mode that restricts joining" },
		{ "JoinAttemptAborted.Comment", "/** The local player aborted the join attempt */" },
		{ "JoinAttemptAborted.Name", "EPartyJoinDenialReason::JoinAttemptAborted" },
		{ "JoinAttemptAborted.ToolTip", "The local player aborted the join attempt" },
		{ "JoinerCrossplayRestricted.Comment", "/** Player has crossplay restriction that would be violated */" },
		{ "JoinerCrossplayRestricted.Name", "EPartyJoinDenialReason::JoinerCrossplayRestricted" },
		{ "JoinerCrossplayRestricted.ToolTip", "Player has crossplay restriction that would be violated" },
		{ "MAX.Name", "EPartyJoinDenialReason::MAX" },
		{ "MemberCrossplayRestricted.Comment", "/** Party member has crossplay restriction that would be violated */" },
		{ "MemberCrossplayRestricted.Name", "EPartyJoinDenialReason::MemberCrossplayRestricted" },
		{ "MemberCrossplayRestricted.ToolTip", "Party member has crossplay restriction that would be violated" },
		{ "MissingPartyClassForTypeId.Comment", "/** The party is of a type that the game does not support (it specified nullptr for the USocialParty class) */" },
		{ "MissingPartyClassForTypeId.Name", "EPartyJoinDenialReason::MissingPartyClassForTypeId" },
		{ "MissingPartyClassForTypeId.ToolTip", "The party is of a type that the game does not support (it specified nullptr for the USocialParty class)" },
		{ "ModuleRelativePath", "Public/Party/PartyTypes.h" },
		{ "NoReason.Comment", "/** No denial, matches success internally */" },
		{ "NoReason.Name", "EPartyJoinDenialReason::NoReason" },
		{ "NoReason.ToolTip", "No denial, matches success internally" },
		{ "NotLoggedIn.Comment", "/** Player is not yet logged in */" },
		{ "NotLoggedIn.Name", "EPartyJoinDenialReason::NotLoggedIn" },
		{ "NotLoggedIn.ToolTip", "Player is not yet logged in" },
		{ "NotPartyLeader.Comment", "/** Asked a non party leader to join game, shouldn't happen */" },
		{ "NotPartyLeader.Name", "EPartyJoinDenialReason::NotPartyLeader" },
		{ "NotPartyLeader.ToolTip", "Asked a non party leader to join game, shouldn't happen" },
		{ "OssUnavailable.Comment", "/** Either the necessary OSS itself or critical element thereof (PartyInterface, SessionInterface, etc.) is missing. */" },
		{ "OssUnavailable.Name", "EPartyJoinDenialReason::OssUnavailable" },
		{ "OssUnavailable.ToolTip", "Either the necessary OSS itself or critical element thereof (PartyInterface, SessionInterface, etc.) is missing." },
		{ "PartyFull.Comment", "/** Party is full */" },
		{ "PartyFull.Name", "EPartyJoinDenialReason::PartyFull" },
		{ "PartyFull.ToolTip", "Party is full" },
		{ "PartyPrivate.Comment", "/** Party has been marked as private and the join request is revoked */" },
		{ "PartyPrivate.Name", "EPartyJoinDenialReason::PartyPrivate" },
		{ "PartyPrivate.ToolTip", "Party has been marked as private and the join request is revoked" },
		{ "PlatformSessionMissingJoinInfo.Comment", "/** There is no party join info available in the target user's platform session */" },
		{ "PlatformSessionMissingJoinInfo.Name", "EPartyJoinDenialReason::PlatformSessionMissingJoinInfo" },
		{ "PlatformSessionMissingJoinInfo.ToolTip", "There is no party join info available in the target user's platform session" },
		{ "TargetUserAway.Comment", "/** The target user is currently Away */" },
		{ "TargetUserAway.Name", "EPartyJoinDenialReason::TargetUserAway" },
		{ "TargetUserAway.ToolTip", "The target user is currently Away" },
		{ "TargetUserBlocked.Comment", "/** The target user is blocked by the local user on one or more of the active subsystems */" },
		{ "TargetUserBlocked.Name", "EPartyJoinDenialReason::TargetUserBlocked" },
		{ "TargetUserBlocked.ToolTip", "The target user is blocked by the local user on one or more of the active subsystems" },
		{ "TargetUserMissingPlatformSession.Comment", "/** The target user's presence does not have any information about their party session (platform friends only) */" },
		{ "TargetUserMissingPlatformSession.Name", "EPartyJoinDenialReason::TargetUserMissingPlatformSession" },
		{ "TargetUserMissingPlatformSession.ToolTip", "The target user's presence does not have any information about their party session (platform friends only)" },
		{ "TargetUserMissingPresence.Comment", "/** The target user is missing presence info */" },
		{ "TargetUserMissingPresence.Name", "EPartyJoinDenialReason::TargetUserMissingPresence" },
		{ "TargetUserMissingPresence.ToolTip", "The target user is missing presence info" },
		{ "TargetUserPlayingDifferentGame.Comment", "/** The target user is not playing the same game as us */" },
		{ "TargetUserPlayingDifferentGame.Name", "EPartyJoinDenialReason::TargetUserPlayingDifferentGame" },
		{ "TargetUserPlayingDifferentGame.ToolTip", "The target user is not playing the same game as us" },
		{ "TargetUserUnjoinable.Comment", "/** The target user's presence says the user is unjoinable */" },
		{ "TargetUserUnjoinable.Name", "EPartyJoinDenialReason::TargetUserUnjoinable" },
		{ "TargetUserUnjoinable.ToolTip", "The target user's presence says the user is unjoinable" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Party_EPartyJoinDenialReason_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		"EPartyJoinDenialReason",
		"EPartyJoinDenialReason",
		Z_Construct_UEnum_Party_EPartyJoinDenialReason_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Party_EPartyJoinDenialReason_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Party_EPartyJoinDenialReason_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Party_EPartyJoinDenialReason_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Party_EPartyJoinDenialReason()
	{
		if (!Z_Registration_Info_UEnum_EPartyJoinDenialReason.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPartyJoinDenialReason.InnerSingleton, Z_Construct_UEnum_Party_EPartyJoinDenialReason_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPartyJoinDenialReason.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EApprovalAction;
	static UEnum* EApprovalAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EApprovalAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EApprovalAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Party_EApprovalAction, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("EApprovalAction"));
		}
		return Z_Registration_Info_UEnum_EApprovalAction.OuterSingleton;
	}
	template<> PARTY_API UEnum* StaticEnum<EApprovalAction>()
	{
		return EApprovalAction_StaticEnum();
	}
	struct Z_Construct_UEnum_Party_EApprovalAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Party_EApprovalAction_Statics::Enumerators[] = {
		{ "EApprovalAction::Approve", (int64)EApprovalAction::Approve },
		{ "EApprovalAction::Enqueue", (int64)EApprovalAction::Enqueue },
		{ "EApprovalAction::EnqueueAndStartBeacon", (int64)EApprovalAction::EnqueueAndStartBeacon },
		{ "EApprovalAction::Deny", (int64)EApprovalAction::Deny },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Party_EApprovalAction_Statics::Enum_MetaDataParams[] = {
		{ "Approve.Name", "EApprovalAction::Approve" },
		{ "Deny.Name", "EApprovalAction::Deny" },
		{ "Enqueue.Name", "EApprovalAction::Enqueue" },
		{ "EnqueueAndStartBeacon.Name", "EApprovalAction::EnqueueAndStartBeacon" },
		{ "ModuleRelativePath", "Public/Party/PartyTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Party_EApprovalAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		"EApprovalAction",
		"EApprovalAction",
		Z_Construct_UEnum_Party_EApprovalAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Party_EApprovalAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Party_EApprovalAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Party_EApprovalAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Party_EApprovalAction()
	{
		if (!Z_Registration_Info_UEnum_EApprovalAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EApprovalAction.InnerSingleton, Z_Construct_UEnum_Party_EApprovalAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EApprovalAction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESocialPartyInviteMethod;
	static UEnum* ESocialPartyInviteMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESocialPartyInviteMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESocialPartyInviteMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Party_ESocialPartyInviteMethod, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("ESocialPartyInviteMethod"));
		}
		return Z_Registration_Info_UEnum_ESocialPartyInviteMethod.OuterSingleton;
	}
	template<> PARTY_API UEnum* StaticEnum<ESocialPartyInviteMethod>()
	{
		return ESocialPartyInviteMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Party_ESocialPartyInviteMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Party_ESocialPartyInviteMethod_Statics::Enumerators[] = {
		{ "ESocialPartyInviteMethod::Other", (int64)ESocialPartyInviteMethod::Other },
		{ "ESocialPartyInviteMethod::Notification", (int64)ESocialPartyInviteMethod::Notification },
		{ "ESocialPartyInviteMethod::Custom1", (int64)ESocialPartyInviteMethod::Custom1 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Party_ESocialPartyInviteMethod_Statics::Enum_MetaDataParams[] = {
		{ "Custom1.Comment", "/** Invite was sent with a custom method */" },
		{ "Custom1.Name", "ESocialPartyInviteMethod::Custom1" },
		{ "Custom1.ToolTip", "Invite was sent with a custom method" },
		{ "ModuleRelativePath", "Public/Party/PartyTypes.h" },
		{ "Notification.Comment", "/** Invite was sent from a toast */" },
		{ "Notification.Name", "ESocialPartyInviteMethod::Notification" },
		{ "Notification.ToolTip", "Invite was sent from a toast" },
		{ "Other.Comment", "/** Default value for try invite */" },
		{ "Other.Name", "ESocialPartyInviteMethod::Other" },
		{ "Other.ToolTip", "Default value for try invite" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Party_ESocialPartyInviteMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		"ESocialPartyInviteMethod",
		"ESocialPartyInviteMethod",
		Z_Construct_UEnum_Party_ESocialPartyInviteMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ESocialPartyInviteMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Party_ESocialPartyInviteMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ESocialPartyInviteMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Party_ESocialPartyInviteMethod()
	{
		if (!Z_Registration_Info_UEnum_ESocialPartyInviteMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESocialPartyInviteMethod.InnerSingleton, Z_Construct_UEnum_Party_ESocialPartyInviteMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESocialPartyInviteMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESocialPartyInviteFailureReason;
	static UEnum* ESocialPartyInviteFailureReason_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESocialPartyInviteFailureReason.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESocialPartyInviteFailureReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Party_ESocialPartyInviteFailureReason, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("ESocialPartyInviteFailureReason"));
		}
		return Z_Registration_Info_UEnum_ESocialPartyInviteFailureReason.OuterSingleton;
	}
	template<> PARTY_API UEnum* StaticEnum<ESocialPartyInviteFailureReason>()
	{
		return ESocialPartyInviteFailureReason_StaticEnum();
	}
	struct Z_Construct_UEnum_Party_ESocialPartyInviteFailureReason_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Party_ESocialPartyInviteFailureReason_Statics::Enumerators[] = {
		{ "ESocialPartyInviteFailureReason::Success", (int64)ESocialPartyInviteFailureReason::Success },
		{ "ESocialPartyInviteFailureReason::NotOnline", (int64)ESocialPartyInviteFailureReason::NotOnline },
		{ "ESocialPartyInviteFailureReason::NotAcceptingMembers", (int64)ESocialPartyInviteFailureReason::NotAcceptingMembers },
		{ "ESocialPartyInviteFailureReason::NotFriends", (int64)ESocialPartyInviteFailureReason::NotFriends },
		{ "ESocialPartyInviteFailureReason::AlreadyInParty", (int64)ESocialPartyInviteFailureReason::AlreadyInParty },
		{ "ESocialPartyInviteFailureReason::OssValidationFailed", (int64)ESocialPartyInviteFailureReason::OssValidationFailed },
		{ "ESocialPartyInviteFailureReason::PlatformInviteFailed", (int64)ESocialPartyInviteFailureReason::PlatformInviteFailed },
		{ "ESocialPartyInviteFailureReason::PartyInviteFailed", (int64)ESocialPartyInviteFailureReason::PartyInviteFailed },
		{ "ESocialPartyInviteFailureReason::InviteRateLimitExceeded", (int64)ESocialPartyInviteFailureReason::InviteRateLimitExceeded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Party_ESocialPartyInviteFailureReason_Statics::Enum_MetaDataParams[] = {
		{ "AlreadyInParty.Name", "ESocialPartyInviteFailureReason::AlreadyInParty" },
		{ "InviteRateLimitExceeded.Name", "ESocialPartyInviteFailureReason::InviteRateLimitExceeded" },
		{ "ModuleRelativePath", "Public/Party/PartyTypes.h" },
		{ "NotAcceptingMembers.Name", "ESocialPartyInviteFailureReason::NotAcceptingMembers" },
		{ "NotFriends.Name", "ESocialPartyInviteFailureReason::NotFriends" },
		{ "NotOnline.Name", "ESocialPartyInviteFailureReason::NotOnline" },
		{ "OssValidationFailed.Name", "ESocialPartyInviteFailureReason::OssValidationFailed" },
		{ "PartyInviteFailed.Name", "ESocialPartyInviteFailureReason::PartyInviteFailed" },
		{ "PlatformInviteFailed.Name", "ESocialPartyInviteFailureReason::PlatformInviteFailed" },
		{ "Success.Name", "ESocialPartyInviteFailureReason::Success" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Party_ESocialPartyInviteFailureReason_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		"ESocialPartyInviteFailureReason",
		"ESocialPartyInviteFailureReason",
		Z_Construct_UEnum_Party_ESocialPartyInviteFailureReason_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ESocialPartyInviteFailureReason_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Party_ESocialPartyInviteFailureReason_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ESocialPartyInviteFailureReason_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Party_ESocialPartyInviteFailureReason()
	{
		if (!Z_Registration_Info_UEnum_ESocialPartyInviteFailureReason.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESocialPartyInviteFailureReason.InnerSingleton, Z_Construct_UEnum_Party_ESocialPartyInviteFailureReason_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESocialPartyInviteFailureReason.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyPlatformSessionInfo;
class UScriptStruct* FPartyPlatformSessionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyPlatformSessionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyPlatformSessionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyPlatformSessionInfo, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("PartyPlatformSessionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PartyPlatformSessionInfo.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FPartyPlatformSessionInfo>()
{
	return FPartyPlatformSessionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPrimaryId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerPrimaryId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party/PartyTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyPlatformSessionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewProp_SessionType_MetaData[] = {
		{ "Comment", "/** The platform session type (because in a crossplay party, members can be in different session types) */" },
		{ "ModuleRelativePath", "Public/Party/PartyTypes.h" },
		{ "ToolTip", "The platform session type (because in a crossplay party, members can be in different session types)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewProp_SessionType = { "SessionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyPlatformSessionInfo, SessionType), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewProp_SessionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewProp_SessionType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewProp_SessionId_MetaData[] = {
		{ "Comment", "/** The platform session id. Will be unset if it is not yet available to be joined. */" },
		{ "ModuleRelativePath", "Public/Party/PartyTypes.h" },
		{ "ToolTip", "The platform session id. Will be unset if it is not yet available to be joined." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyPlatformSessionInfo, SessionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewProp_SessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewProp_OwnerPrimaryId_MetaData[] = {
		{ "Comment", "/** Primary OSS ID of the player that owns this console session */" },
		{ "ModuleRelativePath", "Public/Party/PartyTypes.h" },
		{ "ToolTip", "Primary OSS ID of the player that owns this console session" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewProp_OwnerPrimaryId = { "OwnerPrimaryId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyPlatformSessionInfo, OwnerPrimaryId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewProp_OwnerPrimaryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewProp_OwnerPrimaryId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewProp_SessionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewProp_SessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewProp_OwnerPrimaryId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		&NewStructOps,
		"PartyPlatformSessionInfo",
		sizeof(FPartyPlatformSessionInfo),
		alignof(FPartyPlatformSessionInfo),
		Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartyPlatformSessionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PartyPlatformSessionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyPlatformSessionInfo.InnerSingleton, Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PartyPlatformSessionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PartyPrivacySettings;
class UScriptStruct* FPartyPrivacySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PartyPrivacySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PartyPrivacySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyPrivacySettings, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("PartyPrivacySettings"));
	}
	return Z_Registration_Info_UScriptStruct_PartyPrivacySettings.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FPartyPrivacySettings>()
{
	return FPartyPrivacySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_PartyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PartyType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PartyInviteRestriction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartyInviteRestriction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PartyInviteRestriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyLeaderFriendsCanJoin_MetaData[];
#endif
		static void NewProp_bOnlyLeaderFriendsCanJoin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyLeaderFriendsCanJoin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Party/PartyTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyPrivacySettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_PartyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_PartyType_MetaData[] = {
		{ "Comment", "/** The type of party in terms of advertised joinability restrictions */" },
		{ "ModuleRelativePath", "Public/Party/PartyTypes.h" },
		{ "ToolTip", "The type of party in terms of advertised joinability restrictions" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_PartyType = { "PartyType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyPrivacySettings, PartyType), Z_Construct_UEnum_Party_EPartyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_PartyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_PartyType_MetaData)) }; // 3954731325
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_PartyInviteRestriction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_PartyInviteRestriction_MetaData[] = {
		{ "Comment", "/** Who is allowed to send invitataions to the party? */" },
		{ "ModuleRelativePath", "Public/Party/PartyTypes.h" },
		{ "ToolTip", "Who is allowed to send invitataions to the party?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_PartyInviteRestriction = { "PartyInviteRestriction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPartyPrivacySettings, PartyInviteRestriction), Z_Construct_UEnum_Party_EPartyInviteRestriction, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_PartyInviteRestriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_PartyInviteRestriction_MetaData)) }; // 893338851
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_bOnlyLeaderFriendsCanJoin_MetaData[] = {
		{ "Comment", "/** True to restrict the party exclusively to friends of the party leader */" },
		{ "ModuleRelativePath", "Public/Party/PartyTypes.h" },
		{ "ToolTip", "True to restrict the party exclusively to friends of the party leader" },
	};
#endif
	void Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_bOnlyLeaderFriendsCanJoin_SetBit(void* Obj)
	{
		((FPartyPrivacySettings*)Obj)->bOnlyLeaderFriendsCanJoin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_bOnlyLeaderFriendsCanJoin = { "bOnlyLeaderFriendsCanJoin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPartyPrivacySettings), &Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_bOnlyLeaderFriendsCanJoin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_bOnlyLeaderFriendsCanJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_bOnlyLeaderFriendsCanJoin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_PartyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_PartyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_PartyInviteRestriction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_PartyInviteRestriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewProp_bOnlyLeaderFriendsCanJoin,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		&NewStructOps,
		"PartyPrivacySettings",
		sizeof(FPartyPrivacySettings),
		alignof(FPartyPrivacySettings),
		Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartyPrivacySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PartyPrivacySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PartyPrivacySettings.InnerSingleton, Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PartyPrivacySettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OnlinePartyRepDataBase;
class UScriptStruct* FOnlinePartyRepDataBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OnlinePartyRepDataBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OnlinePartyRepDataBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlinePartyRepDataBase, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("OnlinePartyRepDataBase"));
	}
	return Z_Registration_Info_UScriptStruct_OnlinePartyRepDataBase.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FOnlinePartyRepDataBase>()
{
	return FOnlinePartyRepDataBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOnlinePartyRepDataBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlinePartyRepDataBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base for all rep data structs */" },
		{ "ModuleRelativePath", "Public/Party/PartyTypes.h" },
		{ "ToolTip", "Base for all rep data structs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlinePartyRepDataBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlinePartyRepDataBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlinePartyRepDataBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		&NewStructOps,
		"OnlinePartyRepDataBase",
		sizeof(FOnlinePartyRepDataBase),
		alignof(FOnlinePartyRepDataBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlinePartyRepDataBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlinePartyRepDataBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlinePartyRepDataBase()
	{
		if (!Z_Registration_Info_UScriptStruct_OnlinePartyRepDataBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OnlinePartyRepDataBase.InnerSingleton, Z_Construct_UScriptStruct_FOnlinePartyRepDataBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OnlinePartyRepDataBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyTypes_h_Statics::EnumInfo[] = {
		{ EPartyType_StaticEnum, TEXT("EPartyType"), &Z_Registration_Info_UEnum_EPartyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3954731325U) },
		{ EPartyInviteRestriction_StaticEnum, TEXT("EPartyInviteRestriction"), &Z_Registration_Info_UEnum_EPartyInviteRestriction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 893338851U) },
		{ EPartyJoinDenialReason_StaticEnum, TEXT("EPartyJoinDenialReason"), &Z_Registration_Info_UEnum_EPartyJoinDenialReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 238371942U) },
		{ EApprovalAction_StaticEnum, TEXT("EApprovalAction"), &Z_Registration_Info_UEnum_EApprovalAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1568135764U) },
		{ ESocialPartyInviteMethod_StaticEnum, TEXT("ESocialPartyInviteMethod"), &Z_Registration_Info_UEnum_ESocialPartyInviteMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1858298964U) },
		{ ESocialPartyInviteFailureReason_StaticEnum, TEXT("ESocialPartyInviteFailureReason"), &Z_Registration_Info_UEnum_ESocialPartyInviteFailureReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2953008739U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyTypes_h_Statics::ScriptStructInfo[] = {
		{ FPartyPlatformSessionInfo::StaticStruct, Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics::NewStructOps, TEXT("PartyPlatformSessionInfo"), &Z_Registration_Info_UScriptStruct_PartyPlatformSessionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyPlatformSessionInfo), 3094477015U) },
		{ FPartyPrivacySettings::StaticStruct, Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics::NewStructOps, TEXT("PartyPrivacySettings"), &Z_Registration_Info_UScriptStruct_PartyPrivacySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPartyPrivacySettings), 1103018630U) },
		{ FOnlinePartyRepDataBase::StaticStruct, Z_Construct_UScriptStruct_FOnlinePartyRepDataBase_Statics::NewStructOps, TEXT("OnlinePartyRepDataBase"), &Z_Registration_Info_UScriptStruct_OnlinePartyRepDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOnlinePartyRepDataBase), 1410518319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyTypes_h_568743265(TEXT("/Script/Party"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
