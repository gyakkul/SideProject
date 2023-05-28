// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_Repeat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_Repeat() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_Repeat();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_Repeat_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics
	{
		struct _Script_GameplayAbilities_eventRepeatedActionDelegate_Parms
		{
			int32 ActionNumber;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActionNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::NewProp_ActionNumber = { "ActionNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventRepeatedActionDelegate_Parms, ActionNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::NewProp_ActionNumber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_Repeat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "RepeatedActionDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventRepeatedActionDelegate_Parms), Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FRepeatedActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& RepeatedActionDelegate, int32 ActionNumber)
{
	struct _Script_GameplayAbilities_eventRepeatedActionDelegate_Parms
	{
		int32 ActionNumber;
	};
	_Script_GameplayAbilities_eventRepeatedActionDelegate_Parms Parms;
	Parms.ActionNumber=ActionNumber;
	RepeatedActionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityTask_Repeat::execRepeatAction)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeBetweenActions);
		P_GET_PROPERTY(FIntProperty,Z_Param_TotalActionCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_Repeat**)Z_Param__Result=UAbilityTask_Repeat::RepeatAction(Z_Param_OwningAbility,Z_Param_TimeBetweenActions,Z_Param_TotalActionCount);
		P_NATIVE_END;
	}
	void UAbilityTask_Repeat::StaticRegisterNativesUAbilityTask_Repeat()
	{
		UClass* Class = UAbilityTask_Repeat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RepeatAction", &UAbilityTask_Repeat::execRepeatAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics
	{
		struct AbilityTask_Repeat_eventRepeatAction_Parms
		{
			UGameplayAbility* OwningAbility;
			float TimeBetweenActions;
			int32 TotalActionCount;
			UAbilityTask_Repeat* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenActions;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalActionCount;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_Repeat_eventRepeatAction_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_TimeBetweenActions = { "TimeBetweenActions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_Repeat_eventRepeatAction_Parms, TimeBetweenActions), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_TotalActionCount = { "TotalActionCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_Repeat_eventRepeatAction_Parms, TotalActionCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_Repeat_eventRepeatAction_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_Repeat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_TimeBetweenActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_TotalActionCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Start a task that repeats an action or set of actions. */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_Repeat.h" },
		{ "ToolTip", "Start a task that repeats an action or set of actions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_Repeat, nullptr, "RepeatAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::AbilityTask_Repeat_eventRepeatAction_Parms), Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_Repeat);
	UClass* Z_Construct_UClass_UAbilityTask_Repeat_NoRegister()
	{
		return UAbilityTask_Repeat::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_Repeat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPerformAction_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerformAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_Repeat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_Repeat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_Repeat_RepeatAction, "RepeatAction" }, // 4194365894
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_Repeat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Repeat a task a certain number of times at a given interval.\n */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_Repeat.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_Repeat.h" },
		{ "ToolTip", "Repeat a task a certain number of times at a given interval." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_Repeat_Statics::NewProp_OnPerformAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_Repeat.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_Repeat_Statics::NewProp_OnPerformAction = { "OnPerformAction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_Repeat, OnPerformAction), Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_Repeat_Statics::NewProp_OnPerformAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Repeat_Statics::NewProp_OnPerformAction_MetaData)) }; // 3675915676
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_Repeat_Statics::NewProp_OnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_Repeat.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_Repeat_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_Repeat, OnFinished), Z_Construct_UDelegateFunction_GameplayAbilities_RepeatedActionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_Repeat_Statics::NewProp_OnFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Repeat_Statics::NewProp_OnFinished_MetaData)) }; // 3675915676
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_Repeat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_Repeat_Statics::NewProp_OnPerformAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_Repeat_Statics::NewProp_OnFinished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_Repeat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_Repeat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_Repeat_Statics::ClassParams = {
		&UAbilityTask_Repeat::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_Repeat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Repeat_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_Repeat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_Repeat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_Repeat()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_Repeat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_Repeat.OuterSingleton, Z_Construct_UClass_UAbilityTask_Repeat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_Repeat.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_Repeat>()
	{
		return UAbilityTask_Repeat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_Repeat);
	UAbilityTask_Repeat::~UAbilityTask_Repeat() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_Repeat, UAbilityTask_Repeat::StaticClass, TEXT("UAbilityTask_Repeat"), &Z_Registration_Info_UClass_UAbilityTask_Repeat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_Repeat), 3272961803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_92636555(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_Repeat_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
