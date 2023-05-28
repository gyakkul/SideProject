// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystemGlobals.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_AbilitySystemGlobals_generated_h
#error "AbilitySystemGlobals.generated.h already included, missing '#pragma once' in AbilitySystemGlobals.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemGlobals_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FNetSerializeScriptStructCache>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execServerCancelPlayerAbility); \
	DECLARE_FUNCTION(execServerEndPlayerAbility); \
	DECLARE_FUNCTION(execServerActivatePlayerAbility); \
	DECLARE_FUNCTION(execListPlayerAbilities); \
	DECLARE_FUNCTION(execToggleIgnoreAbilitySystemCosts); \
	DECLARE_FUNCTION(execToggleIgnoreAbilitySystemCooldowns);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execServerCancelPlayerAbility); \
	DECLARE_FUNCTION(execServerEndPlayerAbility); \
	DECLARE_FUNCTION(execServerActivatePlayerAbility); \
	DECLARE_FUNCTION(execListPlayerAbilities); \
	DECLARE_FUNCTION(execToggleIgnoreAbilitySystemCosts); \
	DECLARE_FUNCTION(execToggleIgnoreAbilitySystemCooldowns);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitySystemGlobals(); \
	friend struct Z_Construct_UClass_UAbilitySystemGlobals_Statics; \
public: \
	DECLARE_CLASS(UAbilitySystemGlobals, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySystemGlobals) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUAbilitySystemGlobals(); \
	friend struct Z_Construct_UClass_UAbilitySystemGlobals_Statics; \
public: \
	DECLARE_CLASS(UAbilitySystemGlobals, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySystemGlobals) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemGlobals) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemGlobals); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemGlobals); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySystemGlobals(UAbilitySystemGlobals&&); \
	NO_API UAbilitySystemGlobals(const UAbilitySystemGlobals&); \
public: \
	NO_API virtual ~UAbilitySystemGlobals();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySystemGlobals(UAbilitySystemGlobals&&); \
	NO_API UAbilitySystemGlobals(const UAbilitySystemGlobals&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemGlobals); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemGlobals); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemGlobals) \
	NO_API virtual ~UAbilitySystemGlobals();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_42_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h_45_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilitySystemGlobals."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilitySystemGlobals>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemGlobals_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
