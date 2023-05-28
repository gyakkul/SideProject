// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_SpawnActor.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_SpawnActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_SpawnActor();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_SpawnActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics
	{
		struct _Script_GameplayAbilities_eventSpawnActorDelegate_Parms
		{
			AActor* SpawnedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventSpawnActorDelegate_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::NewProp_SpawnedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_SpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "SpawnActorDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventSpawnActorDelegate_Parms), Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSpawnActorDelegate_DelegateWrapper(const FMulticastScriptDelegate& SpawnActorDelegate, AActor* SpawnedActor)
{
	struct _Script_GameplayAbilities_eventSpawnActorDelegate_Parms
	{
		AActor* SpawnedActor;
	};
	_Script_GameplayAbilities_eventSpawnActorDelegate_Parms Parms;
	Parms.SpawnedActor=SpawnedActor;
	SpawnActorDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityTask_SpawnActor::execFinishSpawningActor)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData);
		P_GET_OBJECT(AActor,Z_Param_SpawnedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishSpawningActor(Z_Param_OwningAbility,Z_Param_TargetData,Z_Param_SpawnedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_SpawnActor::execBeginSpawningActor)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_SpawnedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BeginSpawningActor(Z_Param_OwningAbility,Z_Param_TargetData,Z_Param_Class,Z_Param_Out_SpawnedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_SpawnActor::execSpawnActor)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FGameplayAbilityTargetDataHandle,Z_Param_TargetData);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_SpawnActor**)Z_Param__Result=UAbilityTask_SpawnActor::SpawnActor(Z_Param_OwningAbility,Z_Param_TargetData,Z_Param_Class);
		P_NATIVE_END;
	}
	void UAbilityTask_SpawnActor::StaticRegisterNativesUAbilityTask_SpawnActor()
	{
		UClass* Class = UAbilityTask_SpawnActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginSpawningActor", &UAbilityTask_SpawnActor::execBeginSpawningActor },
			{ "FinishSpawningActor", &UAbilityTask_SpawnActor::execFinishSpawningActor },
			{ "SpawnActor", &UAbilityTask_SpawnActor::execSpawnActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics
	{
		struct AbilityTask_SpawnActor_eventBeginSpawningActor_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayAbilityTargetDataHandle TargetData;
			TSubclassOf<AActor>  Class;
			AActor* SpawnedActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_SpawnActor_eventBeginSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_SpawnActor_eventBeginSpawningActor_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3993235140
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_SpawnActor_eventBeginSpawningActor_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_SpawnActor_eventBeginSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AbilityTask_SpawnActor_eventBeginSpawningActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_SpawnActor_eventBeginSpawningActor_Parms), &Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_TargetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_SpawnedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_SpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_SpawnActor, nullptr, "BeginSpawningActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::AbilityTask_SpawnActor_eventBeginSpawningActor_Parms), Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics
	{
		struct AbilityTask_SpawnActor_eventFinishSpawningActor_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayAbilityTargetDataHandle TargetData;
			AActor* SpawnedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_SpawnActor_eventFinishSpawningActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_SpawnActor_eventFinishSpawningActor_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3993235140
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_SpawnActor_eventFinishSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_TargetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::NewProp_SpawnedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Abilities" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_SpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_SpawnActor, nullptr, "FinishSpawningActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::AbilityTask_SpawnActor_eventFinishSpawningActor_Parms), Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics
	{
		struct AbilityTask_SpawnActor_eventSpawnActor_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayAbilityTargetDataHandle TargetData;
			TSubclassOf<AActor>  Class;
			UAbilityTask_SpawnActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_SpawnActor_eventSpawnActor_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_SpawnActor_eventSpawnActor_Parms, TargetData), Z_Construct_UScriptStruct_FGameplayAbilityTargetDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3993235140
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_SpawnActor_eventSpawnActor_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_SpawnActor_eventSpawnActor_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_SpawnActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_TargetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Spawn new Actor on the network authority (server) */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_SpawnActor.h" },
		{ "ToolTip", "Spawn new Actor on the network authority (server)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_SpawnActor, nullptr, "SpawnActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::AbilityTask_SpawnActor_eventSpawnActor_Parms), Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_SpawnActor);
	UClass* Z_Construct_UClass_UAbilityTask_SpawnActor_NoRegister()
	{
		return UAbilityTask_SpawnActor::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_SpawnActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DidNotSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DidNotSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_SpawnActor_BeginSpawningActor, "BeginSpawningActor" }, // 2886576357
		{ &Z_Construct_UFunction_UAbilityTask_SpawnActor_FinishSpawningActor, "FinishSpawningActor" }, // 2536753727
		{ &Z_Construct_UFunction_UAbilityTask_SpawnActor_SpawnActor, "SpawnActor" }, // 3176650904
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Convenience task for spawning actors on the network authority. If not the net authority, we will not spawn and Success will not be called.\n *\x09The nice thing this adds is the ability to modify expose on spawn properties while also implicitly checking network role before spawning.\n *\x09\n *\x09Though this task doesn't do much - games can implement similiar tasks that carry out game specific rules. For example a 'SpawnProjectile'\n *\x09task that limits the available classes to the games projectile class, and that does game specific stuff on spawn (for example, determining\n *\x09""firing position from a weapon attachment - logic that we don't necessarily want in ability blueprints).\n *\x09\n *\x09Long term we can also use this task as a sync point. If the executing client could wait execution until the server creates and replicates the \n *\x09""actor down to it. We could potentially also use this to do predictive actor spawning / reconciliation.\n */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_SpawnActor.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_SpawnActor.h" },
		{ "ToolTip", "Convenience task for spawning actors on the network authority. If not the net authority, we will not spawn and Success will not be called.\nThe nice thing this adds is the ability to modify expose on spawn properties while also implicitly checking network role before spawning.\n\nThough this task doesn't do much - games can implement similiar tasks that carry out game specific rules. For example a 'SpawnProjectile'\ntask that limits the available classes to the games projectile class, and that does game specific stuff on spawn (for example, determining\nfiring position from a weapon attachment - logic that we don't necessarily want in ability blueprints).\n\nLong term we can also use this task as a sync point. If the executing client could wait execution until the server creates and replicates the\nactor down to it. We could potentially also use this to do predictive actor spawning / reconciliation." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_SpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_SpawnActor, Success), Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::NewProp_Success_MetaData)) }; // 2425309629
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::NewProp_DidNotSpawn_MetaData[] = {
		{ "Comment", "/** Called when we can't spawn: on clients or potentially on server if they fail to spawn (rare) */" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_SpawnActor.h" },
		{ "ToolTip", "Called when we can't spawn: on clients or potentially on server if they fail to spawn (rare)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::NewProp_DidNotSpawn = { "DidNotSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_SpawnActor, DidNotSpawn), Z_Construct_UDelegateFunction_GameplayAbilities_SpawnActorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::NewProp_DidNotSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::NewProp_DidNotSpawn_MetaData)) }; // 2425309629
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::NewProp_DidNotSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_SpawnActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::ClassParams = {
		&UAbilityTask_SpawnActor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_SpawnActor()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_SpawnActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_SpawnActor.OuterSingleton, Z_Construct_UClass_UAbilityTask_SpawnActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_SpawnActor.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_SpawnActor>()
	{
		return UAbilityTask_SpawnActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_SpawnActor);
	UAbilityTask_SpawnActor::~UAbilityTask_SpawnActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_SpawnActor, UAbilityTask_SpawnActor::StaticClass, TEXT("UAbilityTask_SpawnActor"), &Z_Registration_Info_UClass_UAbilityTask_SpawnActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_SpawnActor), 3238720207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_4004135952(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_SpawnActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
