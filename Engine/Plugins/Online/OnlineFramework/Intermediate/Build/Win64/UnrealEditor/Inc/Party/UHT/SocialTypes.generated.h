// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SocialTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PARTY_SocialTypes_generated_h
#error "SocialTypes.generated.h already included, missing '#pragma once' in SocialTypes.h"
#endif
#define PARTY_SocialTypes_generated_h

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUserPlatform_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PARTY_API UScriptStruct* StaticStruct<struct FUserPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h


#define FOREACH_ENUM_ESOCIALSUBSYSTEM(op) \
	op(ESocialSubsystem::Primary) \
	op(ESocialSubsystem::Platform) 

enum class ESocialSubsystem : uint8;
template<> struct TIsUEnumClass<ESocialSubsystem> { enum { Value = true }; };
template<> PARTY_API UEnum* StaticEnum<ESocialSubsystem>();

#define FOREACH_ENUM_ESOCIALRELATIONSHIP(op) \
	op(ESocialRelationship::Any) \
	op(ESocialRelationship::FriendInviteReceived) \
	op(ESocialRelationship::FriendInviteSent) \
	op(ESocialRelationship::PartyInvite) \
	op(ESocialRelationship::Friend) \
	op(ESocialRelationship::BlockedPlayer) \
	op(ESocialRelationship::SuggestedFriend) \
	op(ESocialRelationship::RecentPlayer) \
	op(ESocialRelationship::JoinRequest) 

enum class ESocialRelationship : uint8;
template<> struct TIsUEnumClass<ESocialRelationship> { enum { Value = true }; };
template<> PARTY_API UEnum* StaticEnum<ESocialRelationship>();

#define FOREACH_ENUM_ECROSSPLAYPREFERENCE(op) \
	op(ECrossplayPreference::NoSelection) \
	op(ECrossplayPreference::OptedIn) \
	op(ECrossplayPreference::OptedOut) \
	op(ECrossplayPreference::OptedOutRestricted) 

enum class ECrossplayPreference : uint8;
template<> struct TIsUEnumClass<ECrossplayPreference> { enum { Value = true }; };
template<> PARTY_API UEnum* StaticEnum<ECrossplayPreference>();

#define FOREACH_ENUM_EPLATFORMICONDISPLAYRULE(op) \
	op(EPlatformIconDisplayRule::Always) \
	op(EPlatformIconDisplayRule::AlwaysIfDifferent) \
	op(EPlatformIconDisplayRule::AlwaysWhenInCrossplayParty) \
	op(EPlatformIconDisplayRule::AlwaysIfDifferentWhenInCrossplayParty) \
	op(EPlatformIconDisplayRule::Never) 

enum class EPlatformIconDisplayRule : uint8;
template<> struct TIsUEnumClass<EPlatformIconDisplayRule> { enum { Value = true }; };
template<> PARTY_API UEnum* StaticEnum<EPlatformIconDisplayRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
