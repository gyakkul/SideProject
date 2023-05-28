// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_WaitGameplayEvent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEvent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEventDelegate__DelegateSignature();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEventDelegate__DelegateSignature_Statics
	{
		struct _Script_GameplayAbilities_eventWaitGameplayEventDelegate_Parms
		{
			FGameplayEventData Payload;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEventDelegate__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayAbilities_eventWaitGameplayEventDelegate_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(nullptr, 0) }; // 252801246
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEventDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEventDelegate__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEventDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEventDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "WaitGameplayEventDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEventDelegate__DelegateSignature_Statics::_Script_GameplayAbilities_eventWaitGameplayEventDelegate_Parms), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEventDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEventDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEventDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEventDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEventDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FWaitGameplayEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& WaitGameplayEventDelegate, FGameplayEventData Payload)
{
	struct _Script_GameplayAbilities_eventWaitGameplayEventDelegate_Parms
	{
		FGameplayEventData Payload;
	};
	_Script_GameplayAbilities_eventWaitGameplayEventDelegate_Parms Parms;
	Parms.Payload=Payload;
	WaitGameplayEventDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityTask_WaitGameplayEvent::execWaitGameplayEvent)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_OBJECT(AActor,Z_Param_OptionalExternalTarget);
		P_GET_UBOOL(Z_Param_OnlyTriggerOnce);
		P_GET_UBOOL(Z_Param_OnlyMatchExact);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_WaitGameplayEvent**)Z_Param__Result=UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(Z_Param_OwningAbility,Z_Param_EventTag,Z_Param_OptionalExternalTarget,Z_Param_OnlyTriggerOnce,Z_Param_OnlyMatchExact);
		P_NATIVE_END;
	}
	void UAbilityTask_WaitGameplayEvent::StaticRegisterNativesUAbilityTask_WaitGameplayEvent()
	{
		UClass* Class = UAbilityTask_WaitGameplayEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitGameplayEvent", &UAbilityTask_WaitGameplayEvent::execWaitGameplayEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics
	{
		struct AbilityTask_WaitGameplayEvent_eventWaitGameplayEvent_Parms
		{
			UGameplayAbility* OwningAbility;
			FGameplayTag EventTag;
			AActor* OptionalExternalTarget;
			bool OnlyTriggerOnce;
			bool OnlyMatchExact;
			UAbilityTask_WaitGameplayEvent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalExternalTarget;
		static void NewProp_OnlyTriggerOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyTriggerOnce;
		static void NewProp_OnlyMatchExact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OnlyMatchExact;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEvent_eventWaitGameplayEvent_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEvent_eventWaitGameplayEvent_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_OptionalExternalTarget = { "OptionalExternalTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEvent_eventWaitGameplayEvent_Parms, OptionalExternalTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_OnlyTriggerOnce_SetBit(void* Obj)
	{
		((AbilityTask_WaitGameplayEvent_eventWaitGameplayEvent_Parms*)Obj)->OnlyTriggerOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_OnlyTriggerOnce = { "OnlyTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitGameplayEvent_eventWaitGameplayEvent_Parms), &Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_OnlyTriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_OnlyMatchExact_SetBit(void* Obj)
	{
		((AbilityTask_WaitGameplayEvent_eventWaitGameplayEvent_Parms*)Obj)->OnlyMatchExact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_OnlyMatchExact = { "OnlyMatchExact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityTask_WaitGameplayEvent_eventWaitGameplayEvent_Parms), &Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_OnlyMatchExact_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_WaitGameplayEvent_eventWaitGameplayEvent_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_OptionalExternalTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_OnlyTriggerOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_OnlyMatchExact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 * Wait until the specified gameplay tag event is triggered. By default this will look at the owner of this ability. OptionalExternalTarget can be set to make this look at another actor's tags for changes\n\x09 * It will keep listening as long as OnlyTriggerOnce = false\n\x09 * If OnlyMatchExact = false it will trigger for nested tags\n\x09 */" },
		{ "CPP_Default_OnlyMatchExact", "true" },
		{ "CPP_Default_OnlyTriggerOnce", "false" },
		{ "CPP_Default_OptionalExternalTarget", "None" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEvent.h" },
		{ "ToolTip", "Wait until the specified gameplay tag event is triggered. By default this will look at the owner of this ability. OptionalExternalTarget can be set to make this look at another actor's tags for changes\nIt will keep listening as long as OnlyTriggerOnce = false\nIf OnlyMatchExact = false it will trigger for nested tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_WaitGameplayEvent, nullptr, "WaitGameplayEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::AbilityTask_WaitGameplayEvent_eventWaitGameplayEvent_Parms), Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_WaitGameplayEvent);
	UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_NoRegister()
	{
		return UAbilityTask_WaitGameplayEvent::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReceived_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EventReceived;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalExternalTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OptionalExternalTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_WaitGameplayEvent_WaitGameplayEvent, "WaitGameplayEvent" }, // 2548487126
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Tasks/AbilityTask_WaitGameplayEvent.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::NewProp_EventReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEvent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::NewProp_EventReceived = { "EventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitGameplayEvent, EventReceived), Z_Construct_UDelegateFunction_GameplayAbilities_WaitGameplayEventDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::NewProp_EventReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::NewProp_EventReceived_MetaData)) }; // 2103868579
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::NewProp_OptionalExternalTarget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_WaitGameplayEvent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::NewProp_OptionalExternalTarget = { "OptionalExternalTarget", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_WaitGameplayEvent, OptionalExternalTarget), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::NewProp_OptionalExternalTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::NewProp_OptionalExternalTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::NewProp_EventReceived,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::NewProp_OptionalExternalTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_WaitGameplayEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::ClassParams = {
		&UAbilityTask_WaitGameplayEvent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_WaitGameplayEvent()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEvent.OuterSingleton, Z_Construct_UClass_UAbilityTask_WaitGameplayEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEvent.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_WaitGameplayEvent>()
	{
		return UAbilityTask_WaitGameplayEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_WaitGameplayEvent);
	UAbilityTask_WaitGameplayEvent::~UAbilityTask_WaitGameplayEvent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_WaitGameplayEvent, UAbilityTask_WaitGameplayEvent::StaticClass, TEXT("UAbilityTask_WaitGameplayEvent"), &Z_Registration_Info_UClass_UAbilityTask_WaitGameplayEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_WaitGameplayEvent), 2733696119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEvent_h_923411207(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_WaitGameplayEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
