// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Async/AbilityAsync_WaitGameplayEffectApplied.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityAsync_WaitGameplayEffectApplied;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectSpecHandle;
struct FGameplayTagRequirements;
struct FGameplayTargetDataFilterHandle;
#ifdef GAMEPLAYABILITIES_AbilityAsync_WaitGameplayEffectApplied_generated_h
#error "AbilityAsync_WaitGameplayEffectApplied.generated.h already included, missing '#pragma once' in AbilityAsync_WaitGameplayEffectApplied.h"
#endif
#define GAMEPLAYABILITIES_AbilityAsync_WaitGameplayEffectApplied_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_33_DELEGATE \
static void FOnAppliedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAppliedDelegate, AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaitGameplayEffectAppliedToActor);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWaitGameplayEffectAppliedToActor);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitGameplayEffectApplied(); \
	friend struct Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics; \
public: \
	DECLARE_CLASS(UAbilityAsync_WaitGameplayEffectApplied, UAbilityAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitGameplayEffectApplied)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityAsync_WaitGameplayEffectApplied(); \
	friend struct Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics; \
public: \
	DECLARE_CLASS(UAbilityAsync_WaitGameplayEffectApplied, UAbilityAsync, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityAsync_WaitGameplayEffectApplied)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityAsync_WaitGameplayEffectApplied(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitGameplayEffectApplied) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityAsync_WaitGameplayEffectApplied); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitGameplayEffectApplied); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityAsync_WaitGameplayEffectApplied(UAbilityAsync_WaitGameplayEffectApplied&&); \
	NO_API UAbilityAsync_WaitGameplayEffectApplied(const UAbilityAsync_WaitGameplayEffectApplied&); \
public: \
	NO_API virtual ~UAbilityAsync_WaitGameplayEffectApplied();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityAsync_WaitGameplayEffectApplied(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityAsync_WaitGameplayEffectApplied(UAbilityAsync_WaitGameplayEffectApplied&&); \
	NO_API UAbilityAsync_WaitGameplayEffectApplied(const UAbilityAsync_WaitGameplayEffectApplied&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityAsync_WaitGameplayEffectApplied); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityAsync_WaitGameplayEffectApplied); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityAsync_WaitGameplayEffectApplied) \
	NO_API virtual ~UAbilityAsync_WaitGameplayEffectApplied();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityAsync_WaitGameplayEffectApplied>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
