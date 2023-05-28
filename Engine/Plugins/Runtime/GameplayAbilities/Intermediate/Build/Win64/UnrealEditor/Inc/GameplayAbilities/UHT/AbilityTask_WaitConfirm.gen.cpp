// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_WaitConfirm.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitConfirm() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitConfirm();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitConfirm_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	DEFINE_FUNCTION(UAbilityTask_WaitConfirm::execWaitConfirm)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitConfirm**)Z_Param__Result=UAbilityTask_WaitConfirm::WaitConfirm(Z_Param_OwningAbility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitConfirm::execOnConfirmCallback)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_InAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConfirmCallback(Z_Param_InAbility);
		P_NATIVE_END;
	}
	void UAbilityTask_WaitConfirm::StaticRegisterNativesUAbilityTask_WaitConfirm()
	{
		UClass* Class = UAbilityTask_WaitConfirm::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnConfirmCallback", &UAbilityTask_WaitConfirm::execOnConfirmCallback },
			{ "WaitConfirm", &UAbilityTask_WaitConfirm::execWaitConfirm },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitConfirm_OnConfirmCallback_Statics
	{
		struct AbilityTask_WaitConfirm_eventOnConfirmCallback_Parms
		{
			UGameplayAbility* InAbility;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitConfirm_OnConfirmCallback_Statics::NewProp_InAbility = { "InAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitConfirm_eventOnConfirmCallback_Parms, InAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitConfirm_OnConfirmCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitConfirm_OnConfirmCallback_Statics::NewProp_InAbility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitConfirm_OnConfirmCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitConfirm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitConfirm_OnConfirmCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitConfirm, nullptr, "OnConfirmCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitConfirm_OnConfirmCallback_Statics::AbilityTask_WaitConfirm_eventOnConfirmCallback_Parms), Z_Construct_UFunction_UAbilityTask_WaitConfirm_OnConfirmCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitConfirm_OnConfirmCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitConfirm_OnConfirmCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitConfirm_OnConfirmCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitConfirm_OnConfirmCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitConfirm_OnConfirmCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm_Statics
	{
		struct AbilityTask_WaitConfirm_eventWaitConfirm_Parms
		{
			UGameplayAbility* OwningAbility;
			UAbilityTask_WaitConfirm* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitConfirm_eventWaitConfirm_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitConfirm_eventWaitConfirm_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitConfirm_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait until the server confirms the use of this ability. This is used to gate predictive portions of the ability */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitConfirm.h" },
		{ "ToolTip", "Wait until the server confirms the use of this ability. This is used to gate predictive portions of the ability" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitConfirm, nullptr, "WaitConfirm", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm_Statics::AbilityTask_WaitConfirm_eventWaitConfirm_Parms), Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitConfirm);
	UClass* Z_Construct_UClass_UAbilityTask_WaitConfirm_NoRegister()
	{
		return UAbilityTask_WaitConfirm::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConfirm_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConfirm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitConfirm_OnConfirmCallback, "OnConfirmCallback" }, // 2365283597
		{ &Z_Construct_UFunction_UAbilityTask_WaitConfirm_WaitConfirm, "WaitConfirm" }, // 4026134349
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitConfirm.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitConfirm.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::NewProp_OnConfirm_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitConfirm.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::NewProp_OnConfirm = { "OnConfirm", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitConfirm, OnConfirm), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::NewProp_OnConfirm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::NewProp_OnConfirm_MetaData)) }; // 2832075636
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::NewProp_OnConfirm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitConfirm>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::ClassParams = {
		&UAbilityTask_WaitConfirm::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitConfirm()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitConfirm.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitConfirm.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitConfirm_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitConfirm.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitConfirm>()
	{
		return UAbilityTask_WaitConfirm::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitConfirm);
	UAbilityTask_WaitConfirm::~UAbilityTask_WaitConfirm() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitConfirm, UAbilityTask_WaitConfirm::StaticClass, TEXT("UAbilityTask_WaitConfirm"), &Z_Registration_Info_UClass_UAbilityTask_WaitConfirm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitConfirm), 2983731843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_1136436720(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitConfirm_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
