// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LobbyBeaconClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FJoinabilitySettings;
struct FUniqueNetIdRepl;
#ifdef LOBBY_LobbyBeaconClient_generated_h
#error "LobbyBeaconClient.generated.h already included, missing '#pragma once' in LobbyBeaconClient.h"
#endif
#define LOBBY_LobbyBeaconClient_generated_h

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_RPC_WRAPPERS \
	virtual void ClientPlayerLeft_Implementation(FUniqueNetIdRepl const& InUniqueId); \
	virtual void ClientPlayerJoined_Implementation(FText const& NewPlayerName, FUniqueNetIdRepl const& InUniqueId); \
	virtual void ClientWasKicked_Implementation(FText const& KickReason); \
	virtual void ClientLoginComplete_Implementation(FUniqueNetIdRepl const& InUniqueId, bool bWasSuccessful); \
	virtual bool ServerSetPartyOwner_Validate(FUniqueNetIdRepl const& , FUniqueNetIdRepl const& ); \
	virtual void ServerSetPartyOwner_Implementation(FUniqueNetIdRepl const& InUniqueId, FUniqueNetIdRepl const& InPartyOwnerId); \
	virtual bool ServerKickPlayer_Validate(FUniqueNetIdRepl const& , FText const& ); \
	virtual void ServerKickPlayer_Implementation(FUniqueNetIdRepl const& PlayerToKick, FText const& Reason); \
	virtual void ClientAckJoiningServer_Implementation(); \
	virtual bool ServerNotifyJoiningServer_Validate(); \
	virtual void ServerNotifyJoiningServer_Implementation(); \
	virtual bool ServerDisconnectFromLobby_Validate(); \
	virtual void ServerDisconnectFromLobby_Implementation(); \
	virtual bool ServerLoginPlayer_Validate(const FString& , FUniqueNetIdRepl const& , const FString& ); \
	virtual void ServerLoginPlayer_Implementation(const FString& InSessionId, FUniqueNetIdRepl const& InUniqueId, const FString& UrlString); \
	virtual bool ServerCheat_Validate(const FString& ); \
	virtual void ServerCheat_Implementation(const FString& Msg); \
	virtual void ClientSetInviteFlags_Implementation(FJoinabilitySettings const& Settings); \
	virtual void ClientJoinGame_Implementation(); \
 \
	DECLARE_FUNCTION(execClientPlayerLeft); \
	DECLARE_FUNCTION(execClientPlayerJoined); \
	DECLARE_FUNCTION(execClientWasKicked); \
	DECLARE_FUNCTION(execClientLoginComplete); \
	DECLARE_FUNCTION(execServerSetPartyOwner); \
	DECLARE_FUNCTION(execServerKickPlayer); \
	DECLARE_FUNCTION(execClientAckJoiningServer); \
	DECLARE_FUNCTION(execServerNotifyJoiningServer); \
	DECLARE_FUNCTION(execServerDisconnectFromLobby); \
	DECLARE_FUNCTION(execServerLoginPlayer); \
	DECLARE_FUNCTION(execServerCheat); \
	DECLARE_FUNCTION(execClientSetInviteFlags); \
	DECLARE_FUNCTION(execClientJoinGame);


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientPlayerLeft_Implementation(FUniqueNetIdRepl const& InUniqueId); \
	virtual void ClientPlayerJoined_Implementation(FText const& NewPlayerName, FUniqueNetIdRepl const& InUniqueId); \
	virtual void ClientWasKicked_Implementation(FText const& KickReason); \
	virtual void ClientLoginComplete_Implementation(FUniqueNetIdRepl const& InUniqueId, bool bWasSuccessful); \
	virtual bool ServerSetPartyOwner_Validate(FUniqueNetIdRepl const& , FUniqueNetIdRepl const& ); \
	virtual void ServerSetPartyOwner_Implementation(FUniqueNetIdRepl const& InUniqueId, FUniqueNetIdRepl const& InPartyOwnerId); \
	virtual bool ServerKickPlayer_Validate(FUniqueNetIdRepl const& , FText const& ); \
	virtual void ServerKickPlayer_Implementation(FUniqueNetIdRepl const& PlayerToKick, FText const& Reason); \
	virtual void ClientAckJoiningServer_Implementation(); \
	virtual bool ServerNotifyJoiningServer_Validate(); \
	virtual void ServerNotifyJoiningServer_Implementation(); \
	virtual bool ServerDisconnectFromLobby_Validate(); \
	virtual void ServerDisconnectFromLobby_Implementation(); \
	virtual bool ServerLoginPlayer_Validate(const FString& , FUniqueNetIdRepl const& , const FString& ); \
	virtual void ServerLoginPlayer_Implementation(const FString& InSessionId, FUniqueNetIdRepl const& InUniqueId, const FString& UrlString); \
	virtual bool ServerCheat_Validate(const FString& ); \
	virtual void ServerCheat_Implementation(const FString& Msg); \
	virtual void ClientSetInviteFlags_Implementation(FJoinabilitySettings const& Settings); \
	virtual void ClientJoinGame_Implementation(); \
 \
	DECLARE_FUNCTION(execClientPlayerLeft); \
	DECLARE_FUNCTION(execClientPlayerJoined); \
	DECLARE_FUNCTION(execClientWasKicked); \
	DECLARE_FUNCTION(execClientLoginComplete); \
	DECLARE_FUNCTION(execServerSetPartyOwner); \
	DECLARE_FUNCTION(execServerKickPlayer); \
	DECLARE_FUNCTION(execClientAckJoiningServer); \
	DECLARE_FUNCTION(execServerNotifyJoiningServer); \
	DECLARE_FUNCTION(execServerDisconnectFromLobby); \
	DECLARE_FUNCTION(execServerLoginPlayer); \
	DECLARE_FUNCTION(execServerCheat); \
	DECLARE_FUNCTION(execClientSetInviteFlags); \
	DECLARE_FUNCTION(execClientJoinGame);


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyBeaconClient(); \
	friend struct Z_Construct_UClass_ALobbyBeaconClient_Statics; \
