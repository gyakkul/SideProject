// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Async/AbilityAsync_WaitGameplayEffectApplied.h"
#include "Abilities/GameplayAbilityTargetDataFilter.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityAsync_WaitGameplayEffectApplied() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRequirements();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics
	{
		struct AbilityAsync_WaitGameplayEffectApplied_eventOnAppliedDelegate_Parms
		{
			AActor* Source;
			FGameplayEffectSpecHandle SpecHandle;
			FActiveGameplayEffectHandle ActiveHandle;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpecHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayEffectApplied_eventOnAppliedDelegate_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics::NewProp_SpecHandle = { "SpecHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayEffectApplied_eventOnAppliedDelegate_Parms, SpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(nullptr, 0) }; // 1303953225
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics::NewProp_ActiveHandle = { "ActiveHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayEffectApplied_eventOnAppliedDelegate_Parms, ActiveHandle), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(nullptr, 0) }; // 3579869929
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics::NewProp_SpecHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics::NewProp_ActiveHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayEffectApplied.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied, nullptr, "OnAppliedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics::AbilityAsync_WaitGameplayEffectApplied_eventOnAppliedDelegate_Parms), Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAbilityAsync_WaitGameplayEffectApplied::FOnAppliedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAppliedDelegate, AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle)
{
	struct AbilityAsync_WaitGameplayEffectApplied_eventOnAppliedDelegate_Parms
	{
		AActor* Source;
		FGameplayEffectSpecHandle SpecHandle;
		FActiveGameplayEffectHandle ActiveHandle;
	};
	AbilityAsync_WaitGameplayEffectApplied_eventOnAppliedDelegate_Parms Parms;
	Parms.Source=Source;
	Parms.SpecHandle=SpecHandle;
	Parms.ActiveHandle=ActiveHandle;
	OnAppliedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAbilityAsync_WaitGameplayEffectApplied::execWaitGameplayEffectAppliedToActor)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_STRUCT(FGameplayTargetDataFilterHandle,Z_Param_SourceFilter);
		P_GET_STRUCT(FGameplayTagRequirements,Z_Param_SourceTagRequirements);
		P_GET_STRUCT(FGameplayTagRequirements,Z_Param_TargetTagRequirements);
		P_GET_UBOOL(Z_Param_TriggerOnce);
		P_GET_UBOOL(Z_Param_ListenForPeriodicEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityAsync_WaitGameplayEffectApplied**)Z_Param__Result=UAbilityAsync_WaitGameplayEffectApplied::WaitGameplayEffectAppliedToActor(Z_Param_TargetActor,Z_Param_SourceFilter,Z_Param_SourceTagRequirements,Z_Param_TargetTagRequirements,Z_Param_TriggerOnce,Z_Param_ListenForPeriodicEffect);
		P_NATIVE_END;
	}
	void UAbilityAsync_WaitGameplayEffectApplied::StaticRegisterNativesUAbilityAsync_WaitGameplayEffectApplied()
	{
		UClass* Class = UAbilityAsync_WaitGameplayEffectApplied::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitGameplayEffectAppliedToActor", &UAbilityAsync_WaitGameplayEffectApplied::execWaitGameplayEffectAppliedToActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics
	{
		struct AbilityAsync_WaitGameplayEffectApplied_eventWaitGameplayEffectAppliedToActor_Parms
		{
			AActor* TargetActor;
			FGameplayTargetDataFilterHandle SourceFilter;
			FGameplayTagRequirements SourceTagRequirements;
			FGameplayTagRequirements TargetTagRequirements;
			bool TriggerOnce;
			bool ListenForPeriodicEffect;
			UAbilityAsync_WaitGameplayEffectApplied* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceFilter;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTagRequirements;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTagRequirements;
		static void NewProp_TriggerOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TriggerOnce;
		static void NewProp_ListenForPeriodicEffect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ListenForPeriodicEffect;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayEffectApplied_eventWaitGameplayEffectAppliedToActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_SourceFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_SourceFilter = { "SourceFilter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayEffectApplied_eventWaitGameplayEffectAppliedToActor_Parms, SourceFilter), Z_Construct_UScriptStruct_FGameplayTargetDataFilterHandle, METADATA_PARAMS(Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_SourceFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_SourceFilter_MetaData)) }; // 3502446820
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_SourceTagRequirements = { "SourceTagRequirements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayEffectApplied_eventWaitGameplayEffectAppliedToActor_Parms, SourceTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(nullptr, 0) }; // 1682790808
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_TargetTagRequirements = { "TargetTagRequirements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayEffectApplied_eventWaitGameplayEffectAppliedToActor_Parms, TargetTagRequirements), Z_Construct_UScriptStruct_FGameplayTagRequirements, METADATA_PARAMS(nullptr, 0) }; // 1682790808
	void Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_TriggerOnce_SetBit(void* Obj)
	{
		((AbilityAsync_WaitGameplayEffectApplied_eventWaitGameplayEffectAppliedToActor_Parms*)Obj)->TriggerOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_TriggerOnce = { "TriggerOnce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityAsync_WaitGameplayEffectApplied_eventWaitGameplayEffectAppliedToActor_Parms), &Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_TriggerOnce_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_ListenForPeriodicEffect_SetBit(void* Obj)
	{
		((AbilityAsync_WaitGameplayEffectApplied_eventWaitGameplayEffectAppliedToActor_Parms*)Obj)->ListenForPeriodicEffect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_ListenForPeriodicEffect = { "ListenForPeriodicEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityAsync_WaitGameplayEffectApplied_eventWaitGameplayEffectAppliedToActor_Parms), &Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_ListenForPeriodicEffect_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayEffectApplied_eventWaitGameplayEffectAppliedToActor_Parms, ReturnValue), Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_SourceFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_SourceTagRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_TargetTagRequirements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_TriggerOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_ListenForPeriodicEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Async" },
		{ "Comment", "/**\n\x09 * Wait until a GameplayEffect is applied to a target actor\n\x09 * If TriggerOnce is true, this action will only activate one time. Otherwise it will return every time a GE is applied that meets the requirements over the life of the ability\n\x09 * If used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayEffectApplied instead.\n\x09 */" },
		{ "CPP_Default_ListenForPeriodicEffect", "false" },
		{ "CPP_Default_TriggerOnce", "false" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayEffectApplied.h" },
		{ "ToolTip", "Wait until a GameplayEffect is applied to a target actor\nIf TriggerOnce is true, this action will only activate one time. Otherwise it will return every time a GE is applied that meets the requirements over the life of the ability\nIf used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayEffectApplied instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied, nullptr, "WaitGameplayEffectAppliedToActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::AbilityAsync_WaitGameplayEffectApplied_eventWaitGameplayEffectAppliedToActor_Parms), Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync_WaitGameplayEffectApplied);
	UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_NoRegister()
	{
		return UAbilityAsync_WaitGameplayEffectApplied::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnApplied_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnApplied;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityAsync,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature, "OnAppliedDelegate__DelegateSignature" }, // 3302791085
		{ &Z_Construct_UFunction_UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor, "WaitGameplayEffectAppliedToActor" }, // 917186509
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This action listens for specific gameplay effect applications based off specified tags. \n * Effects themselves are not replicated; rather the tags they grant, the attributes they \n * change, and the gameplay cues they emit are replicated.\n * This will only listen for local server or predicted client effects.\n */" },
		{ "IncludePath", "Abilities/Async/AbilityAsync_WaitGameplayEffectApplied.h" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayEffectApplied.h" },
		{ "ToolTip", "This action listens for specific gameplay effect applications based off specified tags.\nEffects themselves are not replicated; rather the tags they grant, the attributes they\nchange, and the gameplay cues they emit are replicated.\nThis will only listen for local server or predicted client effects." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::NewProp_OnApplied_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayEffectApplied.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::NewProp_OnApplied = { "OnApplied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityAsync_WaitGameplayEffectApplied, OnApplied), Z_Construct_UDelegateFunction_UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::NewProp_OnApplied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::NewProp_OnApplied_MetaData)) }; // 3302791085
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::NewProp_OnApplied,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync_WaitGameplayEffectApplied>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::ClassParams = {
		&UAbilityAsync_WaitGameplayEffectApplied::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied()
	{
		if (!Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayEffectApplied.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayEffectApplied.OuterSingleton, Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayEffectApplied.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityAsync_WaitGameplayEffectApplied>()
	{
		return UAbilityAsync_WaitGameplayEffectApplied::StaticClass();
	}
	UAbilityAsync_WaitGameplayEffectApplied::UAbilityAsync_WaitGameplayEffectApplied(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync_WaitGameplayEffectApplied);
	UAbilityAsync_WaitGameplayEffectApplied::~UAbilityAsync_WaitGameplayEffectApplied() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityAsync_WaitGameplayEffectApplied, UAbilityAsync_WaitGameplayEffectApplied::StaticClass, TEXT("UAbilityAsync_WaitGameplayEffectApplied"), &Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayEffectApplied, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync_WaitGameplayEffectApplied), 1254010556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_3679202843(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayEffectApplied_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
