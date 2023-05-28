// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_WaitAbilityActivate.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitAbilityActivate() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAbilityActivate();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityActivateDelegate__DelegateSignature();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRequirements();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityActivateDelegate__DelegateSignature_Statics
	{
		struct _Script_GameplayAbilities_eventWaitAbilityActivateDelegate_Parms
		{
			UGameplayAbility* ActivatedAbility;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatedAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityActivateDelegate__DelegateSignature_Statics::NewProp_ActivatedAbility = { "ActivatedAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventWaitAbilityActivateDelegate_Parms, ActivatedAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityActivateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityActivateDelegate__DelegateSignature_Statics::NewProp_ActivatedAbility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityActivateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAbilityActivate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityActivateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitAbilityActivateDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityActivateDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitAbilityActivateDelegate_Parms), Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityActivateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityActivateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityActivateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityActivateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityActivateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityActivateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWaitAbilityActivateDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitAbilityActivateDelegate, UGameplayAbility* ActivatedAbility)
{
	struct _Script_GameplayAbilities_eventWaitAbilityActivateDelegate_Parms
	{
		UGameplayAbility* ActivatedAbility;
	};
	_Script_GameplayAbilities_eventWaitAbilityActivateDelegate_Parms Parms;
	Parms.ActivatedAbility=ActivatedAbility;
	WaitAbilityActivateDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityTask_WaitAbilityActivate::execWaitForAbilityActivate_Query)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FGameplayTagQuery,Z_Param_Query);
		P_GET_UBOOL(Z_Param_IncludeTriggeredAbilities);
		P_GET_UBOOL(Z_Param_TriggerOnce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitAbilityActivate**)Z_Param__Result=UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate_Query(Z_Param_OwningAbility,Z_Param_Query,Z_Param_IncludeTriggeredAbilities,Z_Param_TriggerOnce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitAbilityActivate::execWaitForAbilityActivateWithTagRequirements)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FGameplayTagRequirements,Z_Param_TagRequirements);
		P_GET_UBOOL(Z_Param_IncludeTriggeredAbilities);
		P_GET_UBOOL(Z_Param_TriggerOnce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitAbilityActivate**)Z_Param__Result=UAbilityTask_WaitAbilityActivate::WaitForAbilityActivateWithTagRequirements(Z_Param_OwningAbility,Z_Param_TagRequirements,Z_Param_IncludeTriggeredAbilities,Z_Param_TriggerOnce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitAbilityActivate::execWaitForAbilityActivate)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FGameplayTag,Z_Param_WithTag);
		P_GET_STRUCT(FGameplayTag,Z_Param_WithoutTag);
		P_GET_UBOOL(Z_Param_IncludeTriggeredAbilities);
		P_GET_UBOOL(Z_Param_TriggerOnce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitAbilityActivate**)Z_Param__Result=UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate(Z_Param_OwningAbility,Z_Param_WithTag,Z_Param_WithoutTag,Z_Param_IncludeTriggeredAbilities,Z_Param_TriggerOnce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitAbilityActivate::execOnAbilityActivate)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_ActivatedAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAbilityActivate(Z_Param_ActivatedAbility);
		P_NATIVE_END;
	}
	void UAbilityTask_WaitAbilityActivate::StaticRegisterNativesUAbilityTask_WaitAbilityActivate()
	{
		UClass* Class = UAbilityTask_WaitAbilityActivate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAbilityActivate", &UAbilityTask_WaitAbilityActivate::execOnAbilityActivate },
			{ "WaitForAbilityActivate", &UAbilityTask_WaitAbilityActivate::execWaitForAbilityActivate },
			{ "WaitForAbilityActivate_Query", &UAbilityTask_WaitAbilityActivate::execWaitForAbilityActivate_Query },
			{ "WaitForAbilityActivateWithTagRequirements", &UAbilityTask_WaitAbilityActivate::execWaitForAbilityActivateWithTagRequirements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Statics
	{
		struct AbilityTask_WaitAbilityActivate_eventOnAbilityActivate_Parms
		{
			UGameplayAbility* ActivatedAbility;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatedAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Statics::NewProp_ActivatedAbility = { "ActivatedAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAbilityActivate_eventOnAbilityActivate_Parms, ActivatedAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Statics::NewProp_ActivatedAbility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAbilityActivate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitAbilityActivate, nullptr, "OnAbilityActivate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Statics::AbilityTask_WaitAbilityActivate_eventOnAbilityActivate_Parms), Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_OnAbilityActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics
	{
		struct AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayTag WithTag;
			FGameplayTag WithoutTag;
			bool IncludeTriggeredAbilities;
			bool TriggerOnce;
			UAbilityTask_WaitAbilityActivate* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WithTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WithoutTag;
		static void NewProp_IncludeTriggeredAbilities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeTriggeredAbilities;
		static void NewProp_TriggerOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TriggerOnce;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_WithTag = { "WithTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Parms, WithTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_WithoutTag = { "WithoutTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Parms, WithoutTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_IncludeTriggeredAbilities_SetBit(void* Obj)
	{
		((AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Parms*)Obj)->IncludeTriggeredAbilities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_IncludeTriggeredAbilities = { "IncludeTriggeredAbilities", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Parms), &Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_IncludeTriggeredAbilities_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_TriggerOnce_SetBit(void* Obj)
	{
		((AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Parms*)Obj)->TriggerOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_TriggerOnce = { "TriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Parms), &Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_TriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_WithTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_WithoutTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_IncludeTriggeredAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_TriggerOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait until a new ability (of the same or different type) is activated. Only input based abilities will be counted unless IncludeTriggeredAbilities is true. */" },
		{ "CPP_Default_IncludeTriggeredAbilities", "false" },
		{ "CPP_Default_TriggerOnce", "true" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAbilityActivate.h" },
		{ "ToolTip", "Wait until a new ability (of the same or different type) is activated. Only input based abilities will be counted unless IncludeTriggeredAbilities is true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitAbilityActivate, nullptr, "WaitForAbilityActivate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Parms), Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics
	{
		struct AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Query_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayTagQuery Query;
			bool IncludeTriggeredAbilities;
			bool TriggerOnce;
			UAbilityTask_WaitAbilityActivate* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Query;
		static void NewProp_IncludeTriggeredAbilities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeTriggeredAbilities;
		static void NewProp_TriggerOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TriggerOnce;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Query_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Query_Parms, Query), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(nullptr, 0) }; // 689482789
	void Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::NewProp_IncludeTriggeredAbilities_SetBit(void* Obj)
	{
		((AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Query_Parms*)Obj)->IncludeTriggeredAbilities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::NewProp_IncludeTriggeredAbilities = { "IncludeTriggeredAbilities", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Query_Parms), &Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::NewProp_IncludeTriggeredAbilities_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::NewProp_TriggerOnce_SetBit(void* Obj)
	{
		((AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Query_Parms*)Obj)->TriggerOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::NewProp_TriggerOnce = { "TriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Query_Parms), &Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::NewProp_TriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Query_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::NewProp_IncludeTriggeredAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::NewProp_TriggerOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait until a new ability (of the same or different type) is activated. Only input based abilities will be counted unless IncludeTriggeredAbilities is true. */" },
		{ "CPP_Default_IncludeTriggeredAbilities", "false" },
		{ "CPP_Default_TriggerOnce", "true" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAbilityActivate.h" },
		{ "ToolTip", "Wait until a new ability (of the same or different type) is activated. Only input based abilities will be counted unless IncludeTriggeredAbilities is true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitAbilityActivate, nullptr, "WaitForAbilityActivate_Query", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivate_Query_Parms), Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics
	{
		struct AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivateWithTagRequirements_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayTagRequirements TagRequirements;
			bool IncludeTriggeredAbilities;
			bool TriggerOnce;
			UAbilityTask_WaitAbilityActivate* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagRequirements;
		static void NewProp_IncludeTriggeredAbilities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeTriggeredAbilities;
		static void NewProp_TriggerOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TriggerOnce;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivateWithTagRequirements_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::NewProp_TagRequirements = { "TagRequirements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivateWithTagRequirements_Parms, TagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(nullptr, 0) }; // 1682790808
	void Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::NewProp_IncludeTriggeredAbilities_SetBit(void* Obj)
	{
		((AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivateWithTagRequirements_Parms*)Obj)->IncludeTriggeredAbilities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::NewProp_IncludeTriggeredAbilities = { "IncludeTriggeredAbilities", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivateWithTagRequirements_Parms), &Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::NewProp_IncludeTriggeredAbilities_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::NewProp_TriggerOnce_SetBit(void* Obj)
	{
		((AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivateWithTagRequirements_Parms*)Obj)->TriggerOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::NewProp_TriggerOnce = { "TriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivateWithTagRequirements_Parms), &Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::NewProp_TriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivateWithTagRequirements_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::NewProp_TagRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::NewProp_IncludeTriggeredAbilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::NewProp_TriggerOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait until a new ability (of the same or different type) is activated. Only input based abilities will be counted unless IncludeTriggeredAbilities is true. Uses a tag requirements structure to filter abilities. */" },
		{ "CPP_Default_IncludeTriggeredAbilities", "false" },
		{ "CPP_Default_TriggerOnce", "true" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAbilityActivate.h" },
		{ "ToolTip", "Wait until a new ability (of the same or different type) is activated. Only input based abilities will be counted unless IncludeTriggeredAbilities is true. Uses a tag requirements structure to filter abilities." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitAbilityActivate, nullptr, "WaitForAbilityActivateWithTagRequirements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::AbilityTask_WaitAbilityActivate_eventWaitForAbilityActivateWithTagRequirements_Parms), Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitAbilityActivate);
	UClass* Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_NoRegister()
	{
		return UAbilityTask_WaitAbilityActivate::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActivate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_OnAbilityActivate, "OnAbilityActivate" }, // 1834638271
		{ &Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate, "WaitForAbilityActivate" }, // 351425289
		{ &Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query, "WaitForAbilityActivate_Query" }, // 2416633310
		{ &Z_Construct_UFunction_UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements, "WaitForAbilityActivateWithTagRequirements" }, // 2365605045
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Waits for the actor to activate another ability\n */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitAbilityActivate.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAbilityActivate.h" },
		{ "ToolTip", "Waits for the actor to activate another ability" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::NewProp_OnActivate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitAbilityActivate.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::NewProp_OnActivate = { "OnActivate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitAbilityActivate, OnActivate), Z_Construct_UDelegateFunction_GameplayAbilities_WaitAbilityActivateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::NewProp_OnActivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::NewProp_OnActivate_MetaData)) }; // 3985729603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::NewProp_OnActivate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitAbilityActivate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::ClassParams = {
		&UAbilityTask_WaitAbilityActivate::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitAbilityActivate()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitAbilityActivate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitAbilityActivate.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitAbilityActivate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitAbilityActivate.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitAbilityActivate>()
	{
		return UAbilityTask_WaitAbilityActivate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitAbilityActivate);
	UAbilityTask_WaitAbilityActivate::~UAbilityTask_WaitAbilityActivate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitAbilityActivate, UAbilityTask_WaitAbilityActivate::StaticClass, TEXT("UAbilityTask_WaitAbilityActivate"), &Z_Registration_Info_UClass_UAbilityTask_WaitAbilityActivate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitAbilityActivate), 22685753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_978024021(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitAbilityActivate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
