// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Async/AbilityAsync_WaitGameplayTagQuery.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityAsync_WaitGameplayTagQuery;
enum class EWaitGameplayTagQueryTriggerCondition : uint8;
struct FGameplayTagQuery;
#ifdef GAMEPLAYABILITIES_AbilityAsync_WaitGameplayTagQuery_generated_h
#error "AbilityAsync_WaitGameplayTagQuery.generated.h already included, missing '#pragma once' in AbilityAsync_WaitGameplayTagQuery.h"
#endif
#define GAMEPLAYABILITIES_AbilityAsync_WaitGameplayTagQuery_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_11_DELEGATE \
GAMEPLAYABILITIES_API void FAsyncWaitGameplayTagQueryDelegate_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitGameplayTagQueryDelegate);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaitGameplayTagQueryOnActor);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWaitGameplayTagQueryOnActor);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitGameplayTagQuery(); \
	friend struct Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics; \
public: \
	DECLARE_CLASS(UAbilityAsync_WaitGameplayTagQuery, UAbilityAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitGameplayTagQuery)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitGameplayTagQuery(); \
	friend struct Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics; \
public: \
	DECLARE_CLASS(UAbilityAsync_WaitGameplayTagQuery, UAbilityAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitGameplayTagQuery)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityAsync_WaitGameplayTagQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitGameplayTagQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityAsync_WaitGameplayTagQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitGameplayTagQuery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityAsync_WaitGameplayTagQuery(UAbilityAsync_WaitGameplayTagQuery&&); \
	NO_API UAbilityAsync_WaitGameplayTagQuery(const UAbilityAsync_WaitGameplayTagQuery&); \
public: \
	NO_API virtual ~UAbilityAsync_WaitGameplayTagQuery();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityAsync_WaitGameplayTagQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityAsync_WaitGameplayTagQuery(UAbilityAsync_WaitGameplayTagQuery&&); \
	NO_API UAbilityAsync_WaitGameplayTagQuery(const UAbilityAsync_WaitGameplayTagQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityAsync_WaitGameplayTagQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitGameplayTagQuery); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitGameplayTagQuery) \
	NO_API virtual ~UAbilityAsync_WaitGameplayTagQuery();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityAsync_WaitGameplayTagQuery>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
