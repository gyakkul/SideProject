// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Party/PartyTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTY_PartyTypes_generated_h
#error "PartyTypes.generated.h already included, missing '#pragma once' in PartyTypes.h"
#endif
#define PARTY_PartyTypes_generated_h

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyTypes_h_278_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPartyPlatformSessionInfo_Statics; \
	PARTY_API static class UScriptStruct* StaticStruct();


template<> PARTY_API UScriptStruct* StaticStruct<struct FPartyPlatformSessionInfo>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyTypes_h_306_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPartyPrivacySettings_Statics; \
	PARTY_API static class UScriptStruct* StaticStruct();


template<> PARTY_API UScriptStruct* StaticStruct<struct FPartyPrivacySettings>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyTypes_h_442_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlinePartyRepDataBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PARTY_API UScriptStruct* StaticStruct<struct FOnlinePartyRepDataBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_Party_PartyTypes_h


#define FOREACH_ENUM_EPARTYTYPE(op) \
	op(EPartyType::Public) \
	op(EPartyType::FriendsOnly) \
	op(EPartyType::Private) 

enum class EPartyType : uint8;
template<> struct TIsUEnumClass<EPartyType> { enum { Value = true }; };
template<> PARTY_API UEnum* StaticEnum<EPartyType>();

#define FOREACH_ENUM_EPARTYINVITERESTRICTION(op) \
	op(EPartyInviteRestriction::AnyMember) \
	op(EPartyInviteRestriction::LeaderOnly) \
	op(EPartyInviteRestriction::NoInvites) 

enum class EPartyInviteRestriction : uint8;
template<> struct TIsUEnumClass<EPartyInviteRestriction> { enum { Value = true }; };
template<> PARTY_API UEnum* StaticEnum<EPartyInviteRestriction>();

#define FOREACH_ENUM_EPARTYJOINDENIALREASON(op) \
	op(EPartyJoinDenialReason::NoReason) \
	op(EPartyJoinDenialReason::JoinAttemptAborted) \
	op(EPartyJoinDenialReason::Busy) \
	op(EPartyJoinDenialReason::OssUnavailable) \
	op(EPartyJoinDenialReason::PartyFull) \
	op(EPartyJoinDenialReason::GameFull) \
	op(EPartyJoinDenialReason::NotPartyLeader) \
	op(EPartyJoinDenialReason::PartyPrivate) \
	op(EPartyJoinDenialReason::JoinerCrossplayRestricted) \
	op(EPartyJoinDenialReason::MemberCrossplayRestricted) \
	op(EPartyJoinDenialReason::GameModeRestricted) \
	op(EPartyJoinDenialReason::Banned) \
	op(EPartyJoinDenialReason::NotLoggedIn) \
	op(EPartyJoinDenialReason::CheckingForRejoin) \
	op(EPartyJoinDenialReason::TargetUserMissingPresence) \
	op(EPartyJoinDenialReason::TargetUserUnjoinable) \
	op(EPartyJoinDenialReason::TargetUserAway) \
	op(EPartyJoinDenialReason::AlreadyLeaderInPlatformSession) \
	op(EPartyJoinDenialReason::TargetUserPlayingDifferentGame) \
	op(EPartyJoinDenialReason::TargetUserMissingPlatformSession) \
	op(EPartyJoinDenialReason::PlatformSessionMissingJoinInfo) \
	op(EPartyJoinDenialReason::FailedToStartFindConsoleSession) \
	op(EPartyJoinDenialReason::MissingPartyClassForTypeId) \
	op(EPartyJoinDenialReason::TargetUserBlocked) \
	op(EPartyJoinDenialReason::CustomReason0) \
	op(EPartyJoinDenialReason::CustomReason1) \
	op(EPartyJoinDenialReason::CustomReason2) \
	op(EPartyJoinDenialReason::CustomReason3) \
	op(EPartyJoinDenialReason::CustomReason4) \
	op(EPartyJoinDenialReason::CustomReason5) \
	op(EPartyJoinDenialReason::CustomReason6) \
	op(EPartyJoinDenialReason::CustomReason7) \
	op(EPartyJoinDenialReason::CustomReason8) \
	op(EPartyJoinDenialReason::CustomReason9) \
	op(EPartyJoinDenialReason::CustomReason10) \
	op(EPartyJoinDenialReason::CustomReason11) \
	op(EPartyJoinDenialReason::CustomReason12) \
	op(EPartyJoinDenialReason::CustomReason13) \
	op(EPartyJoinDenialReason::CustomReason14) \
	op(EPartyJoinDenialReason::CustomReason15) \
	op(EPartyJoinDenialReason::CustomReason16) \
	op(EPartyJoinDenialReason::CustomReason17) \
	op(EPartyJoinDenialReason::CustomReason18) \
	op(EPartyJoinDenialReason::CustomReason19) \
	op(EPartyJoinDenialReason::CustomReason20) \
	op(EPartyJoinDenialReason::CustomReason21) \
	op(EPartyJoinDenialReason::CustomReason22) \
	op(EPartyJoinDenialReason::CustomReason23) \
	op(EPartyJoinDenialReason::CustomReason24) \
	op(EPartyJoinDenialReason::CustomReason25) \
	op(EPartyJoinDenialReason::CustomReason26) \
	op(EPartyJoinDenialReason::CustomReason27) \
	op(EPartyJoinDenialReason::CustomReason28) \
	op(EPartyJoinDenialReason::CustomReason29) \
	op(EPartyJoinDenialReason::CustomReason30) \
	op(EPartyJoinDenialReason::CustomReason31) \
	op(EPartyJoinDenialReason::CustomReason32) \
	op(EPartyJoinDenialReason::CustomReason33) \
	op(EPartyJoinDenialReason::CustomReason34) \
	op(EPartyJoinDenialReason::CustomReason35) \
	op(EPartyJoinDenialReason::CustomReason36) \
	op(EPartyJoinDenialReason::CustomReason37) \
	op(EPartyJoinDenialReason::CustomReason38) \
	op(EPartyJoinDenialReason::CustomReason39) 

