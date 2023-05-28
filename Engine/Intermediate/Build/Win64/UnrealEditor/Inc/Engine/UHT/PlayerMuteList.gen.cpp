// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/PlayerMuteList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMuteList() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVoiceBlockReasons();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerMuteList();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoiceBlockReasons;
	static UEnum* EVoiceBlockReasons_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoiceBlockReasons.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoiceBlockReasons.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVoiceBlockReasons, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVoiceBlockReasons"));
		}
		return Z_Registration_Info_UEnum_EVoiceBlockReasons.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVoiceBlockReasons>()
	{
		return EVoiceBlockReasons_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics::Enumerators[] = {
		{ "EVoiceBlockReasons::None", (int64)EVoiceBlockReasons::None },
		{ "EVoiceBlockReasons::Muted", (int64)EVoiceBlockReasons::Muted },
		{ "EVoiceBlockReasons::MutedBy", (int64)EVoiceBlockReasons::MutedBy },
		{ "EVoiceBlockReasons::Gameplay", (int64)EVoiceBlockReasons::Gameplay },
		{ "EVoiceBlockReasons::Blocked", (int64)EVoiceBlockReasons::Blocked },
		{ "EVoiceBlockReasons::BlockedBy", (int64)EVoiceBlockReasons::BlockedBy },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "Blocked.Comment", "// The player was muted for gameplay reasons\n" },
		{ "Blocked.Name", "EVoiceBlockReasons::Blocked" },
		{ "Blocked.ToolTip", "The player was muted for gameplay reasons" },
		{ "BlockedBy.Comment", "// The owning player controller has blocked the player\n" },
		{ "BlockedBy.Name", "EVoiceBlockReasons::BlockedBy" },
		{ "BlockedBy.ToolTip", "The owning player controller has blocked the player" },
		{ "Gameplay.Comment", "// The owning player controller was explicitly muted by the player\n" },
		{ "Gameplay.Name", "EVoiceBlockReasons::Gameplay" },
		{ "Gameplay.ToolTip", "The owning player controller was explicitly muted by the player" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerMuteList.h" },
		{ "Muted.Comment", "// Communication with this client has no filter reasons\n" },
		{ "Muted.Name", "EVoiceBlockReasons::Muted" },
		{ "Muted.ToolTip", "Communication with this client has no filter reasons" },
		{ "MutedBy.Comment", "// The owning player controller has explicitly muted the player\n" },
		{ "MutedBy.Name", "EVoiceBlockReasons::MutedBy" },
		{ "MutedBy.ToolTip", "The owning player controller has explicitly muted the player" },
		{ "None.Name", "EVoiceBlockReasons::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVoiceBlockReasons",
		"EVoiceBlockReasons",
		Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVoiceBlockReasons()
	{
		if (!Z_Registration_Info_UEnum_EVoiceBlockReasons.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoiceBlockReasons.InnerSingleton, Z_Construct_UEnum_Engine_EVoiceBlockReasons_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoiceBlockReasons.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerMuteList;
class UScriptStruct* FPlayerMuteList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerMuteList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerMuteList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerMuteList, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PlayerMuteList"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerMuteList.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPlayerMuteList>()
{
	return FPlayerMuteList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerMuteList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasVoiceHandshakeCompleted_MetaData[];
#endif
		static void NewProp_bHasVoiceHandshakeCompleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVoiceHandshakeCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChannelIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VoiceChannelIdx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMuteList_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Container responsible for managing the mute state of a player controller\n * at the gameplay level (VoiceInterface handles actual muting)\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerMuteList.h" },
		{ "ToolTip", "Container responsible for managing the mute state of a player controller\nat the gameplay level (VoiceInterface handles actual muting)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerMuteList>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_bHasVoiceHandshakeCompleted_MetaData[] = {
		{ "Comment", "/** Has server and client handshake completed */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerMuteList.h" },
		{ "ToolTip", "Has server and client handshake completed" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_bHasVoiceHandshakeCompleted_SetBit(void* Obj)
	{
		((FPlayerMuteList*)Obj)->bHasVoiceHandshakeCompleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_bHasVoiceHandshakeCompleted = { "bHasVoiceHandshakeCompleted", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPlayerMuteList), &Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_bHasVoiceHandshakeCompleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_bHasVoiceHandshakeCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_bHasVoiceHandshakeCompleted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_VoiceChannelIdx_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerMuteList.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_VoiceChannelIdx = { "VoiceChannelIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerMuteList, VoiceChannelIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_VoiceChannelIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_VoiceChannelIdx_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerMuteList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_bHasVoiceHandshakeCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewProp_VoiceChannelIdx,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerMuteList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PlayerMuteList",
		sizeof(FPlayerMuteList),
		alignof(FPlayerMuteList),
		Z_Construct_UScriptStruct_FPlayerMuteList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMuteList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerMuteList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerMuteList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerMuteList()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerMuteList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerMuteList.InnerSingleton, Z_Construct_UScriptStruct_FPlayerMuteList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerMuteList.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h_Statics::EnumInfo[] = {
		{ EVoiceBlockReasons_StaticEnum, TEXT("EVoiceBlockReasons"), &Z_Registration_Info_UEnum_EVoiceBlockReasons, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2660660395U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h_Statics::ScriptStructInfo[] = {
		{ FPlayerMuteList::StaticStruct, Z_Construct_UScriptStruct_FPlayerMuteList_Statics::NewStructOps, TEXT("PlayerMuteList"), &Z_Registration_Info_UScriptStruct_PlayerMuteList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerMuteList), 3313161918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h_2615288777(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerMuteList_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
