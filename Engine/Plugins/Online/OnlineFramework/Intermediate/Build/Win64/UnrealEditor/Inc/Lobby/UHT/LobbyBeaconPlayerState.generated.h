// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LobbyBeaconPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOBBY_LobbyBeaconPlayerState_generated_h
#error "LobbyBeaconPlayerState.generated.h already included, missing '#pragma once' in LobbyBeaconPlayerState.h"
#endif
#define LOBBY_LobbyBeaconPlayerState_generated_h

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_InLobby); \
	DECLARE_FUNCTION(execOnRep_PartyOwner); \
	DECLARE_FUNCTION(execOnRep_UniqueId);


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_InLobby); \
	DECLARE_FUNCTION(execOnRep_PartyOwner); \
	DECLARE_FUNCTION(execOnRep_UniqueId);


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyBeaconPlayerState(); \
	friend struct Z_Construct_UClass_ALobbyBeaconPlayerState_Statics; \
public: \
	DECLARE_CLASS(ALobbyBeaconPlayerState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lobby"), NO_API) \
	DECLARE_SERIALIZER(ALobbyBeaconPlayerState) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DisplayName=NETFIELD_REP_START, \
		UniqueId, \
		PartyOwnerUniqueId, \
		bInLobby, \
		ClientActor, \
		NETFIELD_REP_END=ClientActor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_INCLASS \
private: \
	static void StaticRegisterNativesALobbyBeaconPlayerState(); \
	friend struct Z_Construct_UClass_ALobbyBeaconPlayerState_Statics; \
public: \
	DECLARE_CLASS(ALobbyBeaconPlayerState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lobby"), NO_API) \
	DECLARE_SERIALIZER(ALobbyBeaconPlayerState) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DisplayName=NETFIELD_REP_START, \
		UniqueId, \
		PartyOwnerUniqueId, \
		bInLobby, \
		ClientActor, \
		NETFIELD_REP_END=ClientActor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyBeaconPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyBeaconPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyBeaconPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyBeaconPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyBeaconPlayerState(ALobbyBeaconPlayerState&&); \
	NO_API ALobbyBeaconPlayerState(const ALobbyBeaconPlayerState&); \
public: \
	NO_API virtual ~ALobbyBeaconPlayerState();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyBeaconPlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyBeaconPlayerState(ALobbyBeaconPlayerState&&); \
	NO_API ALobbyBeaconPlayerState(const ALobbyBeaconPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyBeaconPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyBeaconPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyBeaconPlayerState) \
	NO_API virtual ~ALobbyBeaconPlayerState();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_16_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LobbyBeaconPlayerState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOBBY_API UClass* StaticClass<class ALobbyBeaconPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
