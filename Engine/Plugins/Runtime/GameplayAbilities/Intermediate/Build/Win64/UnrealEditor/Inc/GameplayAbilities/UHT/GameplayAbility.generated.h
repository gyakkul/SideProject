// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/GameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilitySystemComponent;
class UAnimMontage;
class UGameplayEffect;
class UObject;
class USkeletalMeshComponent;
struct FActiveGameplayEffectHandle;
struct FGameplayAbilityActorInfo;
struct FGameplayAbilitySpecHandle;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayAbilityTargetingLocationInfo;
struct FGameplayCueParameters;
struct FGameplayEffectContextHandle;
struct FGameplayEffectSpecHandle;
struct FGameplayEventData;
struct FGameplayTag;
struct FGameplayTagContainer;
#ifdef GAMEPLAYABILITIES_GameplayAbility_generated_h
#error "GameplayAbility.generated.h already included, missing '#pragma once' in GameplayAbility.h"
#endif
#define GAMEPLAYABILITIES_GameplayAbility_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAbilityTriggerData_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FAbilityTriggerData>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeTargetLocationInfoFromOwnerSkeletalMeshComponent); \
	DECLARE_FUNCTION(execMakeTargetLocationInfoFromOwnerActor); \
	DECLARE_FUNCTION(execMontageStop); \
	DECLARE_FUNCTION(execMontageSetNextSectionName); \
	DECLARE_FUNCTION(execMontageJumpToSection); \
	DECLARE_FUNCTION(execEndAbilityState); \
	DECLARE_FUNCTION(execCancelTaskByInstanceName); \
	DECLARE_FUNCTION(execEndTaskByInstanceName); \
	DECLARE_FUNCTION(execConfirmTaskByInstanceName); \
	DECLARE_FUNCTION(execK2_RemoveGameplayCue); \
	DECLARE_FUNCTION(execK2_AddGameplayCueWithParams); \
	DECLARE_FUNCTION(execK2_AddGameplayCue); \
	DECLARE_FUNCTION(execK2_ExecuteGameplayCueWithParams); \
	DECLARE_FUNCTION(execK2_ExecuteGameplayCue); \
	DECLARE_FUNCTION(execBP_RemoveGameplayEffectFromOwnerWithHandle); \
	DECLARE_FUNCTION(execBP_RemoveGameplayEffectFromOwnerWithGrantedTags); \
	DECLARE_FUNCTION(execBP_RemoveGameplayEffectFromOwnerWithAssetTags); \
	DECLARE_FUNCTION(execK2_ApplyGameplayEffectSpecToTarget); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToTarget); \
	DECLARE_FUNCTION(execK2_ApplyGameplayEffectSpecToOwner); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToOwner); \
	DECLARE_FUNCTION(execK2_EndAbilityLocally); \
	DECLARE_FUNCTION(execK2_EndAbility); \
	DECLARE_FUNCTION(execSendGameplayEvent); \
	DECLARE_FUNCTION(execRemoveGrantedByEffect); \
	DECLARE_FUNCTION(execInvalidateClientPredictionKey); \
	DECLARE_FUNCTION(execGetSourceObject_BP); \
	DECLARE_FUNCTION(execGetCurrentSourceObject); \
	DECLARE_FUNCTION(execGetAbilityLevel_BP); \
	DECLARE_FUNCTION(execGetAbilityLevel); \
	DECLARE_FUNCTION(execGetCurrentMontage); \
	DECLARE_FUNCTION(execK2_CheckAbilityCost); \
	DECLARE_FUNCTION(execK2_CheckAbilityCooldown); \
	DECLARE_FUNCTION(execK2_CommitAbilityCost); \
	DECLARE_FUNCTION(execK2_CommitAbilityCooldown); \
	DECLARE_FUNCTION(execK2_CommitAbility); \
	DECLARE_FUNCTION(execSetCanBeCanceled); \
	DECLARE_FUNCTION(execK2_CancelAbility); \
	DECLARE_FUNCTION(execSetShouldBlockOtherAbilities); \
	DECLARE_FUNCTION(execGetCooldownTimeRemaining); \
	DECLARE_FUNCTION(execK2_HasAuthority); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execMakeOutgoingGameplayEffectSpec); \
	DECLARE_FUNCTION(execGetContextFromOwner); \
	DECLARE_FUNCTION(execGetGrantedByEffectContext); \
	DECLARE_FUNCTION(execGetAbilitySystemComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetOwningComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetAvatarActorFromActorInfo); \
	DECLARE_FUNCTION(execGetOwningActorFromActorInfo); \
	DECLARE_FUNCTION(execGetActorInfo);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeTargetLocationInfoFromOwnerSkeletalMeshComponent); \
	DECLARE_FUNCTION(execMakeTargetLocationInfoFromOwnerActor); \
	DECLARE_FUNCTION(execMontageStop); \
	DECLARE_FUNCTION(execMontageSetNextSectionName); \
	DECLARE_FUNCTION(execMontageJumpToSection); \
	DECLARE_FUNCTION(execEndAbilityState); \
	DECLARE_FUNCTION(execCancelTaskByInstanceName); \
	DECLARE_FUNCTION(execEndTaskByInstanceName); \
	DECLARE_FUNCTION(execConfirmTaskByInstanceName); \
	DECLARE_FUNCTION(execK2_RemoveGameplayCue); \
	DECLARE_FUNCTION(execK2_AddGameplayCueWithParams); \
	DECLARE_FUNCTION(execK2_AddGameplayCue); \
	DECLARE_FUNCTION(execK2_ExecuteGameplayCueWithParams); \
	DECLARE_FUNCTION(execK2_ExecuteGameplayCue); \
	DECLARE_FUNCTION(execBP_RemoveGameplayEffectFromOwnerWithHandle); \
	DECLARE_FUNCTION(execBP_RemoveGameplayEffectFromOwnerWithGrantedTags); \
	DECLARE_FUNCTION(execBP_RemoveGameplayEffectFromOwnerWithAssetTags); \
	DECLARE_FUNCTION(execK2_ApplyGameplayEffectSpecToTarget); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToTarget); \
	DECLARE_FUNCTION(execK2_ApplyGameplayEffectSpecToOwner); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToOwner); \
	DECLARE_FUNCTION(execK2_EndAbilityLocally); \
	DECLARE_FUNCTION(execK2_EndAbility); \
	DECLARE_FUNCTION(execSendGameplayEvent); \
	DECLARE_FUNCTION(execRemoveGrantedByEffect); \
	DECLARE_FUNCTION(execInvalidateClientPredictionKey); \
	DECLARE_FUNCTION(execGetSourceObject_BP); \
	DECLARE_FUNCTION(execGetCurrentSourceObject); \
	DECLARE_FUNCTION(execGetAbilityLevel_BP); \
	DECLARE_FUNCTION(execGetAbilityLevel); \
	DECLARE_FUNCTION(execGetCurrentMontage); \
	DECLARE_FUNCTION(execK2_CheckAbilityCost); \
	DECLARE_FUNCTION(execK2_CheckAbilityCooldown); \
	DECLARE_FUNCTION(execK2_CommitAbilityCost); \
	DECLARE_FUNCTION(execK2_CommitAbilityCooldown); \
	DECLARE_FUNCTION(execK2_CommitAbility); \
	DECLARE_FUNCTION(execSetCanBeCanceled); \
	DECLARE_FUNCTION(execK2_CancelAbility); \
	DECLARE_FUNCTION(execSetShouldBlockOtherAbilities); \
	DECLARE_FUNCTION(execGetCooldownTimeRemaining); \
	DECLARE_FUNCTION(execK2_HasAuthority); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execMakeOutgoingGameplayEffectSpec); \
	DECLARE_FUNCTION(execGetContextFromOwner); \
	DECLARE_FUNCTION(execGetGrantedByEffectContext); \
	DECLARE_FUNCTION(execGetAbilitySystemComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetOwningComponentFromActorInfo); \
	DECLARE_FUNCTION(execGetAvatarActorFromActorInfo); \
	DECLARE_FUNCTION(execGetOwningActorFromActorInfo); \
	DECLARE_FUNCTION(execGetActorInfo);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayAbility(); \
	friend struct Z_Construct_UClass_UGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UGameplayAbility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UGameplayAbility) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayAbility*>(this); }


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayAbility(); \
	friend struct Z_Construct_UClass_UGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UGameplayAbility, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UGameplayAbility) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayAbility*>(this); }


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayAbility(UGameplayAbility&&); \
	NO_API UGameplayAbility(const UGameplayAbility&); \
public: \
	NO_API virtual ~UGameplayAbility();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayAbility(UGameplayAbility&&); \
	NO_API UGameplayAbility(const UGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayAbility) \
	NO_API virtual ~UGameplayAbility();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_106_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_109_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayAbility."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
