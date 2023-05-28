// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystemBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IGameplayCueInterface;
class UAbilitySystemComponent;
class UGameplayAbility;
class UGameplayEffect;
class UGameplayEffectUIData;
class UObject;
class UPhysicalMaterial;
class USceneComponent;
struct FActiveGameplayEffectHandle;
struct FGameplayAbilitySpecHandle;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayAbilityTargetingLocationInfo;
struct FGameplayAttribute;
struct FGameplayCueParameters;
struct FGameplayEffectContextHandle;
struct FGameplayEffectSpecHandle;
struct FGameplayEventData;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FGameplayTagRequirements;
struct FGameplayTargetDataFilter;
struct FGameplayTargetDataFilterHandle;
struct FHitResult;
#ifdef GAMEPLAYABILITIES_AbilitySystemBlueprintLibrary_generated_h
#error "AbilitySystemBlueprintLibrary.generated.h already included, missing '#pragma once' in AbilitySystemBlueprintLibrary.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotEqual_GameplayAbilitySpecHandle); \
	DECLARE_FUNCTION(execEqualEqual_GameplayAbilitySpecHandle); \
	DECLARE_FUNCTION(execGetGameplayAbilityFromSpecHandle); \
	DECLARE_FUNCTION(execGetGameplayEffectFromActiveEffectHandle); \
	DECLARE_FUNCTION(execNotEqual_ActiveGameplayEffectHandle); \
	DECLARE_FUNCTION(execEqualEqual_ActiveGameplayEffectHandle); \
	DECLARE_FUNCTION(execGetGameplayEffectUIData); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectDebugString); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectRemainingDuration); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectTotalDuration); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectExpectedEndTime); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectStartTime); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectStackLimitCount); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectStackCount); \
	DECLARE_FUNCTION(execGetModifiedAttributeMagnitude); \
	DECLARE_FUNCTION(execRemoveLooseGameplayTags); \
	DECLARE_FUNCTION(execAddLooseGameplayTags); \
	DECLARE_FUNCTION(execGetAllLinkedGameplayEffectSpecHandles); \
	DECLARE_FUNCTION(execGetEffectContext); \
	DECLARE_FUNCTION(execSetStackCountToMax); \
	DECLARE_FUNCTION(execSetStackCount); \
	DECLARE_FUNCTION(execAddLinkedGameplayEffect); \
	DECLARE_FUNCTION(execAddLinkedGameplayEffectSpec); \
	DECLARE_FUNCTION(execAddAssetTags); \
	DECLARE_FUNCTION(execAddAssetTag); \
	DECLARE_FUNCTION(execAddGrantedTags); \
	DECLARE_FUNCTION(execAddGrantedTag); \
	DECLARE_FUNCTION(execSetDuration); \
	DECLARE_FUNCTION(execAssignTagSetByCallerMagnitude); \
	DECLARE_FUNCTION(execAssignSetByCallerMagnitude); \
	DECLARE_FUNCTION(execBreakGameplayCueParameters); \
	DECLARE_FUNCTION(execMakeGameplayCueParameters); \
	DECLARE_FUNCTION(execDoesGameplayCueMeetTagRequirements); \
	DECLARE_FUNCTION(execGetGameplayCueDirection); \
	DECLARE_FUNCTION(execGetGameplayCueEndLocationAndNormal); \
	DECLARE_FUNCTION(execGetOrigin); \
	DECLARE_FUNCTION(execGetInstigatorTransform); \
	DECLARE_FUNCTION(execGetInstigatorActor); \
	DECLARE_FUNCTION(execForwardGameplayCueToTarget); \
	DECLARE_FUNCTION(execHasHitResult); \
	DECLARE_FUNCTION(execGetHitResult); \
	DECLARE_FUNCTION(execGetActorByIndex); \
	DECLARE_FUNCTION(execGetActorCount); \
	DECLARE_FUNCTION(execIsInstigatorLocallyControlledPlayer); \
	DECLARE_FUNCTION(execIsInstigatorLocallyControlled); \
	DECLARE_FUNCTION(execEffectContextGetSourceObject); \
	DECLARE_FUNCTION(execEffectContextGetEffectCauser); \
	DECLARE_FUNCTION(execEffectContextGetOriginalInstigatorActor); \
	DECLARE_FUNCTION(execEffectContextGetInstigatorActor); \
	DECLARE_FUNCTION(execEffectContextSetOrigin); \
	DECLARE_FUNCTION(execEffectContextGetOrigin); \
	DECLARE_FUNCTION(execEffectContextAddHitResult); \
	DECLARE_FUNCTION(execEffectContextHasHitResult); \
	DECLARE_FUNCTION(execEffectContextGetHitResult); \
	DECLARE_FUNCTION(execEffectContextIsInstigatorLocallyControlled); \
	DECLARE_FUNCTION(execEffectContextIsValid); \
	DECLARE_FUNCTION(execGetTargetDataEndPointTransform); \
	DECLARE_FUNCTION(execGetTargetDataEndPoint); \
	DECLARE_FUNCTION(execTargetDataHasEndPoint); \
	DECLARE_FUNCTION(execGetTargetDataOrigin); \
	DECLARE_FUNCTION(execTargetDataHasOrigin); \
	DECLARE_FUNCTION(execGetHitResultFromTargetData); \
	DECLARE_FUNCTION(execTargetDataHasHitResult); \
	DECLARE_FUNCTION(execTargetDataHasActor); \
	DECLARE_FUNCTION(execDoesTargetDataContainActor); \
	DECLARE_FUNCTION(execGetAllActorsFromTargetData); \
	DECLARE_FUNCTION(execGetActorsFromTargetData); \
	DECLARE_FUNCTION(execCloneSpecHandle); \
	DECLARE_FUNCTION(execMakeSpecHandle); \
	DECLARE_FUNCTION(execMakeFilterHandle); \
	DECLARE_FUNCTION(execFilterTargetData); \
	DECLARE_FUNCTION(execAbilityTargetDataFromActorArray); \
	DECLARE_FUNCTION(execAbilityTargetDataFromActor); \
	DECLARE_FUNCTION(execGetDataCountFromTargetData); \
	DECLARE_FUNCTION(execAbilityTargetDataFromHitResult); \
	DECLARE_FUNCTION(execAbilityTargetDataFromLocations); \
	DECLARE_FUNCTION(execAppendTargetDataHandle); \
	DECLARE_FUNCTION(execGetDebugStringFromGameplayAttribute); \
	DECLARE_FUNCTION(execNotEqual_GameplayAttributeGameplayAttribute); \
	DECLARE_FUNCTION(execEqualEqual_GameplayAttributeGameplayAttribute); \
	DECLARE_FUNCTION(execEvaluateAttributeValueWithTagsAndBase); \
	DECLARE_FUNCTION(execEvaluateAttributeValueWithTags); \
	DECLARE_FUNCTION(execGetFloatAttributeBaseFromAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetFloatAttributeBase); \
	DECLARE_FUNCTION(execGetFloatAttributeFromAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetFloatAttribute); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execSendGameplayEventToActor); \
	DECLARE_FUNCTION(execGetAbilitySystemComponent);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotEqual_GameplayAbilitySpecHandle); \
	DECLARE_FUNCTION(execEqualEqual_GameplayAbilitySpecHandle); \
	DECLARE_FUNCTION(execGetGameplayAbilityFromSpecHandle); \
	DECLARE_FUNCTION(execGetGameplayEffectFromActiveEffectHandle); \
	DECLARE_FUNCTION(execNotEqual_ActiveGameplayEffectHandle); \
	DECLARE_FUNCTION(execEqualEqual_ActiveGameplayEffectHandle); \
	DECLARE_FUNCTION(execGetGameplayEffectUIData); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectDebugString); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectRemainingDuration); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectTotalDuration); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectExpectedEndTime); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectStartTime); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectStackLimitCount); \
	DECLARE_FUNCTION(execGetActiveGameplayEffectStackCount); \
	DECLARE_FUNCTION(execGetModifiedAttributeMagnitude); \
	DECLARE_FUNCTION(execRemoveLooseGameplayTags); \
	DECLARE_FUNCTION(execAddLooseGameplayTags); \
	DECLARE_FUNCTION(execGetAllLinkedGameplayEffectSpecHandles); \
	DECLARE_FUNCTION(execGetEffectContext); \
	DECLARE_FUNCTION(execSetStackCountToMax); \
	DECLARE_FUNCTION(execSetStackCount); \
	DECLARE_FUNCTION(execAddLinkedGameplayEffect); \
	DECLARE_FUNCTION(execAddLinkedGameplayEffectSpec); \
	DECLARE_FUNCTION(execAddAssetTags); \
	DECLARE_FUNCTION(execAddAssetTag); \
	DECLARE_FUNCTION(execAddGrantedTags); \
	DECLARE_FUNCTION(execAddGrantedTag); \
	DECLARE_FUNCTION(execSetDuration); \
	DECLARE_FUNCTION(execAssignTagSetByCallerMagnitude); \
	DECLARE_FUNCTION(execAssignSetByCallerMagnitude); \
	DECLARE_FUNCTION(execBreakGameplayCueParameters); \
	DECLARE_FUNCTION(execMakeGameplayCueParameters); \
	DECLARE_FUNCTION(execDoesGameplayCueMeetTagRequirements); \
	DECLARE_FUNCTION(execGetGameplayCueDirection); \
	DECLARE_FUNCTION(execGetGameplayCueEndLocationAndNormal); \
	DECLARE_FUNCTION(execGetOrigin); \
	DECLARE_FUNCTION(execGetInstigatorTransform); \
	DECLARE_FUNCTION(execGetInstigatorActor); \
	DECLARE_FUNCTION(execForwardGameplayCueToTarget); \
	DECLARE_FUNCTION(execHasHitResult); \
	DECLARE_FUNCTION(execGetHitResult); \
	DECLARE_FUNCTION(execGetActorByIndex); \
	DECLARE_FUNCTION(execGetActorCount); \
	DECLARE_FUNCTION(execIsInstigatorLocallyControlledPlayer); \
	DECLARE_FUNCTION(execIsInstigatorLocallyControlled); \
	DECLARE_FUNCTION(execEffectContextGetSourceObject); \
	DECLARE_FUNCTION(execEffectContextGetEffectCauser); \
	DECLARE_FUNCTION(execEffectContextGetOriginalInstigatorActor); \
	DECLARE_FUNCTION(execEffectContextGetInstigatorActor); \
	DECLARE_FUNCTION(execEffectContextSetOrigin); \
	DECLARE_FUNCTION(execEffectContextGetOrigin); \
	DECLARE_FUNCTION(execEffectContextAddHitResult); \
	DECLARE_FUNCTION(execEffectContextHasHitResult); \
	DECLARE_FUNCTION(execEffectContextGetHitResult); \
	DECLARE_FUNCTION(execEffectContextIsInstigatorLocallyControlled); \
	DECLARE_FUNCTION(execEffectContextIsValid); \
	DECLARE_FUNCTION(execGetTargetDataEndPointTransform); \
	DECLARE_FUNCTION(execGetTargetDataEndPoint); \
	DECLARE_FUNCTION(execTargetDataHasEndPoint); \
	DECLARE_FUNCTION(execGetTargetDataOrigin); \
	DECLARE_FUNCTION(execTargetDataHasOrigin); \
	DECLARE_FUNCTION(execGetHitResultFromTargetData); \
	DECLARE_FUNCTION(execTargetDataHasHitResult); \
	DECLARE_FUNCTION(execTargetDataHasActor); \
	DECLARE_FUNCTION(execDoesTargetDataContainActor); \
	DECLARE_FUNCTION(execGetAllActorsFromTargetData); \
	DECLARE_FUNCTION(execGetActorsFromTargetData); \
	DECLARE_FUNCTION(execCloneSpecHandle); \
	DECLARE_FUNCTION(execMakeSpecHandle); \
	DECLARE_FUNCTION(execMakeFilterHandle); \
	DECLARE_FUNCTION(execFilterTargetData); \
	DECLARE_FUNCTION(execAbilityTargetDataFromActorArray); \
	DECLARE_FUNCTION(execAbilityTargetDataFromActor); \
	DECLARE_FUNCTION(execGetDataCountFromTargetData); \
	DECLARE_FUNCTION(execAbilityTargetDataFromHitResult); \
	DECLARE_FUNCTION(execAbilityTargetDataFromLocations); \
	DECLARE_FUNCTION(execAppendTargetDataHandle); \
	DECLARE_FUNCTION(execGetDebugStringFromGameplayAttribute); \
	DECLARE_FUNCTION(execNotEqual_GameplayAttributeGameplayAttribute); \
	DECLARE_FUNCTION(execEqualEqual_GameplayAttributeGameplayAttribute); \
	DECLARE_FUNCTION(execEvaluateAttributeValueWithTagsAndBase); \
	DECLARE_FUNCTION(execEvaluateAttributeValueWithTags); \
	DECLARE_FUNCTION(execGetFloatAttributeBaseFromAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetFloatAttributeBase); \
	DECLARE_FUNCTION(execGetFloatAttributeFromAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetFloatAttribute); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execSendGameplayEventToActor); \
	DECLARE_FUNCTION(execGetAbilitySystemComponent);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitySystemBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAbilitySystemBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAbilitySystemBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySystemBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAbilitySystemBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAbilitySystemBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAbilitySystemBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySystemBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySystemBlueprintLibrary(UAbilitySystemBlueprintLibrary&&); \
	NO_API UAbilitySystemBlueprintLibrary(const UAbilitySystemBlueprintLibrary&); \
public: \
	NO_API virtual ~UAbilitySystemBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySystemBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySystemBlueprintLibrary(UAbilitySystemBlueprintLibrary&&); \
	NO_API UAbilitySystemBlueprintLibrary(const UAbilitySystemBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemBlueprintLibrary) \
	NO_API virtual ~UAbilitySystemBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilitySystemBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilitySystemBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
