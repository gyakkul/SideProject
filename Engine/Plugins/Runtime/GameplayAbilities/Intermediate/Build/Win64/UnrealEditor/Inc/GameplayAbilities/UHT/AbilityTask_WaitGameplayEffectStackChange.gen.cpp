// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h"
#include "ActiveGameplayEffectHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitGameplayEffectStackChange() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_GameplayAbilities_eventWaitGameplayEffectStackChangeDelegate_Parms
		{
			FActiveGameplayEffectHandle Handle;
			int32 NewCount;
			int32 OldCount;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventWaitGameplayEffectStackChangeDelegate_Parms, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 3579869929
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventWaitGameplayEffectStackChangeDelegate_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::NewProp_OldCount = { "OldCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventWaitGameplayEffectStackChangeDelegate_Parms, OldCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::NewProp_NewCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::NewProp_OldCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitGameplayEffectStackChangeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitGameplayEffectStackChangeDelegate_Parms), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWaitGameplayEffectStackChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayEffectStackChangeDelegate, FActiveGameplayEffectHandle Handle, int32 NewCount, int32 OldCount)
{
	struct _Script_GameplayAbilities_eventWaitGameplayEffectStackChangeDelegate_Parms
	{
		FActiveGameplayEffectHandle Handle;
		int32 NewCount;
		int32 OldCount;
	};
	_Script_GameplayAbilities_eventWaitGameplayEffectStackChangeDelegate_Parms Parms;
	Parms.Handle=Handle;
	Parms.NewCount=NewCount;
	Parms.OldCount=OldCount;
	WaitGameplayEffectStackChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityTask_WaitGameplayEffectStackChange::execWaitForGameplayEffectStackChange)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitGameplayEffectStackChange**)Z_Param__Result=UAbilityTask_WaitGameplayEffectStackChange::WaitForGameplayEffectStackChange(Z_Param_OwningAbility,Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitGameplayEffectStackChange::execOnGameplayEffectStackChange)
	{
		P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_Handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_OldCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameplayEffectStackChange(Z_Param_Handle,Z_Param_NewCount,Z_Param_OldCount);
		P_NATIVE_END;
	}
	void UAbilityTask_WaitGameplayEffectStackChange::StaticRegisterNativesUAbilityTask_WaitGameplayEffectStackChange()
	{
		UClass* Class = UAbilityTask_WaitGameplayEffectStackChange::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGameplayEffectStackChange", &UAbilityTask_WaitGameplayEffectStackChange::execOnGameplayEffectStackChange },
			{ "WaitForGameplayEffectStackChange", &UAbilityTask_WaitGameplayEffectStackChange::execWaitForGameplayEffectStackChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics
	{
		struct AbilityTask_WaitGameplayEffectStackChange_eventOnGameplayEffectStackChange_Parms
		{
			FActiveGameplayEffectHandle Handle;
			int32 NewCount;
			int32 OldCount;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectStackChange_eventOnGameplayEffectStackChange_Parms, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 3579869929
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::NewProp_NewCount = { "NewCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectStackChange_eventOnGameplayEffectStackChange_Parms, NewCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::NewProp_OldCount = { "OldCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectStackChange_eventOnGameplayEffectStackChange_Parms, OldCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::NewProp_NewCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::NewProp_OldCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange, nullptr, "OnGameplayEffectStackChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::AbilityTask_WaitGameplayEffectStackChange_eventOnGameplayEffectStackChange_Parms), Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics
	{
		struct AbilityTask_WaitGameplayEffectStackChange_eventWaitForGameplayEffectStackChange_Parms
		{
			UGameplayAbility* OwningAbility;
			FActiveGameplayEffectHandle Handle;
			UAbilityTask_WaitGameplayEffectStackChange* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectStackChange_eventWaitForGameplayEffectStackChange_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectStackChange_eventWaitForGameplayEffectStackChange_Parms, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 3579869929
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectStackChange_eventWaitForGameplayEffectStackChange_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait until the specified gameplay effect is removed. */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h" },
		{ "ToolTip", "Wait until the specified gameplay effect is removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange, nullptr, "WaitForGameplayEffectStackChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::AbilityTask_WaitGameplayEffectStackChange_eventWaitForGameplayEffectStackChange_Parms), Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitGameplayEffectStackChange);
	UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_NoRegister()
	{
		return UAbilityTask_WaitGameplayEffectStackChange::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvalidHandle_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InvalidHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange, "OnGameplayEffectStackChange" }, // 4163593253
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange, "WaitForGameplayEffectStackChange" }, // 4001522626
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Waits for the actor to activate another ability\n */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h" },
		{ "ToolTip", "Waits for the actor to activate another ability" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::NewProp_OnChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::NewProp_OnChange = { "OnChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitGameplayEffectStackChange, OnChange), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::NewProp_OnChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::NewProp_OnChange_MetaData)) }; // 1984844045
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::NewProp_InvalidHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectStackChange.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::NewProp_InvalidHandle = { "InvalidHandle", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitGameplayEffectStackChange, InvalidHandle), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectStackChangeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::NewProp_InvalidHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::NewProp_InvalidHandle_MetaData)) }; // 1984844045
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::NewProp_OnChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::NewProp_InvalidHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitGameplayEffectStackChange>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::ClassParams = {
		&UAbilityTask_WaitGameplayEffectStackChange::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectStackChange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectStackChange.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectStackChange.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitGameplayEffectStackChange>()
	{
		return UAbilityTask_WaitGameplayEffectStackChange::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitGameplayEffectStackChange);
	UAbilityTask_WaitGameplayEffectStackChange::~UAbilityTask_WaitGameplayEffectStackChange() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitGameplayEffectStackChange, UAbilityTask_WaitGameplayEffectStackChange::StaticClass, TEXT("UAbilityTask_WaitGameplayEffectStackChange"), &Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectStackChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitGameplayEffectStackChange), 1041235632U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_101477631(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectStackChange_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
