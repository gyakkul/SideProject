// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerState() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnPlayerStatePawnSet_Parms
		{
			APlayerState* Player;
			APawn* NewPawn;
			APawn* OldPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnPlayerStatePawnSet_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnPlayerStatePawnSet_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics::NewProp_OldPawn = { "OldPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnPlayerStatePawnSet_Parms, OldPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics::NewProp_NewPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics::NewProp_OldPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnPlayerStatePawnSet__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics::_Script_Engine_eventOnPlayerStatePawnSet_Parms), Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerStatePawnSet_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerStatePawnSet, APlayerState* Player, APawn* NewPawn, APawn* OldPawn)
{
	struct _Script_Engine_eventOnPlayerStatePawnSet_Parms
	{
		APlayerState* Player;
		APawn* NewPawn;
		APawn* OldPawn;
	};
	_Script_Engine_eventOnPlayerStatePawnSet_Parms Parms;
	Parms.Player=Player;
	Parms.NewPawn=NewPawn;
	Parms.OldPawn=OldPawn;
	OnPlayerStatePawnSet.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(APlayerState::execBP_GetUniqueId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniqueNetIdRepl*)Z_Param__Result=P_THIS->BP_GetUniqueId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execIsABot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsABot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execIsOnlyASpectator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOnlyASpectator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execIsSpectator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpectator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execGetPingInMilliseconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPingInMilliseconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execGetCompressedPing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetCompressedPing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execGetPlayerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execGetScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execGetPlayerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPlayerName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execGetPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execGetPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execOnRep_UniqueId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_UniqueId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execOnRep_PlayerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayerId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execOnRep_bIsInactive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bIsInactive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execOnRep_PlayerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayerName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execOnRep_Score)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Score();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execOnPawnPrivateDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnPrivateDestroyed(Z_Param_InActor);
		P_NATIVE_END;
	}
	struct PlayerState_eventReceiveCopyProperties_Parms
	{
		APlayerState* NewPlayerState;
	};
	struct PlayerState_eventReceiveOverrideWith_Parms
	{
		APlayerState* OldPlayerState;
	};
	static FName NAME_APlayerState_ReceiveCopyProperties = FName(TEXT("ReceiveCopyProperties"));
	void APlayerState::ReceiveCopyProperties(APlayerState* NewPlayerState)
	{
		PlayerState_eventReceiveCopyProperties_Parms Parms;
		Parms.NewPlayerState=NewPlayerState;
		ProcessEvent(FindFunctionChecked(NAME_APlayerState_ReceiveCopyProperties),&Parms);
	}
	static FName NAME_APlayerState_ReceiveOverrideWith = FName(TEXT("ReceiveOverrideWith"));
	void APlayerState::ReceiveOverrideWith(APlayerState* OldPlayerState)
	{
		PlayerState_eventReceiveOverrideWith_Parms Parms;
		Parms.OldPlayerState=OldPlayerState;
		ProcessEvent(FindFunctionChecked(NAME_APlayerState_ReceiveOverrideWith),&Parms);
	}
	void APlayerState::StaticRegisterNativesAPlayerState()
	{
		UClass* Class = APlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_GetUniqueId", &APlayerState::execBP_GetUniqueId },
			{ "GetCompressedPing", &APlayerState::execGetCompressedPing },
			{ "GetPawn", &APlayerState::execGetPawn },
			{ "GetPingInMilliseconds", &APlayerState::execGetPingInMilliseconds },
			{ "GetPlayerController", &APlayerState::execGetPlayerController },
			{ "GetPlayerId", &APlayerState::execGetPlayerId },
			{ "GetPlayerName", &APlayerState::execGetPlayerName },
			{ "GetScore", &APlayerState::execGetScore },
			{ "IsABot", &APlayerState::execIsABot },
			{ "IsOnlyASpectator", &APlayerState::execIsOnlyASpectator },
			{ "IsSpectator", &APlayerState::execIsSpectator },
			{ "OnPawnPrivateDestroyed", &APlayerState::execOnPawnPrivateDestroyed },
			{ "OnRep_bIsInactive", &APlayerState::execOnRep_bIsInactive },
			{ "OnRep_PlayerId", &APlayerState::execOnRep_PlayerId },
			{ "OnRep_PlayerName", &APlayerState::execOnRep_PlayerName },
			{ "OnRep_Score", &APlayerState::execOnRep_Score },
			{ "OnRep_UniqueId", &APlayerState::execOnRep_UniqueId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerState_BP_GetUniqueId_Statics
	{
		struct PlayerState_eventBP_GetUniqueId_Parms
		{
			FUniqueNetIdRepl ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerState_BP_GetUniqueId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerState_eventBP_GetUniqueId_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_BP_GetUniqueId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_BP_GetUniqueId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_BP_GetUniqueId_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "Comment", "/** Gets the online unique id for a player. If a player is logged in this will be consistent across all clients and servers. */" },
		{ "DisplayName", "Get Unique Net Id" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Gets the online unique id for a player. If a player is logged in this will be consistent across all clients and servers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_BP_GetUniqueId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "BP_GetUniqueId", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerState_BP_GetUniqueId_Statics::PlayerState_eventBP_GetUniqueId_Parms), Z_Construct_UFunction_APlayerState_BP_GetUniqueId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_BP_GetUniqueId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_BP_GetUniqueId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_BP_GetUniqueId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_BP_GetUniqueId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_BP_GetUniqueId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_GetCompressedPing_Statics
	{
		struct PlayerState_eventGetCompressedPing_Parms
		{
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerState_GetCompressedPing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerState_eventGetCompressedPing_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_GetCompressedPing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_GetCompressedPing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_GetCompressedPing_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Gets the literal value of the compressed Ping value (Ping = PingInMS / 4). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Gets the literal value of the compressed Ping value (Ping = PingInMS / 4)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_GetCompressedPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "GetCompressedPing", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerState_GetCompressedPing_Statics::PlayerState_eventGetCompressedPing_Parms), Z_Construct_UFunction_APlayerState_GetCompressedPing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetCompressedPing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_GetCompressedPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetCompressedPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_GetCompressedPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_GetCompressedPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_GetPawn_Statics
	{
		struct PlayerState_eventGetPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerState_GetPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerState_eventGetPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_GetPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_GetPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_GetPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "Comment", "/** Return the pawn controlled by this Player State. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Return the pawn controlled by this Player State." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_GetPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "GetPawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerState_GetPawn_Statics::PlayerState_eventGetPawn_Parms), Z_Construct_UFunction_APlayerState_GetPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_GetPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_GetPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_GetPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_GetPingInMilliseconds_Statics
	{
		struct PlayerState_eventGetPingInMilliseconds_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerState_GetPingInMilliseconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerState_eventGetPingInMilliseconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_GetPingInMilliseconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_GetPingInMilliseconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_GetPingInMilliseconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "Comment", "/**\n\x09 * Returns the ping (in milliseconds)\n\x09 *\n\x09 * Returns ExactPing if available (local players or when running on the server), and\n\x09 * the replicated CompressedPing (converted back to milliseconds) otherwise.\n\x09 * \n\x09 * Note that replication of CompressedPing is controlled by bShouldUpdateReplicatedPing,\n\x09 * and if disabled then this will return 0 or a stale value on clients for player states\n\x09 * that aren't related to local players\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Returns the ping (in milliseconds)\n\nReturns ExactPing if available (local players or when running on the server), and\nthe replicated CompressedPing (converted back to milliseconds) otherwise.\n\nNote that replication of CompressedPing is controlled by bShouldUpdateReplicatedPing,\nand if disabled then this will return 0 or a stale value on clients for player states\nthat aren't related to local players" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_GetPingInMilliseconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "GetPingInMilliseconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerState_GetPingInMilliseconds_Statics::PlayerState_eventGetPingInMilliseconds_Parms), Z_Construct_UFunction_APlayerState_GetPingInMilliseconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetPingInMilliseconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_GetPingInMilliseconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetPingInMilliseconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_GetPingInMilliseconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_GetPingInMilliseconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_GetPlayerController_Statics
	{
		struct PlayerState_eventGetPlayerController_Parms
		{
			APlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerState_GetPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerState_eventGetPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_GetPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_GetPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_GetPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "Comment", "/** Return the player controller that created this player state, or null for remote clients */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Return the player controller that created this player state, or null for remote clients" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_GetPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "GetPlayerController", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerState_GetPlayerController_Statics::PlayerState_eventGetPlayerController_Parms), Z_Construct_UFunction_APlayerState_GetPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_GetPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_GetPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_GetPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_GetPlayerId_Statics
	{
		struct PlayerState_eventGetPlayerId_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerState_GetPlayerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerState_eventGetPlayerId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_GetPlayerId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_GetPlayerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_GetPlayerId_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Gets the literal value of PlayerId. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Gets the literal value of PlayerId." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_GetPlayerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "GetPlayerId", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerState_GetPlayerId_Statics::PlayerState_eventGetPlayerId_Parms), Z_Construct_UFunction_APlayerState_GetPlayerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetPlayerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_GetPlayerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetPlayerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_GetPlayerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_GetPlayerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_GetPlayerName_Statics
	{
		struct PlayerState_eventGetPlayerName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerState_eventGetPlayerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "Comment", "/** returns current player name */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "returns current player name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "GetPlayerName", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::PlayerState_eventGetPlayerName_Parms), Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_GetPlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_GetScore_Statics
	{
		struct PlayerState_eventGetScore_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerState_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerState_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_GetScore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_GetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_GetScore_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Gets the literal value of Score. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Gets the literal value of Score." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "GetScore", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerState_GetScore_Statics::PlayerState_eventGetScore_Parms), Z_Construct_UFunction_APlayerState_GetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_GetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_GetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_GetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_IsABot_Statics
	{
		struct PlayerState_eventIsABot_Parms
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
	void Z_Construct_UFunction_APlayerState_IsABot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerState_eventIsABot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerState_IsABot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerState_eventIsABot_Parms), &Z_Construct_UFunction_APlayerState_IsABot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_IsABot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_IsABot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_IsABot_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Gets the literal value of bIsABot. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Gets the literal value of bIsABot." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_IsABot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "IsABot", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerState_IsABot_Statics::PlayerState_eventIsABot_Parms), Z_Construct_UFunction_APlayerState_IsABot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_IsABot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_IsABot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_IsABot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_IsABot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_IsABot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_IsOnlyASpectator_Statics
	{
		struct PlayerState_eventIsOnlyASpectator_Parms
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
	void Z_Construct_UFunction_APlayerState_IsOnlyASpectator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerState_eventIsOnlyASpectator_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerState_IsOnlyASpectator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerState_eventIsOnlyASpectator_Parms), &Z_Construct_UFunction_APlayerState_IsOnlyASpectator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_IsOnlyASpectator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_IsOnlyASpectator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_IsOnlyASpectator_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "Comment", "/** Gets the literal value of bOnlySpectator. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Gets the literal value of bOnlySpectator." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_IsOnlyASpectator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "IsOnlyASpectator", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerState_IsOnlyASpectator_Statics::PlayerState_eventIsOnlyASpectator_Parms), Z_Construct_UFunction_APlayerState_IsOnlyASpectator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_IsOnlyASpectator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_IsOnlyASpectator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_IsOnlyASpectator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_IsOnlyASpectator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_IsOnlyASpectator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_IsSpectator_Statics
	{
		struct PlayerState_eventIsSpectator_Parms
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
	void Z_Construct_UFunction_APlayerState_IsSpectator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerState_eventIsSpectator_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerState_IsSpectator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlayerState_eventIsSpectator_Parms), &Z_Construct_UFunction_APlayerState_IsSpectator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_IsSpectator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_IsSpectator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_IsSpectator_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Gets the literal value of bIsSpectator. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Gets the literal value of bIsSpectator." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_IsSpectator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "IsSpectator", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerState_IsSpectator_Statics::PlayerState_eventIsSpectator_Parms), Z_Construct_UFunction_APlayerState_IsSpectator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_IsSpectator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_IsSpectator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_IsSpectator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_IsSpectator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_IsSpectator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnPawnPrivateDestroyed_Statics
	{
		struct PlayerState_eventOnPawnPrivateDestroyed_Parms
		{
			AActor* InActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerState_OnPawnPrivateDestroyed_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerState_eventOnPawnPrivateDestroyed_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_OnPawnPrivateDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_OnPawnPrivateDestroyed_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnPawnPrivateDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnPawnPrivateDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "OnPawnPrivateDestroyed", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlayerState_OnPawnPrivateDestroyed_Statics::PlayerState_eventOnPawnPrivateDestroyed_Parms), Z_Construct_UFunction_APlayerState_OnPawnPrivateDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnPawnPrivateDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnPawnPrivateDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnPawnPrivateDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnPawnPrivateDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_OnPawnPrivateDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "OnRep_bIsInactive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_bIsInactive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "OnRep_PlayerId", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_PlayerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "OnRep_PlayerName", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_PlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnRep_Score_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnRep_Score_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Replication Notification Callbacks */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Replication Notification Callbacks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnRep_Score_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "OnRep_Score", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnRep_Score_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnRep_Score_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_Score()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_OnRep_Score_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "OnRep_UniqueId", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_UniqueId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::NewProp_NewPlayerState = { "NewPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerState_eventReceiveCopyProperties_Parms, NewPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::NewProp_NewPlayerState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "Comment", "/*\n\x09* Can be implemented in Blueprint Child to move more properties from old to new PlayerState when traveling to a new level\n\x09*\n\x09* @param NewPlayerState\x09\x09New PlayerState, which we fill with the current properties\n\x09*/" },
		{ "DisplayName", "CopyProperties" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "* Can be implemented in Blueprint Child to move more properties from old to new PlayerState when traveling to a new level\n*\n* @param NewPlayerState         New PlayerState, which we fill with the current properties" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "ReceiveCopyProperties", nullptr, nullptr, sizeof(PlayerState_eventReceiveCopyProperties_Parms), Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_ReceiveCopyProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPlayerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::NewProp_OldPlayerState = { "OldPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerState_eventReceiveOverrideWith_Parms, OldPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::NewProp_OldPlayerState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "Comment", "/*\n\x09* Can be implemented in Blueprint Child to move more properties from old to new PlayerState when reconnecting\n\x09*\n\x09* @param OldPlayerState\x09\x09Old PlayerState, which we use to fill the new one with\n\x09*/" },
		{ "DisplayName", "OverrideWith" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "* Can be implemented in Blueprint Child to move more properties from old to new PlayerState when reconnecting\n*\n* @param OldPlayerState         Old PlayerState, which we use to fill the new one with" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "ReceiveOverrideWith", nullptr, nullptr, sizeof(PlayerState_eventReceiveOverrideWith_Parms), Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_ReceiveOverrideWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerState);
	UClass* Z_Construct_UClass_APlayerState_NoRegister()
	{
		return APlayerState::StaticClass();
	}
	struct Z_Construct_UClass_APlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressedPing_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressedPing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUpdateReplicatedPing_MetaData[];
#endif
		static void NewProp_bShouldUpdateReplicatedPing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUpdateReplicatedPing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSpectator_MetaData[];
#endif
		static void NewProp_bIsSpectator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpectator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySpectator_MetaData[];
#endif
		static void NewProp_bOnlySpectator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlySpectator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsABot_MetaData[];
#endif
		static void NewProp_bIsABot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsABot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInactive_MetaData[];
#endif
		static void NewProp_bIsInactive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInactive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFromPreviousLevel_MetaData[];
#endif
		static void NewProp_bFromPreviousLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromPreviousLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineMessageClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EngineMessageClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedNetworkAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavedNetworkAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPawnSet_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPawnSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnPrivate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PawnPrivate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNamePrivate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerNamePrivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerState_BP_GetUniqueId, "BP_GetUniqueId" }, // 1740765694
		{ &Z_Construct_UFunction_APlayerState_GetCompressedPing, "GetCompressedPing" }, // 1936494731
		{ &Z_Construct_UFunction_APlayerState_GetPawn, "GetPawn" }, // 3013637846
		{ &Z_Construct_UFunction_APlayerState_GetPingInMilliseconds, "GetPingInMilliseconds" }, // 768236235
		{ &Z_Construct_UFunction_APlayerState_GetPlayerController, "GetPlayerController" }, // 172708576
		{ &Z_Construct_UFunction_APlayerState_GetPlayerId, "GetPlayerId" }, // 2823810193
		{ &Z_Construct_UFunction_APlayerState_GetPlayerName, "GetPlayerName" }, // 1914391160
		{ &Z_Construct_UFunction_APlayerState_GetScore, "GetScore" }, // 687817543
		{ &Z_Construct_UFunction_APlayerState_IsABot, "IsABot" }, // 3279134170
		{ &Z_Construct_UFunction_APlayerState_IsOnlyASpectator, "IsOnlyASpectator" }, // 1780608338
		{ &Z_Construct_UFunction_APlayerState_IsSpectator, "IsSpectator" }, // 985179845
		{ &Z_Construct_UFunction_APlayerState_OnPawnPrivateDestroyed, "OnPawnPrivateDestroyed" }, // 310204317
		{ &Z_Construct_UFunction_APlayerState_OnRep_bIsInactive, "OnRep_bIsInactive" }, // 3525990738
		{ &Z_Construct_UFunction_APlayerState_OnRep_PlayerId, "OnRep_PlayerId" }, // 327466385
		{ &Z_Construct_UFunction_APlayerState_OnRep_PlayerName, "OnRep_PlayerName" }, // 1879412916
		{ &Z_Construct_UFunction_APlayerState_OnRep_Score, "OnRep_Score" }, // 3007146253
		{ &Z_Construct_UFunction_APlayerState_OnRep_UniqueId, "OnRep_UniqueId" }, // 2995429709
		{ &Z_Construct_UFunction_APlayerState_ReceiveCopyProperties, "ReceiveCopyProperties" }, // 892314291
		{ &Z_Construct_UFunction_APlayerState_ReceiveOverrideWith, "ReceiveOverrideWith" }, // 2369893276
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A PlayerState is created for every player on a server (or in a standalone game).\n * PlayerStates are replicated to all clients, and contain network game relevant information about the player, such as playername, score, etc.\n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameFramework/PlayerState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A PlayerState is created for every player on a server (or in a standalone game).\nPlayerStates are replicated to all clients, and contain network game relevant information about the player, such as playername, score, etc." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_Score_MetaData[] = {
		{ "BlueprintGetter", "GetScore" },
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_Score = { "Score", "OnRep_Score", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerState, Score), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerId_MetaData[] = {
		{ "BlueprintGetter", "GetPlayerId" },
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerId = { "PlayerId", "OnRep_PlayerId", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerState, PlayerId), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_CompressedPing_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "BlueprintGetter", "GetCompressedPing" },
		{ "Category", "PlayerState" },
		{ "Comment", "/** Replicated compressed ping for this player (holds ping in msec divided by 4) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Replicated compressed ping for this player (holds ping in msec divided by 4)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_CompressedPing = { "CompressedPing", nullptr, (EPropertyFlags)0x0040000000000034, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerState, CompressedPing), nullptr, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_CompressedPing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_CompressedPing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing_MetaData[] = {
		{ "Category", "PlayerState" },
		{ "Comment", "/**\n\x09 * Whether or not this player's replicated CompressedPing value is updated automatically.\n\x09 * Since player states are always relevant by default, in cases where there are many players replicating,\n\x09 * replicating the ping value can cause additional unnecessary overhead on servers if the value isn't\n\x09 * needed on clients.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Whether or not this player's replicated CompressedPing value is updated automatically.\nSince player states are always relevant by default, in cases where there are many players replicating,\nreplicating the ping value can cause additional unnecessary overhead on servers if the value isn't\nneeded on clients." },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bShouldUpdateReplicatedPing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing = { "bShouldUpdateReplicatedPing", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator_MetaData[] = {
		{ "BlueprintGetter", "IsSpectator" },
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bIsSpectator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator = { "bIsSpectator", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bOnlySpectator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator = { "bOnlySpectator", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot_MetaData[] = {
		{ "BlueprintGetter", "IsABot" },
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bIsABot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot = { "bIsABot", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bIsInactive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive = { "bIsInactive", "OnRep_bIsInactive", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bFromPreviousLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel = { "bFromPreviousLevel", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerState, StartTime), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_EngineMessageClass_MetaData[] = {
		{ "Comment", "/** This is used for sending game agnostic messages that can be localized */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "This is used for sending game agnostic messages that can be localized" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_EngineMessageClass = { "EngineMessageClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerState, EngineMessageClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULocalMessage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_EngineMessageClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_EngineMessageClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_SavedNetworkAddress_MetaData[] = {
		{ "Comment", "/** Used to match up InactivePlayerState with rejoining playercontroller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Used to match up InactivePlayerState with rejoining playercontroller." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_SavedNetworkAddress = { "SavedNetworkAddress", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerState, SavedNetworkAddress), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_SavedNetworkAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_SavedNetworkAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_UniqueId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_UniqueId = { "UniqueId", "OnRep_UniqueId", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerState, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_UniqueId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_OnPawnSet_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Broadcast whenever this player's possessed pawn is set */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Broadcast whenever this player's possessed pawn is set" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_OnPawnSet = { "OnPawnSet", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerState, OnPawnSet), Z_Construct_UDelegateFunction_Engine_OnPlayerStatePawnSet__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_OnPawnSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_OnPawnSet_MetaData)) }; // 1101514778
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_PawnPrivate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerState" },
		{ "Comment", "/** The pawn that is controlled by by this player state. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "The pawn that is controlled by by this player state." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_PawnPrivate = { "PawnPrivate", nullptr, (EPropertyFlags)0x0044000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerState, PawnPrivate), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_PawnPrivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_PawnPrivate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerNamePrivate_MetaData[] = {
		{ "Comment", "/** Player name, or blank if none. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Player name, or blank if none." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerNamePrivate = { "PlayerNamePrivate", "OnRep_PlayerName", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerState, PlayerNamePrivate), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerNamePrivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerNamePrivate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_Score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_CompressedPing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_EngineMessageClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_SavedNetworkAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_OnPawnSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_PawnPrivate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerNamePrivate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerState_Statics::ClassParams = {
		&APlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerState()
	{
		if (!Z_Registration_Info_UClass_APlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerState.OuterSingleton, Z_Construct_UClass_APlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerState.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<APlayerState>()
	{
		return APlayerState::StaticClass();
	}

	void APlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Score(TEXT("Score"));
		static const FName Name_PlayerId(TEXT("PlayerId"));
		static const FName Name_CompressedPing(TEXT("CompressedPing"));
		static const FName Name_bIsSpectator(TEXT("bIsSpectator"));
		static const FName Name_bOnlySpectator(TEXT("bOnlySpectator"));
		static const FName Name_bIsABot(TEXT("bIsABot"));
		static const FName Name_bIsInactive(TEXT("bIsInactive"));
		static const FName Name_bFromPreviousLevel(TEXT("bFromPreviousLevel"));
		static const FName Name_StartTime(TEXT("StartTime"));
		static const FName Name_UniqueId(TEXT("UniqueId"));
		static const FName Name_PlayerNamePrivate(TEXT("PlayerNamePrivate"));

		const bool bIsValid = true
			&& Name_Score == ClassReps[(int32)ENetFields_Private::Score].Property->GetFName()
			&& Name_PlayerId == ClassReps[(int32)ENetFields_Private::PlayerId].Property->GetFName()
			&& Name_CompressedPing == ClassReps[(int32)ENetFields_Private::CompressedPing].Property->GetFName()
			&& Name_bIsSpectator == ClassReps[(int32)ENetFields_Private::bIsSpectator].Property->GetFName()
			&& Name_bOnlySpectator == ClassReps[(int32)ENetFields_Private::bOnlySpectator].Property->GetFName()
			&& Name_bIsABot == ClassReps[(int32)ENetFields_Private::bIsABot].Property->GetFName()
			&& Name_bIsInactive == ClassReps[(int32)ENetFields_Private::bIsInactive].Property->GetFName()
			&& Name_bFromPreviousLevel == ClassReps[(int32)ENetFields_Private::bFromPreviousLevel].Property->GetFName()
			&& Name_StartTime == ClassReps[(int32)ENetFields_Private::StartTime].Property->GetFName()
			&& Name_UniqueId == ClassReps[(int32)ENetFields_Private::UniqueId].Property->GetFName()
			&& Name_PlayerNamePrivate == ClassReps[(int32)ENetFields_Private::PlayerNamePrivate].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerState);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerState, APlayerState::StaticClass, TEXT("APlayerState"), &Z_Registration_Info_UClass_APlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerState), 4023986475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_1289436811(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