enum class EPartyJoinDenialReason : uint8;
template<> struct TIsUEnumClass<EPartyJoinDenialReason> { enum { Value = true }; };
template<> PARTY_API UEnum* StaticEnum<EPartyJoinDenialReason>();

#define FOREACH_ENUM_EAPPROVALACTION(op) \
	op(EApprovalAction::Approve) \
	op(EApprovalAction::Enqueue) \
	op(EApprovalAction::EnqueueAndStartBeacon) \
	op(EApprovalAction::Deny) 

enum class EApprovalAction : uint8;
template<> struct TIsUEnumClass<EApprovalAction> { enum { Value = true }; };
template<> PARTY_API UEnum* StaticEnum<EApprovalAction>();

#define FOREACH_ENUM_ESOCIALPARTYINVITEMETHOD(op) \
	op(ESocialPartyInviteMethod::Other) \
	op(ESocialPartyInviteMethod::Notification) \
	op(ESocialPartyInviteMethod::Custom1) 

enum class ESocialPartyInviteMethod : uint8;
template<> struct TIsUEnumClass<ESocialPartyInviteMethod> { enum { Value = true }; };
template<> PARTY_API UEnum* StaticEnum<ESocialPartyInviteMethod>();

#define FOREACH_ENUM_ESOCIALPARTYINVITEFAILUREREASON(op) \
	op(ESocialPartyInviteFailureReason::Success) \
	op(ESocialPartyInviteFailureReason::NotOnline) \
	op(ESocialPartyInviteFailureReason::NotAcceptingMembers) \
	op(ESocialPartyInviteFailureReason::NotFriends) \
	op(ESocialPartyInviteFailureReason::AlreadyInParty) \
	op(ESocialPartyInviteFailureReason::OssValidationFailed) \
	op(ESocialPartyInviteFailureReason::PlatformInviteFailed) \
	op(ESocialPartyInviteFailureReason::PartyInviteFailed) \
	op(ESocialPartyInviteFailureReason::InviteRateLimitExceeded) 

enum class ESocialPartyInviteFailureReason : uint8;
template<> struct TIsUEnumClass<ESocialPartyInviteFailureReason> { enum { Value = true }; };
template<> PARTY_API UEnum* StaticEnum<ESocialPartyInviteFailureReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
