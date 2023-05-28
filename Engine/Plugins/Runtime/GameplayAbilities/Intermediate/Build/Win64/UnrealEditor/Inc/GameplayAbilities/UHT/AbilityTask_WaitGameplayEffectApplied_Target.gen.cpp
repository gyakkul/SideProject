// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Target.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitGameplayEffectApplied_Target() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRequirements();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics
	{
		struct _Script_GameplayAbilities_eventGameplayEffectAppliedTargetDelegate_Parms
		{
			AActor* Target;
			FGameplayEffectSpecHandle SpecHandle;
			FActiveGameplayEffectHandle ActiveHandle;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventGameplayEffectAppliedTargetDelegate_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics::NewProp_SpecHandle = { "SpecHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventGameplayEffectAppliedTargetDelegate_Parms, SpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(nullptr, 0) }; // 1303953225
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventGameplayEffectAppliedTargetDelegate_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 3579869929
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics::NewProp_SpecHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics::NewProp_ActiveHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Target.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "GameplayEffectAppliedTargetDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventGameplayEffectAppliedTargetDelegate_Parms), Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGameplayEffectAppliedTargetDelegate_DelegateWrapper(const FMulticastScriptDelegate& GameplayEffectAppliedTargetDelegate, AActor* Target, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle)
{
	struct _Script_GameplayAbilities_eventGameplayEffectAppliedTargetDelegate_Parms
	{
		AActor* Target;
		FGameplayEffectSpecHandle SpecHandle;
		FActiveGameplayEffectHandle ActiveHandle;
	};
	_Script_GameplayAbilities_eventGameplayEffectAppliedTargetDelegate_Parms Parms;
	Parms.Target=Target;
	Parms.SpecHandle=SpecHandle;
	Parms.ActiveHandle=ActiveHandle;
	GameplayEffectAppliedTargetDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityTask_WaitGameplayEffectApplied_Target::execWaitGameplayEffectAppliedToTarget_Query)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FGameplayTargetDataFilterHandle,Z_Param_SourceFilter);
		P_GET_STRUCT(FGameplayTagQuery,Z_Param_SourceTagQuery);
		P_GET_STRUCT(FGameplayTagQuery,Z_Param_TargetTagQuery);
		P_GET_UBOOL(Z_Param_TriggerOnce);
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalOwner);
		P_GET_UBOOL(Z_Param_ListenForPeriodicEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitGameplayEffectApplied_Target**)Z_Param__Result=UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget_Query(Z_Param_OwningAbility,Z_Param_SourceFilter,Z_Param_SourceTagQuery,Z_Param_TargetTagQuery,Z_Param_TriggerOnce,Z_Param_OptionalExternalOwner,Z_Param_ListenForPeriodicEffect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitGameplayEffectApplied_Target::execWaitGameplayEffectAppliedToTarget)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FGameplayTargetDataFilterHandle,Z_Param_TargetFilter);
		P_GET_STRUCT(FGameplayTagRequirements,Z_Param_SourceTagRequirements);
		P_GET_STRUCT(FGameplayTagRequirements,Z_Param_TargetTagRequirements);
		P_GET_UBOOL(Z_Param_TriggerOnce);
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalOwner);
		P_GET_UBOOL(Z_Param_ListenForPeriodicEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitGameplayEffectApplied_Target**)Z_Param__Result=UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget(Z_Param_OwningAbility,Z_Param_TargetFilter,Z_Param_SourceTagRequirements,Z_Param_TargetTagRequirements,Z_Param_TriggerOnce,Z_Param_OptionalExternalOwner,Z_Param_ListenForPeriodicEffects);
		P_NATIVE_END;
	}
	void UAbilityTask_WaitGameplayEffectApplied_Target::StaticRegisterNativesUAbilityTask_WaitGameplayEffectApplied_Target()
	{
		UClass* Class = UAbilityTask_WaitGameplayEffectApplied_Target::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitGameplayEffectAppliedToTarget", &UAbilityTask_WaitGameplayEffectApplied_Target::execWaitGameplayEffectAppliedToTarget },
			{ "WaitGameplayEffectAppliedToTarget_Query", &UAbilityTask_WaitGameplayEffectApplied_Target::execWaitGameplayEffectAppliedToTarget_Query },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics
	{
		struct AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayTargetDataFilterHandle TargetFilter;
			FGameplayTagRequirements SourceTagRequirements;
			FGameplayTagRequirements TargetTagRequirements;
			bool TriggerOnce;
			AActor* OptionalExternalOwner;
			bool ListenForPeriodicEffects;
			UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetFilter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTagRequirements;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTagRequirements;
		static void NewProp_TriggerOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TriggerOnce;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalOwner;
		static void NewProp_ListenForPeriodicEffects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ListenForPeriodicEffects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_TargetFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_TargetFilter = { "TargetFilter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Parms, TargetFilter), Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_TargetFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_TargetFilter_MetaData)) }; // 3502446820
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_SourceTagRequirements = { "SourceTagRequirements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Parms, SourceTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(nullptr, 0) }; // 1682790808
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_TargetTagRequirements = { "TargetTagRequirements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Parms, TargetTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(nullptr, 0) }; // 1682790808
	void Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_TriggerOnce_SetBit(void* Obj)
	{
		((AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Parms*)Obj)->TriggerOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_TriggerOnce = { "TriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Parms), &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_TriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_OptionalExternalOwner = { "OptionalExternalOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Parms, OptionalExternalOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_ListenForPeriodicEffects_SetBit(void* Obj)
	{
		((AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Parms*)Obj)->ListenForPeriodicEffects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_ListenForPeriodicEffects = { "ListenForPeriodicEffects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Parms), &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_ListenForPeriodicEffects_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_TargetFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_SourceTagRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_TargetTagRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_TriggerOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_OptionalExternalOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_ListenForPeriodicEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** \n\x09 * Wait until the owner (or External Owner) applies a GameplayEffect to a Target (the target may be the owner too!). If TriggerOnce is true, this task will only return one time. Otherwise it will return everytime a GE is applied that meets the requirements over the life of the ability \n\x09 * Optional External Owner can be used to run this task on someone else (not the owner of the ability). By default you can leave this empty.\n\x09 */" },
		{ "CPP_Default_ListenForPeriodicEffects", "false" },
		{ "CPP_Default_OptionalExternalOwner", "None" },
		{ "CPP_Default_TriggerOnce", "false" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Target.h" },
		{ "ToolTip", "Wait until the owner (or External Owner) applies a GameplayEffect to a Target (the target may be the owner too!). If TriggerOnce is true, this task will only return one time. Otherwise it will return everytime a GE is applied that meets the requirements over the life of the ability\nOptional External Owner can be used to run this task on someone else (not the owner of the ability). By default you can leave this empty." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target, nullptr, "WaitGameplayEffectAppliedToTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Parms), Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics
	{
		struct AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Query_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayTargetDataFilterHandle SourceFilter;
			FGameplayTagQuery SourceTagQuery;
			FGameplayTagQuery TargetTagQuery;
			bool TriggerOnce;
			AActor* OptionalExternalOwner;
			bool ListenForPeriodicEffect;
			UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceFilter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTagQuery;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTagQuery;
		static void NewProp_TriggerOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TriggerOnce;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalOwner;
		static void NewProp_ListenForPeriodicEffect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ListenForPeriodicEffect;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Query_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_SourceFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_SourceFilter = { "SourceFilter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Query_Parms, SourceFilter), Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_SourceFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_SourceFilter_MetaData)) }; // 3502446820
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_SourceTagQuery = { "SourceTagQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Query_Parms, SourceTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(nullptr, 0) }; // 689482789
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_TargetTagQuery = { "TargetTagQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Query_Parms, TargetTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(nullptr, 0) }; // 689482789
	void Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_TriggerOnce_SetBit(void* Obj)
	{
		((AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Query_Parms*)Obj)->TriggerOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_TriggerOnce = { "TriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Query_Parms), &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_TriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_OptionalExternalOwner = { "OptionalExternalOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Query_Parms, OptionalExternalOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_ListenForPeriodicEffect_SetBit(void* Obj)
	{
		((AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Query_Parms*)Obj)->ListenForPeriodicEffect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_ListenForPeriodicEffect = { "ListenForPeriodicEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Query_Parms), &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_ListenForPeriodicEffect_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Query_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_SourceFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_SourceTagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_TargetTagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_TriggerOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_OptionalExternalOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_ListenForPeriodicEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** \n\x09 * Wait until the owner (or External Owner) applies a GameplayEffect to a Target (the target may be the owner too!). If TriggerOnce is true, this task will only return one time. Otherwise it will return everytime a GE is applied that meets the requirements over the life of the ability \n\x09 * Optional External Owner can be used to run this task on someone else (not the owner of the ability). By default you can leave this empty.\n\x09 */" },
		{ "CPP_Default_ListenForPeriodicEffect", "false" },
		{ "CPP_Default_OptionalExternalOwner", "None" },
		{ "CPP_Default_TriggerOnce", "false" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Target.h" },
		{ "ToolTip", "Wait until the owner (or External Owner) applies a GameplayEffect to a Target (the target may be the owner too!). If TriggerOnce is true, this task will only return one time. Otherwise it will return everytime a GE is applied that meets the requirements over the life of the ability\nOptional External Owner can be used to run this task on someone else (not the owner of the ability). By default you can leave this empty." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target, nullptr, "WaitGameplayEffectAppliedToTarget_Query", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::AbilityTask_WaitGameplayEffectApplied_Target_eventWaitGameplayEffectAppliedToTarget_Query_Parms), Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitGameplayEffectApplied_Target);
	UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_NoRegister()
	{
		return UAbilityTask_WaitGameplayEffectApplied_Target::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnApplied_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnApplied;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget, "WaitGameplayEffectAppliedToTarget" }, // 38463517
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query, "WaitGameplayEffectAppliedToTarget_Query" }, // 2512811078
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Target.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Target.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::NewProp_OnApplied_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectApplied_Target.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::NewProp_OnApplied = { "OnApplied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitGameplayEffectApplied_Target, OnApplied), Z_Construct_UDelegateFunction_GameplayAbilities_GameplayEffectAppliedTargetDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::NewProp_OnApplied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::NewProp_OnApplied_MetaData)) }; // 3067658576
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::NewProp_OnApplied,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitGameplayEffectApplied_Target>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::ClassParams = {
		&UAbilityTask_WaitGameplayEffectApplied_Target::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectApplied_Target.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectApplied_Target.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectApplied_Target.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitGameplayEffectApplied_Target>()
	{
		return UAbilityTask_WaitGameplayEffectApplied_Target::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitGameplayEffectApplied_Target);
	UAbilityTask_WaitGameplayEffectApplied_Target::~UAbilityTask_WaitGameplayEffectApplied_Target() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Target_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Target_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitGameplayEffectApplied_Target, UAbilityTask_WaitGameplayEffectApplied_Target::StaticClass, TEXT("UAbilityTask_WaitGameplayEffectApplied_Target"), &Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectApplied_Target, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitGameplayEffectApplied_Target), 2394444736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Target_h_1622346727(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Target_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectApplied_Target_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
