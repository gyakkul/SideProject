// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/GameplayAbility.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpec.h"
#include "GameplayAbilitySpecHandle.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbility() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityTriggerData();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityActorInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueParameters();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityTriggerData;
class UScriptStruct* FAbilityTriggerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityTriggerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityTriggerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityTriggerData, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("AbilityTriggerData"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityTriggerData.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FAbilityTriggerData>()
{
	return FAbilityTriggerData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAbilityTriggerData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerSource_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure that defines how an ability will be triggered by external events */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Structure that defines how an ability will be triggered by external events" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityTriggerData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::NewProp_TriggerTag_MetaData[] = {
		{ "Categories", "TriggerTagCategory" },
		{ "Category", "TriggerData" },
		{ "Comment", "/** The tag to respond to */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "The tag to respond to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::NewProp_TriggerTag = { "TriggerTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbilityTriggerData, TriggerTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::NewProp_TriggerTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::NewProp_TriggerTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::NewProp_TriggerSource_MetaData[] = {
		{ "Category", "TriggerData" },
		{ "Comment", "/** The type of trigger to respond to */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "The type of trigger to respond to" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::NewProp_TriggerSource = { "TriggerSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAbilityTriggerData, TriggerSource), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityTriggerSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::NewProp_TriggerSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::NewProp_TriggerSource_MetaData)) }; // 3729863179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::NewProp_TriggerTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::NewProp_TriggerSource,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"AbilityTriggerData",
		sizeof(FAbilityTriggerData),
		alignof(FAbilityTriggerData),
		Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAbilityTriggerData()
	{
		if (!Z_Registration_Info_UScriptStruct_AbilityTriggerData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityTriggerData.InnerSingleton, Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AbilityTriggerData.InnerSingleton;
	}
	DEFINE_FUNCTION(UGameplayAbility::execMakeTargetLocationInfoFromOwnerSkeletalMeshComponent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAbilityTargetingLocationInfo*)Z_Param__Result=P_THIS->MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(Z_Param_SocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execMakeTargetLocationInfoFromOwnerActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAbilityTargetingLocationInfo*)Z_Param__Result=P_THIS->MakeTargetLocationInfoFromOwnerActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execMontageStop)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_OverrideBlendOutTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MontageStop(Z_Param_OverrideBlendOutTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execMontageSetNextSectionName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_FromSectionName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ToSectionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MontageSetNextSectionName(Z_Param_FromSectionName,Z_Param_ToSectionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execMontageJumpToSection)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SectionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MontageJumpToSection(Z_Param_SectionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execEndAbilityState)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalStateNameToEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndAbilityState(Z_Param_OptionalStateNameToEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execCancelTaskByInstanceName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InstanceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelTaskByInstanceName(Z_Param_InstanceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execEndTaskByInstanceName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InstanceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTaskByInstanceName(Z_Param_InstanceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execConfirmTaskByInstanceName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InstanceName);
		P_GET_UBOOL(Z_Param_bEndTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConfirmTaskByInstanceName(Z_Param_InstanceName,Z_Param_bEndTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_RemoveGameplayCue)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_RemoveGameplayCue(Z_Param_GameplayCueTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_AddGameplayCueWithParams)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_GameplayCueParameter);
		P_GET_UBOOL(Z_Param_bRemoveOnAbilityEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddGameplayCueWithParams(Z_Param_GameplayCueTag,Z_Param_Out_GameplayCueParameter,Z_Param_bRemoveOnAbilityEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_AddGameplayCue)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT(FGameplayEffectContextHandle,Z_Param_Context);
		P_GET_UBOOL(Z_Param_bRemoveOnAbilityEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_AddGameplayCue(Z_Param_GameplayCueTag,Z_Param_Context,Z_Param_bRemoveOnAbilityEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_ExecuteGameplayCueWithParams)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT_REF(FGameplayCueParameters,Z_Param_Out_GameplayCueParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_ExecuteGameplayCueWithParams(Z_Param_GameplayCueTag,Z_Param_Out_GameplayCueParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_ExecuteGameplayCue)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayCueTag);
		P_GET_STRUCT(FGameplayEffectContextHandle,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_ExecuteGameplayCue(Z_Param_GameplayCueTag,Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execBP_RemoveGameplayEffectFromOwnerWithHandle)
	{
		P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_StacksToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_RemoveGameplayEffectFromOwnerWithHandle(Z_Param_Handle,Z_Param_StacksToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execBP_RemoveGameplayEffectFromOwnerWithGrantedTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_WithGrantedTags);
		P_GET_PROPERTY(FIntProperty,Z_Param_StacksToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_RemoveGameplayEffectFromOwnerWithGrantedTags(Z_Param_WithGrantedTags,Z_Param_StacksToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execBP_RemoveGameplayEffectFromOwnerWithAssetTags)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_WithAssetTags);
		P_GET_PROPERTY(FIntProperty,Z_Param_StacksToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_RemoveGameplayEffectFromOwnerWithAssetTags(Z_Param_WithAssetTags,Z_Param_StacksToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_ApplyGameplayEffectSpecToTarget)
	{
		P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_EffectSpecHandle);
		P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=P_THIS->K2_ApplyGameplayEffectSpecToTarget(Z_Param_EffectSpecHandle,Z_Param_TargetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execBP_ApplyGameplayEffectToTarget)
	{
		P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData);
		P_GET_OBJECT(UClass,Z_Param_GameplayEffectClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_GameplayEffectLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_Stacks);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FActiveGameplayEffectHandle>*)Z_Param__Result=P_THIS->BP_ApplyGameplayEffectToTarget(Z_Param_TargetData,Z_Param_GameplayEffectClass,Z_Param_GameplayEffectLevel,Z_Param_Stacks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_ApplyGameplayEffectSpecToOwner)
	{
		P_GET_STRUCT(FGameplayEffectSpecHandle,Z_Param_EffectSpecHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FActiveGameplayEffectHandle*)Z_Param__Result=P_THIS->K2_ApplyGameplayEffectSpecToOwner(Z_Param_EffectSpecHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execBP_ApplyGameplayEffectToOwner)
	{
		P_GET_OBJECT(UClass,Z_Param_GameplayEffectClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_GameplayEffectLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_Stacks);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FActiveGameplayEffectHandle*)Z_Param__Result=P_THIS->BP_ApplyGameplayEffectToOwner(Z_Param_GameplayEffectClass,Z_Param_GameplayEffectLevel,Z_Param_Stacks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_EndAbilityLocally)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_EndAbilityLocally();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_EndAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_EndAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execSendGameplayEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_STRUCT(FGameplayEventData,Z_Param_Payload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendGameplayEvent(Z_Param_EventTag,Z_Param_Payload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execRemoveGrantedByEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGrantedByEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execInvalidateClientPredictionKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvalidateClientPredictionKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execGetSourceObject_BP)
	{
		P_GET_STRUCT(FGameplayAbilitySpecHandle,Z_Param_Handle);
		P_GET_STRUCT_REF(FGameplayAbilityActorInfo,Z_Param_Out_ActorInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetSourceObject_BP(Z_Param_Handle,Z_Param_Out_ActorInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execGetCurrentSourceObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetCurrentSourceObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execGetAbilityLevel_BP)
	{
		P_GET_STRUCT(FGameplayAbilitySpecHandle,Z_Param_Handle);
		P_GET_STRUCT_REF(FGameplayAbilityActorInfo,Z_Param_Out_ActorInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAbilityLevel_BP(Z_Param_Handle,Z_Param_Out_ActorInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execGetAbilityLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAbilityLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execGetCurrentMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetCurrentMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_CheckAbilityCost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_CheckAbilityCost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_CheckAbilityCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_CheckAbilityCooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_CommitAbilityCost)
	{
		P_GET_UBOOL(Z_Param_BroadcastCommitEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_CommitAbilityCost(Z_Param_BroadcastCommitEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_CommitAbilityCooldown)
	{
		P_GET_UBOOL(Z_Param_BroadcastCommitEvent);
		P_GET_UBOOL(Z_Param_ForceCooldown);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_CommitAbilityCooldown(Z_Param_BroadcastCommitEvent,Z_Param_ForceCooldown);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_CommitAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_CommitAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execSetCanBeCanceled)
	{
		P_GET_UBOOL(Z_Param_bCanBeCanceled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanBeCanceled(Z_Param_bCanBeCanceled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_CancelAbility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_CancelAbility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execSetShouldBlockOtherAbilities)
	{
		P_GET_UBOOL(Z_Param_bShouldBlockAbilities);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldBlockOtherAbilities(Z_Param_bShouldBlockAbilities);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execGetCooldownTimeRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCooldownTimeRemaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execK2_HasAuthority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_HasAuthority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execIsLocallyControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execMakeOutgoingGameplayEffectSpec)
	{
		P_GET_OBJECT(UClass,Z_Param_GameplayEffectClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Level);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayEffectSpecHandle*)Z_Param__Result=P_THIS->MakeOutgoingGameplayEffectSpec(Z_Param_GameplayEffectClass,Z_Param_Level);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execGetContextFromOwner)
	{
		P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_OptionalTargetData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayEffectContextHandle*)Z_Param__Result=P_THIS->GetContextFromOwner(Z_Param_OptionalTargetData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execGetGrantedByEffectContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayEffectContextHandle*)Z_Param__Result=P_THIS->GetGrantedByEffectContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execGetAbilitySystemComponentFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponentFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execGetOwningComponentFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetOwningComponentFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execGetAvatarActorFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetAvatarActorFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execGetOwningActorFromActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwningActorFromActorInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayAbility::execGetActorInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayAbilityActorInfo*)Z_Param__Result=P_THIS->GetActorInfo();
		P_NATIVE_END;
	}
	struct GameplayAbility_eventK2_ActivateAbilityFromEvent_Parms
	{
		FGameplayEventData EventData;
	};
	struct GameplayAbility_eventK2_CanActivateAbility_Parms
	{
		FGameplayAbilityActorInfo ActorInfo;
		FGameplayAbilitySpecHandle Handle;
		FGameplayTagContainer RelevantTags;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GameplayAbility_eventK2_CanActivateAbility_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct GameplayAbility_eventK2_OnEndAbility_Parms
	{
		bool bWasCancelled;
	};
	struct GameplayAbility_eventK2_ShouldAbilityRespondToEvent_Parms
	{
		FGameplayAbilityActorInfo ActorInfo;
		FGameplayEventData Payload;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		GameplayAbility_eventK2_ShouldAbilityRespondToEvent_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UGameplayAbility_K2_ActivateAbility = FName(TEXT("K2_ActivateAbility"));
	void UGameplayAbility::K2_ActivateAbility()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameplayAbility_K2_ActivateAbility),NULL);
	}
	static FName NAME_UGameplayAbility_K2_ActivateAbilityFromEvent = FName(TEXT("K2_ActivateAbilityFromEvent"));
	void UGameplayAbility::K2_ActivateAbilityFromEvent(FGameplayEventData const& EventData)
	{
		GameplayAbility_eventK2_ActivateAbilityFromEvent_Parms Parms;
		Parms.EventData=EventData;
		ProcessEvent(FindFunctionChecked(NAME_UGameplayAbility_K2_ActivateAbilityFromEvent),&Parms);
	}
	static FName NAME_UGameplayAbility_K2_CanActivateAbility = FName(TEXT("K2_CanActivateAbility"));
	bool UGameplayAbility::K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, const FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags) const
	{
		GameplayAbility_eventK2_CanActivateAbility_Parms Parms;
		Parms.ActorInfo=ActorInfo;
		Parms.Handle=Handle;
		Parms.RelevantTags=RelevantTags;
		const_cast<UGameplayAbility*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayAbility_K2_CanActivateAbility),&Parms);
		RelevantTags=Parms.RelevantTags;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGameplayAbility_K2_CommitExecute = FName(TEXT("K2_CommitExecute"));
	void UGameplayAbility::K2_CommitExecute()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameplayAbility_K2_CommitExecute),NULL);
	}
	static FName NAME_UGameplayAbility_K2_OnEndAbility = FName(TEXT("K2_OnEndAbility"));
	void UGameplayAbility::K2_OnEndAbility(bool bWasCancelled)
	{
		GameplayAbility_eventK2_OnEndAbility_Parms Parms;
		Parms.bWasCancelled=bWasCancelled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UGameplayAbility_K2_OnEndAbility),&Parms);
	}
	static FName NAME_UGameplayAbility_K2_ShouldAbilityRespondToEvent = FName(TEXT("K2_ShouldAbilityRespondToEvent"));
	bool UGameplayAbility::K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload) const
	{
		GameplayAbility_eventK2_ShouldAbilityRespondToEvent_Parms Parms;
		Parms.ActorInfo=ActorInfo;
		Parms.Payload=Payload;
		const_cast<UGameplayAbility*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayAbility_K2_ShouldAbilityRespondToEvent),&Parms);
		return !!Parms.ReturnValue;
	}
	void UGameplayAbility::StaticRegisterNativesUGameplayAbility()
	{
		UClass* Class = UGameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_ApplyGameplayEffectToOwner", &UGameplayAbility::execBP_ApplyGameplayEffectToOwner },
			{ "BP_ApplyGameplayEffectToTarget", &UGameplayAbility::execBP_ApplyGameplayEffectToTarget },
			{ "BP_RemoveGameplayEffectFromOwnerWithAssetTags", &UGameplayAbility::execBP_RemoveGameplayEffectFromOwnerWithAssetTags },
			{ "BP_RemoveGameplayEffectFromOwnerWithGrantedTags", &UGameplayAbility::execBP_RemoveGameplayEffectFromOwnerWithGrantedTags },
			{ "BP_RemoveGameplayEffectFromOwnerWithHandle", &UGameplayAbility::execBP_RemoveGameplayEffectFromOwnerWithHandle },
			{ "CancelTaskByInstanceName", &UGameplayAbility::execCancelTaskByInstanceName },
			{ "ConfirmTaskByInstanceName", &UGameplayAbility::execConfirmTaskByInstanceName },
			{ "EndAbilityState", &UGameplayAbility::execEndAbilityState },
			{ "EndTaskByInstanceName", &UGameplayAbility::execEndTaskByInstanceName },
			{ "GetAbilityLevel", &UGameplayAbility::execGetAbilityLevel },
			{ "GetAbilityLevel_BP", &UGameplayAbility::execGetAbilityLevel_BP },
			{ "GetAbilitySystemComponentFromActorInfo", &UGameplayAbility::execGetAbilitySystemComponentFromActorInfo },
			{ "GetActorInfo", &UGameplayAbility::execGetActorInfo },
			{ "GetAvatarActorFromActorInfo", &UGameplayAbility::execGetAvatarActorFromActorInfo },
			{ "GetContextFromOwner", &UGameplayAbility::execGetContextFromOwner },
			{ "GetCooldownTimeRemaining", &UGameplayAbility::execGetCooldownTimeRemaining },
			{ "GetCurrentMontage", &UGameplayAbility::execGetCurrentMontage },
			{ "GetCurrentSourceObject", &UGameplayAbility::execGetCurrentSourceObject },
			{ "GetGrantedByEffectContext", &UGameplayAbility::execGetGrantedByEffectContext },
			{ "GetOwningActorFromActorInfo", &UGameplayAbility::execGetOwningActorFromActorInfo },
			{ "GetOwningComponentFromActorInfo", &UGameplayAbility::execGetOwningComponentFromActorInfo },
			{ "GetSourceObject_BP", &UGameplayAbility::execGetSourceObject_BP },
			{ "InvalidateClientPredictionKey", &UGameplayAbility::execInvalidateClientPredictionKey },
			{ "IsLocallyControlled", &UGameplayAbility::execIsLocallyControlled },
			{ "K2_AddGameplayCue", &UGameplayAbility::execK2_AddGameplayCue },
			{ "K2_AddGameplayCueWithParams", &UGameplayAbility::execK2_AddGameplayCueWithParams },
			{ "K2_ApplyGameplayEffectSpecToOwner", &UGameplayAbility::execK2_ApplyGameplayEffectSpecToOwner },
			{ "K2_ApplyGameplayEffectSpecToTarget", &UGameplayAbility::execK2_ApplyGameplayEffectSpecToTarget },
			{ "K2_CancelAbility", &UGameplayAbility::execK2_CancelAbility },
			{ "K2_CheckAbilityCooldown", &UGameplayAbility::execK2_CheckAbilityCooldown },
			{ "K2_CheckAbilityCost", &UGameplayAbility::execK2_CheckAbilityCost },
			{ "K2_CommitAbility", &UGameplayAbility::execK2_CommitAbility },
			{ "K2_CommitAbilityCooldown", &UGameplayAbility::execK2_CommitAbilityCooldown },
			{ "K2_CommitAbilityCost", &UGameplayAbility::execK2_CommitAbilityCost },
			{ "K2_EndAbility", &UGameplayAbility::execK2_EndAbility },
			{ "K2_EndAbilityLocally", &UGameplayAbility::execK2_EndAbilityLocally },
			{ "K2_ExecuteGameplayCue", &UGameplayAbility::execK2_ExecuteGameplayCue },
			{ "K2_ExecuteGameplayCueWithParams", &UGameplayAbility::execK2_ExecuteGameplayCueWithParams },
			{ "K2_HasAuthority", &UGameplayAbility::execK2_HasAuthority },
			{ "K2_RemoveGameplayCue", &UGameplayAbility::execK2_RemoveGameplayCue },
			{ "MakeOutgoingGameplayEffectSpec", &UGameplayAbility::execMakeOutgoingGameplayEffectSpec },
			{ "MakeTargetLocationInfoFromOwnerActor", &UGameplayAbility::execMakeTargetLocationInfoFromOwnerActor },
			{ "MakeTargetLocationInfoFromOwnerSkeletalMeshComponent", &UGameplayAbility::execMakeTargetLocationInfoFromOwnerSkeletalMeshComponent },
			{ "MontageJumpToSection", &UGameplayAbility::execMontageJumpToSection },
			{ "MontageSetNextSectionName", &UGameplayAbility::execMontageSetNextSectionName },
			{ "MontageStop", &UGameplayAbility::execMontageStop },
			{ "RemoveGrantedByEffect", &UGameplayAbility::execRemoveGrantedByEffect },
			{ "SendGameplayEvent", &UGameplayAbility::execSendGameplayEvent },
			{ "SetCanBeCanceled", &UGameplayAbility::execSetCanBeCanceled },
			{ "SetShouldBlockOtherAbilities", &UGameplayAbility::execSetShouldBlockOtherAbilities },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics
	{
		struct GameplayAbility_eventBP_ApplyGameplayEffectToOwner_Parms
		{
			TSubclassOf<UGameplayEffect>  GameplayEffectClass;
			int32 GameplayEffectLevel;
			int32 Stacks;
			FActiveGameplayEffectHandle ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameplayEffectLevel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Stacks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventBP_ApplyGameplayEffectToOwner_Parms, GameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::NewProp_GameplayEffectLevel = { "GameplayEffectLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventBP_ApplyGameplayEffectToOwner_Parms, GameplayEffectLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::NewProp_Stacks = { "Stacks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventBP_ApplyGameplayEffectToOwner_Parms, Stacks), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventBP_ApplyGameplayEffectToOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 3579869929
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::NewProp_GameplayEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::NewProp_GameplayEffectLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::NewProp_Stacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Apply a gameplay effect to the owner of this ability */" },
		{ "CPP_Default_GameplayEffectLevel", "1" },
		{ "CPP_Default_Stacks", "1" },
		{ "DisplayName", "ApplyGameplayEffectToOwner" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "ApplyGameplayEffectToOwner" },
		{ "ToolTip", "Apply a gameplay effect to the owner of this ability" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "BP_ApplyGameplayEffectToOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::GameplayAbility_eventBP_ApplyGameplayEffectToOwner_Parms), Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics
	{
		struct GameplayAbility_eventBP_ApplyGameplayEffectToTarget_Parms
		{
			FGameplayAbilityTargetDataHandle TargetData;
			TSubclassOf<UGameplayEffect>  GameplayEffectClass;
			int32 GameplayEffectLevel;
			int32 Stacks;
			TArray<FActiveGameplayEffectHandle> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameplayEffectLevel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Stacks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventBP_ApplyGameplayEffectToTarget_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3993235140
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventBP_ApplyGameplayEffectToTarget_Parms, GameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::NewProp_GameplayEffectLevel = { "GameplayEffectLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventBP_ApplyGameplayEffectToTarget_Parms, GameplayEffectLevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::NewProp_Stacks = { "Stacks", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventBP_ApplyGameplayEffectToTarget_Parms, Stacks), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 3579869929
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventBP_ApplyGameplayEffectToTarget_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3579869929
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::NewProp_TargetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::NewProp_GameplayEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::NewProp_GameplayEffectLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::NewProp_Stacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Apply a gameplay effect to a Target */" },
		{ "CPP_Default_GameplayEffectLevel", "1" },
		{ "CPP_Default_Stacks", "1" },
		{ "DisplayName", "ApplyGameplayEffectToTarget" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "ApplyGameplayEffectToTarget" },
		{ "ToolTip", "Apply a gameplay effect to a Target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "BP_ApplyGameplayEffectToTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::GameplayAbility_eventBP_ApplyGameplayEffectToTarget_Parms), Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Statics
	{
		struct GameplayAbility_eventBP_RemoveGameplayEffectFromOwnerWithAssetTags_Parms
		{
			FGameplayTagContainer WithAssetTags;
			int32 StacksToRemove;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WithAssetTags;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StacksToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Statics::NewProp_WithAssetTags = { "WithAssetTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventBP_RemoveGameplayEffectFromOwnerWithAssetTags_Parms, WithAssetTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Statics::NewProp_StacksToRemove = { "StacksToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventBP_RemoveGameplayEffectFromOwnerWithAssetTags_Parms, StacksToRemove), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Statics::NewProp_WithAssetTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Statics::NewProp_StacksToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Removes GameplayEffects from owner which match the given asset level tags */" },
		{ "CPP_Default_StacksToRemove", "-1" },
		{ "DisplayName", "RemoveGameplayEffectFromOwnerWithAssetTags" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "RemoveGameplayEffectFromOwnerWithAssetTags" },
		{ "ToolTip", "Removes GameplayEffects from owner which match the given asset level tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "BP_RemoveGameplayEffectFromOwnerWithAssetTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Statics::GameplayAbility_eventBP_RemoveGameplayEffectFromOwnerWithAssetTags_Parms), Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Statics
	{
		struct GameplayAbility_eventBP_RemoveGameplayEffectFromOwnerWithGrantedTags_Parms
		{
			FGameplayTagContainer WithGrantedTags;
			int32 StacksToRemove;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WithGrantedTags;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StacksToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Statics::NewProp_WithGrantedTags = { "WithGrantedTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventBP_RemoveGameplayEffectFromOwnerWithGrantedTags_Parms, WithGrantedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Statics::NewProp_StacksToRemove = { "StacksToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventBP_RemoveGameplayEffectFromOwnerWithGrantedTags_Parms, StacksToRemove), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Statics::NewProp_WithGrantedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Statics::NewProp_StacksToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Removes GameplayEffects from owner which grant the given tags */" },
		{ "CPP_Default_StacksToRemove", "-1" },
		{ "DisplayName", "RemoveGameplayEffectFromOwnerWithGrantedTags" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "RemoveGameplayEffectFromOwnerWithGrantedTags" },
		{ "ToolTip", "Removes GameplayEffects from owner which grant the given tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "BP_RemoveGameplayEffectFromOwnerWithGrantedTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Statics::GameplayAbility_eventBP_RemoveGameplayEffectFromOwnerWithGrantedTags_Parms), Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Statics
	{
		struct GameplayAbility_eventBP_RemoveGameplayEffectFromOwnerWithHandle_Parms
		{
			FActiveGameplayEffectHandle Handle;
			int32 StacksToRemove;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StacksToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventBP_RemoveGameplayEffectFromOwnerWithHandle_Parms, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 3579869929
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Statics::NewProp_StacksToRemove = { "StacksToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventBP_RemoveGameplayEffectFromOwnerWithHandle_Parms, StacksToRemove), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Statics::NewProp_StacksToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Removes GameplayEffect from owner that match the given handle */" },
		{ "CPP_Default_StacksToRemove", "-1" },
		{ "DisplayName", "RemoveGameplayEffectFromOwnerWithHandle" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "RemoveGameplayEffectFromOwnerWithHandle" },
		{ "ToolTip", "Removes GameplayEffect from owner that match the given handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "BP_RemoveGameplayEffectFromOwnerWithHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Statics::GameplayAbility_eventBP_RemoveGameplayEffectFromOwnerWithHandle_Parms), Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_CancelTaskByInstanceName_Statics
	{
		struct GameplayAbility_eventCancelTaskByInstanceName_Parms
		{
			FName InstanceName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InstanceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayAbility_CancelTaskByInstanceName_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventCancelTaskByInstanceName_Parms, InstanceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_CancelTaskByInstanceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_CancelTaskByInstanceName_Statics::NewProp_InstanceName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_CancelTaskByInstanceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Add any task with this instance name to a list to be canceled (not ended) next frame.  See also EndTaskByInstanceName. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Add any task with this instance name to a list to be canceled (not ended) next frame.  See also EndTaskByInstanceName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_CancelTaskByInstanceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "CancelTaskByInstanceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_CancelTaskByInstanceName_Statics::GameplayAbility_eventCancelTaskByInstanceName_Parms), Z_Construct_UFunction_UGameplayAbility_CancelTaskByInstanceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_CancelTaskByInstanceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_CancelTaskByInstanceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_CancelTaskByInstanceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_CancelTaskByInstanceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_CancelTaskByInstanceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics
	{
		struct GameplayAbility_eventConfirmTaskByInstanceName_Parms
		{
			FName InstanceName;
			bool bEndTask;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InstanceName;
		static void NewProp_bEndTask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndTask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventConfirmTaskByInstanceName_Parms, InstanceName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics::NewProp_bEndTask_SetBit(void* Obj)
	{
		((GameplayAbility_eventConfirmTaskByInstanceName_Parms*)Obj)->bEndTask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics::NewProp_bEndTask = { "bEndTask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventConfirmTaskByInstanceName_Parms), &Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics::NewProp_bEndTask_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics::NewProp_InstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics::NewProp_bEndTask,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Finds all currently active tasks named InstanceName and confirms them. What this means depends on the individual task. By default, this does nothing other than ending if bEndTask is true. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Finds all currently active tasks named InstanceName and confirms them. What this means depends on the individual task. By default, this does nothing other than ending if bEndTask is true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "ConfirmTaskByInstanceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics::GameplayAbility_eventConfirmTaskByInstanceName_Parms), Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_EndAbilityState_Statics
	{
		struct GameplayAbility_eventEndAbilityState_Parms
		{
			FName OptionalStateNameToEnd;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalStateNameToEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayAbility_EndAbilityState_Statics::NewProp_OptionalStateNameToEnd = { "OptionalStateNameToEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventEndAbilityState_Parms, OptionalStateNameToEnd), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_EndAbilityState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_EndAbilityState_Statics::NewProp_OptionalStateNameToEnd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_EndAbilityState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Ends any active ability state task with the given name. If name is 'None' all active states will be ended (in an arbitrary order). */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Ends any active ability state task with the given name. If name is 'None' all active states will be ended (in an arbitrary order)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_EndAbilityState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "EndAbilityState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_EndAbilityState_Statics::GameplayAbility_eventEndAbilityState_Parms), Z_Construct_UFunction_UGameplayAbility_EndAbilityState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_EndAbilityState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_EndAbilityState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_EndAbilityState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_EndAbilityState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_EndAbilityState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_EndTaskByInstanceName_Statics
	{
		struct GameplayAbility_eventEndTaskByInstanceName_Parms
		{
			FName InstanceName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InstanceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayAbility_EndTaskByInstanceName_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventEndTaskByInstanceName_Parms, InstanceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_EndTaskByInstanceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_EndTaskByInstanceName_Statics::NewProp_InstanceName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_EndTaskByInstanceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Add any task with this instance name to a list to be ended (not canceled) next frame.  See also CancelTaskByInstanceName. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Add any task with this instance name to a list to be ended (not canceled) next frame.  See also CancelTaskByInstanceName." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_EndTaskByInstanceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "EndTaskByInstanceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_EndTaskByInstanceName_Statics::GameplayAbility_eventEndTaskByInstanceName_Parms), Z_Construct_UFunction_UGameplayAbility_EndTaskByInstanceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_EndTaskByInstanceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_EndTaskByInstanceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_EndTaskByInstanceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_EndTaskByInstanceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_EndTaskByInstanceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_Statics
	{
		struct GameplayAbility_eventGetAbilityLevel_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetAbilityLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Returns current level of the Ability */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Returns current level of the Ability" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "GetAbilityLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_Statics::GameplayAbility_eventGetAbilityLevel_Parms), Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics
	{
		struct GameplayAbility_eventGetAbilityLevel_BP_Parms
		{
			FGameplayAbilitySpecHandle Handle;
			FGameplayAbilityActorInfo ActorInfo;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorInfo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetAbilityLevel_BP_Parms, Handle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(nullptr, 0) }; // 3562347300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::NewProp_ActorInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::NewProp_ActorInfo = { "ActorInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetAbilityLevel_BP_Parms, ActorInfo), Z_Construct_UScriptStruct_FGameplayAbilityActorInfo, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::NewProp_ActorInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::NewProp_ActorInfo_MetaData)) }; // 4078658179
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetAbilityLevel_BP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::NewProp_ActorInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Returns current ability level for non instanced abilities. You must call this version in these contexts! */" },
		{ "DisplayName", "GetAbilityLevelNonInstanced" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ReturnDisplayName", "AbilityLevel" },
		{ "ToolTip", "Returns current ability level for non instanced abilities. You must call this version in these contexts!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "GetAbilityLevel_BP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::GameplayAbility_eventGetAbilityLevel_BP_Parms), Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Statics
	{
		struct GameplayAbility_eventGetAbilitySystemComponentFromActorInfo_Parms
		{
			UAbilitySystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetAbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Returns the AbilitySystemComponent that is activating this ability */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Returns the AbilitySystemComponent that is activating this ability" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "GetAbilitySystemComponentFromActorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Statics::GameplayAbility_eventGetAbilitySystemComponentFromActorInfo_Parms), Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_GetActorInfo_Statics
	{
		struct GameplayAbility_eventGetActorInfo_Parms
		{
			FGameplayAbilityActorInfo ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_GetActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetActorInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilityActorInfo, METADATA_PARAMS(nullptr, 0) }; // 4078658179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_GetActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Returns the actor info associated with this ability, has cached pointers to useful objects */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Returns the actor info associated with this ability, has cached pointers to useful objects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_GetActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "GetActorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_GetActorInfo_Statics::GameplayAbility_eventGetActorInfo_Parms), Z_Construct_UFunction_UGameplayAbility_GetActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_GetActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_GetActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_GetAvatarActorFromActorInfo_Statics
	{
		struct GameplayAbility_eventGetAvatarActorFromActorInfo_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayAbility_GetAvatarActorFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetAvatarActorFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_GetAvatarActorFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetAvatarActorFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetAvatarActorFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Returns the physical actor that is executing this ability. May be null */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Returns the physical actor that is executing this ability. May be null" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_GetAvatarActorFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "GetAvatarActorFromActorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_GetAvatarActorFromActorInfo_Statics::GameplayAbility_eventGetAvatarActorFromActorInfo_Parms), Z_Construct_UFunction_UGameplayAbility_GetAvatarActorFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetAvatarActorFromActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetAvatarActorFromActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetAvatarActorFromActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_GetAvatarActorFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_GetAvatarActorFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner_Statics
	{
		struct GameplayAbility_eventGetContextFromOwner_Parms
		{
			FGameplayAbilityTargetDataHandle OptionalTargetData;
			FGameplayEffectContextHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalTargetData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner_Statics::NewProp_OptionalTargetData = { "OptionalTargetData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetContextFromOwner_Parms, OptionalTargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3993235140
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetContextFromOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(nullptr, 0) }; // 668201340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner_Statics::NewProp_OptionalTargetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Generates a GameplayEffectContextHandle from our owner and an optional TargetData.*/" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Generates a GameplayEffectContextHandle from our owner and an optional TargetData." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "GetContextFromOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner_Statics::GameplayAbility_eventGetContextFromOwner_Parms), Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_GetCooldownTimeRemaining_Statics
	{
		struct GameplayAbility_eventGetCooldownTimeRemaining_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayAbility_GetCooldownTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetCooldownTimeRemaining_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_GetCooldownTimeRemaining_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetCooldownTimeRemaining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetCooldownTimeRemaining_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Returns the time in seconds remaining on the currently active cooldown. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Returns the time in seconds remaining on the currently active cooldown." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_GetCooldownTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "GetCooldownTimeRemaining", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_GetCooldownTimeRemaining_Statics::GameplayAbility_eventGetCooldownTimeRemaining_Parms), Z_Construct_UFunction_UGameplayAbility_GetCooldownTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetCooldownTimeRemaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetCooldownTimeRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetCooldownTimeRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_GetCooldownTimeRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_GetCooldownTimeRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_GetCurrentMontage_Statics
	{
		struct GameplayAbility_eventGetCurrentMontage_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayAbility_GetCurrentMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetCurrentMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_GetCurrentMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetCurrentMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetCurrentMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Returns the currently playing montage for this ability, if any */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Returns the currently playing montage for this ability, if any" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_GetCurrentMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "GetCurrentMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_GetCurrentMontage_Statics::GameplayAbility_eventGetCurrentMontage_Parms), Z_Construct_UFunction_UGameplayAbility_GetCurrentMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetCurrentMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetCurrentMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetCurrentMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_GetCurrentMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_GetCurrentMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_GetCurrentSourceObject_Statics
	{
		struct GameplayAbility_eventGetCurrentSourceObject_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayAbility_GetCurrentSourceObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetCurrentSourceObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_GetCurrentSourceObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetCurrentSourceObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetCurrentSourceObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Retrieves the SourceObject associated with this ability. Can only be called on instanced abilities. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Retrieves the SourceObject associated with this ability. Can only be called on instanced abilities." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_GetCurrentSourceObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "GetCurrentSourceObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_GetCurrentSourceObject_Statics::GameplayAbility_eventGetCurrentSourceObject_Parms), Z_Construct_UFunction_UGameplayAbility_GetCurrentSourceObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetCurrentSourceObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetCurrentSourceObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetCurrentSourceObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_GetCurrentSourceObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_GetCurrentSourceObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_GetGrantedByEffectContext_Statics
	{
		struct GameplayAbility_eventGetGrantedByEffectContext_Parms
		{
			FGameplayEffectContextHandle ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_GetGrantedByEffectContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetGrantedByEffectContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(nullptr, 0) }; // 668201340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_GetGrantedByEffectContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetGrantedByEffectContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetGrantedByEffectContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Retrieves the EffectContext of the GameplayEffect that granted this ability. Can only be called on instanced abilities. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Retrieves the EffectContext of the GameplayEffect that granted this ability. Can only be called on instanced abilities." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_GetGrantedByEffectContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "GetGrantedByEffectContext", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_GetGrantedByEffectContext_Statics::GameplayAbility_eventGetGrantedByEffectContext_Parms), Z_Construct_UFunction_UGameplayAbility_GetGrantedByEffectContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetGrantedByEffectContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetGrantedByEffectContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetGrantedByEffectContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_GetGrantedByEffectContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_GetGrantedByEffectContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_GetOwningActorFromActorInfo_Statics
	{
		struct GameplayAbility_eventGetOwningActorFromActorInfo_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayAbility_GetOwningActorFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetOwningActorFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_GetOwningActorFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetOwningActorFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetOwningActorFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Returns the actor that owns this ability, which may not have a physical location */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Returns the actor that owns this ability, which may not have a physical location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_GetOwningActorFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "GetOwningActorFromActorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_GetOwningActorFromActorInfo_Statics::GameplayAbility_eventGetOwningActorFromActorInfo_Parms), Z_Construct_UFunction_UGameplayAbility_GetOwningActorFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetOwningActorFromActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetOwningActorFromActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetOwningActorFromActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_GetOwningActorFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_GetOwningActorFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo_Statics
	{
		struct GameplayAbility_eventGetOwningComponentFromActorInfo_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetOwningComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Convenience method for abilities to get skeletal mesh component - useful for aiming abilities */" },
		{ "DisplayName", "GetSkeletalMeshComponentFromActorInfo" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Convenience method for abilities to get skeletal mesh component - useful for aiming abilities" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "GetOwningComponentFromActorInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo_Statics::GameplayAbility_eventGetOwningComponentFromActorInfo_Parms), Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics
	{
		struct GameplayAbility_eventGetSourceObject_BP_Parms
		{
			FGameplayAbilitySpecHandle Handle;
			FGameplayAbilityActorInfo ActorInfo;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetSourceObject_BP_Parms, Handle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(nullptr, 0) }; // 3562347300
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::NewProp_ActorInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::NewProp_ActorInfo = { "ActorInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetSourceObject_BP_Parms, ActorInfo), Z_Construct_UScriptStruct_FGameplayAbilityActorInfo, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::NewProp_ActorInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::NewProp_ActorInfo_MetaData)) }; // 4078658179
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventGetSourceObject_BP_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::NewProp_ActorInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Retrieves the SourceObject associated with this ability. Callable on non instanced */" },
		{ "DisplayName", "GetSourceObjectNonInstanced" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ReturnDisplayName", "SourceObject" },
		{ "ToolTip", "Retrieves the SourceObject associated with this ability. Callable on non instanced" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "GetSourceObject_BP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::GameplayAbility_eventGetSourceObject_BP_Parms), Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_InvalidateClientPredictionKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_InvalidateClientPredictionKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** \n\x09 * Invalidates the current prediction key. This should be used in cases where there is a valid prediction window, but the server is doing logic that only it can do, and afterwards performs an action that the client could predict (had the client been able to run the server-only code prior).\n\x09 * This returns instantly and has no other side effects other than clearing the current prediction key.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Invalidates the current prediction key. This should be used in cases where there is a valid prediction window, but the server is doing logic that only it can do, and afterwards performs an action that the client could predict (had the client been able to run the server-only code prior).\nThis returns instantly and has no other side effects other than clearing the current prediction key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_InvalidateClientPredictionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "InvalidateClientPredictionKey", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_InvalidateClientPredictionKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_InvalidateClientPredictionKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_InvalidateClientPredictionKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_InvalidateClientPredictionKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled_Statics
	{
		struct GameplayAbility_eventIsLocallyControlled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayAbility_eventIsLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventIsLocallyControlled_Parms), &Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** True if the owning actor is locally controlled, true in single player */" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "True if the owning actor is locally controlled, true in single player" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "IsLocallyControlled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled_Statics::GameplayAbility_eventIsLocallyControlled_Parms), Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/**\n\x09 * The main function that defines what an ability does.\n\x09 *  -Child classes will want to override this\n\x09 *  -This function graph should call CommitAbility\n\x09 *  -This function graph should call EndAbility\n\x09 *  \n\x09 *  Latent/async actions are ok in this graph. Note that Commit and EndAbility calling requirements speak to the K2_ActivateAbility graph. \n\x09 *  In C++, the call to K2_ActivateAbility() may return without CommitAbility or EndAbility having been called. But it is expected that this\n\x09 *  will only occur when latent/async actions are pending. When K2_ActivateAbility logically finishes, then we will expect Commit/End to have been called.\n\x09 *  \n\x09 */" },
		{ "DisplayName", "ActivateAbility" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "ActivateAbility" },
		{ "ToolTip", "The main function that defines what an ability does.\n -Child classes will want to override this\n -This function graph should call CommitAbility\n -This function graph should call EndAbility\n\n Latent/async actions are ok in this graph. Note that Commit and EndAbility calling requirements speak to the K2_ActivateAbility graph.\n In C++, the call to K2_ActivateAbility() may return without CommitAbility or EndAbility having been called. But it is expected that this\n will only occur when latent/async actions are pending. When K2_ActivateAbility logically finishes, then we will expect Commit/End to have been called." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_ActivateAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent_Statics::NewProp_EventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_ActivateAbilityFromEvent_Parms, EventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent_Statics::NewProp_EventData_MetaData)) }; // 252801246
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent_Statics::NewProp_EventData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "ActivateAbilityFromEvent" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "ActivateAbilityFromEvent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_ActivateAbilityFromEvent", nullptr, nullptr, sizeof(GameplayAbility_eventK2_ActivateAbilityFromEvent_Parms), Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics
	{
		struct GameplayAbility_eventK2_AddGameplayCue_Parms
		{
			FGameplayTag GameplayCueTag;
			FGameplayEffectContextHandle Context;
			bool bRemoveOnAbilityEnd;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static void NewProp_bRemoveOnAbilityEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveOnAbilityEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_AddGameplayCue_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_AddGameplayCue_Parms, Context), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(nullptr, 0) }; // 668201340
	void Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::NewProp_bRemoveOnAbilityEnd_SetBit(void* Obj)
	{
		((GameplayAbility_eventK2_AddGameplayCue_Parms*)Obj)->bRemoveOnAbilityEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::NewProp_bRemoveOnAbilityEnd = { "bRemoveOnAbilityEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventK2_AddGameplayCue_Parms), &Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::NewProp_bRemoveOnAbilityEnd_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::NewProp_bRemoveOnAbilityEnd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Adds a persistent gameplay cue to the ability owner. Optionally will remove if ability ends */" },
		{ "CPP_Default_bRemoveOnAbilityEnd", "true" },
		{ "DisplayName", "Add GameplayCue To Owner" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "AddGameplayCue" },
		{ "ToolTip", "Adds a persistent gameplay cue to the ability owner. Optionally will remove if ability ends" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_AddGameplayCue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::GameplayAbility_eventK2_AddGameplayCue_Parms), Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics
	{
		struct GameplayAbility_eventK2_AddGameplayCueWithParams_Parms
		{
			FGameplayTag GameplayCueTag;
			FGameplayCueParameters GameplayCueParameter;
			bool bRemoveOnAbilityEnd;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueParameter;
		static void NewProp_bRemoveOnAbilityEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveOnAbilityEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_AddGameplayCueWithParams_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::NewProp_GameplayCueParameter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::NewProp_GameplayCueParameter = { "GameplayCueParameter", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_AddGameplayCueWithParams_Parms, GameplayCueParameter), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::NewProp_GameplayCueParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::NewProp_GameplayCueParameter_MetaData)) }; // 3089669807
	void Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::NewProp_bRemoveOnAbilityEnd_SetBit(void* Obj)
	{
		((GameplayAbility_eventK2_AddGameplayCueWithParams_Parms*)Obj)->bRemoveOnAbilityEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::NewProp_bRemoveOnAbilityEnd = { "bRemoveOnAbilityEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventK2_AddGameplayCueWithParams_Parms), &Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::NewProp_bRemoveOnAbilityEnd_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::NewProp_GameplayCueParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::NewProp_bRemoveOnAbilityEnd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Adds a persistent gameplay cue to the ability owner. Optionally will remove if ability ends */" },
		{ "CPP_Default_bRemoveOnAbilityEnd", "true" },
		{ "DisplayName", "Add GameplayCueWithParams To Owner" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "AddGameplayCueWithParams" },
		{ "ToolTip", "Adds a persistent gameplay cue to the ability owner. Optionally will remove if ability ends" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_AddGameplayCueWithParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::GameplayAbility_eventK2_AddGameplayCueWithParams_Parms), Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics
	{
		struct GameplayAbility_eventK2_ApplyGameplayEffectSpecToOwner_Parms
		{
			FGameplayEffectSpecHandle EffectSpecHandle;
			FActiveGameplayEffectHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpecHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpecHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::NewProp_EffectSpecHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::NewProp_EffectSpecHandle = { "EffectSpecHandle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_ApplyGameplayEffectSpecToOwner_Parms, EffectSpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::NewProp_EffectSpecHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::NewProp_EffectSpecHandle_MetaData)) }; // 1303953225
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_ApplyGameplayEffectSpecToOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 3579869929
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::NewProp_EffectSpecHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Apply a previously created gameplay effect spec to the owner of this ability */" },
		{ "DisplayName", "ApplyGameplayEffectSpecToOwner" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "ApplyGameplayEffectSpecToOwner" },
		{ "ToolTip", "Apply a previously created gameplay effect spec to the owner of this ability" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_ApplyGameplayEffectSpecToOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::GameplayAbility_eventK2_ApplyGameplayEffectSpecToOwner_Parms), Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics
	{
		struct GameplayAbility_eventK2_ApplyGameplayEffectSpecToTarget_Parms
		{
			FGameplayEffectSpecHandle EffectSpecHandle;
			FGameplayAbilityTargetDataHandle TargetData;
			TArray<FActiveGameplayEffectHandle> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectSpecHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectSpecHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::NewProp_EffectSpecHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::NewProp_EffectSpecHandle = { "EffectSpecHandle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_ApplyGameplayEffectSpecToTarget_Parms, EffectSpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::NewProp_EffectSpecHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::NewProp_EffectSpecHandle_MetaData)) }; // 1303953225
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_ApplyGameplayEffectSpecToTarget_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3993235140
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 3579869929
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_ApplyGameplayEffectSpecToTarget_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3579869929
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::NewProp_EffectSpecHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::NewProp_TargetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Apply a previously created gameplay effect spec to a target */" },
		{ "DisplayName", "ApplyGameplayEffectSpecToTarget" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "ApplyGameplayEffectSpecToTarget" },
		{ "ToolTip", "Apply a previously created gameplay effect spec to a target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_ApplyGameplayEffectSpecToTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::GameplayAbility_eventK2_ApplyGameplayEffectSpecToTarget_Parms), Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelevantTags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::NewProp_ActorInfo = { "ActorInfo", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_CanActivateAbility_Parms, ActorInfo), Z_Construct_UScriptStruct_FGameplayAbilityActorInfo, METADATA_PARAMS(nullptr, 0) }; // 4078658179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_CanActivateAbility_Parms, Handle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::NewProp_Handle_MetaData)) }; // 3562347300
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::NewProp_RelevantTags = { "RelevantTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_CanActivateAbility_Parms, RelevantTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	void Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayAbility_eventK2_CanActivateAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventK2_CanActivateAbility_Parms), &Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::NewProp_ActorInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::NewProp_RelevantTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Returns true if this ability can be activated right now. Has no side effects */" },
		{ "DisplayName", "CanActivateAbility" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "CanActivateAbility" },
		{ "ToolTip", "Returns true if this ability can be activated right now. Has no side effects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_CanActivateAbility", nullptr, nullptr, sizeof(GameplayAbility_eventK2_CanActivateAbility_Parms), Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_CancelAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_CancelAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Call from Blueprint to cancel the ability naturally */" },
		{ "DisplayName", "CancelAbility" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "CancelAbility" },
		{ "ToolTip", "Call from Blueprint to cancel the ability naturally" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_CancelAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_CancelAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_CancelAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_CancelAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_CancelAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_CancelAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown_Statics
	{
		struct GameplayAbility_eventK2_CheckAbilityCooldown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayAbility_eventK2_CheckAbilityCooldown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventK2_CheckAbilityCooldown_Parms), &Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Checks the ability's cooldown, but does not apply it.*/" },
		{ "DisplayName", "CheckAbilityCooldown" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "CheckAbilityCooldown" },
		{ "ToolTip", "Checks the ability's cooldown, but does not apply it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_CheckAbilityCooldown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown_Statics::GameplayAbility_eventK2_CheckAbilityCooldown_Parms), Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost_Statics
	{
		struct GameplayAbility_eventK2_CheckAbilityCost_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayAbility_eventK2_CheckAbilityCost_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventK2_CheckAbilityCost_Parms), &Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Checks the ability's cost, but does not apply it. */" },
		{ "DisplayName", "CheckAbilityCost" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "CheckAbilityCost" },
		{ "ToolTip", "Checks the ability's cost, but does not apply it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_CheckAbilityCost", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost_Statics::GameplayAbility_eventK2_CheckAbilityCost_Parms), Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility_Statics
	{
		struct GameplayAbility_eventK2_CommitAbility_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayAbility_eventK2_CommitAbility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventK2_CommitAbility_Parms), &Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Attempts to commit the ability (spend resources, etc). This our last chance to fail. Child classes that override ActivateAbility must call this themselves! */" },
		{ "DisplayName", "CommitAbility" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "CommitAbility" },
		{ "ToolTip", "Attempts to commit the ability (spend resources, etc). This our last chance to fail. Child classes that override ActivateAbility must call this themselves!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_CommitAbility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility_Statics::GameplayAbility_eventK2_CommitAbility_Parms), Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics
	{
		struct GameplayAbility_eventK2_CommitAbilityCooldown_Parms
		{
			bool BroadcastCommitEvent;
			bool ForceCooldown;
			bool ReturnValue;
		};
		static void NewProp_BroadcastCommitEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BroadcastCommitEvent;
		static void NewProp_ForceCooldown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ForceCooldown;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::NewProp_BroadcastCommitEvent_SetBit(void* Obj)
	{
		((GameplayAbility_eventK2_CommitAbilityCooldown_Parms*)Obj)->BroadcastCommitEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::NewProp_BroadcastCommitEvent = { "BroadcastCommitEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventK2_CommitAbilityCooldown_Parms), &Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::NewProp_BroadcastCommitEvent_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::NewProp_ForceCooldown_SetBit(void* Obj)
	{
		((GameplayAbility_eventK2_CommitAbilityCooldown_Parms*)Obj)->ForceCooldown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::NewProp_ForceCooldown = { "ForceCooldown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventK2_CommitAbilityCooldown_Parms), &Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::NewProp_ForceCooldown_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayAbility_eventK2_CommitAbilityCooldown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventK2_CommitAbilityCooldown_Parms), &Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::NewProp_BroadcastCommitEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::NewProp_ForceCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Attempts to commit the ability's cooldown only. If BroadcastCommitEvent is true, it will broadcast the commit event that tasks like WaitAbilityCommit are listening for. */" },
		{ "CPP_Default_BroadcastCommitEvent", "false" },
		{ "CPP_Default_ForceCooldown", "false" },
		{ "DisplayName", "CommitAbilityCooldown" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "CommitAbilityCooldown" },
		{ "ToolTip", "Attempts to commit the ability's cooldown only. If BroadcastCommitEvent is true, it will broadcast the commit event that tasks like WaitAbilityCommit are listening for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_CommitAbilityCooldown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::GameplayAbility_eventK2_CommitAbilityCooldown_Parms), Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics
	{
		struct GameplayAbility_eventK2_CommitAbilityCost_Parms
		{
			bool BroadcastCommitEvent;
			bool ReturnValue;
		};
		static void NewProp_BroadcastCommitEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BroadcastCommitEvent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::NewProp_BroadcastCommitEvent_SetBit(void* Obj)
	{
		((GameplayAbility_eventK2_CommitAbilityCost_Parms*)Obj)->BroadcastCommitEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::NewProp_BroadcastCommitEvent = { "BroadcastCommitEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventK2_CommitAbilityCost_Parms), &Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::NewProp_BroadcastCommitEvent_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayAbility_eventK2_CommitAbilityCost_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventK2_CommitAbilityCost_Parms), &Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::NewProp_BroadcastCommitEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Attempts to commit the ability's cost only. If BroadcastCommitEvent is true, it will broadcast the commit event that tasks like WaitAbilityCommit are listening for. */" },
		{ "CPP_Default_BroadcastCommitEvent", "false" },
		{ "DisplayName", "CommitAbilityCost" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "CommitAbilityCost" },
		{ "ToolTip", "Attempts to commit the ability's cost only. If BroadcastCommitEvent is true, it will broadcast the commit event that tasks like WaitAbilityCommit are listening for." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_CommitAbilityCost", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::GameplayAbility_eventK2_CommitAbilityCost_Parms), Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_CommitExecute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_CommitExecute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** BP event called from CommitAbility */" },
		{ "DisplayName", "CommitExecute" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "CommitExecute" },
		{ "ToolTip", "BP event called from CommitAbility" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_CommitExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_CommitExecute", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_CommitExecute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_CommitExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_CommitExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_CommitExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_EndAbility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_EndAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Call from blueprints to forcibly end the ability without canceling it. This will replicate the end ability to the client or server which can interrupt tasks */" },
		{ "DisplayName", "End Ability" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "EndAbility" },
		{ "ToolTip", "Call from blueprints to forcibly end the ability without canceling it. This will replicate the end ability to the client or server which can interrupt tasks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_EndAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_EndAbility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_EndAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_EndAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_EndAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_EndAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_EndAbilityLocally_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_EndAbilityLocally_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Call from blueprints to end the ability naturally. This will only end predicted abilities locally, allowing it end naturally on the client or server */" },
		{ "DisplayName", "End Ability Locally" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "EndAbilityLocally" },
		{ "ToolTip", "Call from blueprints to end the ability naturally. This will only end predicted abilities locally, allowing it end naturally on the client or server" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_EndAbilityLocally_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_EndAbilityLocally", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_EndAbilityLocally_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_EndAbilityLocally_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_EndAbilityLocally()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_EndAbilityLocally_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue_Statics
	{
		struct GameplayAbility_eventK2_ExecuteGameplayCue_Parms
		{
			FGameplayTag GameplayCueTag;
			FGameplayEffectContextHandle Context;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_ExecuteGameplayCue_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_ExecuteGameplayCue_Parms, Context), Z_Construct_UScriptStruct_FGameplayEffectContextHandle, METADATA_PARAMS(nullptr, 0) }; // 668201340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Invoke a gameplay cue on the ability owner */" },
		{ "DisplayName", "Execute GameplayCue On Owner" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "ExecuteGameplayCue" },
		{ "ToolTip", "Invoke a gameplay cue on the ability owner" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_ExecuteGameplayCue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue_Statics::GameplayAbility_eventK2_ExecuteGameplayCue_Parms), Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics
	{
		struct GameplayAbility_eventK2_ExecuteGameplayCueWithParams_Parms
		{
			FGameplayTag GameplayCueTag;
			FGameplayCueParameters GameplayCueParameters;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_ExecuteGameplayCueWithParams_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::NewProp_GameplayCueParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::NewProp_GameplayCueParameters = { "GameplayCueParameters", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_ExecuteGameplayCueWithParams_Parms, GameplayCueParameters), Z_Construct_UScriptStruct_FGameplayCueParameters, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::NewProp_GameplayCueParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::NewProp_GameplayCueParameters_MetaData)) }; // 3089669807
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::NewProp_GameplayCueTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::NewProp_GameplayCueParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Invoke a gameplay cue on the ability owner, with extra parameters */" },
		{ "DisplayName", "Execute GameplayCueWithParams On Owner" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "ExecuteGameplayCueWithParams" },
		{ "ToolTip", "Invoke a gameplay cue on the ability owner, with extra parameters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_ExecuteGameplayCueWithParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::GameplayAbility_eventK2_ExecuteGameplayCueWithParams_Parms), Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority_Statics
	{
		struct GameplayAbility_eventK2_HasAuthority_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayAbility_eventK2_HasAuthority_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventK2_HasAuthority_Parms), &Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "DisplayName", "HasAuthority" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_HasAuthority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority_Statics::GameplayAbility_eventK2_HasAuthority_Parms), Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_OnEndAbility_Statics
	{
		static void NewProp_bWasCancelled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasCancelled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayAbility_K2_OnEndAbility_Statics::NewProp_bWasCancelled_SetBit(void* Obj)
	{
		((GameplayAbility_eventK2_OnEndAbility_Parms*)Obj)->bWasCancelled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_OnEndAbility_Statics::NewProp_bWasCancelled = { "bWasCancelled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventK2_OnEndAbility_Parms), &Z_Construct_UFunction_UGameplayAbility_K2_OnEndAbility_Statics::NewProp_bWasCancelled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_OnEndAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_OnEndAbility_Statics::NewProp_bWasCancelled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_OnEndAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Blueprint event, will be called if an ability ends normally or abnormally */" },
		{ "DisplayName", "OnEndAbility" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "OnEndAbility" },
		{ "ToolTip", "Blueprint event, will be called if an ability ends normally or abnormally" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_OnEndAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_OnEndAbility", nullptr, nullptr, sizeof(GameplayAbility_eventK2_OnEndAbility_Parms), Z_Construct_UFunction_UGameplayAbility_K2_OnEndAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_OnEndAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_OnEndAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_OnEndAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_OnEndAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_OnEndAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_RemoveGameplayCue_Statics
	{
		struct GameplayAbility_eventK2_RemoveGameplayCue_Parms
		{
			FGameplayTag GameplayCueTag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayCueTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_RemoveGameplayCue_Statics::NewProp_GameplayCueTag = { "GameplayCueTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_RemoveGameplayCue_Parms, GameplayCueTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_RemoveGameplayCue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_RemoveGameplayCue_Statics::NewProp_GameplayCueTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_RemoveGameplayCue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Removes a persistent gameplay cue from the ability owner */" },
		{ "DisplayName", "Remove GameplayCue From Owner" },
		{ "GameplayTagFilter", "GameplayCue" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "RemoveGameplayCue" },
		{ "ToolTip", "Removes a persistent gameplay cue from the ability owner" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_RemoveGameplayCue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_RemoveGameplayCue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_K2_RemoveGameplayCue_Statics::GameplayAbility_eventK2_RemoveGameplayCue_Parms), Z_Construct_UFunction_UGameplayAbility_K2_RemoveGameplayCue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_RemoveGameplayCue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_RemoveGameplayCue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_RemoveGameplayCue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_RemoveGameplayCue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_RemoveGameplayCue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::NewProp_ActorInfo = { "ActorInfo", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_ShouldAbilityRespondToEvent_Parms, ActorInfo), Z_Construct_UScriptStruct_FGameplayAbilityActorInfo, METADATA_PARAMS(nullptr, 0) }; // 4078658179
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventK2_ShouldAbilityRespondToEvent_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(nullptr, 0) }; // 252801246
	void Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayAbility_eventK2_ShouldAbilityRespondToEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventK2_ShouldAbilityRespondToEvent_Parms), &Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::NewProp_ActorInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::NewProp_Payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Returns true if this ability can be activated right now. Has no side effects */" },
		{ "DisplayName", "ShouldAbilityRespondToEvent" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ScriptName", "ShouldAbilityRespondToEvent" },
		{ "ToolTip", "Returns true if this ability can be activated right now. Has no side effects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "K2_ShouldAbilityRespondToEvent", nullptr, nullptr, sizeof(GameplayAbility_eventK2_ShouldAbilityRespondToEvent_Parms), Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics
	{
		struct GameplayAbility_eventMakeOutgoingGameplayEffectSpec_Parms
		{
			TSubclassOf<UGameplayEffect>  GameplayEffectClass;
			float Level;
			FGameplayEffectSpecHandle ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Level;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics::NewProp_GameplayEffectClass = { "GameplayEffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventMakeOutgoingGameplayEffectSpec_Parms, GameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventMakeOutgoingGameplayEffectSpec_Parms, Level), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventMakeOutgoingGameplayEffectSpec_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(nullptr, 0) }; // 1303953225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics::NewProp_GameplayEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Convenience method for abilities to get outgoing gameplay effect specs (for example, to pass on to projectiles to apply to whoever they hit) */" },
		{ "CPP_Default_Level", "1.000000" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Convenience method for abilities to get outgoing gameplay effect specs (for example, to pass on to projectiles to apply to whoever they hit)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "MakeOutgoingGameplayEffectSpec", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics::GameplayAbility_eventMakeOutgoingGameplayEffectSpec_Parms), Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Statics
	{
		struct GameplayAbility_eventMakeTargetLocationInfoFromOwnerActor_Parms
		{
			FGameplayAbilityTargetingLocationInfo ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventMakeTargetLocationInfoFromOwnerActor_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(nullptr, 0) }; // 1075373019
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Creates a target location from where the owner avatar is */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Creates a target location from where the owner avatar is" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "MakeTargetLocationInfoFromOwnerActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Statics::GameplayAbility_eventMakeTargetLocationInfoFromOwnerActor_Parms), Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Statics
	{
		struct GameplayAbility_eventMakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Parms
		{
			FName SocketName;
			FGameplayAbilityTargetingLocationInfo ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventMakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Parms, SocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventMakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayAbilityTargetingLocationInfo, METADATA_PARAMS(nullptr, 0) }; // 1075373019
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Creates a target location from a socket on the owner avatar's skeletal mesh */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Creates a target location from a socket on the owner avatar's skeletal mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "MakeTargetLocationInfoFromOwnerSkeletalMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Statics::GameplayAbility_eventMakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Parms), Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_MontageJumpToSection_Statics
	{
		struct GameplayAbility_eventMontageJumpToSection_Parms
		{
			FName SectionName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayAbility_MontageJumpToSection_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventMontageJumpToSection_Parms, SectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_MontageJumpToSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_MontageJumpToSection_Statics::NewProp_SectionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_MontageJumpToSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Animation" },
		{ "Comment", "/** Immediately jumps the active montage to a section */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Immediately jumps the active montage to a section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_MontageJumpToSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "MontageJumpToSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_MontageJumpToSection_Statics::GameplayAbility_eventMontageJumpToSection_Parms), Z_Construct_UFunction_UGameplayAbility_MontageJumpToSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_MontageJumpToSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_MontageJumpToSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_MontageJumpToSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_MontageJumpToSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_MontageJumpToSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName_Statics
	{
		struct GameplayAbility_eventMontageSetNextSectionName_Parms
		{
			FName FromSectionName;
			FName ToSectionName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_FromSectionName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToSectionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName_Statics::NewProp_FromSectionName = { "FromSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventMontageSetNextSectionName_Parms, FromSectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName_Statics::NewProp_ToSectionName = { "ToSectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventMontageSetNextSectionName_Parms, ToSectionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName_Statics::NewProp_FromSectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName_Statics::NewProp_ToSectionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability|Animation" },
		{ "Comment", "/** Sets pending section on active montage */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Sets pending section on active montage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "MontageSetNextSectionName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName_Statics::GameplayAbility_eventMontageSetNextSectionName_Parms), Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_MontageStop_Statics
	{
		struct GameplayAbility_eventMontageStop_Parms
		{
			float OverrideBlendOutTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverrideBlendOutTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayAbility_MontageStop_Statics::NewProp_OverrideBlendOutTime = { "OverrideBlendOutTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventMontageStop_Parms, OverrideBlendOutTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_MontageStop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_MontageStop_Statics::NewProp_OverrideBlendOutTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_MontageStop_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "OverrideBlendOutTime" },
		{ "Category", "Ability|Animation" },
		{ "Comment", "/**\n\x09 * Stops the current animation montage.\n\x09 *\n\x09 * @param OverrideBlendTime If >= 0, will override the BlendOutTime parameter on the AnimMontage instance\n\x09 */" },
		{ "CPP_Default_OverrideBlendOutTime", "-1.000000" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Stops the current animation montage.\n\n@param OverrideBlendTime If >= 0, will override the BlendOutTime parameter on the AnimMontage instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_MontageStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "MontageStop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_MontageStop_Statics::GameplayAbility_eventMontageStop_Parms), Z_Construct_UFunction_UGameplayAbility_MontageStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_MontageStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_MontageStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_MontageStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_MontageStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_MontageStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_RemoveGrantedByEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_RemoveGrantedByEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Removes the GameplayEffect that granted this ability. Can only be called on instanced abilities. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Removes the GameplayEffect that granted this ability. Can only be called on instanced abilities." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_RemoveGrantedByEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "RemoveGrantedByEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_RemoveGrantedByEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_RemoveGrantedByEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_RemoveGrantedByEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_RemoveGrantedByEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent_Statics
	{
		struct GameplayAbility_eventSendGameplayEvent_Parms
		{
			FGameplayTag EventTag;
			FGameplayEventData Payload;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventSendGameplayEvent_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayAbility_eventSendGameplayEvent_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(nullptr, 0) }; // 252801246
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Sends a gameplay event, also creates a prediction window */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Sends a gameplay event, also creates a prediction window" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "SendGameplayEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent_Statics::GameplayAbility_eventSendGameplayEvent_Parms), Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled_Statics
	{
		struct GameplayAbility_eventSetCanBeCanceled_Parms
		{
			bool bCanBeCanceled;
		};
		static void NewProp_bCanBeCanceled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeCanceled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled_Statics::NewProp_bCanBeCanceled_SetBit(void* Obj)
	{
		((GameplayAbility_eventSetCanBeCanceled_Parms*)Obj)->bCanBeCanceled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled_Statics::NewProp_bCanBeCanceled = { "bCanBeCanceled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventSetCanBeCanceled_Parms), &Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled_Statics::NewProp_bCanBeCanceled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled_Statics::NewProp_bCanBeCanceled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Sets whether the ability should ignore cancel requests. Only valid on instanced abilities */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Sets whether the ability should ignore cancel requests. Only valid on instanced abilities" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "SetCanBeCanceled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled_Statics::GameplayAbility_eventSetCanBeCanceled_Parms), Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities_Statics
	{
		struct GameplayAbility_eventSetShouldBlockOtherAbilities_Parms
		{
			bool bShouldBlockAbilities;
		};
		static void NewProp_bShouldBlockAbilities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBlockAbilities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities_Statics::NewProp_bShouldBlockAbilities_SetBit(void* Obj)
	{
		((GameplayAbility_eventSetShouldBlockOtherAbilities_Parms*)Obj)->bShouldBlockAbilities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities_Statics::NewProp_bShouldBlockAbilities = { "bShouldBlockAbilities", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayAbility_eventSetShouldBlockOtherAbilities_Parms), &Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities_Statics::NewProp_bShouldBlockAbilities_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities_Statics::NewProp_bShouldBlockAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Sets rather ability block flags are enabled or disabled. Only valid on instanced abilities */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Sets rather ability block flags are enabled or disabled. Only valid on instanced abilities" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayAbility, nullptr, "SetShouldBlockOtherAbilities", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities_Statics::GameplayAbility_eventSetShouldBlockOtherAbilities_Parms), Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayAbility);
	UClass* Z_Construct_UClass_UGameplayAbility_NoRegister()
	{
		return UGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicateInputDirectly_MetaData[];
#endif
		static void NewProp_bReplicateInputDirectly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicateInputDirectly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteInstanceEnded_MetaData[];
#endif
		static void NewProp_RemoteInstanceEnded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RemoteInstanceEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReplicationPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancingPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InstancingPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bServerRespectsRemoteAbilityCancellation_MetaData[];
#endif
		static void NewProp_bServerRespectsRemoteAbilityCancellation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bServerRespectsRemoteAbilityCancellation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetriggerInstancedAbility_MetaData[];
#endif
		static void NewProp_bRetriggerInstancedAbility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetriggerInstancedAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActivationInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentActivationInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentEventData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetExecutionPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NetExecutionPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetSecurityPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NetSecurityPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CostGameplayEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CostGameplayEffectClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTriggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTriggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityTriggers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CooldownGameplayEffectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CooldownGameplayEffectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CancelAbilitiesWithTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CancelAbilitiesWithTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockAbilitiesWithTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockAbilitiesWithTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationOwnedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationOwnedTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationRequiredTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationRequiredTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationBlockedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActivationBlockedTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceRequiredTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceRequiredTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBlockedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBlockedTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRequiredTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRequiredTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBlockedTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetBlockedTags;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveTasks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAbilityEnding_MetaData[];
#endif
		static void NewProp_bIsAbilityEnding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAbilityEnding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCancelable_MetaData[];
#endif
		static void NewProp_bIsCancelable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCancelable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlockingOtherAbilities_MetaData[];
#endif
		static void NewProp_bIsBlockingOtherAbilities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlockingOtherAbilities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMarkPendingKillOnAbilityEnd_MetaData[];
#endif
		static void NewProp_bMarkPendingKillOnAbilityEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkPendingKillOnAbilityEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToOwner, "BP_ApplyGameplayEffectToOwner" }, // 2846289236
		{ &Z_Construct_UFunction_UGameplayAbility_BP_ApplyGameplayEffectToTarget, "BP_ApplyGameplayEffectToTarget" }, // 2523615033
		{ &Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags, "BP_RemoveGameplayEffectFromOwnerWithAssetTags" }, // 2349957611
		{ &Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags, "BP_RemoveGameplayEffectFromOwnerWithGrantedTags" }, // 2977873431
		{ &Z_Construct_UFunction_UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle, "BP_RemoveGameplayEffectFromOwnerWithHandle" }, // 373687398
		{ &Z_Construct_UFunction_UGameplayAbility_CancelTaskByInstanceName, "CancelTaskByInstanceName" }, // 3269535617
		{ &Z_Construct_UFunction_UGameplayAbility_ConfirmTaskByInstanceName, "ConfirmTaskByInstanceName" }, // 1063000221
		{ &Z_Construct_UFunction_UGameplayAbility_EndAbilityState, "EndAbilityState" }, // 738128844
		{ &Z_Construct_UFunction_UGameplayAbility_EndTaskByInstanceName, "EndTaskByInstanceName" }, // 3153670497
		{ &Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel, "GetAbilityLevel" }, // 1201824314
		{ &Z_Construct_UFunction_UGameplayAbility_GetAbilityLevel_BP, "GetAbilityLevel_BP" }, // 3224922475
		{ &Z_Construct_UFunction_UGameplayAbility_GetAbilitySystemComponentFromActorInfo, "GetAbilitySystemComponentFromActorInfo" }, // 2941761038
		{ &Z_Construct_UFunction_UGameplayAbility_GetActorInfo, "GetActorInfo" }, // 399109659
		{ &Z_Construct_UFunction_UGameplayAbility_GetAvatarActorFromActorInfo, "GetAvatarActorFromActorInfo" }, // 98359466
		{ &Z_Construct_UFunction_UGameplayAbility_GetContextFromOwner, "GetContextFromOwner" }, // 3435174093
		{ &Z_Construct_UFunction_UGameplayAbility_GetCooldownTimeRemaining, "GetCooldownTimeRemaining" }, // 2615908346
		{ &Z_Construct_UFunction_UGameplayAbility_GetCurrentMontage, "GetCurrentMontage" }, // 692575744
		{ &Z_Construct_UFunction_UGameplayAbility_GetCurrentSourceObject, "GetCurrentSourceObject" }, // 4256103076
		{ &Z_Construct_UFunction_UGameplayAbility_GetGrantedByEffectContext, "GetGrantedByEffectContext" }, // 1946098199
		{ &Z_Construct_UFunction_UGameplayAbility_GetOwningActorFromActorInfo, "GetOwningActorFromActorInfo" }, // 1898365582
		{ &Z_Construct_UFunction_UGameplayAbility_GetOwningComponentFromActorInfo, "GetOwningComponentFromActorInfo" }, // 2279031430
		{ &Z_Construct_UFunction_UGameplayAbility_GetSourceObject_BP, "GetSourceObject_BP" }, // 3180586157
		{ &Z_Construct_UFunction_UGameplayAbility_InvalidateClientPredictionKey, "InvalidateClientPredictionKey" }, // 427604385
		{ &Z_Construct_UFunction_UGameplayAbility_IsLocallyControlled, "IsLocallyControlled" }, // 4044101867
		{ &Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbility, "K2_ActivateAbility" }, // 1992500660
		{ &Z_Construct_UFunction_UGameplayAbility_K2_ActivateAbilityFromEvent, "K2_ActivateAbilityFromEvent" }, // 2860753410
		{ &Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCue, "K2_AddGameplayCue" }, // 3032604376
		{ &Z_Construct_UFunction_UGameplayAbility_K2_AddGameplayCueWithParams, "K2_AddGameplayCueWithParams" }, // 1028076064
		{ &Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner, "K2_ApplyGameplayEffectSpecToOwner" }, // 1304891037
		{ &Z_Construct_UFunction_UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget, "K2_ApplyGameplayEffectSpecToTarget" }, // 4196377013
		{ &Z_Construct_UFunction_UGameplayAbility_K2_CanActivateAbility, "K2_CanActivateAbility" }, // 365153794
		{ &Z_Construct_UFunction_UGameplayAbility_K2_CancelAbility, "K2_CancelAbility" }, // 2360047878
		{ &Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCooldown, "K2_CheckAbilityCooldown" }, // 1991715359
		{ &Z_Construct_UFunction_UGameplayAbility_K2_CheckAbilityCost, "K2_CheckAbilityCost" }, // 2835064622
		{ &Z_Construct_UFunction_UGameplayAbility_K2_CommitAbility, "K2_CommitAbility" }, // 3542261008
		{ &Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCooldown, "K2_CommitAbilityCooldown" }, // 1059622395
		{ &Z_Construct_UFunction_UGameplayAbility_K2_CommitAbilityCost, "K2_CommitAbilityCost" }, // 1783720614
		{ &Z_Construct_UFunction_UGameplayAbility_K2_CommitExecute, "K2_CommitExecute" }, // 1512700057
		{ &Z_Construct_UFunction_UGameplayAbility_K2_EndAbility, "K2_EndAbility" }, // 842891073
		{ &Z_Construct_UFunction_UGameplayAbility_K2_EndAbilityLocally, "K2_EndAbilityLocally" }, // 767404272
		{ &Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCue, "K2_ExecuteGameplayCue" }, // 3523284162
		{ &Z_Construct_UFunction_UGameplayAbility_K2_ExecuteGameplayCueWithParams, "K2_ExecuteGameplayCueWithParams" }, // 1158665526
		{ &Z_Construct_UFunction_UGameplayAbility_K2_HasAuthority, "K2_HasAuthority" }, // 2500647517
		{ &Z_Construct_UFunction_UGameplayAbility_K2_OnEndAbility, "K2_OnEndAbility" }, // 629821566
		{ &Z_Construct_UFunction_UGameplayAbility_K2_RemoveGameplayCue, "K2_RemoveGameplayCue" }, // 2664342279
		{ &Z_Construct_UFunction_UGameplayAbility_K2_ShouldAbilityRespondToEvent, "K2_ShouldAbilityRespondToEvent" }, // 123885873
		{ &Z_Construct_UFunction_UGameplayAbility_MakeOutgoingGameplayEffectSpec, "MakeOutgoingGameplayEffectSpec" }, // 3851297765
		{ &Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerActor, "MakeTargetLocationInfoFromOwnerActor" }, // 557548520
		{ &Z_Construct_UFunction_UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent, "MakeTargetLocationInfoFromOwnerSkeletalMeshComponent" }, // 1017937680
		{ &Z_Construct_UFunction_UGameplayAbility_MontageJumpToSection, "MontageJumpToSection" }, // 3945876061
		{ &Z_Construct_UFunction_UGameplayAbility_MontageSetNextSectionName, "MontageSetNextSectionName" }, // 4010782537
		{ &Z_Construct_UFunction_UGameplayAbility_MontageStop, "MontageStop" }, // 2622691083
		{ &Z_Construct_UFunction_UGameplayAbility_RemoveGrantedByEffect, "RemoveGrantedByEffect" }, // 1805263730
		{ &Z_Construct_UFunction_UGameplayAbility_SendGameplayEvent, "SendGameplayEvent" }, // 339321070
		{ &Z_Construct_UFunction_UGameplayAbility_SetCanBeCanceled, "SetCanBeCanceled" }, // 857908973
		{ &Z_Construct_UFunction_UGameplayAbility_SetShouldBlockOtherAbilities, "SetShouldBlockOtherAbilities" }, // 2018204433
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Abilities define custom gameplay logic that can be activated by players or external game logic */" },
		{ "IncludePath", "Abilities/GameplayAbility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Abilities define custom gameplay logic that can be activated by players or external game logic" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_AbilityTags_MetaData[] = {
		{ "Categories", "AbilityTagCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** This ability has these tags */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "This ability has these tags" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_AbilityTags = { "AbilityTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, AbilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_AbilityTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_AbilityTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bReplicateInputDirectly_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** If true, this ability will always replicate input press/release events to the server. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "If true, this ability will always replicate input press/release events to the server." },
	};
#endif
	void Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bReplicateInputDirectly_SetBit(void* Obj)
	{
		((UGameplayAbility*)Obj)->bReplicateInputDirectly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bReplicateInputDirectly = { "bReplicateInputDirectly", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayAbility), &Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bReplicateInputDirectly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bReplicateInputDirectly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bReplicateInputDirectly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_RemoteInstanceEnded_MetaData[] = {
		{ "Comment", "/** Set when the remote instance of this ability has ended (but the local instance may still be running or finishing up */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Set when the remote instance of this ability has ended (but the local instance may still be running or finishing up" },
	};
#endif
	void Z_Construct_UClass_UGameplayAbility_Statics::NewProp_RemoteInstanceEnded_SetBit(void* Obj)
	{
		((UGameplayAbility*)Obj)->RemoteInstanceEnded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_RemoteInstanceEnded = { "RemoteInstanceEnded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayAbility), &Z_Construct_UClass_UGameplayAbility_Statics::NewProp_RemoteInstanceEnded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_RemoteInstanceEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_RemoteInstanceEnded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ReplicationPolicy_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** How an ability replicates state/events to everyone on the network. Replication is not required for NetExecutionPolicy. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "How an ability replicates state/events to everyone on the network. Replication is not required for NetExecutionPolicy." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ReplicationPolicy = { "ReplicationPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, ReplicationPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityReplicationPolicy, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ReplicationPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ReplicationPolicy_MetaData)) }; // 1919722029
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_InstancingPolicy_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** How the ability is instanced when executed. This limits what an ability can do in its implementation. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "How the ability is instanced when executed. This limits what an ability can do in its implementation." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_InstancingPolicy = { "InstancingPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, InstancingPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityInstancingPolicy, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_InstancingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_InstancingPolicy_MetaData)) }; // 2008600999
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bServerRespectsRemoteAbilityCancellation_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** If this is set, the server-side version of the ability can be canceled by the client-side version. The client-side version can always be canceled by the server. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "If this is set, the server-side version of the ability can be canceled by the client-side version. The client-side version can always be canceled by the server." },
	};
#endif
	void Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bServerRespectsRemoteAbilityCancellation_SetBit(void* Obj)
	{
		((UGameplayAbility*)Obj)->bServerRespectsRemoteAbilityCancellation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bServerRespectsRemoteAbilityCancellation = { "bServerRespectsRemoteAbilityCancellation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayAbility), &Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bServerRespectsRemoteAbilityCancellation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bServerRespectsRemoteAbilityCancellation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bServerRespectsRemoteAbilityCancellation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bRetriggerInstancedAbility_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** if true, and trying to activate an already active instanced ability, end it and re-trigger it. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "if true, and trying to activate an already active instanced ability, end it and re-trigger it." },
	};
#endif
	void Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bRetriggerInstancedAbility_SetBit(void* Obj)
	{
		((UGameplayAbility*)Obj)->bRetriggerInstancedAbility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bRetriggerInstancedAbility = { "bRetriggerInstancedAbility", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayAbility), &Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bRetriggerInstancedAbility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bRetriggerInstancedAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bRetriggerInstancedAbility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CurrentActivationInfo_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** This is information specific to this instance of the ability. E.g, whether it is predicting, authoring, confirmed, etc. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "This is information specific to this instance of the ability. E.g, whether it is predicting, authoring, confirmed, etc." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CurrentActivationInfo = { "CurrentActivationInfo", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, CurrentActivationInfo), Z_Construct_UScriptStruct_FGameplayAbilityActivationInfo, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CurrentActivationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CurrentActivationInfo_MetaData)) }; // 4255034867
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CurrentEventData_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Information specific to this instance of the ability, if it was activated by an event */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Information specific to this instance of the ability, if it was activated by an event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CurrentEventData = { "CurrentEventData", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, CurrentEventData), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CurrentEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CurrentEventData_MetaData)) }; // 252801246
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_NetExecutionPolicy_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** How does an ability execute on the network. Does a client \"ask and predict\", \"ask and wait\", \"don't ask (just do it)\". */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "How does an ability execute on the network. Does a client \"ask and predict\", \"ask and wait\", \"don't ask (just do it)\"." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_NetExecutionPolicy = { "NetExecutionPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, NetExecutionPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetExecutionPolicy, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_NetExecutionPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_NetExecutionPolicy_MetaData)) }; // 3061392858
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_NetSecurityPolicy_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** What protections does this ability have? Should the client be allowed to request changes to the execution of the ability? */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "What protections does this ability have? Should the client be allowed to request changes to the execution of the ability?" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_NetSecurityPolicy = { "NetSecurityPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, NetSecurityPolicy), Z_Construct_UEnum_GameplayAbilities_EGameplayAbilityNetSecurityPolicy, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_NetSecurityPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_NetSecurityPolicy_MetaData)) }; // 2744907062
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CostGameplayEffectClass_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "/** This GameplayEffect represents the cost (mana, stamina, etc) of the ability. It will be applied when the ability is committed. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "This GameplayEffect represents the cost (mana, stamina, etc) of the ability. It will be applied when the ability is committed." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CostGameplayEffectClass = { "CostGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, CostGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CostGameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CostGameplayEffectClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_AbilityTriggers_Inner = { "AbilityTriggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAbilityTriggerData, METADATA_PARAMS(nullptr, 0) }; // 3014720495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_AbilityTriggers_MetaData[] = {
		{ "Category", "Triggers" },
		{ "Comment", "/** Triggers to determine if this ability should execute in response to an event */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Triggers to determine if this ability should execute in response to an event" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_AbilityTriggers = { "AbilityTriggers", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, AbilityTriggers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_AbilityTriggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_AbilityTriggers_MetaData)) }; // 3014720495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CooldownGameplayEffectClass_MetaData[] = {
		{ "Category", "Cooldowns" },
		{ "Comment", "/** This GameplayEffect represents the cooldown. It will be applied when the ability is committed and the ability cannot be used again until it is expired. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "This GameplayEffect represents the cooldown. It will be applied when the ability is committed and the ability cannot be used again until it is expired." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CooldownGameplayEffectClass = { "CooldownGameplayEffectClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, CooldownGameplayEffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CooldownGameplayEffectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CooldownGameplayEffectClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CancelAbilitiesWithTag_MetaData[] = {
		{ "Categories", "AbilityTagCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** Abilities with these tags are cancelled when this ability is executed */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Abilities with these tags are cancelled when this ability is executed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CancelAbilitiesWithTag = { "CancelAbilitiesWithTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, CancelAbilitiesWithTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CancelAbilitiesWithTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CancelAbilitiesWithTag_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_BlockAbilitiesWithTag_MetaData[] = {
		{ "Categories", "AbilityTagCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** Abilities with these tags are blocked while this ability is active */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Abilities with these tags are blocked while this ability is active" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_BlockAbilitiesWithTag = { "BlockAbilitiesWithTag", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, BlockAbilitiesWithTag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_BlockAbilitiesWithTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_BlockAbilitiesWithTag_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActivationOwnedTags_MetaData[] = {
		{ "Categories", "OwnedTagsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** Tags to apply to activating owner while this ability is active. These are replicated if ReplicateActivationOwnedTags is enabled in AbilitySystemGlobals. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Tags to apply to activating owner while this ability is active. These are replicated if ReplicateActivationOwnedTags is enabled in AbilitySystemGlobals." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActivationOwnedTags = { "ActivationOwnedTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, ActivationOwnedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActivationOwnedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActivationOwnedTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActivationRequiredTags_MetaData[] = {
		{ "Categories", "OwnedTagsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** This ability can only be activated if the activating actor/component has all of these tags */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "This ability can only be activated if the activating actor/component has all of these tags" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActivationRequiredTags = { "ActivationRequiredTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, ActivationRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActivationRequiredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActivationRequiredTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActivationBlockedTags_MetaData[] = {
		{ "Categories", "OwnedTagsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** This ability is blocked if the activating actor/component has any of these tags */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "This ability is blocked if the activating actor/component has any of these tags" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActivationBlockedTags = { "ActivationBlockedTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, ActivationBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActivationBlockedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActivationBlockedTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_SourceRequiredTags_MetaData[] = {
		{ "Categories", "SourceTagsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** This ability can only be activated if the source actor/component has all of these tags */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "This ability can only be activated if the source actor/component has all of these tags" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_SourceRequiredTags = { "SourceRequiredTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, SourceRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_SourceRequiredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_SourceRequiredTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_SourceBlockedTags_MetaData[] = {
		{ "Categories", "SourceTagsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** This ability is blocked if the source actor/component has any of these tags */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "This ability is blocked if the source actor/component has any of these tags" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_SourceBlockedTags = { "SourceBlockedTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, SourceBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_SourceBlockedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_SourceBlockedTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_TargetRequiredTags_MetaData[] = {
		{ "Categories", "TargetTagsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** This ability can only be activated if the target actor/component has all of these tags */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "This ability can only be activated if the target actor/component has all of these tags" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_TargetRequiredTags = { "TargetRequiredTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, TargetRequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_TargetRequiredTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_TargetRequiredTags_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_TargetBlockedTags_MetaData[] = {
		{ "Categories", "TargetTagsCategory" },
		{ "Category", "Tags" },
		{ "Comment", "/** This ability is blocked if the target actor/component has any of these tags */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "This ability is blocked if the target actor/component has any of these tags" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_TargetBlockedTags = { "TargetBlockedTags", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, TargetBlockedTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_TargetBlockedTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_TargetBlockedTags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActiveTasks_Inner = { "ActiveTasks", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActiveTasks_MetaData[] = {
		{ "Comment", "/** List of currently active tasks, do not modify directly */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "List of currently active tasks, do not modify directly" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActiveTasks = { "ActiveTasks", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, ActiveTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActiveTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActiveTasks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CurrentMontage_MetaData[] = {
		{ "Comment", "/** Active montage being played by this ability */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Active montage being played by this ability" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CurrentMontage = { "CurrentMontage", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayAbility, CurrentMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CurrentMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CurrentMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Comment", "/** True if the ability is currently active. For instance per owner abilities */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "True if the ability is currently active. For instance per owner abilities" },
	};
#endif
	void Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((UGameplayAbility*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayAbility), &Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsAbilityEnding_MetaData[] = {
		{ "Comment", "/** True if the end ability has been called, but has not yet completed. */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "True if the end ability has been called, but has not yet completed." },
	};
#endif
	void Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsAbilityEnding_SetBit(void* Obj)
	{
		((UGameplayAbility*)Obj)->bIsAbilityEnding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsAbilityEnding = { "bIsAbilityEnding", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayAbility), &Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsAbilityEnding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsAbilityEnding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsAbilityEnding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsCancelable_MetaData[] = {
		{ "Comment", "/** True if the ability is currently cancelable, if not will only be canceled by hard EndAbility calls */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "True if the ability is currently cancelable, if not will only be canceled by hard EndAbility calls" },
	};
#endif
	void Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsCancelable_SetBit(void* Obj)
	{
		((UGameplayAbility*)Obj)->bIsCancelable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsCancelable = { "bIsCancelable", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayAbility), &Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsCancelable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsCancelable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsCancelable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsBlockingOtherAbilities_MetaData[] = {
		{ "Comment", "/** True if the ability block flags are currently enabled */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "True if the ability block flags are currently enabled" },
	};
#endif
	void Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsBlockingOtherAbilities_SetBit(void* Obj)
	{
		((UGameplayAbility*)Obj)->bIsBlockingOtherAbilities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsBlockingOtherAbilities = { "bIsBlockingOtherAbilities", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayAbility), &Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsBlockingOtherAbilities_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsBlockingOtherAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsBlockingOtherAbilities_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bMarkPendingKillOnAbilityEnd_MetaData[] = {
		{ "Category", "Ability" },
		{ "Comment", "/** Flag that is set by AbilitySystemComponent::OnRemoveAbility to indicate the ability needs to be cleaned up in AbilitySystemComponent::NotifyAbilityEnded */" },
		{ "ModuleRelativePath", "Public/Abilities/GameplayAbility.h" },
		{ "ToolTip", "Flag that is set by AbilitySystemComponent::OnRemoveAbility to indicate the ability needs to be cleaned up in AbilitySystemComponent::NotifyAbilityEnded" },
	};
#endif
	void Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bMarkPendingKillOnAbilityEnd_SetBit(void* Obj)
	{
		((UGameplayAbility*)Obj)->bMarkPendingKillOnAbilityEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bMarkPendingKillOnAbilityEnd = { "bMarkPendingKillOnAbilityEnd", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameplayAbility), &Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bMarkPendingKillOnAbilityEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bMarkPendingKillOnAbilityEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bMarkPendingKillOnAbilityEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_AbilityTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bReplicateInputDirectly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_RemoteInstanceEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ReplicationPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_InstancingPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bServerRespectsRemoteAbilityCancellation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bRetriggerInstancedAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CurrentActivationInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CurrentEventData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_NetExecutionPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_NetSecurityPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CostGameplayEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_AbilityTriggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_AbilityTriggers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CooldownGameplayEffectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CancelAbilitiesWithTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_BlockAbilitiesWithTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActivationOwnedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActivationRequiredTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActivationBlockedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_SourceRequiredTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_SourceBlockedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_TargetRequiredTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_TargetBlockedTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActiveTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_ActiveTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_CurrentMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsAbilityEnding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsCancelable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bIsBlockingOtherAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbility_Statics::NewProp_bMarkPendingKillOnAbilityEnd,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameplayAbility_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UGameplayAbility, IGameplayTaskOwnerInterface), false },  // 2384509100
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbility_Statics::ClassParams = {
		&UGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayAbility_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayAbility.OuterSingleton, Z_Construct_UClass_UGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayAbility.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayAbility>()
	{
		return UGameplayAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbility);
	UGameplayAbility::~UGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_Statics::ScriptStructInfo[] = {
		{ FAbilityTriggerData::StaticStruct, Z_Construct_UScriptStruct_FAbilityTriggerData_Statics::NewStructOps, TEXT("AbilityTriggerData"), &Z_Registration_Info_UScriptStruct_AbilityTriggerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityTriggerData), 3014720495U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayAbility, UGameplayAbility::StaticClass, TEXT("UGameplayAbility"), &Z_Registration_Info_UClass_UGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayAbility), 467661532U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_3957751524(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_GameplayAbility_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
