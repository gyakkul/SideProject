// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitTargetData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameplayAbilityTargetActor;
class UAbilityTask_WaitTargetData;
class UGameplayAbility;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayTag;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitTargetData_generated_h
#error "AbilityTask_WaitTargetData.generated.h already included, missing '#pragma once' in AbilityTask_WaitTargetData.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitTargetData_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_12_DELEGATE \
GAMEPLAYABILITIES_API void FWaitTargetDataDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitTargetDataDelegate, FGameplayAbilityTargetDataHandle const& Data);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginSpawningActor); \
	DECLARE_FUNCTION(execWaitTargetDataUsingActor); \
	DECLARE_FUNCTION(execWaitTargetData); \
	DECLARE_FUNCTION(execOnTargetDataCancelledCallback); \
	DECLARE_FUNCTION(execOnTargetDataReadyCallback); \
	DECLARE_FUNCTION(execOnTargetDataReplicatedCancelledCallback); \
	DECLARE_FUNCTION(execOnTargetDataReplicatedCallback);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishSpawningActor); \
	DECLARE_FUNCTION(execBeginSpawningActor); \
	DECLARE_FUNCTION(execWaitTargetDataUsingActor); \
	DECLARE_FUNCTION(execWaitTargetData); \
	DECLARE_FUNCTION(execOnTargetDataCancelledCallback); \
	DECLARE_FUNCTION(execOnTargetDataReadyCallback); \
	DECLARE_FUNCTION(execOnTargetDataReplicatedCancelledCallback); \
	DECLARE_FUNCTION(execOnTargetDataReplicatedCallback);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitTargetData(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitTargetData_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitTargetData, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitTargetData)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitTargetData(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitTargetData_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitTargetData, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitTargetData)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitTargetData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitTargetData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitTargetData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitTargetData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitTargetData(UAbilityTask_WaitTargetData&&); \
	NO_API UAbilityTask_WaitTargetData(const UAbilityTask_WaitTargetData&); \
public: \
	NO_API virtual ~UAbilityTask_WaitTargetData();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitTargetData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitTargetData(UAbilityTask_WaitTargetData&&); \
	NO_API UAbilityTask_WaitTargetData(const UAbilityTask_WaitTargetData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitTargetData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitTargetData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitTargetData) \
	NO_API virtual ~UAbilityTask_WaitTargetData();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_WaitTargetData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_WaitTargetData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitTargetData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
