// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Async/AbilityAsync_WaitGameplayEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityAsync_WaitGameplayEvent;
struct FGameplayEventData;
struct FGameplayTag;
#ifdef GAMEPLAYABILITIES_AbilityAsync_WaitGameplayEvent_generated_h
#error "AbilityAsync_WaitGameplayEvent.generated.h already included, missing '#pragma once' in AbilityAsync_WaitGameplayEvent.h"
#endif
#define GAMEPLAYABILITIES_AbilityAsync_WaitGameplayEvent_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_27_DELEGATE \
static void FEventReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& EventReceivedDelegate, FGameplayEventData Payload);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaitGameplayEventToActor);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWaitGameplayEventToActor);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitGameplayEvent(); \
	friend struct Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics; \
public: \
	DECLARE_CLASS(UAbilityAsync_WaitGameplayEvent, UAbilityAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitGameplayEvent)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitGameplayEvent(); \
	friend struct Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics; \
public: \
	DECLARE_CLASS(UAbilityAsync_WaitGameplayEvent, UAbilityAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitGameplayEvent)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityAsync_WaitGameplayEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitGameplayEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityAsync_WaitGameplayEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitGameplayEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityAsync_WaitGameplayEvent(UAbilityAsync_WaitGameplayEvent&&); \
	NO_API UAbilityAsync_WaitGameplayEvent(const UAbilityAsync_WaitGameplayEvent&); \
public: \
	NO_API virtual ~UAbilityAsync_WaitGameplayEvent();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityAsync_WaitGameplayEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityAsync_WaitGameplayEvent(UAbilityAsync_WaitGameplayEvent&&); \
	NO_API UAbilityAsync_WaitGameplayEvent(const UAbilityAsync_WaitGameplayEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityAsync_WaitGameplayEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitGameplayEvent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitGameplayEvent) \
	NO_API virtual ~UAbilityAsync_WaitGameplayEvent();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityAsync_WaitGameplayEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
