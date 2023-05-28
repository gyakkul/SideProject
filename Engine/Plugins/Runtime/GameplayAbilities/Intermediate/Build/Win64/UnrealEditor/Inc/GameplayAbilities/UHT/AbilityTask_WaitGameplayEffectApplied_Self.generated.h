// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Self.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitGameplayEffectApplied_Self;
class UGameplayAbility;
struct FActiveGameplayEffectHandle;
struct FGameplayEffectSpecHandle;
struct FGameplayTagQuery;
struct FGameplayTagRequirements;
struct FGameplayTargetDataFilterHandle;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectApplied_Self_generated_h
#error "AbilityTask_WaitGameplayEffectApplied_Self.generated.h already included, missing '#pragma once' in AbilityTask_WaitGameplayEffectApplied_Self.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitGameplayEffectApplied_Self_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_11_DELEGATE \
GAMEPLAYABILITIES_API void FGameplayEffectAppliedSelfDelegate_DelegateWrapper(const FMulticastScriptDelegate& GameplayEffectAppliedSelfDelegate, AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaitGameplayEffectAppliedToSelf_Query); \
	DECLARE_FUNCTION(execWaitGameplayEffectAppliedToSelf);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWaitGameplayEffectAppliedToSelf_Query); \
	DECLARE_FUNCTION(execWaitGameplayEffectAppliedToSelf);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayEffectApplied_Self(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitGameplayEffectApplied_Self, UAbilityTask_WaitGameplayEffectApplied, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayEffectApplied_Self)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayEffectApplied_Self(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Self_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitGameplayEffectApplied_Self, UAbilityTask_WaitGameplayEffectApplied, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayEffectApplied_Self)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitGameplayEffectApplied_Self(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayEffectApplied_Self) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitGameplayEffectApplied_Self); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayEffectApplied_Self); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitGameplayEffectApplied_Self(UAbilityTask_WaitGameplayEffectApplied_Self&&); \
	NO_API UAbilityTask_WaitGameplayEffectApplied_Self(const UAbilityTask_WaitGameplayEffectApplied_Self&); \
public: \
	NO_API virtual ~UAbilityTask_WaitGameplayEffectApplied_Self();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitGameplayEffectApplied_Self(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitGameplayEffectApplied_Self(UAbilityTask_WaitGameplayEffectApplied_Self&&); \
	NO_API UAbilityTask_WaitGameplayEffectApplied_Self(const UAbilityTask_WaitGameplayEffectApplied_Self&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitGameplayEffectApplied_Self); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayEffectApplied_Self); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayEffectApplied_Self) \
	NO_API virtual ~UAbilityTask_WaitGameplayEffectApplied_Self();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_WaitGameplayEffectApplied_Self."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_WaitGameplayEffectApplied_Self>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Self_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
