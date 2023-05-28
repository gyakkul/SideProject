// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerPlaylistPlayer.h"
#include "ISequencerPlaylistsModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerPlaylistPlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylist_NoRegister();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistItem_NoRegister();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistPlayer();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistPlayer_NoRegister();
	SEQUENCERPLAYLISTS_API UEnum* Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection();
	SEQUENCERPLAYLISTS_API UFunction* Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature();
	SEQUENCERPLAYLISTS_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState();
	UPackage* Z_Construct_UPackage__Script_SequencerPlaylists();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature_Statics
	{
		struct _Script_SequencerPlaylists_eventOnPlayerSequencerPlaylistSet_Parms
		{
			USequencerPlaylistPlayer* Player;
			USequencerPlaylist* Playlist;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Playlist;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SequencerPlaylists_eventOnPlayerSequencerPlaylistSet_Parms, Player), Z_Construct_UClass_USequencerPlaylistPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature_Statics::NewProp_Playlist = { "Playlist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SequencerPlaylists_eventOnPlayerSequencerPlaylistSet_Parms, Playlist), Z_Construct_UClass_USequencerPlaylist_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature_Statics::NewProp_Playlist,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SequencerPlaylists, nullptr, "OnPlayerSequencerPlaylistSet__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature_Statics::_Script_SequencerPlaylists_eventOnPlayerSequencerPlaylistSet_Parms), Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerSequencerPlaylistSet_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSequencerPlaylistSet, USequencerPlaylistPlayer* Player, USequencerPlaylist* Playlist)
{
	struct _Script_SequencerPlaylists_eventOnPlayerSequencerPlaylistSet_Parms
	{
		USequencerPlaylistPlayer* Player;
		USequencerPlaylist* Playlist;
	};
	_Script_SequencerPlaylists_eventOnPlayerSequencerPlaylistSet_Parms Parms;
	Parms.Player=Player;
	Parms.Playlist=Playlist;
	OnPlayerSequencerPlaylistSet.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USequencerPlaylistPlayer::execResetAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResetAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerPlaylistPlayer::execStopAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerPlaylistPlayer::execPauseAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PauseAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerPlaylistPlayer::execPlayAll)
	{
		P_GET_ENUM(ESequencerPlaylistPlaybackDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlayAll(ESequencerPlaylistPlaybackDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerPlaylistPlayer::execGetPlaybackState)
	{
		P_GET_OBJECT(USequencerPlaylistItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencerPlaylistPlaybackState*)Z_Param__Result=P_THIS->GetPlaybackState(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerPlaylistPlayer::execIsPlaying)
	{
		P_GET_OBJECT(USequencerPlaylistItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerPlaylistPlayer::execResetItem)
	{
		P_GET_OBJECT(USequencerPlaylistItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResetItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerPlaylistPlayer::execStopItem)
	{
		P_GET_OBJECT(USequencerPlaylistItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerPlaylistPlayer::execPauseItem)
	{
		P_GET_OBJECT(USequencerPlaylistItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PauseItem(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerPlaylistPlayer::execPlayItem)
	{
		P_GET_OBJECT(USequencerPlaylistItem,Z_Param_Item);
		P_GET_ENUM(ESequencerPlaylistPlaybackDirection,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PlayItem(Z_Param_Item,ESequencerPlaylistPlaybackDirection(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerPlaylistPlayer::execGetDefaultPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USequencerPlaylistPlayer**)Z_Param__Result=USequencerPlaylistPlayer::GetDefaultPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerPlaylistPlayer::execGetPlaylist)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USequencerPlaylist**)Z_Param__Result=P_THIS->GetPlaylist();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerPlaylistPlayer::execSetPlaylist)
	{
		P_GET_OBJECT(USequencerPlaylist,Z_Param_InPlaylist);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaylist(Z_Param_InPlaylist);
		P_NATIVE_END;
	}
	void USequencerPlaylistPlayer::StaticRegisterNativesUSequencerPlaylistPlayer()
	{
		UClass* Class = USequencerPlaylistPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultPlayer", &USequencerPlaylistPlayer::execGetDefaultPlayer },
			{ "GetPlaybackState", &USequencerPlaylistPlayer::execGetPlaybackState },
			{ "GetPlaylist", &USequencerPlaylistPlayer::execGetPlaylist },
			{ "IsPlaying", &USequencerPlaylistPlayer::execIsPlaying },
			{ "PauseAll", &USequencerPlaylistPlayer::execPauseAll },
			{ "PauseItem", &USequencerPlaylistPlayer::execPauseItem },
			{ "PlayAll", &USequencerPlaylistPlayer::execPlayAll },
			{ "PlayItem", &USequencerPlaylistPlayer::execPlayItem },
			{ "ResetAll", &USequencerPlaylistPlayer::execResetAll },
			{ "ResetItem", &USequencerPlaylistPlayer::execResetItem },
			{ "SetPlaylist", &USequencerPlaylistPlayer::execSetPlaylist },
			{ "StopAll", &USequencerPlaylistPlayer::execStopAll },
			{ "StopItem", &USequencerPlaylistPlayer::execStopItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USequencerPlaylistPlayer_GetDefaultPlayer_Statics
	{
		struct SequencerPlaylistPlayer_eventGetDefaultPlayer_Parms
		{
			USequencerPlaylistPlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_GetDefaultPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerPlaylistPlayer_eventGetDefaultPlayer_Parms, ReturnValue), Z_Construct_UClass_USequencerPlaylistPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerPlaylistPlayer_GetDefaultPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_GetDefaultPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerPlaylistPlayer_GetDefaultPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SequencerPlaylists" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "There is no longer a \"default\" player. Open a specific Playlist asset to create a player associated with it." },
		{ "DisplayName", "Get Default Sequencer Playlist Player" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerPlaylistPlayer_GetDefaultPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerPlaylistPlayer, nullptr, "GetDefaultPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerPlaylistPlayer_GetDefaultPlayer_Statics::SequencerPlaylistPlayer_eventGetDefaultPlayer_Parms), Z_Construct_UFunction_USequencerPlaylistPlayer_GetDefaultPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_GetDefaultPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerPlaylistPlayer_GetDefaultPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_GetDefaultPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerPlaylistPlayer_GetDefaultPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerPlaylistPlayer_GetDefaultPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState_Statics
	{
		struct SequencerPlaylistPlayer_eventGetPlaybackState_Parms
		{
			USequencerPlaylistItem* Item;
			FSequencerPlaylistPlaybackState ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerPlaylistPlayer_eventGetPlaybackState_Parms, Item), Z_Construct_UClass_USequencerPlaylistItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerPlaylistPlayer_eventGetPlaybackState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencerPlaylistPlaybackState, METADATA_PARAMS(nullptr, 0) }; // 2691307049
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer Playlists" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerPlaylistPlayer, nullptr, "GetPlaybackState", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState_Statics::SequencerPlaylistPlayer_eventGetPlaybackState_Parms), Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaylist_Statics
	{
		struct SequencerPlaylistPlayer_eventGetPlaylist_Parms
		{
			USequencerPlaylist* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaylist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerPlaylistPlayer_eventGetPlaylist_Parms, ReturnValue), Z_Construct_UClass_USequencerPlaylist_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaylist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaylist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaylist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer Playlists" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaylist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerPlaylistPlayer, nullptr, "GetPlaylist", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaylist_Statics::SequencerPlaylistPlayer_eventGetPlaylist_Parms), Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaylist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaylist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaylist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaylist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaylist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaylist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics
	{
		struct SequencerPlaylistPlayer_eventIsPlaying_Parms
		{
			USequencerPlaylistItem* Item;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerPlaylistPlayer_eventIsPlaying_Parms, Item), Z_Construct_UClass_USequencerPlaylistItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerPlaylistPlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerPlaylistPlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer Playlists" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerPlaylistPlayer, nullptr, "IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics::SequencerPlaylistPlayer_eventIsPlaying_Parms), Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll_Statics
	{
		struct SequencerPlaylistPlayer_eventPauseAll_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerPlaylistPlayer_eventPauseAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerPlaylistPlayer_eventPauseAll_Parms), &Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer Playlists" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerPlaylistPlayer, nullptr, "PauseAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll_Statics::SequencerPlaylistPlayer_eventPauseAll_Parms), Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics
	{
		struct SequencerPlaylistPlayer_eventPauseItem_Parms
		{
			USequencerPlaylistItem* Item;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerPlaylistPlayer_eventPauseItem_Parms, Item), Z_Construct_UClass_USequencerPlaylistItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerPlaylistPlayer_eventPauseItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerPlaylistPlayer_eventPauseItem_Parms), &Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer Playlists" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerPlaylistPlayer, nullptr, "PauseItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics::SequencerPlaylistPlayer_eventPauseItem_Parms), Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics
	{
		struct SequencerPlaylistPlayer_eventPlayAll_Parms
		{
			ESequencerPlaylistPlaybackDirection Direction;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerPlaylistPlayer_eventPlayAll_Parms, Direction), Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection, METADATA_PARAMS(nullptr, 0) }; // 3919789568
	void Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerPlaylistPlayer_eventPlayAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerPlaylistPlayer_eventPlayAll_Parms), &Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer Playlists" },
		{ "CPP_Default_Direction", "Forward" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerPlaylistPlayer, nullptr, "PlayAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::SequencerPlaylistPlayer_eventPlayAll_Parms), Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics
	{
		struct SequencerPlaylistPlayer_eventPlayItem_Parms
		{
			USequencerPlaylistItem* Item;
			ESequencerPlaylistPlaybackDirection Direction;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerPlaylistPlayer_eventPlayItem_Parms, Item), Z_Construct_UClass_USequencerPlaylistItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerPlaylistPlayer_eventPlayItem_Parms, Direction), Z_Construct_UEnum_SequencerPlaylists_ESequencerPlaylistPlaybackDirection, METADATA_PARAMS(nullptr, 0) }; // 3919789568
	void Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerPlaylistPlayer_eventPlayItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerPlaylistPlayer_eventPlayItem_Parms), &Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer Playlists" },
		{ "CPP_Default_Direction", "Forward" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerPlaylistPlayer, nullptr, "PlayItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::SequencerPlaylistPlayer_eventPlayItem_Parms), Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll_Statics
	{
		struct SequencerPlaylistPlayer_eventResetAll_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerPlaylistPlayer_eventResetAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerPlaylistPlayer_eventResetAll_Parms), &Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer Playlists" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerPlaylistPlayer, nullptr, "ResetAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll_Statics::SequencerPlaylistPlayer_eventResetAll_Parms), Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics
	{
		struct SequencerPlaylistPlayer_eventResetItem_Parms
		{
			USequencerPlaylistItem* Item;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerPlaylistPlayer_eventResetItem_Parms, Item), Z_Construct_UClass_USequencerPlaylistItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerPlaylistPlayer_eventResetItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerPlaylistPlayer_eventResetItem_Parms), &Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer Playlists" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerPlaylistPlayer, nullptr, "ResetItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics::SequencerPlaylistPlayer_eventResetItem_Parms), Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerPlaylistPlayer_SetPlaylist_Statics
	{
		struct SequencerPlaylistPlayer_eventSetPlaylist_Parms
		{
			USequencerPlaylist* InPlaylist;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlaylist;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_SetPlaylist_Statics::NewProp_InPlaylist = { "InPlaylist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerPlaylistPlayer_eventSetPlaylist_Parms, InPlaylist), Z_Construct_UClass_USequencerPlaylist_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerPlaylistPlayer_SetPlaylist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_SetPlaylist_Statics::NewProp_InPlaylist,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerPlaylistPlayer_SetPlaylist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer Playlists" },
		{ "Comment", "//~ End UObject interface\n" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerPlaylistPlayer_SetPlaylist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerPlaylistPlayer, nullptr, "SetPlaylist", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerPlaylistPlayer_SetPlaylist_Statics::SequencerPlaylistPlayer_eventSetPlaylist_Parms), Z_Construct_UFunction_USequencerPlaylistPlayer_SetPlaylist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_SetPlaylist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerPlaylistPlayer_SetPlaylist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_SetPlaylist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerPlaylistPlayer_SetPlaylist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerPlaylistPlayer_SetPlaylist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll_Statics
	{
		struct SequencerPlaylistPlayer_eventStopAll_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerPlaylistPlayer_eventStopAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerPlaylistPlayer_eventStopAll_Parms), &Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer Playlists" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerPlaylistPlayer, nullptr, "StopAll", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll_Statics::SequencerPlaylistPlayer_eventStopAll_Parms), Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics
	{
		struct SequencerPlaylistPlayer_eventStopItem_Parms
		{
			USequencerPlaylistItem* Item;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerPlaylistPlayer_eventStopItem_Parms, Item), Z_Construct_UClass_USequencerPlaylistItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequencerPlaylistPlayer_eventStopItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequencerPlaylistPlayer_eventStopItem_Parms), &Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer Playlists" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerPlaylistPlayer, nullptr, "StopItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics::SequencerPlaylistPlayer_eventStopItem_Parms), Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerPlaylistPlayer);
	UClass* Z_Construct_UClass_USequencerPlaylistPlayer_NoRegister()
	{
		return USequencerPlaylistPlayer::StaticClass();
	}
	struct Z_Construct_UClass_USequencerPlaylistPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlaylistSet_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlaylistSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Playlist_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Playlist;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerPlaylistPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerPlaylists,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USequencerPlaylistPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USequencerPlaylistPlayer_GetDefaultPlayer, "GetDefaultPlayer" }, // 1775527821
		{ &Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaybackState, "GetPlaybackState" }, // 964435193
		{ &Z_Construct_UFunction_USequencerPlaylistPlayer_GetPlaylist, "GetPlaylist" }, // 3796619829
		{ &Z_Construct_UFunction_USequencerPlaylistPlayer_IsPlaying, "IsPlaying" }, // 69754695
		{ &Z_Construct_UFunction_USequencerPlaylistPlayer_PauseAll, "PauseAll" }, // 99353877
		{ &Z_Construct_UFunction_USequencerPlaylistPlayer_PauseItem, "PauseItem" }, // 3895885388
		{ &Z_Construct_UFunction_USequencerPlaylistPlayer_PlayAll, "PlayAll" }, // 3488893222
		{ &Z_Construct_UFunction_USequencerPlaylistPlayer_PlayItem, "PlayItem" }, // 4082441536
		{ &Z_Construct_UFunction_USequencerPlaylistPlayer_ResetAll, "ResetAll" }, // 1394303155
		{ &Z_Construct_UFunction_USequencerPlaylistPlayer_ResetItem, "ResetItem" }, // 3276464098
		{ &Z_Construct_UFunction_USequencerPlaylistPlayer_SetPlaylist, "SetPlaylist" }, // 1319784827
		{ &Z_Construct_UFunction_USequencerPlaylistPlayer_StopAll, "StopAll" }, // 4234582243
		{ &Z_Construct_UFunction_USequencerPlaylistPlayer_StopItem, "StopItem" }, // 3455209961
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Controls playback of playlist items */" },
		{ "IncludePath", "SequencerPlaylistPlayer.h" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Controls playback of playlist items" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistPlayer_Statics::NewProp_OnPlaylistSet_MetaData[] = {
		{ "Category", "Sequencer Playlists" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USequencerPlaylistPlayer_Statics::NewProp_OnPlaylistSet = { "OnPlaylistSet", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerPlaylistPlayer, OnPlaylistSet), Z_Construct_UDelegateFunction_SequencerPlaylists_OnPlayerSequencerPlaylistSet__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistPlayer_Statics::NewProp_OnPlaylistSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistPlayer_Statics::NewProp_OnPlaylistSet_MetaData)) }; // 1683869813
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistPlayer_Statics::NewProp_Playlist_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequencerPlaylistPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequencerPlaylistPlayer_Statics::NewProp_Playlist = { "Playlist", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerPlaylistPlayer, Playlist), Z_Construct_UClass_USequencerPlaylist_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistPlayer_Statics::NewProp_Playlist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistPlayer_Statics::NewProp_Playlist_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequencerPlaylistPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistPlayer_Statics::NewProp_OnPlaylistSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistPlayer_Statics::NewProp_Playlist,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerPlaylistPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerPlaylistPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerPlaylistPlayer_Statics::ClassParams = {
		&USequencerPlaylistPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USequencerPlaylistPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistPlayer_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerPlaylistPlayer()
	{
		if (!Z_Registration_Info_UClass_USequencerPlaylistPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerPlaylistPlayer.OuterSingleton, Z_Construct_UClass_USequencerPlaylistPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerPlaylistPlayer.OuterSingleton;
	}
	template<> SEQUENCERPLAYLISTS_API UClass* StaticClass<USequencerPlaylistPlayer>()
	{
		return USequencerPlaylistPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerPlaylistPlayer);
	USequencerPlaylistPlayer::~USequencerPlaylistPlayer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerPlaylistPlayer, USequencerPlaylistPlayer::StaticClass, TEXT("USequencerPlaylistPlayer"), &Z_Registration_Info_UClass_USequencerPlaylistPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerPlaylistPlayer), 106978022U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistPlayer_h_368347056(TEXT("/Script/SequencerPlaylists"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
