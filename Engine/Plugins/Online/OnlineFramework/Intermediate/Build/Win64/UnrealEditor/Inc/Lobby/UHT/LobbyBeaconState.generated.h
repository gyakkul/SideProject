// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LobbyBeaconState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOBBY_LobbyBeaconState_generated_h
#error "LobbyBeaconState.generated.h already included, missing '#pragma once' in LobbyBeaconState.h"
#endif
#define LOBBY_LobbyBeaconState_generated_h

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLobbyPlayerStateActorInfo_Statics; \
	LOBBY_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> LOBBY_API UScriptStruct* StaticStruct<struct FLobbyPlayerStateActorInfo>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLobbyPlayerStateInfoArray_Statics; \
	LOBBY_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FLobbyPlayerStateInfoArray, Players, LOBBY_API );


template<> LOBBY_API UScriptStruct* StaticStruct<struct FLobbyPlayerStateInfoArray>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_WaitForPlayersTimeRemaining); \
	DECLARE_FUNCTION(execOnRep_LobbyStarted);


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_WaitForPlayersTimeRemaining); \
	DECLARE_FUNCTION(execOnRep_LobbyStarted);


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyBeaconState(); \
	friend struct Z_Construct_UClass_ALobbyBeaconState_Statics; \
public: \
	DECLARE_CLASS(ALobbyBeaconState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lobby"), NO_API) \
	DECLARE_SERIALIZER(ALobbyBeaconState) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bLobbyStarted=NETFIELD_REP_START, \
		WaitForPlayersTimeRemaining, \
		Players, \
		NETFIELD_REP_END=Players	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_INCLASS \
private: \
	static void StaticRegisterNativesALobbyBeaconState(); \
	friend struct Z_Construct_UClass_ALobbyBeaconState_Statics; \
public: \
	DECLARE_CLASS(ALobbyBeaconState, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Lobby"), NO_API) \
	DECLARE_SERIALIZER(ALobbyBeaconState) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bLobbyStarted=NETFIELD_REP_START, \
		WaitForPlayersTimeRemaining, \
		Players, \
		NETFIELD_REP_END=Players	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyBeaconState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyBeaconState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyBeaconState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyBeaconState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyBeaconState(ALobbyBeaconState&&); \
	NO_API ALobbyBeaconState(const ALobbyBeaconState&); \
public: \
	NO_API virtual ~ALobbyBeaconState();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyBeaconState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALobbyBeaconState(ALobbyBeaconState&&); \
	NO_API ALobbyBeaconState(const ALobbyBeaconState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyBeaconState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyBeaconState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyBeaconState) \
	NO_API virtual ~ALobbyBeaconState();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_168_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h_171_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LobbyBeaconState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOBBY_API UClass* StaticClass<class ALobbyBeaconState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Lobby_Public_LobbyBeaconState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
