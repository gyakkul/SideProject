// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_WaitDelay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitDelay() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitDelay();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitDelay_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitDelayDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitDelayDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_WaitDelayDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitDelay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitDelayDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitDelayDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_WaitDelayDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitDelayDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitDelayDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitDelayDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWaitDelayDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitDelayDelegate)
{
	WaitDelayDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAbilityTask_WaitDelay::execWaitDelay)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitDelay**)Z_Param__Result=UAbilityTask_WaitDelay::WaitDelay(Z_Param_OwningAbility,Z_Param_Time);
		P_NATIVE_END;
	}
	void UAbilityTask_WaitDelay::StaticRegisterNativesUAbilityTask_WaitDelay()
	{
		UClass* Class = UAbilityTask_WaitDelay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitDelay", &UAbilityTask_WaitDelay::execWaitDelay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics
	{
		struct AbilityTask_WaitDelay_eventWaitDelay_Parms
		{
			UGameplayAbility* OwningAbility;
			float Time;
			UAbilityTask_WaitDelay* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitDelay_eventWaitDelay_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitDelay_eventWaitDelay_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitDelay_eventWaitDelay_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitDelay_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait specified time. This is functionally the same as a standard Delay node. */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitDelay.h" },
		{ "ToolTip", "Wait specified time. This is functionally the same as a standard Delay node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitDelay, nullptr, "WaitDelay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics::AbilityTask_WaitDelay_eventWaitDelay_Parms), Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitDelay);
	UClass* Z_Construct_UClass_UAbilityTask_WaitDelay_NoRegister()
	{
		return UAbilityTask_WaitDelay::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitDelay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinish_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinish;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitDelay_WaitDelay, "WaitDelay" }, // 3892208915
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitDelay.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitDelay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::NewProp_OnFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitDelay.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::NewProp_OnFinish = { "OnFinish", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitDelay, OnFinish), Z_Construct_UDelegateFunction_GameplayAbilities_WaitDelayDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::NewProp_OnFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::NewProp_OnFinish_MetaData)) }; // 166098816
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::NewProp_OnFinish,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitDelay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::ClassParams = {
		&UAbilityTask_WaitDelay::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitDelay()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitDelay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitDelay.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitDelay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitDelay.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitDelay>()
	{
		return UAbilityTask_WaitDelay::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitDelay);
	UAbilityTask_WaitDelay::~UAbilityTask_WaitDelay() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitDelay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitDelay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitDelay, UAbilityTask_WaitDelay::StaticClass, TEXT("UAbilityTask_WaitDelay"), &Z_Registration_Info_UClass_UAbilityTask_WaitDelay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitDelay), 1664234079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitDelay_h_1719627333(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitDelay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitDelay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
