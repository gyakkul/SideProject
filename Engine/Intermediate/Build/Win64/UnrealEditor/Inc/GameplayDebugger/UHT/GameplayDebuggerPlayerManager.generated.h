// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayDebuggerPlayerManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYDEBUGGER_GameplayDebuggerPlayerManager_generated_h
#error "GameplayDebuggerPlayerManager.generated.h already included, missing '#pragma once' in GameplayDebuggerPlayerManager.h"
#endif
#define GAMEPLAYDEBUGGER_GameplayDebuggerPlayerManager_generated_h

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerPlayerData_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerPlayerData>();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_SPARSE_DATA
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_ACCESSORS
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameplayDebuggerPlayerManager(); \
	friend struct Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics; \
public: \
	DECLARE_CLASS(AGameplayDebuggerPlayerManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(AGameplayDebuggerPlayerManager)


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_INCLASS \
private: \
	static void StaticRegisterNativesAGameplayDebuggerPlayerManager(); \
	friend struct Z_Construct_UClass_AGameplayDebuggerPlayerManager_Statics; \
public: \
	DECLARE_CLASS(AGameplayDebuggerPlayerManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), NO_API) \
	DECLARE_SERIALIZER(AGameplayDebuggerPlayerManager)


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayDebuggerPlayerManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayDebuggerPlayerManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayDebuggerPlayerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayDebuggerPlayerManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayDebuggerPlayerManager(AGameplayDebuggerPlayerManager&&); \
	NO_API AGameplayDebuggerPlayerManager(const AGameplayDebuggerPlayerManager&); \
public: \
	NO_API virtual ~AGameplayDebuggerPlayerManager();


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameplayDebuggerPlayerManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameplayDebuggerPlayerManager(AGameplayDebuggerPlayerManager&&); \
	NO_API AGameplayDebuggerPlayerManager(const AGameplayDebuggerPlayerManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameplayDebuggerPlayerManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameplayDebuggerPlayerManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameplayDebuggerPlayerManager) \
	NO_API virtual ~AGameplayDebuggerPlayerManager();


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_32_PROLOG
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_INCLASS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_SPARSE_DATA \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_ACCESSORS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayDebuggerPlayerManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<class AGameplayDebuggerPlayerManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerPlayerManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
