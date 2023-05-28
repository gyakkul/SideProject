// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitGameplayEffectRemoved() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics
	{
		struct _Script_GameplayAbilities_eventWaitGameplayEffectRemovedDelegate_Parms
		{
			FGameplayEffectRemovalInfo GameplayEffectRemovalInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectRemovalInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayEffectRemovalInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::NewProp_GameplayEffectRemovalInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::NewProp_GameplayEffectRemovalInfo = { "GameplayEffectRemovalInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventWaitGameplayEffectRemovedDelegate_Parms, GameplayEffectRemovalInfo), Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::NewProp_GameplayEffectRemovalInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::NewProp_GameplayEffectRemovalInfo_MetaData)) }; // 2534919950
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::NewProp_GameplayEffectRemovalInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitGameplayEffectRemovedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitGameplayEffectRemovedDelegate_Parms), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWaitGameplayEffectRemovedDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayEffectRemovedDelegate, FGameplayEffectRemovalInfo const& GameplayEffectRemovalInfo)
{
	struct _Script_GameplayAbilities_eventWaitGameplayEffectRemovedDelegate_Parms
	{
		FGameplayEffectRemovalInfo GameplayEffectRemovalInfo;
	};
	_Script_GameplayAbilities_eventWaitGameplayEffectRemovedDelegate_Parms Parms;
	Parms.GameplayEffectRemovalInfo=GameplayEffectRemovalInfo;
	WaitGameplayEffectRemovedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityTask_WaitGameplayEffectRemoved::execWaitForGameplayEffectRemoved)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FActiveGameplayEffectHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitGameplayEffectRemoved**)Z_Param__Result=UAbilityTask_WaitGameplayEffectRemoved::WaitForGameplayEffectRemoved(Z_Param_OwningAbility,Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitGameplayEffectRemoved::execOnGameplayEffectRemoved)
	{
		P_GET_STRUCT_REF(FGameplayEffectRemovalInfo,Z_Param_Out_InGameplayEffectRemovalInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameplayEffectRemoved(Z_Param_Out_InGameplayEffectRemovalInfo);
		P_NATIVE_END;
	}
	void UAbilityTask_WaitGameplayEffectRemoved::StaticRegisterNativesUAbilityTask_WaitGameplayEffectRemoved()
	{
		UClass* Class = UAbilityTask_WaitGameplayEffectRemoved::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGameplayEffectRemoved", &UAbilityTask_WaitGameplayEffectRemoved::execOnGameplayEffectRemoved },
			{ "WaitForGameplayEffectRemoved", &UAbilityTask_WaitGameplayEffectRemoved::execWaitForGameplayEffectRemoved },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics
	{
		struct AbilityTask_WaitGameplayEffectRemoved_eventOnGameplayEffectRemoved_Parms
		{
			FGameplayEffectRemovalInfo InGameplayEffectRemovalInfo;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameplayEffectRemovalInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InGameplayEffectRemovalInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::NewProp_InGameplayEffectRemovalInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::NewProp_InGameplayEffectRemovalInfo = { "InGameplayEffectRemovalInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectRemoved_eventOnGameplayEffectRemoved_Parms, InGameplayEffectRemovalInfo), Z_Construct_UScriptStruct_FGameplayEffectRemovalInfo, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::NewProp_InGameplayEffectRemovalInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::NewProp_InGameplayEffectRemovalInfo_MetaData)) }; // 2534919950
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::NewProp_InGameplayEffectRemovalInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved, nullptr, "OnGameplayEffectRemoved", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::AbilityTask_WaitGameplayEffectRemoved_eventOnGameplayEffectRemoved_Parms), Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics
	{
		struct AbilityTask_WaitGameplayEffectRemoved_eventWaitForGameplayEffectRemoved_Parms
		{
			UGameplayAbility* OwningAbility;
			FActiveGameplayEffectHandle Handle;
			UAbilityTask_WaitGameplayEffectRemoved* ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectRemoved_eventWaitForGameplayEffectRemoved_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectRemoved_eventWaitForGameplayEffectRemoved_Parms, Handle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 3579869929
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEffectRemoved_eventWaitForGameplayEffectRemoved_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait until the specified gameplay effect is removed. */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h" },
		{ "ToolTip", "Wait until the specified gameplay effect is removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved, nullptr, "WaitForGameplayEffectRemoved", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::AbilityTask_WaitGameplayEffectRemoved_eventWaitForGameplayEffectRemoved_Parms), Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitGameplayEffectRemoved);
	UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_NoRegister()
	{
		return UAbilityTask_WaitGameplayEffectRemoved::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvalidHandle_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InvalidHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved, "OnGameplayEffectRemoved" }, // 3211173018
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved, "WaitForGameplayEffectRemoved" }, // 2639178768
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Waits for the actor to activate another ability\n */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h" },
		{ "ToolTip", "Waits for the actor to activate another ability" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::NewProp_OnRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::NewProp_OnRemoved = { "OnRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitGameplayEffectRemoved, OnRemoved), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::NewProp_OnRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::NewProp_OnRemoved_MetaData)) }; // 3548529555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::NewProp_InvalidHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEffectRemoved.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::NewProp_InvalidHandle = { "InvalidHandle", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitGameplayEffectRemoved, InvalidHandle), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEffectRemovedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::NewProp_InvalidHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::NewProp_InvalidHandle_MetaData)) }; // 3548529555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::NewProp_OnRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::NewProp_InvalidHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitGameplayEffectRemoved>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::ClassParams = {
		&UAbilityTask_WaitGameplayEffectRemoved::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectRemoved.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectRemoved.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectRemoved.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitGameplayEffectRemoved>()
	{
		return UAbilityTask_WaitGameplayEffectRemoved::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitGameplayEffectRemoved);
	UAbilityTask_WaitGameplayEffectRemoved::~UAbilityTask_WaitGameplayEffectRemoved() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitGameplayEffectRemoved, UAbilityTask_WaitGameplayEffectRemoved::StaticClass, TEXT("UAbilityTask_WaitGameplayEffectRemoved"), &Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEffectRemoved, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitGameplayEffectRemoved), 734407284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_3308792014(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEffectRemoved_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
