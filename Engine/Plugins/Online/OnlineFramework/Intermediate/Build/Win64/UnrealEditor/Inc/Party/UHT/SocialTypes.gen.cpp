// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialTypes.h"
#include "SocialSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSocialTypes() {}
// Cross Module References
	PARTY_API UEnum* Z_Construct_UEnum_Party_ECrossplayPreference();
	PARTY_API UEnum* Z_Construct_UEnum_Party_EPlatformIconDisplayRule();
	PARTY_API UEnum* Z_Construct_UEnum_Party_ESocialRelationship();
	PARTY_API UEnum* Z_Construct_UEnum_Party_ESocialSubsystem();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FSocialPlatformDescription();
	PARTY_API UScriptStruct* Z_Construct_UScriptStruct_FUserPlatform();
	UPackage* Z_Construct_UPackage__Script_Party();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESocialSubsystem;
	static UEnum* ESocialSubsystem_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESocialSubsystem.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESocialSubsystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Party_ESocialSubsystem, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("ESocialSubsystem"));
		}
		return Z_Registration_Info_UEnum_ESocialSubsystem.OuterSingleton;
	}
	template<> PARTY_API UEnum* StaticEnum<ESocialSubsystem>()
	{
		return ESocialSubsystem_StaticEnum();
	}
	struct Z_Construct_UEnum_Party_ESocialSubsystem_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Party_ESocialSubsystem_Statics::Enumerators[] = {
		{ "ESocialSubsystem::Primary", (int64)ESocialSubsystem::Primary },
		{ "ESocialSubsystem::Platform", (int64)ESocialSubsystem::Platform },
		{ "ESocialSubsystem::MAX", (int64)ESocialSubsystem::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Party_ESocialSubsystem_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** All supported subsystems  */" },
		{ "MAX.Comment", "/*Facebook,\n\x09Google,\n\x09Twitch,*/" },
		{ "MAX.Name", "ESocialSubsystem::MAX" },
		{ "MAX.ToolTip", "Facebook,\n       Google,\n       Twitch," },
		{ "ModuleRelativePath", "Public/SocialTypes.h" },
		{ "Platform.Comment", "// OSS specific to the platform on which we're running (PSN, XBL, GameCenter, etc.)\n" },
		{ "Platform.Name", "ESocialSubsystem::Platform" },
		{ "Platform.ToolTip", "OSS specific to the platform on which we're running (PSN, XBL, GameCenter, etc.)" },
		{ "Primary.Comment", "// Publisher-level cross-platform OSS\n" },
		{ "Primary.Name", "ESocialSubsystem::Primary" },
		{ "Primary.ToolTip", "Publisher-level cross-platform OSS" },
		{ "ToolTip", "All supported subsystems" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Party_ESocialSubsystem_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		"ESocialSubsystem",
		"ESocialSubsystem",
		Z_Construct_UEnum_Party_ESocialSubsystem_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ESocialSubsystem_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Party_ESocialSubsystem_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ESocialSubsystem_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Party_ESocialSubsystem()
	{
		if (!Z_Registration_Info_UEnum_ESocialSubsystem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESocialSubsystem.InnerSingleton, Z_Construct_UEnum_Party_ESocialSubsystem_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESocialSubsystem.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESocialRelationship;
	static UEnum* ESocialRelationship_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESocialRelationship.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESocialRelationship.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Party_ESocialRelationship, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("ESocialRelationship"));
		}
		return Z_Registration_Info_UEnum_ESocialRelationship.OuterSingleton;
	}
	template<> PARTY_API UEnum* StaticEnum<ESocialRelationship>()
	{
		return ESocialRelationship_StaticEnum();
	}
	struct Z_Construct_UEnum_Party_ESocialRelationship_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Party_ESocialRelationship_Statics::Enumerators[] = {
		{ "ESocialRelationship::Any", (int64)ESocialRelationship::Any },
		{ "ESocialRelationship::FriendInviteReceived", (int64)ESocialRelationship::FriendInviteReceived },
		{ "ESocialRelationship::FriendInviteSent", (int64)ESocialRelationship::FriendInviteSent },
		{ "ESocialRelationship::PartyInvite", (int64)ESocialRelationship::PartyInvite },
		{ "ESocialRelationship::Friend", (int64)ESocialRelationship::Friend },
		{ "ESocialRelationship::BlockedPlayer", (int64)ESocialRelationship::BlockedPlayer },
		{ "ESocialRelationship::SuggestedFriend", (int64)ESocialRelationship::SuggestedFriend },
		{ "ESocialRelationship::RecentPlayer", (int64)ESocialRelationship::RecentPlayer },
		{ "ESocialRelationship::JoinRequest", (int64)ESocialRelationship::JoinRequest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Party_ESocialRelationship_Statics::Enum_MetaDataParams[] = {
		{ "Any.Name", "ESocialRelationship::Any" },
		{ "BlockedPlayer.Name", "ESocialRelationship::BlockedPlayer" },
		{ "Comment", "/** Per-OSS relationship types */" },
		{ "Friend.Name", "ESocialRelationship::Friend" },
		{ "FriendInviteReceived.Name", "ESocialRelationship::FriendInviteReceived" },
		{ "FriendInviteSent.Name", "ESocialRelationship::FriendInviteSent" },
		{ "JoinRequest.Name", "ESocialRelationship::JoinRequest" },
		{ "ModuleRelativePath", "Public/SocialTypes.h" },
		{ "PartyInvite.Name", "ESocialRelationship::PartyInvite" },
		{ "RecentPlayer.Name", "ESocialRelationship::RecentPlayer" },
		{ "SuggestedFriend.Name", "ESocialRelationship::SuggestedFriend" },
		{ "ToolTip", "Per-OSS relationship types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Party_ESocialRelationship_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		"ESocialRelationship",
		"ESocialRelationship",
		Z_Construct_UEnum_Party_ESocialRelationship_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ESocialRelationship_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Party_ESocialRelationship_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ESocialRelationship_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Party_ESocialRelationship()
	{
		if (!Z_Registration_Info_UEnum_ESocialRelationship.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESocialRelationship.InnerSingleton, Z_Construct_UEnum_Party_ESocialRelationship_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESocialRelationship.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrossplayPreference;
	static UEnum* ECrossplayPreference_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECrossplayPreference.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECrossplayPreference.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Party_ECrossplayPreference, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("ECrossplayPreference"));
		}
		return Z_Registration_Info_UEnum_ECrossplayPreference.OuterSingleton;
	}
	template<> PARTY_API UEnum* StaticEnum<ECrossplayPreference>()
	{
		return ECrossplayPreference_StaticEnum();
	}
	struct Z_Construct_UEnum_Party_ECrossplayPreference_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Party_ECrossplayPreference_Statics::Enumerators[] = {
		{ "ECrossplayPreference::NoSelection", (int64)ECrossplayPreference::NoSelection },
		{ "ECrossplayPreference::OptedIn", (int64)ECrossplayPreference::OptedIn },
		{ "ECrossplayPreference::OptedOut", (int64)ECrossplayPreference::OptedOut },
		{ "ECrossplayPreference::OptedOutRestricted", (int64)ECrossplayPreference::OptedOutRestricted },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Party_ECrossplayPreference_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SocialTypes.h" },
		{ "NoSelection.Name", "ECrossplayPreference::NoSelection" },
		{ "OptedIn.Name", "ECrossplayPreference::OptedIn" },
		{ "OptedOut.Name", "ECrossplayPreference::OptedOut" },
		{ "OptedOutRestricted.Name", "ECrossplayPreference::OptedOutRestricted" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Party_ECrossplayPreference_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		"ECrossplayPreference",
		"ECrossplayPreference",
		Z_Construct_UEnum_Party_ECrossplayPreference_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ECrossplayPreference_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Party_ECrossplayPreference_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Party_ECrossplayPreference_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Party_ECrossplayPreference()
	{
		if (!Z_Registration_Info_UEnum_ECrossplayPreference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrossplayPreference.InnerSingleton, Z_Construct_UEnum_Party_ECrossplayPreference_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECrossplayPreference.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserPlatform;
class UScriptStruct* FUserPlatform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserPlatform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserPlatform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserPlatform, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("UserPlatform"));
	}
	return Z_Registration_Info_UScriptStruct_UserPlatform.OuterSingleton;
}
template<> PARTY_API UScriptStruct* StaticStruct<FUserPlatform>()
{
	return FUserPlatform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUserPlatform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserPlatform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Thin wrapper to infuse a raw platform string with some meaning */" },
		{ "ModuleRelativePath", "Public/SocialTypes.h" },
		{ "ToolTip", "Thin wrapper to infuse a raw platform string with some meaning" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUserPlatform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserPlatform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUserPlatform_Statics::NewProp_PlatformDescription_MetaData[] = {
		{ "ModuleRelativePath", "Public/SocialTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserPlatform_Statics::NewProp_PlatformDescription = { "PlatformDescription", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUserPlatform, PlatformDescription), Z_Construct_UScriptStruct_FSocialPlatformDescription, METADATA_PARAMS(Z_Construct_UScriptStruct_FUserPlatform_Statics::NewProp_PlatformDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPlatform_Statics::NewProp_PlatformDescription_MetaData)) }; // 532234911
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserPlatform_Statics::NewProp_PlatformDescription,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserPlatform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		&NewStructOps,
		"UserPlatform",
		sizeof(FUserPlatform),
		alignof(FUserPlatform),
		Z_Construct_UScriptStruct_FUserPlatform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPlatform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUserPlatform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserPlatform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUserPlatform()
	{
		if (!Z_Registration_Info_UScriptStruct_UserPlatform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserPlatform.InnerSingleton, Z_Construct_UScriptStruct_FUserPlatform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UserPlatform.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlatformIconDisplayRule;
	static UEnum* EPlatformIconDisplayRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlatformIconDisplayRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlatformIconDisplayRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Party_EPlatformIconDisplayRule, (UObject*)Z_Construct_UPackage__Script_Party(), TEXT("EPlatformIconDisplayRule"));
		}
		return Z_Registration_Info_UEnum_EPlatformIconDisplayRule.OuterSingleton;
	}
	template<> PARTY_API UEnum* StaticEnum<EPlatformIconDisplayRule>()
	{
		return EPlatformIconDisplayRule_StaticEnum();
	}
	struct Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics::Enumerators[] = {
		{ "EPlatformIconDisplayRule::Always", (int64)EPlatformIconDisplayRule::Always },
		{ "EPlatformIconDisplayRule::AlwaysIfDifferent", (int64)EPlatformIconDisplayRule::AlwaysIfDifferent },
		{ "EPlatformIconDisplayRule::AlwaysWhenInCrossplayParty", (int64)EPlatformIconDisplayRule::AlwaysWhenInCrossplayParty },
		{ "EPlatformIconDisplayRule::AlwaysIfDifferentWhenInCrossplayParty", (int64)EPlatformIconDisplayRule::AlwaysIfDifferentWhenInCrossplayParty },
		{ "EPlatformIconDisplayRule::Never", (int64)EPlatformIconDisplayRule::Never },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics::Enum_MetaDataParams[] = {
		{ "Always.Name", "EPlatformIconDisplayRule::Always" },
		{ "AlwaysIfDifferent.Comment", "// always show the platform icon\n" },
		{ "AlwaysIfDifferent.Name", "EPlatformIconDisplayRule::AlwaysIfDifferent" },
		{ "AlwaysIfDifferent.ToolTip", "always show the platform icon" },
		{ "AlwaysIfDifferentWhenInCrossplayParty.Comment", "// always show the icon if I'm in a crossplay party\n" },
		{ "AlwaysIfDifferentWhenInCrossplayParty.Name", "EPlatformIconDisplayRule::AlwaysIfDifferentWhenInCrossplayParty" },
		{ "AlwaysIfDifferentWhenInCrossplayParty.ToolTip", "always show the icon if I'm in a crossplay party" },
		{ "AlwaysWhenInCrossplayParty.Comment", "// always show the icon if it's a different platform from my own\n" },
		{ "AlwaysWhenInCrossplayParty.Name", "EPlatformIconDisplayRule::AlwaysWhenInCrossplayParty" },
		{ "AlwaysWhenInCrossplayParty.ToolTip", "always show the icon if it's a different platform from my own" },
		{ "ModuleRelativePath", "Public/SocialTypes.h" },
		{ "Never.Comment", "// only show the icon if it's different from my own and I'm in a crossplay party\n" },
		{ "Never.Name", "EPlatformIconDisplayRule::Never" },
		{ "Never.ToolTip", "only show the icon if it's different from my own and I'm in a crossplay party" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Party,
		nullptr,
		"EPlatformIconDisplayRule",
		"EPlatformIconDisplayRule",
		Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Party_EPlatformIconDisplayRule()
	{
		if (!Z_Registration_Info_UEnum_EPlatformIconDisplayRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlatformIconDisplayRule.InnerSingleton, Z_Construct_UEnum_Party_EPlatformIconDisplayRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlatformIconDisplayRule.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h_Statics::EnumInfo[] = {
		{ ESocialSubsystem_StaticEnum, TEXT("ESocialSubsystem"), &Z_Registration_Info_UEnum_ESocialSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1754481534U) },
		{ ESocialRelationship_StaticEnum, TEXT("ESocialRelationship"), &Z_Registration_Info_UEnum_ESocialRelationship, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2660464083U) },
		{ ECrossplayPreference_StaticEnum, TEXT("ECrossplayPreference"), &Z_Registration_Info_UEnum_ECrossplayPreference, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2805070967U) },
		{ EPlatformIconDisplayRule_StaticEnum, TEXT("EPlatformIconDisplayRule"), &Z_Registration_Info_UEnum_EPlatformIconDisplayRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2183135546U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h_Statics::ScriptStructInfo[] = {
		{ FUserPlatform::StaticStruct, Z_Construct_UScriptStruct_FUserPlatform_Statics::NewStructOps, TEXT("UserPlatform"), &Z_Registration_Info_UScriptStruct_UserPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserPlatform), 324753829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h_1842119822(TEXT("/Script/Party"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Party_Public_SocialTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