public: \
	DECLARE_CLASS(ALobbyBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lobby"), NO_API) \
	DECLARE_SERIALIZER(ALobbyBeaconClient) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LobbyState=NETFIELD_REP_START, \
		PlayerState, \
		NETFIELD_REP_END=PlayerState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_INCLASS \
private: \
	static void StaticRegisterNativesALobbyBeaconClient(); \
	friend struct Z_Construct_UClass_ALobbyBeaconClient_Statics; \
public: \
	DECLARE_CLASS(ALobbyBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lobby"), NO_API) \
	DECLARE_SERIALIZER(ALobbyBeaconClient) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		LobbyState=NETFIELD_REP_START, \
		PlayerState, \
		NETFIELD_REP_END=PlayerState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyBeaconClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyBeaconClient(ALobbyBeaconClient&&); \
	NO_API ALobbyBeaconClient(const ALobbyBeaconClient&); \
public: \
	NO_API virtual ~ALobbyBeaconClient();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyBeaconClient(ALobbyBeaconClient&&); \
	NO_API ALobbyBeaconClient(const ALobbyBeaconClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyBeaconClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyBeaconClient) \
	NO_API virtual ~ALobbyBeaconClient();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_55_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h_58_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LobbyBeaconClient."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOBBY_API UClass* StaticClass<class ALobbyBeaconClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconClient_h


#define FOREACH_ENUM_ELOBBYBEACONJOINSTATE(op) \
	op(ELobbyBeaconJoinState::None) \
	op(ELobbyBeaconJoinState::SentJoinRequest) \
	op(ELobbyBeaconJoinState::JoinRequestAcknowledged) 

enum class ELobbyBeaconJoinState : uint8;
template<> struct TIsUEnumClass<ELobbyBeaconJoinState> { enum { Value = true }; };
template<> LOBBY_API UEnum* StaticEnum<ELobbyBeaconJoinState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
