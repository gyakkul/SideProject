// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/GameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_GameState_generated_h
#error "GameState.generated.h already included, missing '#pragma once' in GameState.h"
#endif
#define ENGINE_GameState_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ElapsedTime); \
	DECLARE_FUNCTION(execOnRep_MatchState);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ElapsedTime); \
	DECLARE_FUNCTION(execOnRep_MatchState);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameState(); \
	friend struct Z_Construct_UClass_AGameState_Statics; \
public: \
	DECLARE_CLASS(AGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameState) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatchState=NETFIELD_REP_START, \
		ElapsedTime, \
		NETFIELD_REP_END=ElapsedTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAGameState(); \
	friend struct Z_Construct_UClass_AGameState_Statics; \
public: \
	DECLARE_CLASS(AGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameState) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MatchState=NETFIELD_REP_START, \
		ElapsedTime, \
		NETFIELD_REP_END=ElapsedTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameState(AGameState&&); \
	NO_API AGameState(const AGameState&); \
public: \
	NO_API virtual ~AGameState();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameState(AGameState&&); \
	NO_API AGameState(const AGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameState) \
	NO_API virtual ~AGameState();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
