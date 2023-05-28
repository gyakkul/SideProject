// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitAbilityActivate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitAbilityActivate;
class UGameplayAbility;
struct FGameplayTag;
struct FGameplayTagQuery;
struct FGameplayTagRequirements;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitAbilityActivate_generated_h
#error "AbilityTask_WaitAbilityActivate.generated.h already included, missing '#pragma once' in AbilityTask_WaitAbilityActivate.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitAbilityActivate_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_11_DELEGATE \
GAMEPLAYABILITIES_API void FWaitAbilityActivateDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitAbilityActivateDelegate, UGameplayAbility* ActivatedAbility);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaitForAbilityActivate_Query); \
	DECLARE_FUNCTION(execWaitForAbilityActivateWithTagRequirements); \
	DECLARE_FUNCTION(execWaitForAbilityActivate); \
	DECLARE_FUNCTION(execOnAbilityActivate);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWaitForAbilityActivate_Query); \
	DECLARE_FUNCTION(execWaitForAbilityActivateWithTagRequirements); \
	DECLARE_FUNCTION(execWaitForAbilityActivate); \
	DECLARE_FUNCTION(execOnAbilityActivate);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitAbilityActivate(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitAbilityActivate, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitAbilityActivate)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitAbilityActivate(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitAbilityActivate, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitAbilityActivate)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitAbilityActivate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitAbilityActivate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitAbilityActivate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitAbilityActivate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitAbilityActivate(UAbilityTask_WaitAbilityActivate&&); \
	NO_API UAbilityTask_WaitAbilityActivate(const UAbilityTask_WaitAbilityActivate&); \
public: \
	NO_API virtual ~UAbilityTask_WaitAbilityActivate();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitAbilityActivate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitAbilityActivate(UAbilityTask_WaitAbilityActivate&&); \
	NO_API UAbilityTask_WaitAbilityActivate(const UAbilityTask_WaitAbilityActivate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitAbilityActivate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitAbilityActivate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitAbilityActivate) \
	NO_API virtual ~UAbilityTask_WaitAbilityActivate();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_WaitAbilityActivate."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_WaitAbilityActivate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
