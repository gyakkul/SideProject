// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilitySystemComponent;
class UAnimMontage;
class UAttributeSet;
class UDataTable;
class UGameplayAbility;
class UGameplayEffect;
struct FActiveGameplayEffectHandle;
struct FGameplayAbilityActivationInfo;
struct FGameplayAbilitySpecHandle;
struct FGameplayAbilityTargetDataHandle;
struct FGameplayAttribute;
struct FGameplayCueParameters;
struct FGameplayEffectContextHandle;
struct FGameplayEffectQuery;
struct FGameplayEffectSpecForRPC;
struct FGameplayEffectSpecHandle;
struct FGameplayEventData;
struct FGameplayTag;
struct FGameplayTag; 
struct FGameplayTagContainer;
struct FGameplayTagQuery;
struct FPredictionKey;
struct FServerAbilityRPCBatch;
struct FVector_NetQuantize100;
#ifdef GAMEPLAYABILITIES_AbilitySystemComponent_generated_h
#error "AbilitySystemComponent.generated.h already included, missing '#pragma once' in AbilitySystemComponent.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemComponent_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_98_DELEGATE \
static void FAbilityAbilityKey_DelegateWrapper(const FMulticastScriptDelegate& AbilityAbilityKey, int32 InputID);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_101_DELEGATE \
static void FAbilityConfirmOrCancel_DelegateWrapper(const FMulticastScriptDelegate& AbilityConfirmOrCancel);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_RPC_WRAPPERS \
	virtual bool ServerCurrentMontageSetPlayRate_Validate(UAnimMontage* , float ); \
	virtual void ServerCurrentMontageSetPlayRate_Implementation(UAnimMontage* ClientAnimMontage, float InPlayRate); \
	virtual bool ServerCurrentMontageJumpToSectionName_Validate(UAnimMontage* , FName ); \
	virtual void ServerCurrentMontageJumpToSectionName_Implementation(UAnimMontage* ClientAnimMontage, FName SectionName); \
	virtual bool ServerCurrentMontageSetNextSectionName_Validate(UAnimMontage* , float , FName , FName ); \
	virtual void ServerCurrentMontageSetNextSectionName_Implementation(UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName); \
	virtual void ClientActivateAbilitySucceedWithEventData_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); \
	virtual void ClientActivateAbilitySucceed_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey); \
	virtual void ClientActivateAbilityFailed_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, int16 PredictionKey); \
	virtual void ClientCancelAbility_Implementation(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo); \
	virtual bool ServerCancelAbility_Validate(FGameplayAbilitySpecHandle , FGameplayAbilityActivationInfo ); \
	virtual void ServerCancelAbility_Implementation(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo); \
	virtual void ClientEndAbility_Implementation(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo); \
	virtual bool ServerEndAbility_Validate(FGameplayAbilitySpecHandle , FGameplayAbilityActivationInfo , FPredictionKey ); \
	virtual void ServerEndAbility_Implementation(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey); \
	virtual void ClientTryActivateAbility_Implementation(FGameplayAbilitySpecHandle AbilityToActivate); \
	virtual bool ServerTryActivateAbilityWithEventData_Validate(FGameplayAbilitySpecHandle , bool , FPredictionKey , FGameplayEventData ); \
	virtual void ServerTryActivateAbilityWithEventData_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); \
	virtual bool ServerTryActivateAbility_Validate(FGameplayAbilitySpecHandle , bool , FPredictionKey ); \
	virtual void ServerTryActivateAbility_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey); \
	virtual bool ServerSetInputReleased_Validate(FGameplayAbilitySpecHandle ); \
	virtual void ServerSetInputReleased_Implementation(FGameplayAbilitySpecHandle AbilityHandle); \
	virtual bool ServerSetInputPressed_Validate(FGameplayAbilitySpecHandle ); \
	virtual void ServerSetInputPressed_Implementation(FGameplayAbilitySpecHandle AbilityHandle); \
	virtual bool ServerSetReplicatedTargetDataCancelled_Validate(FGameplayAbilitySpecHandle , FPredictionKey , FPredictionKey ); \
	virtual void ServerSetReplicatedTargetDataCancelled_Implementation(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); \
	virtual bool ServerSetReplicatedTargetData_Validate(FGameplayAbilitySpecHandle , FPredictionKey , FGameplayAbilityTargetDataHandle const& , FGameplayTag , FPredictionKey ); \
	virtual void ServerSetReplicatedTargetData_Implementation(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle const& ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey); \
	virtual void ClientSetReplicatedEvent_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); \
	virtual bool ServerSetReplicatedEventWithPayload_Validate(EAbilityGenericReplicatedEvent::Type , FGameplayAbilitySpecHandle , FPredictionKey , FPredictionKey , FVector_NetQuantize100 ); \
	virtual void ServerSetReplicatedEventWithPayload_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); \
	virtual bool ServerSetReplicatedEvent_Validate(EAbilityGenericReplicatedEvent::Type , FGameplayAbilitySpecHandle , FPredictionKey , FPredictionKey ); \
	virtual void ServerSetReplicatedEvent_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); \
	virtual bool ServerAbilityRPCBatch_Validate(FServerAbilityRPCBatch ); \
	virtual void ServerAbilityRPCBatch_Implementation(FServerAbilityRPCBatch BatchInfo); \
	virtual void ClientPrintDebug_Response_Implementation(TArray<FString> const& Strings, int32 GameFlags); \
	virtual bool ServerPrintDebug_RequestWithStrings_Validate(TArray<FString> const& ); \
	virtual void ServerPrintDebug_RequestWithStrings_Implementation(TArray<FString> const& Strings); \
	virtual bool ServerPrintDebug_Request_Validate(); \
	virtual void ServerPrintDebug_Request_Implementation(); \
	virtual void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Implementation(FGameplayEffectSpecForRPC const& Spec, FPredictionKey PredictionKey); \
	virtual void NetMulticast_InvokeGameplayCueAdded_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters); \
	virtual void NetMulticast_InvokeGameplayCueAdded_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); \
	virtual void NetMulticast_InvokeGameplayCuesExecuted_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCueExecuted_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCuesExecuted_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); \
	virtual void NetMulticast_InvokeGameplayCueExecuted_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); \
	virtual void NetMulticast_InvokeGameplayCueExecuted_FromSpec_Implementation(const FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); \
 \
	DECLARE_FUNCTION(execOnRep_SpawnedAttributes); \
	DECLARE_FUNCTION(execServerCurrentMontageSetPlayRate); \
	DECLARE_FUNCTION(execServerCurrentMontageJumpToSectionName); \
	DECLARE_FUNCTION(execServerCurrentMontageSetNextSectionName); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAnimMontage); \
	DECLARE_FUNCTION(execClientActivateAbilitySucceedWithEventData); \
	DECLARE_FUNCTION(execClientActivateAbilitySucceed); \
	DECLARE_FUNCTION(execClientActivateAbilityFailed); \
	DECLARE_FUNCTION(execClientCancelAbility); \
	DECLARE_FUNCTION(execServerCancelAbility); \
	DECLARE_FUNCTION(execClientEndAbility); \
	DECLARE_FUNCTION(execServerEndAbility); \
	DECLARE_FUNCTION(execClientTryActivateAbility); \
	DECLARE_FUNCTION(execServerTryActivateAbilityWithEventData); \
	DECLARE_FUNCTION(execServerTryActivateAbility); \
	DECLARE_FUNCTION(execOnRep_ActivateAbilities); \
	DECLARE_FUNCTION(execServerSetInputReleased); \
	DECLARE_FUNCTION(execServerSetInputPressed); \
	DECLARE_FUNCTION(execServerSetReplicatedTargetDataCancelled); \
	DECLARE_FUNCTION(execServerSetReplicatedTargetData); \
	DECLARE_FUNCTION(execClientSetReplicatedEvent); \
	DECLARE_FUNCTION(execServerSetReplicatedEventWithPayload); \
	DECLARE_FUNCTION(execServerSetReplicatedEvent); \
	DECLARE_FUNCTION(execOnSpawnedAttributesEndPlayed); \
	DECLARE_FUNCTION(execOnOwnerActorDestroyed); \
	DECLARE_FUNCTION(execOnAvatarActorDestroyed); \
	DECLARE_FUNCTION(execOnRep_OwningActor); \
	DECLARE_FUNCTION(execTargetCancel); \
	DECLARE_FUNCTION(execTargetConfirm); \
	DECLARE_FUNCTION(execInputCancel); \
	DECLARE_FUNCTION(execInputConfirm); \
	DECLARE_FUNCTION(execReleaseInputID); \
	DECLARE_FUNCTION(execPressInputID); \
	DECLARE_FUNCTION(execSetUserAbilityActivationInhibited); \
	DECLARE_FUNCTION(execGetUserAbilityActivationInhibited); \
	DECLARE_FUNCTION(execServerAbilityRPCBatch); \
	DECLARE_FUNCTION(execOnRep_ServerDebugString); \
	DECLARE_FUNCTION(execOnRep_ClientDebugString); \
	DECLARE_FUNCTION(execClientPrintDebug_Response); \
	DECLARE_FUNCTION(execServerPrintDebug_RequestWithStrings); \
	DECLARE_FUNCTION(execServerPrintDebug_Request); \
	DECLARE_FUNCTION(execFindAllAbilitiesWithInputID); \
	DECLARE_FUNCTION(execFindAllAbilitiesMatchingQuery); \
	DECLARE_FUNCTION(execFindAllAbilitiesWithTags); \
	DECLARE_FUNCTION(execGetAllAbilities); \
	DECLARE_FUNCTION(execTryActivateAbility); \
	DECLARE_FUNCTION(execTryActivateAbilityByClass); \
	DECLARE_FUNCTION(execTryActivateAbilitiesByTag); \
	DECLARE_FUNCTION(execClearAbility); \
	DECLARE_FUNCTION(execClearAllAbilitiesWithInputID); \
	DECLARE_FUNCTION(execClearAllAbilities); \
	DECLARE_FUNCTION(execK2_GiveAbilityAndActivateOnce); \
	DECLARE_FUNCTION(execK2_GiveAbility); \
	DECLARE_FUNCTION(execIsGameplayCueActive); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAdded_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAdded); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCuesExecuted_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueExecuted_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCuesExecuted); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueExecuted); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueExecuted_FromSpec); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithGrantedTags); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithAppliedTags); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithSourceTags); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithTags); \
	DECLARE_FUNCTION(execGetActiveEffectsWithAllTags); \
	DECLARE_FUNCTION(execGetActiveEffects); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToSelf); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToTarget); \
	DECLARE_FUNCTION(execGetGameplayTagCount); \
	DECLARE_FUNCTION(execGetGameplayEffectMagnitude); \
	DECLARE_FUNCTION(execSetActiveGameplayEffectLevelUsingQuery); \
	DECLARE_FUNCTION(execSetActiveGameplayEffectLevel); \
	DECLARE_FUNCTION(execUpdateActiveGameplayEffectSetByCallerMagnitudes); \
	DECLARE_FUNCTION(execUpdateActiveGameplayEffectSetByCallerMagnitude); \
	DECLARE_FUNCTION(execGetGameplayEffectCount_IfLoaded); \
	DECLARE_FUNCTION(execGetGameplayEffectCount); \
	DECLARE_FUNCTION(execMakeEffectContext); \
	DECLARE_FUNCTION(execMakeOutgoingSpec); \
	DECLARE_FUNCTION(execRemoveActiveGameplayEffectBySourceEffect); \
	DECLARE_FUNCTION(execRemoveActiveGameplayEffect); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectSpecToSelf); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectSpecToTarget); \
	DECLARE_FUNCTION(execGetGameplayAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeSet); \
	DECLARE_FUNCTION(execGetAllAttributes); \
	DECLARE_FUNCTION(execK2_InitStats);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerCurrentMontageSetPlayRate_Validate(UAnimMontage* , float ); \
	virtual void ServerCurrentMontageSetPlayRate_Implementation(UAnimMontage* ClientAnimMontage, float InPlayRate); \
	virtual bool ServerCurrentMontageJumpToSectionName_Validate(UAnimMontage* , FName ); \
	virtual void ServerCurrentMontageJumpToSectionName_Implementation(UAnimMontage* ClientAnimMontage, FName SectionName); \
	virtual bool ServerCurrentMontageSetNextSectionName_Validate(UAnimMontage* , float , FName , FName ); \
	virtual void ServerCurrentMontageSetNextSectionName_Implementation(UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName); \
	virtual void ClientActivateAbilitySucceedWithEventData_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); \
	virtual void ClientActivateAbilitySucceed_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey); \
	virtual void ClientActivateAbilityFailed_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, int16 PredictionKey); \
	virtual void ClientCancelAbility_Implementation(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo); \
	virtual bool ServerCancelAbility_Validate(FGameplayAbilitySpecHandle , FGameplayAbilityActivationInfo ); \
	virtual void ServerCancelAbility_Implementation(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo); \
	virtual void ClientEndAbility_Implementation(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo); \
	virtual bool ServerEndAbility_Validate(FGameplayAbilitySpecHandle , FGameplayAbilityActivationInfo , FPredictionKey ); \
	virtual void ServerEndAbility_Implementation(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey); \
	virtual void ClientTryActivateAbility_Implementation(FGameplayAbilitySpecHandle AbilityToActivate); \
	virtual bool ServerTryActivateAbilityWithEventData_Validate(FGameplayAbilitySpecHandle , bool , FPredictionKey , FGameplayEventData ); \
	virtual void ServerTryActivateAbilityWithEventData_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); \
	virtual bool ServerTryActivateAbility_Validate(FGameplayAbilitySpecHandle , bool , FPredictionKey ); \
	virtual void ServerTryActivateAbility_Implementation(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey); \
	virtual bool ServerSetInputReleased_Validate(FGameplayAbilitySpecHandle ); \
	virtual void ServerSetInputReleased_Implementation(FGameplayAbilitySpecHandle AbilityHandle); \
	virtual bool ServerSetInputPressed_Validate(FGameplayAbilitySpecHandle ); \
	virtual void ServerSetInputPressed_Implementation(FGameplayAbilitySpecHandle AbilityHandle); \
	virtual bool ServerSetReplicatedTargetDataCancelled_Validate(FGameplayAbilitySpecHandle , FPredictionKey , FPredictionKey ); \
	virtual void ServerSetReplicatedTargetDataCancelled_Implementation(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); \
	virtual bool ServerSetReplicatedTargetData_Validate(FGameplayAbilitySpecHandle , FPredictionKey , FGameplayAbilityTargetDataHandle const& , FGameplayTag , FPredictionKey ); \
	virtual void ServerSetReplicatedTargetData_Implementation(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle const& ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey); \
	virtual void ClientSetReplicatedEvent_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); \
	virtual bool ServerSetReplicatedEventWithPayload_Validate(EAbilityGenericReplicatedEvent::Type , FGameplayAbilitySpecHandle , FPredictionKey , FPredictionKey , FVector_NetQuantize100 ); \
	virtual void ServerSetReplicatedEventWithPayload_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); \
	virtual bool ServerSetReplicatedEvent_Validate(EAbilityGenericReplicatedEvent::Type , FGameplayAbilitySpecHandle , FPredictionKey , FPredictionKey ); \
	virtual void ServerSetReplicatedEvent_Implementation(EAbilityGenericReplicatedEvent::Type EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); \
	virtual bool ServerAbilityRPCBatch_Validate(FServerAbilityRPCBatch ); \
	virtual void ServerAbilityRPCBatch_Implementation(FServerAbilityRPCBatch BatchInfo); \
	virtual void ClientPrintDebug_Response_Implementation(TArray<FString> const& Strings, int32 GameFlags); \
	virtual bool ServerPrintDebug_RequestWithStrings_Validate(TArray<FString> const& ); \
	virtual void ServerPrintDebug_RequestWithStrings_Implementation(TArray<FString> const& Strings); \
	virtual bool ServerPrintDebug_Request_Validate(); \
	virtual void ServerPrintDebug_Request_Implementation(); \
	virtual void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Implementation(FGameplayEffectSpecForRPC const& Spec, FPredictionKey PredictionKey); \
	virtual void NetMulticast_InvokeGameplayCueAdded_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters); \
	virtual void NetMulticast_InvokeGameplayCueAdded_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); \
	virtual void NetMulticast_InvokeGameplayCuesExecuted_WithParams_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCueExecuted_WithParams_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); \
	virtual void NetMulticast_InvokeGameplayCuesExecuted_Implementation(const FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); \
	virtual void NetMulticast_InvokeGameplayCueExecuted_Implementation(const FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); \
	virtual void NetMulticast_InvokeGameplayCueExecuted_FromSpec_Implementation(const FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); \
 \
	DECLARE_FUNCTION(execOnRep_SpawnedAttributes); \
	DECLARE_FUNCTION(execServerCurrentMontageSetPlayRate); \
	DECLARE_FUNCTION(execServerCurrentMontageJumpToSectionName); \
	DECLARE_FUNCTION(execServerCurrentMontageSetNextSectionName); \
	DECLARE_FUNCTION(execOnRep_ReplicatedAnimMontage); \
	DECLARE_FUNCTION(execClientActivateAbilitySucceedWithEventData); \
	DECLARE_FUNCTION(execClientActivateAbilitySucceed); \
	DECLARE_FUNCTION(execClientActivateAbilityFailed); \
	DECLARE_FUNCTION(execClientCancelAbility); \
	DECLARE_FUNCTION(execServerCancelAbility); \
	DECLARE_FUNCTION(execClientEndAbility); \
	DECLARE_FUNCTION(execServerEndAbility); \
	DECLARE_FUNCTION(execClientTryActivateAbility); \
	DECLARE_FUNCTION(execServerTryActivateAbilityWithEventData); \
	DECLARE_FUNCTION(execServerTryActivateAbility); \
	DECLARE_FUNCTION(execOnRep_ActivateAbilities); \
	DECLARE_FUNCTION(execServerSetInputReleased); \
	DECLARE_FUNCTION(execServerSetInputPressed); \
	DECLARE_FUNCTION(execServerSetReplicatedTargetDataCancelled); \
	DECLARE_FUNCTION(execServerSetReplicatedTargetData); \
	DECLARE_FUNCTION(execClientSetReplicatedEvent); \
	DECLARE_FUNCTION(execServerSetReplicatedEventWithPayload); \
	DECLARE_FUNCTION(execServerSetReplicatedEvent); \
	DECLARE_FUNCTION(execOnSpawnedAttributesEndPlayed); \
	DECLARE_FUNCTION(execOnOwnerActorDestroyed); \
	DECLARE_FUNCTION(execOnAvatarActorDestroyed); \
	DECLARE_FUNCTION(execOnRep_OwningActor); \
	DECLARE_FUNCTION(execTargetCancel); \
	DECLARE_FUNCTION(execTargetConfirm); \
	DECLARE_FUNCTION(execInputCancel); \
	DECLARE_FUNCTION(execInputConfirm); \
	DECLARE_FUNCTION(execReleaseInputID); \
	DECLARE_FUNCTION(execPressInputID); \
	DECLARE_FUNCTION(execSetUserAbilityActivationInhibited); \
	DECLARE_FUNCTION(execGetUserAbilityActivationInhibited); \
	DECLARE_FUNCTION(execServerAbilityRPCBatch); \
	DECLARE_FUNCTION(execOnRep_ServerDebugString); \
	DECLARE_FUNCTION(execOnRep_ClientDebugString); \
	DECLARE_FUNCTION(execClientPrintDebug_Response); \
	DECLARE_FUNCTION(execServerPrintDebug_RequestWithStrings); \
	DECLARE_FUNCTION(execServerPrintDebug_Request); \
	DECLARE_FUNCTION(execFindAllAbilitiesWithInputID); \
	DECLARE_FUNCTION(execFindAllAbilitiesMatchingQuery); \
	DECLARE_FUNCTION(execFindAllAbilitiesWithTags); \
	DECLARE_FUNCTION(execGetAllAbilities); \
	DECLARE_FUNCTION(execTryActivateAbility); \
	DECLARE_FUNCTION(execTryActivateAbilityByClass); \
	DECLARE_FUNCTION(execTryActivateAbilitiesByTag); \
	DECLARE_FUNCTION(execClearAbility); \
	DECLARE_FUNCTION(execClearAllAbilitiesWithInputID); \
	DECLARE_FUNCTION(execClearAllAbilities); \
	DECLARE_FUNCTION(execK2_GiveAbilityAndActivateOnce); \
	DECLARE_FUNCTION(execK2_GiveAbility); \
	DECLARE_FUNCTION(execIsGameplayCueActive); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAdded_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueAdded); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCuesExecuted_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueExecuted_WithParams); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCuesExecuted); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueExecuted); \
	DECLARE_FUNCTION(execNetMulticast_InvokeGameplayCueExecuted_FromSpec); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithGrantedTags); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithAppliedTags); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithSourceTags); \
	DECLARE_FUNCTION(execRemoveActiveEffectsWithTags); \
	DECLARE_FUNCTION(execGetActiveEffectsWithAllTags); \
	DECLARE_FUNCTION(execGetActiveEffects); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToSelf); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectToTarget); \
	DECLARE_FUNCTION(execGetGameplayTagCount); \
	DECLARE_FUNCTION(execGetGameplayEffectMagnitude); \
	DECLARE_FUNCTION(execSetActiveGameplayEffectLevelUsingQuery); \
	DECLARE_FUNCTION(execSetActiveGameplayEffectLevel); \
	DECLARE_FUNCTION(execUpdateActiveGameplayEffectSetByCallerMagnitudes); \
	DECLARE_FUNCTION(execUpdateActiveGameplayEffectSetByCallerMagnitude); \
	DECLARE_FUNCTION(execGetGameplayEffectCount_IfLoaded); \
	DECLARE_FUNCTION(execGetGameplayEffectCount); \
	DECLARE_FUNCTION(execMakeEffectContext); \
	DECLARE_FUNCTION(execMakeOutgoingSpec); \
	DECLARE_FUNCTION(execRemoveActiveGameplayEffectBySourceEffect); \
	DECLARE_FUNCTION(execRemoveActiveGameplayEffect); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectSpecToSelf); \
	DECLARE_FUNCTION(execBP_ApplyGameplayEffectSpecToTarget); \
	DECLARE_FUNCTION(execGetGameplayAttributeValue); \
	DECLARE_FUNCTION(execGetAttributeSet); \
	DECLARE_FUNCTION(execGetAllAttributes); \
	DECLARE_FUNCTION(execK2_InitStats);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UAbilitySystemComponent, UGameplayTasksComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySystemComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAbilitySystemComponent*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ClientDebugStrings=NETFIELD_REP_START, \
		ServerDebugStrings, \
		OwnerActor, \
		AvatarActor, \
		ActivatableAbilities, \
		RepAnimMontageInfo, \
		ActiveGameplayEffects, \
		ActiveGameplayCues, \
		MinimalReplicationGameplayCues, \
		BlockedAbilityBindings, \
		MinimalReplicationTags, \
		SpawnedAttributes, \
		ReplicatedLooseTags, \
		ReplicatedPredictionKeyMap, \
		NETFIELD_REP_END=ReplicatedPredictionKeyMap	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_INCLASS \
