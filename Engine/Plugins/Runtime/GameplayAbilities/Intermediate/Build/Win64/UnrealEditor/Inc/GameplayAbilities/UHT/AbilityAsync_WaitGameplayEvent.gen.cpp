// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Async/AbilityAsync_WaitGameplayEvent.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityAsync_WaitGameplayEvent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics
	{
		struct AbilityAsync_WaitGameplayEvent_eventEventReceivedDelegate_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayEvent_eventEventReceivedDelegate_Parms, Payload), Z_Construct_UScriptStruct_FGameplayEventData, METADATA_PARAMS(nullptr, 0) }; // 252801246
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent, nullptr, "EventReceivedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::AbilityAsync_WaitGameplayEvent_eventEventReceivedDelegate_Parms), Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAbilityAsync_WaitGameplayEvent::FEventReceivedDelegate_DelegateWrapper(const FMulticastScriptDelegate& EventReceivedDelegate, FGameplayEventData Payload)
{
	struct AbilityAsync_WaitGameplayEvent_eventEventReceivedDelegate_Parms
	{
		FGameplayEventData Payload;
	};
	AbilityAsync_WaitGameplayEvent_eventEventReceivedDelegate_Parms Parms;
	Parms.Payload=Payload;
	EventReceivedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityAsync_WaitGameplayEvent::execWaitGameplayEventToActor)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
		P_GET_UBOOL(Z_Param_OnlyTriggerOnce);
		P_GET_UBOOL(Z_Param_OnlyMatchExact);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityAsync_WaitGameplayEvent**)Z_Param__Result=UAbilityAsync_WaitGameplayEvent::WaitGameplayEventToActor(Z_Param_TargetActor,Z_Param_EventTag,Z_Param_OnlyTriggerOnce,Z_Param_OnlyMatchExact);
		P_NATIVE_END;
	}
	void UAbilityAsync_WaitGameplayEvent::StaticRegisterNativesUAbilityAsync_WaitGameplayEvent()
	{
		UClass* Class = UAbilityAsync_WaitGameplayEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitGameplayEventToActor", &UAbilityAsync_WaitGameplayEvent::execWaitGameplayEventToActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics
	{
		struct AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms
		{
			AActor* TargetActor;
			FGameplayTag EventTag;
			bool OnlyTriggerOnce;
			bool OnlyMatchExact;
			UAbilityAsync_WaitGameplayEvent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyTriggerOnce_SetBit(void* Obj)
	{
		((AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms*)Obj)->OnlyTriggerOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyTriggerOnce = { "OnlyTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms), &Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyTriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyMatchExact_SetBit(void* Obj)
	{
		((AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms*)Obj)->OnlyMatchExact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyMatchExact = { "OnlyMatchExact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms), &Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyMatchExact_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms, ReturnValue), Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_EventTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyTriggerOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_OnlyMatchExact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Async" },
		{ "Comment", "/**\n\x09 * Wait until the specified gameplay tag event is triggered on a target ability system component\n\x09 * It will keep listening as long as OnlyTriggerOnce = false\n\x09 * If OnlyMatchExact = false it will trigger for nested tags\n\x09 * If used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayEvent instead.\n\x09 */" },
		{ "CPP_Default_OnlyMatchExact", "true" },
		{ "CPP_Default_OnlyTriggerOnce", "false" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayEvent.h" },
		{ "ToolTip", "Wait until the specified gameplay tag event is triggered on a target ability system component\nIt will keep listening as long as OnlyTriggerOnce = false\nIf OnlyMatchExact = false it will trigger for nested tags\nIf used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayEvent instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent, nullptr, "WaitGameplayEventToActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::AbilityAsync_WaitGameplayEvent_eventWaitGameplayEventToActor_Parms), Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync_WaitGameplayEvent);
	UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_NoRegister()
	{
		return UAbilityAsync_WaitGameplayEvent::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityAsync,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature, "EventReceivedDelegate__DelegateSignature" }, // 2912935464
		{ &Z_Construct_UFunction_UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor, "WaitGameplayEventToActor" }, // 997729474
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Async/AbilityAsync_WaitGameplayEvent.h" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::NewProp_EventReceived_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayEvent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::NewProp_EventReceived = { "EventReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityAsync_WaitGameplayEvent, EventReceived), Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::NewProp_EventReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::NewProp_EventReceived_MetaData)) }; // 2912935464
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::NewProp_EventReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync_WaitGameplayEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::ClassParams = {
		&UAbilityAsync_WaitGameplayEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent()
	{
		if (!Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayEvent.OuterSingleton, Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayEvent.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityAsync_WaitGameplayEvent>()
	{
		return UAbilityAsync_WaitGameplayEvent::StaticClass();
	}
	UAbilityAsync_WaitGameplayEvent::UAbilityAsync_WaitGameplayEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync_WaitGameplayEvent);
	UAbilityAsync_WaitGameplayEvent::~UAbilityAsync_WaitGameplayEvent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityAsync_WaitGameplayEvent, UAbilityAsync_WaitGameplayEvent::StaticClass, TEXT("UAbilityAsync_WaitGameplayEvent"), &Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync_WaitGameplayEvent), 2002343777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_3382428151(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
