// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_WaitInputRelease.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitInputRelease() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitInputRelease();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitInputRelease_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_InputReleaseDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_InputReleaseDelegate__DelegateSignature_Statics
	{
		struct _Script_GameplayAbilities_eventInputReleaseDelegate_Parms
		{
			float TimeHeld;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeHeld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_InputReleaseDelegate__DelegateSignature_Statics::NewProp_TimeHeld = { "TimeHeld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventInputReleaseDelegate_Parms, TimeHeld), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_InputReleaseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_InputReleaseDelegate__DelegateSignature_Statics::NewProp_TimeHeld,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_InputReleaseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitInputRelease.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_InputReleaseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "InputReleaseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_InputReleaseDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventInputReleaseDelegate_Parms), Z_Construct_UDelegateFunction_GameplayAbilities_InputReleaseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_InputReleaseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_InputReleaseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_InputReleaseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_InputReleaseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_InputReleaseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInputReleaseDelegate_DelegateWrapper(const FMulticastScriptDelegate& InputReleaseDelegate, float TimeHeld)
{
	struct _Script_GameplayAbilities_eventInputReleaseDelegate_Parms
	{
		float TimeHeld;
	};
	_Script_GameplayAbilities_eventInputReleaseDelegate_Parms Parms;
	Parms.TimeHeld=TimeHeld;
	InputReleaseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityTask_WaitInputRelease::execWaitInputRelease)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_UBOOL(Z_Param_bTestAlreadyReleased);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitInputRelease**)Z_Param__Result=UAbilityTask_WaitInputRelease::WaitInputRelease(Z_Param_OwningAbility,Z_Param_bTestAlreadyReleased);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilityTask_WaitInputRelease::execOnReleaseCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReleaseCallback();
		P_NATIVE_END;
	}
	void UAbilityTask_WaitInputRelease::StaticRegisterNativesUAbilityTask_WaitInputRelease()
	{
		UClass* Class = UAbilityTask_WaitInputRelease::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnReleaseCallback", &UAbilityTask_WaitInputRelease::execOnReleaseCallback },
			{ "WaitInputRelease", &UAbilityTask_WaitInputRelease::execWaitInputRelease },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitInputRelease_OnReleaseCallback_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitInputRelease_OnReleaseCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitInputRelease.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitInputRelease_OnReleaseCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitInputRelease, nullptr, "OnReleaseCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitInputRelease_OnReleaseCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitInputRelease_OnReleaseCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitInputRelease_OnReleaseCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitInputRelease_OnReleaseCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics
	{
		struct AbilityTask_WaitInputRelease_eventWaitInputRelease_Parms
		{
			UGameplayAbility* OwningAbility;
			bool bTestAlreadyReleased;
			UAbilityTask_WaitInputRelease* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static void NewProp_bTestAlreadyReleased_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestAlreadyReleased;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitInputRelease_eventWaitInputRelease_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::NewProp_bTestAlreadyReleased_SetBit(void* Obj)
	{
		((AbilityTask_WaitInputRelease_eventWaitInputRelease_Parms*)Obj)->bTestAlreadyReleased = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::NewProp_bTestAlreadyReleased = { "bTestAlreadyReleased", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitInputRelease_eventWaitInputRelease_Parms), &Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::NewProp_bTestAlreadyReleased_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitInputRelease_eventWaitInputRelease_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitInputRelease_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::NewProp_bTestAlreadyReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Wait until the user releases the input button for this ability's activation. Returns time from hitting this node, till release. Will return 0 if input was already released. */" },
		{ "CPP_Default_bTestAlreadyReleased", "false" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitInputRelease.h" },
		{ "ToolTip", "Wait until the user releases the input button for this ability's activation. Returns time from hitting this node, till release. Will return 0 if input was already released." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitInputRelease, nullptr, "WaitInputRelease", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::AbilityTask_WaitInputRelease_eventWaitInputRelease_Parms), Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitInputRelease);
	UClass* Z_Construct_UClass_UAbilityTask_WaitInputRelease_NoRegister()
	{
		return UAbilityTask_WaitInputRelease::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRelease_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRelease;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitInputRelease_OnReleaseCallback, "OnReleaseCallback" }, // 4140798453
		{ &Z_Construct_UFunction_UAbilityTask_WaitInputRelease_WaitInputRelease, "WaitInputRelease" }, // 2206838670
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Waits until the input is released from activating an ability. Clients will replicate a 'release input' event to the server, but not the exact time it was held locally.\n *\x09We expect server to execute this task in parallel and keep its own time.\n */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitInputRelease.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitInputRelease.h" },
		{ "ToolTip", "Waits until the input is released from activating an ability. Clients will replicate a 'release input' event to the server, but not the exact time it was held locally.\nWe expect server to execute this task in parallel and keep its own time." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::NewProp_OnRelease_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitInputRelease.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::NewProp_OnRelease = { "OnRelease", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitInputRelease, OnRelease), Z_Construct_UDelegateFunction_GameplayAbilities_InputReleaseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::NewProp_OnRelease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::NewProp_OnRelease_MetaData)) }; // 3276819387
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::NewProp_OnRelease,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitInputRelease>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::ClassParams = {
		&UAbilityTask_WaitInputRelease::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitInputRelease()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitInputRelease.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitInputRelease.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitInputRelease_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitInputRelease.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitInputRelease>()
	{
		return UAbilityTask_WaitInputRelease::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitInputRelease);
	UAbilityTask_WaitInputRelease::~UAbilityTask_WaitInputRelease() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitInputRelease, UAbilityTask_WaitInputRelease::StaticClass, TEXT("UAbilityTask_WaitInputRelease"), &Z_Registration_Info_UClass_UAbilityTask_WaitInputRelease, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitInputRelease), 4135997976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_2426319745(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitInputRelease_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
