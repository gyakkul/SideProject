// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTargetingSystem/AbilityTasks/AbilityTask_PerformTargeting.h"
#include "GameplayTargetingSystem/Types/TargetingSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_PerformTargeting() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_PerformTargeting();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UAbilityTask_PerformTargeting_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingPreset_NoRegister();
	TARGETINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_TargetingSystem_TargetReadyDelegate__DelegateSignature();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingRequestHandle();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TargetingSystem_TargetReadyDelegate__DelegateSignature_Statics
	{
		struct _Script_TargetingSystem_eventTargetReadyDelegate_Parms
		{
			FTargetingRequestHandle TargetingRequestHandle;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingRequestHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TargetingSystem_TargetReadyDelegate__DelegateSignature_Statics::NewProp_TargetingRequestHandle = { "TargetingRequestHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TargetingSystem_eventTargetReadyDelegate_Parms, TargetingRequestHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(nullptr, 0) }; // 951213696
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TargetingSystem_TargetReadyDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TargetingSystem_TargetReadyDelegate__DelegateSignature_Statics::NewProp_TargetingRequestHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TargetingSystem_TargetReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilityTasks/AbilityTask_PerformTargeting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TargetingSystem_TargetReadyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TargetingSystem, nullptr, "TargetReadyDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TargetingSystem_TargetReadyDelegate__DelegateSignature_Statics::_Script_TargetingSystem_eventTargetReadyDelegate_Parms), Z_Construct_UDelegateFunction_TargetingSystem_TargetReadyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetingSystem_TargetReadyDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TargetingSystem_TargetReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetingSystem_TargetReadyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TargetingSystem_TargetReadyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TargetingSystem_TargetReadyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTargetReadyDelegate_DelegateWrapper(const FMulticastScriptDelegate& TargetReadyDelegate, FTargetingRequestHandle TargetingRequestHandle)
{
	struct _Script_TargetingSystem_eventTargetReadyDelegate_Parms
	{
		FTargetingRequestHandle TargetingRequestHandle;
	};
	_Script_TargetingSystem_eventTargetReadyDelegate_Parms Parms;
	Parms.TargetingRequestHandle=TargetingRequestHandle;
	TargetReadyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityTask_PerformTargeting::execPerformFilteringRequest)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_OBJECT(UTargetingPreset,Z_Param_TargetingPreset);
		P_GET_TARRAY(AActor*,Z_Param_InTargets);
		P_GET_UBOOL(Z_Param_bAllowAsync);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_PerformTargeting**)Z_Param__Result=UAbilityTask_PerformTargeting::PerformFilteringRequest(Z_Param_OwningAbility,Z_Param_TargetingPreset,Z_Param_InTargets,Z_Param_bAllowAsync);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_PerformTargeting::execPerformTargetingRequest)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_OBJECT(UTargetingPreset,Z_Param_InTargetingPreset);
		P_GET_UBOOL(Z_Param_bAllowAsync);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_PerformTargeting**)Z_Param__Result=UAbilityTask_PerformTargeting::PerformTargetingRequest(Z_Param_OwningAbility,Z_Param_InTargetingPreset,Z_Param_bAllowAsync);
		P_NATIVE_END;
	}
	void UAbilityTask_PerformTargeting::StaticRegisterNativesUAbilityTask_PerformTargeting()
	{
		UClass* Class = UAbilityTask_PerformTargeting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PerformFilteringRequest", &UAbilityTask_PerformTargeting::execPerformFilteringRequest },
			{ "PerformTargetingRequest", &UAbilityTask_PerformTargeting::execPerformTargetingRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics
	{
		struct AbilityTask_PerformTargeting_eventPerformFilteringRequest_Parms
		{
			UGameplayAbility* OwningAbility;
			UTargetingPreset* TargetingPreset;
			TArray<AActor*> InTargets;
			bool bAllowAsync;
			UAbilityTask_PerformTargeting* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetingPreset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InTargets;
		static void NewProp_bAllowAsync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAsync;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_PerformTargeting_eventPerformFilteringRequest_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_TargetingPreset = { "TargetingPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_PerformTargeting_eventPerformFilteringRequest_Parms, TargetingPreset), Z_Construct_UClass_UTargetingPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_InTargets_Inner = { "InTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_InTargets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_InTargets = { "InTargets", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_PerformTargeting_eventPerformFilteringRequest_Parms, InTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_InTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_InTargets_MetaData)) };
	void Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_bAllowAsync_SetBit(void* Obj)
	{
		((AbilityTask_PerformTargeting_eventPerformFilteringRequest_Parms*)Obj)->bAllowAsync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_bAllowAsync = { "bAllowAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_PerformTargeting_eventPerformFilteringRequest_Parms), &Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_bAllowAsync_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_PerformTargeting_eventPerformFilteringRequest_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_PerformTargeting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_TargetingPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_InTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_InTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_bAllowAsync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "// Performs a target filtering request based on a Targeting Preset from a GameplayAbility\n" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "AbilityTasks/AbilityTask_PerformTargeting.h" },
		{ "ToolTip", "Performs a target filtering request based on a Targeting Preset from a GameplayAbility" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PerformTargeting, nullptr, "PerformFilteringRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::AbilityTask_PerformTargeting_eventPerformFilteringRequest_Parms), Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics
	{
		struct AbilityTask_PerformTargeting_eventPerformTargetingRequest_Parms
		{
			UGameplayAbility* OwningAbility;
			UTargetingPreset* InTargetingPreset;
			bool bAllowAsync;
			UAbilityTask_PerformTargeting* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTargetingPreset;
		static void NewProp_bAllowAsync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAsync;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_PerformTargeting_eventPerformTargetingRequest_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::NewProp_InTargetingPreset = { "InTargetingPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_PerformTargeting_eventPerformTargetingRequest_Parms, InTargetingPreset), Z_Construct_UClass_UTargetingPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::NewProp_bAllowAsync_SetBit(void* Obj)
	{
		((AbilityTask_PerformTargeting_eventPerformTargetingRequest_Parms*)Obj)->bAllowAsync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::NewProp_bAllowAsync = { "bAllowAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_PerformTargeting_eventPerformTargetingRequest_Parms), &Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::NewProp_bAllowAsync_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_PerformTargeting_eventPerformTargetingRequest_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_PerformTargeting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::NewProp_InTargetingPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::NewProp_bAllowAsync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "// Performs a targeting request based on a Targeting Preset from a GameplayAbility\n" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "AbilityTasks/AbilityTask_PerformTargeting.h" },
		{ "ToolTip", "Performs a targeting request based on a Targeting Preset from a GameplayAbility" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_PerformTargeting, nullptr, "PerformTargetingRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::AbilityTask_PerformTargeting_eventPerformTargetingRequest_Parms), Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_PerformTargeting);
	UClass* Z_Construct_UClass_UAbilityTask_PerformTargeting_NoRegister()
	{
		return UAbilityTask_PerformTargeting::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetReady_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetReady;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformFilteringRequest, "PerformFilteringRequest" }, // 2469313362
		{ &Z_Construct_UFunction_UAbilityTask_PerformTargeting_PerformTargetingRequest, "PerformTargetingRequest" }, // 2698202857
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbilityTasks/AbilityTask_PerformTargeting.h" },
		{ "ModuleRelativePath", "AbilityTasks/AbilityTask_PerformTargeting.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::NewProp_OnTargetReady_MetaData[] = {
		{ "Comment", "// Called when the targeting request has been completed and results are ready\n" },
		{ "ModuleRelativePath", "AbilityTasks/AbilityTask_PerformTargeting.h" },
		{ "ToolTip", "Called when the targeting request has been completed and results are ready" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::NewProp_OnTargetReady = { "OnTargetReady", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_PerformTargeting, OnTargetReady), Z_Construct_UDelegateFunction_TargetingSystem_TargetReadyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::NewProp_OnTargetReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::NewProp_OnTargetReady_MetaData)) }; // 3389543205
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::NewProp_OnTargetReady,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_PerformTargeting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::ClassParams = {
		&UAbilityTask_PerformTargeting::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_PerformTargeting()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_PerformTargeting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_PerformTargeting.OuterSingleton, Z_Construct_UClass_UAbilityTask_PerformTargeting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_PerformTargeting.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UAbilityTask_PerformTargeting>()
	{
		return UAbilityTask_PerformTargeting::StaticClass();
	}
	UAbilityTask_PerformTargeting::UAbilityTask_PerformTargeting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_PerformTargeting);
	UAbilityTask_PerformTargeting::~UAbilityTask_PerformTargeting() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_PerformTargeting, UAbilityTask_PerformTargeting::StaticClass, TEXT("UAbilityTask_PerformTargeting"), &Z_Registration_Info_UClass_UAbilityTask_PerformTargeting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_PerformTargeting), 2327081885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_1767021259(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_AbilityTasks_AbilityTask_PerformTargeting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
