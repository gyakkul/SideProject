// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitGameplayTagQuery.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitGameplayTagQuery;
class UGameplayAbility;
enum class EWaitGameplayTagQueryTriggerCondition : uint8;
struct FGameplayTag;
struct FGameplayTagQuery;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitGameplayTagQuery_generated_h
#error "AbilityTask_WaitGameplayTagQuery.generated.h already included, missing '#pragma once' in AbilityTask_WaitGameplayTagQuery.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitGameplayTagQuery_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_8_DELEGATE \
GAMEPLAYABILITIES_API void FWaitGameplayTagQueryDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayTagQueryDelegate);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateTargetTags); \
	DECLARE_FUNCTION(execWaitGameplayTagQuery);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateTargetTags); \
	DECLARE_FUNCTION(execWaitGameplayTagQuery);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayTagQuery(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitGameplayTagQuery, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayTagQuery)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitGameplayTagQuery(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitGameplayTagQuery_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitGameplayTagQuery, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitGameplayTagQuery)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitGameplayTagQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayTagQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitGameplayTagQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayTagQuery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitGameplayTagQuery(UAbilityTask_WaitGameplayTagQuery&&); \
	NO_API UAbilityTask_WaitGameplayTagQuery(const UAbilityTask_WaitGameplayTagQuery&); \
public: \
	NO_API virtual ~UAbilityTask_WaitGameplayTagQuery();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitGameplayTagQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitGameplayTagQuery(UAbilityTask_WaitGameplayTagQuery&&); \
	NO_API UAbilityTask_WaitGameplayTagQuery(const UAbilityTask_WaitGameplayTagQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitGameplayTagQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitGameplayTagQuery); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitGameplayTagQuery) \
	NO_API virtual ~UAbilityTask_WaitGameplayTagQuery();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_19_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_WaitGameplayTagQuery>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayTagQuery_h


#define FOREACH_ENUM_EWAITGAMEPLAYTAGQUERYTRIGGERCONDITION(op) \
	op(EWaitGameplayTagQueryTriggerCondition::WhenTrue) \
	op(EWaitGameplayTagQueryTriggerCondition::WhenFalse) 

enum class EWaitGameplayTagQueryTriggerCondition : uint8;
template<> struct TIsUEnumClass<EWaitGameplayTagQueryTriggerCondition> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EWaitGameplayTagQueryTriggerCondition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
