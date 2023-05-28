// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_WaitInputPress.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitInputPress() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitInputPress();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitInputPress_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_InputPressDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_InputPressDelegate__DelegateSignature_Statics
	{
		struct _Script_GameplayAbilities_eventInputPressDelegate_Parms
		{
			float TimeWaited;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeWaited;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_InputPressDelegate__DelegateSignature_Statics::NewProp_TimeWaited = { "TimeWaited", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventInputPressDelegate_Parms, TimeWaited), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_InputPressDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_InputPressDelegate__DelegateSignature_Statics::NewProp_TimeWaited,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_InputPressDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitInputPress.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_InputPressDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "InputPressDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_InputPressDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventInputPressDelegate_Parms), Z_Construct_UDelegateFunction_GameplayAbilities_InputPressDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_InputPressDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_InputPressDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_InputPressDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_InputPressDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_InputPressDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInputPressDelegate_DelegateWrapper(const FMulticastScriptDelegate& InputPressDelegate, float TimeWaited)
{
	struct _Script_GameplayAbilities_eventInputPressDelegate_Parms
	{
		float TimeWaited;
	};
	_Script_GameplayAbilities_eventInputPressDelegate_Parms Parms;
	Parms.TimeWaited=TimeWaited;
	InputPressDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityTask_WaitInputPress::execWaitInputPress)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_UBOOL(Z_Param_bTestAlreadyPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitInputPress**)Z_Param__Result=UAbilityTask_WaitInputPress::WaitInputPress(Z_Param_OwningAbility,Z_Param_bTestAlreadyPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitInputPress::execOnPressCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPressCallback();
		P_NATIVE_END;
	}
	void UAbilityTask_WaitInputPress::StaticRegisterNativesUAbilityTask_WaitInputPress()
	{
		UClass* Class = UAbilityTask_WaitInputPress::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPressCallback", &UAbilityTask_WaitInputPress::execOnPressCallback },
			{ "WaitInputPress", &UAbilityTask_WaitInputPress::execWaitInputPress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitInputPress_OnPressCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitInputPress_OnPressCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitInputPress.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitInputPress_OnPressCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitInputPress, nullptr, "OnPressCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitInputPress_OnPressCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitInputPress_OnPressCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitInputPress_OnPressCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitInputPress_OnPressCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics
	{
		struct AbilityTask_WaitInputPress_eventWaitInputPress_Parms
		{
			UGameplayAbility* OwningAbility;
			bool bTestAlreadyPressed;
			UAbilityTask_WaitInputPress* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static void NewProp_bTestAlreadyPressed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestAlreadyPressed;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitInputPress_eventWaitInputPress_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::NewProp_bTestAlreadyPressed_SetBit(void* Obj)
	{
		((AbilityTask_WaitInputPress_eventWaitInputPress_Parms*)Obj)->bTestAlreadyPressed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::NewProp_bTestAlreadyPressed = { "bTestAlreadyPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitInputPress_eventWaitInputPress_Parms), &Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::NewProp_bTestAlreadyPressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitInputPress_eventWaitInputPress_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitInputPress_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::NewProp_bTestAlreadyPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait until the user presses the input button for this ability's activation. Returns time this node spent waiting for the press. Will return 0 if input was already down. */" },
		{ "CPP_Default_bTestAlreadyPressed", "false" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitInputPress.h" },
		{ "ToolTip", "Wait until the user presses the input button for this ability's activation. Returns time this node spent waiting for the press. Will return 0 if input was already down." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitInputPress, nullptr, "WaitInputPress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::AbilityTask_WaitInputPress_eventWaitInputPress_Parms), Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitInputPress);
	UClass* Z_Construct_UClass_UAbilityTask_WaitInputPress_NoRegister()
	{
		return UAbilityTask_WaitInputPress::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPress_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitInputPress_OnPressCallback, "OnPressCallback" }, // 2259333961
		{ &Z_Construct_UFunction_UAbilityTask_WaitInputPress_WaitInputPress, "WaitInputPress" }, // 3692580757
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Waits until the input is pressed from activating an ability. This should be true immediately upon starting the ability, since the key was pressed to activate it.\n *\x09We expect server to execute this task in parallel and keep its own time. We do not keep track of \n */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitInputPress.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitInputPress.h" },
		{ "ToolTip", "Waits until the input is pressed from activating an ability. This should be true immediately upon starting the ability, since the key was pressed to activate it.\nWe expect server to execute this task in parallel and keep its own time. We do not keep track of" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::NewProp_OnPress_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitInputPress.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::NewProp_OnPress = { "OnPress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitInputPress, OnPress), Z_Construct_UDelegateFunction_GameplayAbilities_InputPressDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::NewProp_OnPress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::NewProp_OnPress_MetaData)) }; // 2190066972
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::NewProp_OnPress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitInputPress>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::ClassParams = {
		&UAbilityTask_WaitInputPress::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitInputPress()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitInputPress.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitInputPress.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitInputPress_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitInputPress.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitInputPress>()
	{
		return UAbilityTask_WaitInputPress::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitInputPress);
	UAbilityTask_WaitInputPress::~UAbilityTask_WaitInputPress() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputPress_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputPress_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitInputPress, UAbilityTask_WaitInputPress::StaticClass, TEXT("UAbilityTask_WaitInputPress"), &Z_Registration_Info_UClass_UAbilityTask_WaitInputPress, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitInputPress), 849577591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputPress_h_4058553429(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputPress_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputPress_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
