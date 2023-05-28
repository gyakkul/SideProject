// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitInputRelease.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_WaitInputRelease;
class UGameplayAbility;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitInputRelease_generated_h
#error "AbilityTask_WaitInputRelease.generated.h already included, missing '#pragma once' in AbilityTask_WaitInputRelease.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitInputRelease_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_9_DELEGATE \
GAMEPLAYABILITIES_API void FInputReleaseDelegate_DelegateWrapper(const FMulticastScriptDelegate& InputReleaseDelegate, float TimeHeld);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaitInputRelease); \
	DECLARE_FUNCTION(execOnReleaseCallback);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWaitInputRelease); \
	DECLARE_FUNCTION(execOnReleaseCallback);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitInputRelease(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitInputRelease, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitInputRelease)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitInputRelease(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitInputRelease, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitInputRelease)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitInputRelease(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitInputRelease) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitInputRelease); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitInputRelease); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitInputRelease(UAbilityTask_WaitInputRelease&&); \
	NO_API UAbilityTask_WaitInputRelease(const UAbilityTask_WaitInputRelease&); \
public: \
	NO_API virtual ~UAbilityTask_WaitInputRelease();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitInputRelease(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitInputRelease(UAbilityTask_WaitInputRelease&&); \
	NO_API UAbilityTask_WaitInputRelease(const UAbilityTask_WaitInputRelease&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitInputRelease); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitInputRelease); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitInputRelease) \
	NO_API virtual ~UAbilityTask_WaitInputRelease();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_WaitInputRelease."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_WaitInputRelease>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
