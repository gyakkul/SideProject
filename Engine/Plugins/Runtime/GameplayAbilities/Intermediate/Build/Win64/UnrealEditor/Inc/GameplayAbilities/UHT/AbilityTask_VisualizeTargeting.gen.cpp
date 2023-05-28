// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_VisualizeTargeting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_VisualizeTargeting() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_VisualizeTargeting();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_VisualizeTargeting_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "VisualizeTargetingDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVisualizeTargetingDelegate_DelegateWrapper(const FMulticastScriptDelegate& VisualizeTargetingDelegate)
{
	VisualizeTargetingDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAbilityTask_VisualizeTargeting::execFinishSpawningActor)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_OBJECT(AGameplayAbilityTargetActor,Z_Param_SpawnedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishSpawningActor(Z_Param_OwningAbility,Z_Param_SpawnedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_VisualizeTargeting::execBeginSpawningActor)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_OBJECT_REF(AGameplayAbilityTargetActor,Z_Param_Out_SpawnedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BeginSpawningActor(Z_Param_OwningAbility,Z_Param_Class,Z_Param_Out_SpawnedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_VisualizeTargeting::execVisualizeTargetingUsingActor)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_OBJECT(AGameplayAbilityTargetActor,Z_Param_TargetActor);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_VisualizeTargeting**)Z_Param__Result=UAbilityTask_VisualizeTargeting::VisualizeTargetingUsingActor(Z_Param_OwningAbility,Z_Param_TargetActor,Z_Param_TaskInstanceName,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_VisualizeTargeting::execVisualizeTargeting)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_VisualizeTargeting**)Z_Param__Result=UAbilityTask_VisualizeTargeting::VisualizeTargeting(Z_Param_OwningAbility,Z_Param_Class,Z_Param_TaskInstanceName,Z_Param_Duration);
		P_NATIVE_END;
	}
	void UAbilityTask_VisualizeTargeting::StaticRegisterNativesUAbilityTask_VisualizeTargeting()
	{
		UClass* Class = UAbilityTask_VisualizeTargeting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginSpawningActor", &UAbilityTask_VisualizeTargeting::execBeginSpawningActor },
			{ "FinishSpawningActor", &UAbilityTask_VisualizeTargeting::execFinishSpawningActor },
			{ "VisualizeTargeting", &UAbilityTask_VisualizeTargeting::execVisualizeTargeting },
			{ "VisualizeTargetingUsingActor", &UAbilityTask_VisualizeTargeting::execVisualizeTargetingUsingActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics
	{
		struct AbilityTask_VisualizeTargeting_eventBeginSpawningActor_Parms
		{
			UGameplayAbility* OwningAbility;
			TSubclassOf<AGameplayAbilityTargetActor>  Class;
			AGameplayAbilityTargetActor* SpawnedActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventBeginSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventBeginSpawningActor_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventBeginSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AbilityTask_VisualizeTargeting_eventBeginSpawningActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_VisualizeTargeting_eventBeginSpawningActor_Parms), &Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_SpawnedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_VisualizeTargeting, nullptr, "BeginSpawningActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::AbilityTask_VisualizeTargeting_eventBeginSpawningActor_Parms), Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics
	{
		struct AbilityTask_VisualizeTargeting_eventFinishSpawningActor_Parms
		{
			UGameplayAbility* OwningAbility;
			AGameplayAbilityTargetActor* SpawnedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventFinishSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventFinishSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::NewProp_SpawnedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_VisualizeTargeting, nullptr, "FinishSpawningActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::AbilityTask_VisualizeTargeting_eventFinishSpawningActor_Parms), Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics
	{
		struct AbilityTask_VisualizeTargeting_eventVisualizeTargeting_Parms
		{
			UGameplayAbility* OwningAbility;
			TSubclassOf<AGameplayAbilityTargetActor>  Class;
			FName TaskInstanceName;
			float Duration;
			UAbilityTask_VisualizeTargeting* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargeting_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargeting_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargeting_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargeting_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargeting_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_VisualizeTargeting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_TaskInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Spawns target actor and uses it for visualization. */" },
		{ "CPP_Default_Duration", "-1.000000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "HideSpawnParms", "Instigator" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
		{ "ToolTip", "Spawns target actor and uses it for visualization." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_VisualizeTargeting, nullptr, "VisualizeTargeting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::AbilityTask_VisualizeTargeting_eventVisualizeTargeting_Parms), Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics
	{
		struct AbilityTask_VisualizeTargeting_eventVisualizeTargetingUsingActor_Parms
		{
			UGameplayAbility* OwningAbility;
			AGameplayAbilityTargetActor* TargetActor;
			FName TaskInstanceName;
			float Duration;
			UAbilityTask_VisualizeTargeting* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargetingUsingActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargetingUsingActor_Parms, TargetActor), Z_Construct_UClass_AGameplayAbilityTargetActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargetingUsingActor_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargetingUsingActor_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_VisualizeTargeting_eventVisualizeTargetingUsingActor_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_VisualizeTargeting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_TaskInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Visualize target using a specified target actor. */" },
		{ "CPP_Default_Duration", "-1.000000" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
		{ "ToolTip", "Visualize target using a specified target actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_VisualizeTargeting, nullptr, "VisualizeTargetingUsingActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::AbilityTask_VisualizeTargeting_eventVisualizeTargetingUsingActor_Parms), Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_VisualizeTargeting);
	UClass* Z_Construct_UClass_UAbilityTask_VisualizeTargeting_NoRegister()
	{
		return UAbilityTask_VisualizeTargeting::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeElapsed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_TimeElapsed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_BeginSpawningActor, "BeginSpawningActor" }, // 3874917728
		{ &Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_FinishSpawningActor, "FinishSpawningActor" }, // 1882038035
		{ &Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargeting, "VisualizeTargeting" }, // 1729344179
		{ &Z_Construct_UFunction_UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor, "VisualizeTargetingUsingActor" }, // 3997156471
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::NewProp_TimeElapsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_VisualizeTargeting.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::NewProp_TimeElapsed = { "TimeElapsed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_VisualizeTargeting, TimeElapsed), Z_Construct_UDelegateFunction_GameplayAbilities_VisualizeTargetingDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::NewProp_TimeElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::NewProp_TimeElapsed_MetaData)) }; // 2741160966
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::NewProp_TimeElapsed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_VisualizeTargeting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::ClassParams = {
		&UAbilityTask_VisualizeTargeting::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_VisualizeTargeting()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_VisualizeTargeting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_VisualizeTargeting.OuterSingleton, Z_Construct_UClass_UAbilityTask_VisualizeTargeting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_VisualizeTargeting.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_VisualizeTargeting>()
	{
		return UAbilityTask_VisualizeTargeting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_VisualizeTargeting);
	UAbilityTask_VisualizeTargeting::~UAbilityTask_VisualizeTargeting() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_VisualizeTargeting, UAbilityTask_VisualizeTargeting::StaticClass, TEXT("UAbilityTask_VisualizeTargeting"), &Z_Registration_Info_UClass_UAbilityTask_VisualizeTargeting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_VisualizeTargeting), 214176702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_3665588357(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_VisualizeTargeting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
