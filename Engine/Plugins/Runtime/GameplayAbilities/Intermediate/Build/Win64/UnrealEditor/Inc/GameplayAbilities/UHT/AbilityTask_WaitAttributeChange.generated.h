// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_WaitAttributeChange.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_WaitAttributeChange;
class UGameplayAbility;
struct FGameplayAttribute;
struct FGameplayTag;
#ifdef GAMEPLAYABILITIES_AbilityTask_WaitAttributeChange_generated_h
#error "AbilityTask_WaitAttributeChange.generated.h already included, missing '#pragma once' in AbilityTask_WaitAttributeChange.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_WaitAttributeChange_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_29_DELEGATE \
GAMEPLAYABILITIES_API void FWaitAttributeChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitAttributeChangeDelegate);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWaitForAttributeChangeWithComparison); \
	DECLARE_FUNCTION(execWaitForAttributeChange);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWaitForAttributeChangeWithComparison); \
	DECLARE_FUNCTION(execWaitForAttributeChange);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitAttributeChange(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitAttributeChange, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitAttributeChange)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_WaitAttributeChange(); \
	friend struct Z_Construct_UClass_UAbilityTask_WaitAttributeChange_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_WaitAttributeChange, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_WaitAttributeChange)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitAttributeChange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitAttributeChange) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitAttributeChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitAttributeChange); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitAttributeChange(UAbilityTask_WaitAttributeChange&&); \
	NO_API UAbilityTask_WaitAttributeChange(const UAbilityTask_WaitAttributeChange&); \
public: \
	NO_API virtual ~UAbilityTask_WaitAttributeChange();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_WaitAttributeChange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_WaitAttributeChange(UAbilityTask_WaitAttributeChange&&); \
	NO_API UAbilityTask_WaitAttributeChange(const UAbilityTask_WaitAttributeChange&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_WaitAttributeChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_WaitAttributeChange); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_WaitAttributeChange) \
	NO_API virtual ~UAbilityTask_WaitAttributeChange();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_34_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_WaitAttributeChange."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_WaitAttributeChange>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAttributeChange_h


#define FOREACH_ENUM_EWAITATTRIBUTECHANGECOMPARISON(op) \
	op(EWaitAttributeChangeComparison::None) \
	op(EWaitAttributeChangeComparison::GreaterThan) \
	op(EWaitAttributeChangeComparison::LessThan) \
	op(EWaitAttributeChangeComparison::GreaterThanOrEqualTo) \
	op(EWaitAttributeChangeComparison::LessThanOrEqualTo) \
	op(EWaitAttributeChangeComparison::NotEqualTo) \
	op(EWaitAttributeChangeComparison::ExactlyEqualTo) 

namespace EWaitAttributeChangeComparison { enum Type : int; }
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EWaitAttributeChangeComparison::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