private: \
	static void StaticRegisterNativesUAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UAbilitySystemComponent, UGameplayTasksComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySystemComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAbilitySystemComponent*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ClientDebugStrings=NETFIELD_REP_START, \
		ServerDebugStrings, \
		OwnerActor, \
		AvatarActor, \
		ActivatableAbilities, \
		RepAnimMontageInfo, \
		ActiveGameplayEffects, \
		ActiveGameplayCues, \
		MinimalReplicationGameplayCues, \
		BlockedAbilityBindings, \
		MinimalReplicationTags, \
		SpawnedAttributes, \
		ReplicatedLooseTags, \
		ReplicatedPredictionKeyMap, \
		NETFIELD_REP_END=ReplicatedPredictionKeyMap	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySystemComponent(UAbilitySystemComponent&&); \
	NO_API UAbilitySystemComponent(const UAbilitySystemComponent&); \
public: \
	NO_API virtual ~UAbilitySystemComponent();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySystemComponent(UAbilitySystemComponent&&); \
	NO_API UAbilitySystemComponent(const UAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemComponent) \
	NO_API virtual ~UAbilitySystemComponent();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_92_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h_95_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilitySystemComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemComponent_h


#define FOREACH_ENUM_EGAMEPLAYEFFECTREPLICATIONMODE(op) \
	op(EGameplayEffectReplicationMode::Minimal) \
	op(EGameplayEffectReplicationMode::Mixed) \
	op(EGameplayEffectReplicationMode::Full) 

enum class EGameplayEffectReplicationMode : uint8;
template<> struct TIsUEnumClass<EGameplayEffectReplicationMode> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectReplicationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
