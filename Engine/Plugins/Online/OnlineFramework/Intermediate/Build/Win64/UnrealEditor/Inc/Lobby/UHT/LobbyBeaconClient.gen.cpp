// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LobbyBeaconClient.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Online/CoreOnline.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyBeaconClient() {}
// Cross Module References
	COREONLINE_API UScriptStruct* Z_Construct_UScriptStruct_FJoinabilitySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconClient();
	LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconClient_NoRegister();
	LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconPlayerState_NoRegister();
	LOBBY_API UClass* Z_Construct_UClass_ALobbyBeaconState_NoRegister();
	LOBBY_API UEnum* Z_Construct_UEnum_Lobby_ELobbyBeaconJoinState();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
	UPackage* Z_Construct_UPackage__Script_Lobby();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELobbyBeaconJoinState;
	static UEnum* ELobbyBeaconJoinState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELobbyBeaconJoinState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELobbyBeaconJoinState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Lobby_ELobbyBeaconJoinState, (UObject*)Z_Construct_UPackage__Script_Lobby(), TEXT("ELobbyBeaconJoinState"));
		}
		return Z_Registration_Info_UEnum_ELobbyBeaconJoinState.OuterSingleton;
	}
	template<> LOBBY_API UEnum* StaticEnum<ELobbyBeaconJoinState>()
	{
		return ELobbyBeaconJoinState_StaticEnum();
	}
	struct Z_Construct_UEnum_Lobby_ELobbyBeaconJoinState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Lobby_ELobbyBeaconJoinState_Statics::Enumerators[] = {
		{ "ELobbyBeaconJoinState::None", (int64)ELobbyBeaconJoinState::None },
		{ "ELobbyBeaconJoinState::SentJoinRequest", (int64)ELobbyBeaconJoinState::SentJoinRequest },
		{ "ELobbyBeaconJoinState::JoinRequestAcknowledged", (int64)ELobbyBeaconJoinState::JoinRequestAcknowledged },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Lobby_ELobbyBeaconJoinState_Statics::Enum_MetaDataParams[] = {
		{ "JoinRequestAcknowledged.Comment", "/** Join request has been acknowledged */" },
		{ "JoinRequestAcknowledged.Name", "ELobbyBeaconJoinState::JoinRequestAcknowledged" },
		{ "JoinRequestAcknowledged.ToolTip", "Join request has been acknowledged" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "None.Comment", "/** Unknown, beacon may be connected but no intent to actually join the server */" },
		{ "None.Name", "ELobbyBeaconJoinState::None" },
		{ "None.ToolTip", "Unknown, beacon may be connected but no intent to actually join the server" },
		{ "SentJoinRequest.Comment", "/** Join request has been sent, waiting for a response */" },
		{ "SentJoinRequest.Name", "ELobbyBeaconJoinState::SentJoinRequest" },
		{ "SentJoinRequest.ToolTip", "Join request has been sent, waiting for a response" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Lobby_ELobbyBeaconJoinState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Lobby,
		nullptr,
		"ELobbyBeaconJoinState",
		"ELobbyBeaconJoinState",
		Z_Construct_UEnum_Lobby_ELobbyBeaconJoinState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Lobby_ELobbyBeaconJoinState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Lobby_ELobbyBeaconJoinState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Lobby_ELobbyBeaconJoinState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Lobby_ELobbyBeaconJoinState()
	{
		if (!Z_Registration_Info_UEnum_ELobbyBeaconJoinState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELobbyBeaconJoinState.InnerSingleton, Z_Construct_UEnum_Lobby_ELobbyBeaconJoinState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELobbyBeaconJoinState.InnerSingleton;
	}
	DEFINE_FUNCTION(ALobbyBeaconClient::execClientPlayerLeft)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InUniqueId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPlayerLeft_Implementation(Z_Param_InUniqueId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyBeaconClient::execClientPlayerJoined)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_NewPlayerName);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InUniqueId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPlayerJoined_Implementation(Z_Param_NewPlayerName,Z_Param_InUniqueId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyBeaconClient::execClientWasKicked)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_KickReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientWasKicked_Implementation(Z_Param_KickReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyBeaconClient::execClientLoginComplete)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InUniqueId);
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientLoginComplete_Implementation(Z_Param_InUniqueId,Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyBeaconClient::execServerSetPartyOwner)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InUniqueId);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InPartyOwnerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetPartyOwner_Validate(Z_Param_InUniqueId,Z_Param_InPartyOwnerId))
		{
			RPC_ValidateFailed(TEXT("ServerSetPartyOwner_Validate"));
			return;
		}
		P_THIS->ServerSetPartyOwner_Implementation(Z_Param_InUniqueId,Z_Param_InPartyOwnerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyBeaconClient::execServerKickPlayer)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerToKick);
		P_GET_PROPERTY(FTextProperty,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerKickPlayer_Validate(Z_Param_PlayerToKick,Z_Param_Reason))
		{
			RPC_ValidateFailed(TEXT("ServerKickPlayer_Validate"));
			return;
		}
		P_THIS->ServerKickPlayer_Implementation(Z_Param_PlayerToKick,Z_Param_Reason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyBeaconClient::execClientAckJoiningServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientAckJoiningServer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyBeaconClient::execServerNotifyJoiningServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerNotifyJoiningServer_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerNotifyJoiningServer_Validate"));
			return;
		}
		P_THIS->ServerNotifyJoiningServer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyBeaconClient::execServerDisconnectFromLobby)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerDisconnectFromLobby_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerDisconnectFromLobby_Validate"));
			return;
		}
		P_THIS->ServerDisconnectFromLobby_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyBeaconClient::execServerLoginPlayer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InSessionId);
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_InUniqueId);
		P_GET_PROPERTY(FStrProperty,Z_Param_UrlString);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerLoginPlayer_Validate(Z_Param_InSessionId,Z_Param_InUniqueId,Z_Param_UrlString))
		{
			RPC_ValidateFailed(TEXT("ServerLoginPlayer_Validate"));
			return;
		}
		P_THIS->ServerLoginPlayer_Implementation(Z_Param_InSessionId,Z_Param_InUniqueId,Z_Param_UrlString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyBeaconClient::execServerCheat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerCheat_Validate(Z_Param_Msg))
		{
			RPC_ValidateFailed(TEXT("ServerCheat_Validate"));
			return;
		}
		P_THIS->ServerCheat_Implementation(Z_Param_Msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyBeaconClient::execClientSetInviteFlags)
	{
		P_GET_STRUCT(FJoinabilitySettings,Z_Param_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetInviteFlags_Implementation(Z_Param_Settings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALobbyBeaconClient::execClientJoinGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientJoinGame_Implementation();
		P_NATIVE_END;
	}
	struct LobbyBeaconClient_eventClientLoginComplete_Parms
	{
		FUniqueNetIdRepl InUniqueId;
		bool bWasSuccessful;
	};
	struct LobbyBeaconClient_eventClientPlayerJoined_Parms
	{
		FText NewPlayerName;
		FUniqueNetIdRepl InUniqueId;
	};
	struct LobbyBeaconClient_eventClientPlayerLeft_Parms
	{
		FUniqueNetIdRepl InUniqueId;
	};
	struct LobbyBeaconClient_eventClientSetInviteFlags_Parms
	{
		FJoinabilitySettings Settings;
	};
	struct LobbyBeaconClient_eventClientWasKicked_Parms
	{
		FText KickReason;
	};
	struct LobbyBeaconClient_eventServerCheat_Parms
	{
		FString Msg;
	};
	struct LobbyBeaconClient_eventServerKickPlayer_Parms
	{
		FUniqueNetIdRepl PlayerToKick;
		FText Reason;
	};
	struct LobbyBeaconClient_eventServerLoginPlayer_Parms
	{
		FString InSessionId;
		FUniqueNetIdRepl InUniqueId;
		FString UrlString;
	};
	struct LobbyBeaconClient_eventServerSetPartyOwner_Parms
	{
		FUniqueNetIdRepl InUniqueId;
		FUniqueNetIdRepl InPartyOwnerId;
	};
	static FName NAME_ALobbyBeaconClient_ClientAckJoiningServer = FName(TEXT("ClientAckJoiningServer"));
	void ALobbyBeaconClient::ClientAckJoiningServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyBeaconClient_ClientAckJoiningServer),NULL);
	}
	static FName NAME_ALobbyBeaconClient_ClientJoinGame = FName(TEXT("ClientJoinGame"));
	void ALobbyBeaconClient::ClientJoinGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyBeaconClient_ClientJoinGame),NULL);
	}
	static FName NAME_ALobbyBeaconClient_ClientLoginComplete = FName(TEXT("ClientLoginComplete"));
	void ALobbyBeaconClient::ClientLoginComplete(FUniqueNetIdRepl const& InUniqueId, bool bWasSuccessful)
	{
		LobbyBeaconClient_eventClientLoginComplete_Parms Parms;
		Parms.InUniqueId=InUniqueId;
		Parms.bWasSuccessful=bWasSuccessful ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ALobbyBeaconClient_ClientLoginComplete),&Parms);
	}
	static FName NAME_ALobbyBeaconClient_ClientPlayerJoined = FName(TEXT("ClientPlayerJoined"));
	void ALobbyBeaconClient::ClientPlayerJoined(FText const& NewPlayerName, FUniqueNetIdRepl const& InUniqueId)
	{
		LobbyBeaconClient_eventClientPlayerJoined_Parms Parms;
		Parms.NewPlayerName=NewPlayerName;
		Parms.InUniqueId=InUniqueId;
		ProcessEvent(FindFunctionChecked(NAME_ALobbyBeaconClient_ClientPlayerJoined),&Parms);
	}
	static FName NAME_ALobbyBeaconClient_ClientPlayerLeft = FName(TEXT("ClientPlayerLeft"));
	void ALobbyBeaconClient::ClientPlayerLeft(FUniqueNetIdRepl const& InUniqueId)
	{
		LobbyBeaconClient_eventClientPlayerLeft_Parms Parms;
		Parms.InUniqueId=InUniqueId;
		ProcessEvent(FindFunctionChecked(NAME_ALobbyBeaconClient_ClientPlayerLeft),&Parms);
	}
	static FName NAME_ALobbyBeaconClient_ClientSetInviteFlags = FName(TEXT("ClientSetInviteFlags"));
	void ALobbyBeaconClient::ClientSetInviteFlags(FJoinabilitySettings const& Settings)
	{
		LobbyBeaconClient_eventClientSetInviteFlags_Parms Parms;
		Parms.Settings=Settings;
		ProcessEvent(FindFunctionChecked(NAME_ALobbyBeaconClient_ClientSetInviteFlags),&Parms);
	}
	static FName NAME_ALobbyBeaconClient_ClientWasKicked = FName(TEXT("ClientWasKicked"));
	void ALobbyBeaconClient::ClientWasKicked(FText const& KickReason)
	{
		LobbyBeaconClient_eventClientWasKicked_Parms Parms;
		Parms.KickReason=KickReason;
		ProcessEvent(FindFunctionChecked(NAME_ALobbyBeaconClient_ClientWasKicked),&Parms);
	}
	static FName NAME_ALobbyBeaconClient_ServerCheat = FName(TEXT("ServerCheat"));
	void ALobbyBeaconClient::ServerCheat(const FString& Msg)
	{
		LobbyBeaconClient_eventServerCheat_Parms Parms;
		Parms.Msg=Msg;
		ProcessEvent(FindFunctionChecked(NAME_ALobbyBeaconClient_ServerCheat),&Parms);
	}
	static FName NAME_ALobbyBeaconClient_ServerDisconnectFromLobby = FName(TEXT("ServerDisconnectFromLobby"));
	void ALobbyBeaconClient::ServerDisconnectFromLobby()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyBeaconClient_ServerDisconnectFromLobby),NULL);
	}
	static FName NAME_ALobbyBeaconClient_ServerKickPlayer = FName(TEXT("ServerKickPlayer"));
	void ALobbyBeaconClient::ServerKickPlayer(FUniqueNetIdRepl const& PlayerToKick, FText const& Reason)
	{
		LobbyBeaconClient_eventServerKickPlayer_Parms Parms;
		Parms.PlayerToKick=PlayerToKick;
		Parms.Reason=Reason;
		ProcessEvent(FindFunctionChecked(NAME_ALobbyBeaconClient_ServerKickPlayer),&Parms);
	}
	static FName NAME_ALobbyBeaconClient_ServerLoginPlayer = FName(TEXT("ServerLoginPlayer"));
	void ALobbyBeaconClient::ServerLoginPlayer(const FString& InSessionId, FUniqueNetIdRepl const& InUniqueId, const FString& UrlString)
	{
		LobbyBeaconClient_eventServerLoginPlayer_Parms Parms;
		Parms.InSessionId=InSessionId;
		Parms.InUniqueId=InUniqueId;
		Parms.UrlString=UrlString;
		ProcessEvent(FindFunctionChecked(NAME_ALobbyBeaconClient_ServerLoginPlayer),&Parms);
	}
	static FName NAME_ALobbyBeaconClient_ServerNotifyJoiningServer = FName(TEXT("ServerNotifyJoiningServer"));
	void ALobbyBeaconClient::ServerNotifyJoiningServer()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALobbyBeaconClient_ServerNotifyJoiningServer),NULL);
	}
	static FName NAME_ALobbyBeaconClient_ServerSetPartyOwner = FName(TEXT("ServerSetPartyOwner"));
	void ALobbyBeaconClient::ServerSetPartyOwner(FUniqueNetIdRepl const& InUniqueId, FUniqueNetIdRepl const& InPartyOwnerId)
	{
		LobbyBeaconClient_eventServerSetPartyOwner_Parms Parms;
		Parms.InUniqueId=InUniqueId;
		Parms.InPartyOwnerId=InPartyOwnerId;
		ProcessEvent(FindFunctionChecked(NAME_ALobbyBeaconClient_ServerSetPartyOwner),&Parms);
	}
	void ALobbyBeaconClient::StaticRegisterNativesALobbyBeaconClient()
	{
		UClass* Class = ALobbyBeaconClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientAckJoiningServer", &ALobbyBeaconClient::execClientAckJoiningServer },
			{ "ClientJoinGame", &ALobbyBeaconClient::execClientJoinGame },
			{ "ClientLoginComplete", &ALobbyBeaconClient::execClientLoginComplete },
			{ "ClientPlayerJoined", &ALobbyBeaconClient::execClientPlayerJoined },
			{ "ClientPlayerLeft", &ALobbyBeaconClient::execClientPlayerLeft },
			{ "ClientSetInviteFlags", &ALobbyBeaconClient::execClientSetInviteFlags },
			{ "ClientWasKicked", &ALobbyBeaconClient::execClientWasKicked },
			{ "ServerCheat", &ALobbyBeaconClient::execServerCheat },
			{ "ServerDisconnectFromLobby", &ALobbyBeaconClient::execServerDisconnectFromLobby },
			{ "ServerKickPlayer", &ALobbyBeaconClient::execServerKickPlayer },
			{ "ServerLoginPlayer", &ALobbyBeaconClient::execServerLoginPlayer },
			{ "ServerNotifyJoiningServer", &ALobbyBeaconClient::execServerNotifyJoiningServer },
			{ "ServerSetPartyOwner", &ALobbyBeaconClient::execServerSetPartyOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALobbyBeaconClient_ClientAckJoiningServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ClientAckJoiningServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconClient_ClientAckJoiningServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconClient, nullptr, "ClientAckJoiningServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ClientAckJoiningServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientAckJoiningServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconClient_ClientAckJoiningServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconClient_ClientAckJoiningServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyBeaconClient_ClientJoinGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ClientJoinGame_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the client to join the game\n\x09 */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "Tell the client to join the game" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconClient_ClientJoinGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconClient, nullptr, "ClientJoinGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ClientJoinGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientJoinGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconClient_ClientJoinGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconClient_ClientJoinGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InUniqueId;
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::NewProp_InUniqueId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::NewProp_InUniqueId = { "InUniqueId", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LobbyBeaconClient_eventClientLoginComplete_Parms, InUniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::NewProp_InUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::NewProp_InUniqueId_MetaData)) }; // 2142661840
	void Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((LobbyBeaconClient_eventClientLoginComplete_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LobbyBeaconClient_eventClientLoginComplete_Parms), &Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::NewProp_InUniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Client notification result for a single login attempt\n\x09 *\n\x09 * @param InUniqueId id of player involved\n\x09 * @param bWasSuccessful result of the login attempt\n\x09 */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "Client notification result for a single login attempt\n\n@param InUniqueId id of player involved\n@param bWasSuccessful result of the login attempt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconClient, nullptr, "ClientLoginComplete", nullptr, nullptr, sizeof(LobbyBeaconClient_eventClientLoginComplete_Parms), Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewPlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InUniqueId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::NewProp_NewPlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::NewProp_NewPlayerName = { "NewPlayerName", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LobbyBeaconClient_eventClientPlayerJoined_Parms, NewPlayerName), METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::NewProp_NewPlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::NewProp_NewPlayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::NewProp_InUniqueId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::NewProp_InUniqueId = { "InUniqueId", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LobbyBeaconClient_eventClientPlayerJoined_Parms, InUniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::NewProp_InUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::NewProp_InUniqueId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::NewProp_NewPlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::NewProp_InUniqueId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Client notification that another player has joined the lobby\n\x09 *\n\x09 * @param NewPlayerName display name of new player\n\x09 * @param InUniqueId unique id of new player\n\x09 */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "Client notification that another player has joined the lobby\n\n@param NewPlayerName display name of new player\n@param InUniqueId unique id of new player" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconClient, nullptr, "ClientPlayerJoined", nullptr, nullptr, sizeof(LobbyBeaconClient_eventClientPlayerJoined_Parms), Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InUniqueId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft_Statics::NewProp_InUniqueId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft_Statics::NewProp_InUniqueId = { "InUniqueId", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LobbyBeaconClient_eventClientPlayerLeft_Parms, InUniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft_Statics::NewProp_InUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft_Statics::NewProp_InUniqueId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft_Statics::NewProp_InUniqueId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Client notification that another player has left the lobby\n\x09 *\n\x09 * @param InUniqueId unique id of new player\n\x09 */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "Client notification that another player has left the lobby\n\n@param InUniqueId unique id of new player" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconClient, nullptr, "ClientPlayerLeft", nullptr, nullptr, sizeof(LobbyBeaconClient_eventClientPlayerLeft_Parms), Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags_Statics::NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LobbyBeaconClient_eventClientSetInviteFlags_Parms, Settings), Z_Construct_UScriptStruct_FJoinabilitySettings, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags_Statics::NewProp_Settings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Send updated session settings to client */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "Send updated session settings to client" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconClient, nullptr, "ClientSetInviteFlags", nullptr, nullptr, sizeof(LobbyBeaconClient_eventClientSetInviteFlags_Parms), Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KickReason_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_KickReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked_Statics::NewProp_KickReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked_Statics::NewProp_KickReason = { "KickReason", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LobbyBeaconClient_eventClientWasKicked_Parms, KickReason), METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked_Statics::NewProp_KickReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked_Statics::NewProp_KickReason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked_Statics::NewProp_KickReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * This was client was kicked by the server\n\x09 *\n\x09 * @param KickReason reason the server kicked the local player\n\x09 */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "This was client was kicked by the server\n\n@param KickReason reason the server kicked the local player" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconClient, nullptr, "ClientWasKicked", nullptr, nullptr, sizeof(LobbyBeaconClient_eventClientWasKicked_Parms), Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LobbyBeaconClient_eventServerCheat_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat_Statics::NewProp_Msg_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Run a cheat command on the server */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "Run a cheat command on the server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconClient, nullptr, "ServerCheat", nullptr, nullptr, sizeof(LobbyBeaconClient_eventServerCheat_Parms), Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyBeaconClient_ServerDisconnectFromLobby_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ServerDisconnectFromLobby_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Make a graceful disconnect with the server\n\x09 */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "Make a graceful disconnect with the server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconClient_ServerDisconnectFromLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconClient, nullptr, "ServerDisconnectFromLobby", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ServerDisconnectFromLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerDisconnectFromLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconClient_ServerDisconnectFromLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconClient_ServerDisconnectFromLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerToKick_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerToKick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::NewProp_PlayerToKick_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::NewProp_PlayerToKick = { "PlayerToKick", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LobbyBeaconClient_eventServerKickPlayer_Parms, PlayerToKick), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::NewProp_PlayerToKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::NewProp_PlayerToKick_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LobbyBeaconClient_eventServerKickPlayer_Parms, Reason), METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::NewProp_Reason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::NewProp_PlayerToKick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Make a request to kick a given player\n\x09 *\n\x09 * @param PlayerToKick player kick request\n\x09 * @param Reason reason for the kick to tell client if this succeeds\n\x09 */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "Make a request to kick a given player\n\n@param PlayerToKick player kick request\n@param Reason reason for the kick to tell client if this succeeds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconClient, nullptr, "ServerKickPlayer", nullptr, nullptr, sizeof(LobbyBeaconClient_eventServerKickPlayer_Parms), Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSessionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSessionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InUniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UrlString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UrlString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::NewProp_InSessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::NewProp_InSessionId = { "InSessionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LobbyBeaconClient_eventServerLoginPlayer_Parms, InSessionId), METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::NewProp_InSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::NewProp_InSessionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::NewProp_InUniqueId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::NewProp_InUniqueId = { "InUniqueId", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LobbyBeaconClient_eventServerLoginPlayer_Parms, InUniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::NewProp_InUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::NewProp_InUniqueId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::NewProp_UrlString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::NewProp_UrlString = { "UrlString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LobbyBeaconClient_eventServerLoginPlayer_Parms, UrlString), METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::NewProp_UrlString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::NewProp_UrlString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::NewProp_InSessionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::NewProp_InUniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::NewProp_UrlString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Attempt to login a single local player with the lobby beacon\n\x09 *\n\x09 * @param InSessionId session id that the client is expecting to connect with\n\x09 * @param InUniqueId unique id of the new player\n\x09 * @param UrlString URL containing player options (name, etc)\n\x09 */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "Attempt to login a single local player with the lobby beacon\n\n@param InSessionId session id that the client is expecting to connect with\n@param InUniqueId unique id of the new player\n@param UrlString URL containing player options (name, etc)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconClient, nullptr, "ServerLoginPlayer", nullptr, nullptr, sizeof(LobbyBeaconClient_eventServerLoginPlayer_Parms), Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyBeaconClient_ServerNotifyJoiningServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ServerNotifyJoiningServer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Make a graceful request to actually join the server\n\x09 */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "Make a graceful request to actually join the server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconClient_ServerNotifyJoiningServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconClient, nullptr, "ServerNotifyJoiningServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ServerNotifyJoiningServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerNotifyJoiningServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconClient_ServerNotifyJoiningServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconClient_ServerNotifyJoiningServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InUniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InUniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPartyOwnerId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPartyOwnerId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::NewProp_InUniqueId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::NewProp_InUniqueId = { "InUniqueId", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LobbyBeaconClient_eventServerSetPartyOwner_Parms, InUniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::NewProp_InUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::NewProp_InUniqueId_MetaData)) }; // 2142661840
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::NewProp_InPartyOwnerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::NewProp_InPartyOwnerId = { "InPartyOwnerId", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LobbyBeaconClient_eventServerSetPartyOwner_Parms, InPartyOwnerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::NewProp_InPartyOwnerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::NewProp_InPartyOwnerId_MetaData)) }; // 2142661840
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::NewProp_InUniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::NewProp_InPartyOwnerId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Make a request to set the party owner for the given player\n\x09 *\n\x09 * @param InUniqueId id of the requesting player\n\x09 * @param PartyOwnerUniqueId id the party owner\n\x09 */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "Make a request to set the party owner for the given player\n\n@param InUniqueId id of the requesting player\n@param PartyOwnerUniqueId id the party owner" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALobbyBeaconClient, nullptr, "ServerSetPartyOwner", nullptr, nullptr, sizeof(LobbyBeaconClient_eventServerSetPartyOwner_Parms), Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALobbyBeaconClient);
	UClass* Z_Construct_UClass_ALobbyBeaconClient_NoRegister()
	{
		return ALobbyBeaconClient::StaticClass();
	}
	struct Z_Construct_UClass_ALobbyBeaconClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LobbyState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyJoinServerState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LobbyJoinServerState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyJoinServerState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALobbyBeaconClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconClient,
		(UObject* (*)())Z_Construct_UPackage__Script_Lobby,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALobbyBeaconClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALobbyBeaconClient_ClientAckJoiningServer, "ClientAckJoiningServer" }, // 1815265222
		{ &Z_Construct_UFunction_ALobbyBeaconClient_ClientJoinGame, "ClientJoinGame" }, // 4230104331
		{ &Z_Construct_UFunction_ALobbyBeaconClient_ClientLoginComplete, "ClientLoginComplete" }, // 2599834775
		{ &Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerJoined, "ClientPlayerJoined" }, // 3410881976
		{ &Z_Construct_UFunction_ALobbyBeaconClient_ClientPlayerLeft, "ClientPlayerLeft" }, // 1518359282
		{ &Z_Construct_UFunction_ALobbyBeaconClient_ClientSetInviteFlags, "ClientSetInviteFlags" }, // 2521235018
		{ &Z_Construct_UFunction_ALobbyBeaconClient_ClientWasKicked, "ClientWasKicked" }, // 88367376
		{ &Z_Construct_UFunction_ALobbyBeaconClient_ServerCheat, "ServerCheat" }, // 858736891
		{ &Z_Construct_UFunction_ALobbyBeaconClient_ServerDisconnectFromLobby, "ServerDisconnectFromLobby" }, // 2302501220
		{ &Z_Construct_UFunction_ALobbyBeaconClient_ServerKickPlayer, "ServerKickPlayer" }, // 122877838
		{ &Z_Construct_UFunction_ALobbyBeaconClient_ServerLoginPlayer, "ServerLoginPlayer" }, // 1075720177
		{ &Z_Construct_UFunction_ALobbyBeaconClient_ServerNotifyJoiningServer, "ServerNotifyJoiningServer" }, // 3696529870
		{ &Z_Construct_UFunction_ALobbyBeaconClient_ServerSetPartyOwner, "ServerSetPartyOwner" }, // 3842669111
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A beacon client used for quality timings to a specified session\n */" },
		{ "IncludePath", "LobbyBeaconClient.h" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "A beacon client used for quality timings to a specified session" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_LobbyState_MetaData[] = {
		{ "Comment", "/** Client view of the lobby state */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "Client view of the lobby state" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_LobbyState = { "LobbyState", nullptr, (EPropertyFlags)0x0014000000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALobbyBeaconClient, LobbyState), Z_Construct_UClass_ALobbyBeaconState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_LobbyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_LobbyState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_PlayerState_MetaData[] = {
		{ "Comment", "/** Player state associated with this beacon (@todo not splitscreen safe) */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "Player state associated with this beacon (@todo not splitscreen safe)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0014000000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALobbyBeaconClient, PlayerState), Z_Construct_UClass_ALobbyBeaconPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_PlayerState_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_LobbyJoinServerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_LobbyJoinServerState_MetaData[] = {
		{ "Comment", "/** True once the server has acknowledged our join intent */" },
		{ "ModuleRelativePath", "Public/LobbyBeaconClient.h" },
		{ "ToolTip", "True once the server has acknowledged our join intent" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_LobbyJoinServerState = { "LobbyJoinServerState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALobbyBeaconClient, LobbyJoinServerState), Z_Construct_UEnum_Lobby_ELobbyBeaconJoinState, METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_LobbyJoinServerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_LobbyJoinServerState_MetaData)) }; // 10447850
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALobbyBeaconClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_LobbyState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_LobbyJoinServerState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALobbyBeaconClient_Statics::NewProp_LobbyJoinServerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALobbyBeaconClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyBeaconClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyBeaconClient_Statics::ClassParams = {
		&ALobbyBeaconClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALobbyBeaconClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconClient_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALobbyBeaconClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyBeaconClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALobbyBeaconClient()
	{
		if (!Z_Registration_Info_UClass_ALobbyBeaconClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyBeaconClient.OuterSingleton, Z_Construct_UClass_ALobbyBeaconClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALobbyBeaconClient.OuterSingleton;
	}
	template<> LOBBY_API UClass* StaticClass<ALobbyBeaconClient>()
	{
		return ALobbyBeaconClient::StaticClass();
	}

	void ALobbyBeaconClient::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_LobbyState(TEXT("LobbyState"));
		static const FName Name_PlayerState(TEXT("PlayerState"));

		const bool bIsValid = true
			&& Name_LobbyState == ClassReps[(int32)ENetFields_Private::LobbyState].Property->GetFName()
			&& Name_PlayerState == ClassReps[(int32)ENetFields_Private::PlayerState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALobbyBeaconClient"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyBeaconClient);
	ALobbyBeaconClient::~ALobbyBeaconClient() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_Statics::EnumInfo[] = {
		{ ELobbyBeaconJoinState_StaticEnum, TEXT("ELobbyBeaconJoinState"), &Z_Registration_Info_UEnum_ELobbyBeaconJoinState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 10447850U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyBeaconClient, ALobbyBeaconClient::StaticClass, TEXT("ALobbyBeaconClient"), &Z_Registration_Info_UClass_ALobbyBeaconClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyBeaconClient), 3496775692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_1396370622(TEXT("/Script/Lobby"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
