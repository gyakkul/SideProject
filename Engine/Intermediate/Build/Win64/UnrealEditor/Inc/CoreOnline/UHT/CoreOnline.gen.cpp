// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Online/CoreOnline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreOnline() {}
// Cross Module References
	COREONLINE_API UScriptStruct* Z_Construct_UScriptStruct_FJoinabilitySettings();
	COREONLINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdWrapper();
	UPackage* Z_Construct_UPackage__Script_CoreOnline();
// End Cross Module References
	struct Z_Construct_UScriptStruct_FJoinabilitySettings_Statics
	{
		struct FJoinabilitySettings
		{
			FName SessionName;
			bool bPublicSearchable;
			bool bAllowInvites;
			bool bJoinViaPresence;
			bool bJoinViaPresenceFriendsOnly;
			int32 MaxPlayers;
			int32 MaxPartySize;
		};

#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPublicSearchable_MetaData[];
#endif
		static void NewProp_bPublicSearchable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPublicSearchable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInvites_MetaData[];
#endif
		static void NewProp_bAllowInvites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJoinViaPresence_MetaData[];
#endif
		static void NewProp_bJoinViaPresence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJoinViaPresence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bJoinViaPresenceFriendsOnly_MetaData[];
#endif
		static void NewProp_bJoinViaPresenceFriendsOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bJoinViaPresenceFriendsOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPartySize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPartySize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_SessionName_MetaData[] = {
		{ "Comment", "/** Name of session these settings affect */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "Name of session these settings affect" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoinabilitySettings, SessionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_SessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_SessionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable_MetaData[] = {
		{ "Comment", "/** Is this session now publicly searchable */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "Is this session now publicly searchable" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable_SetBit(void* Obj)
	{
		((FJoinabilitySettings*)Obj)->bPublicSearchable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable = { "bPublicSearchable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJoinabilitySettings), &Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites_MetaData[] = {
		{ "Comment", "/** Does this session allow invites */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "Does this session allow invites" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((FJoinabilitySettings*)Obj)->bAllowInvites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJoinabilitySettings), &Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence_MetaData[] = {
		{ "Comment", "/** Does this session allow public join via presence */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "Does this session allow public join via presence" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence_SetBit(void* Obj)
	{
		((FJoinabilitySettings*)Obj)->bJoinViaPresence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence = { "bJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJoinabilitySettings), &Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly_MetaData[] = {
		{ "Comment", "/** Does this session allow friends to join via presence */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "Does this session allow friends to join via presence" },
	};
#endif
	void Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly_SetBit(void* Obj)
	{
		((FJoinabilitySettings*)Obj)->bJoinViaPresenceFriendsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly = { "bJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FJoinabilitySettings), &Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPlayers_MetaData[] = {
		{ "Comment", "/** Current max players in this session */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "Current max players in this session" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoinabilitySettings, MaxPlayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPartySize_MetaData[] = {
		{ "Comment", "/** Current max party size in this session */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "Current max party size in this session" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPartySize = { "MaxPartySize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJoinabilitySettings, MaxPartySize), METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPartySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPartySize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bPublicSearchable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bAllowInvites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_bJoinViaPresenceFriendsOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::NewProp_MaxPartySize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CoreOnline,
		nullptr,
		nullptr,
		"JoinabilitySettings",
		sizeof(FJoinabilitySettings),
		alignof(FJoinabilitySettings),
		Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJoinabilitySettings()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJoinabilitySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	struct Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics
	{
		struct FUniqueNetIdWrapper
		{
		};

#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* UE::Online */" },
		{ "ModuleRelativePath", "Public/Online/CoreOnline.h" },
		{ "ToolTip", "UE::Online" },
	};
#endif
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CoreOnline,
		nullptr,
		nullptr,
		"UniqueNetIdWrapper",
		sizeof(FUniqueNetIdWrapper),
		alignof(FUniqueNetIdWrapper),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdWrapper()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUniqueNetIdWrapper_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
