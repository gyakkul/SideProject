// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Async/AbilityAsync_WaitGameplayTagQuery.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityAsync_WaitGameplayTagQuery() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_NoRegister();
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_AsyncWaitGameplayTagQueryDelegate__DelegateSignature();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_AsyncWaitGameplayTagQueryDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_AsyncWaitGameplayTagQueryDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTagQuery.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_AsyncWaitGameplayTagQueryDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "AsyncWaitGameplayTagQueryDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_AsyncWaitGameplayTagQueryDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_AsyncWaitGameplayTagQueryDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_AsyncWaitGameplayTagQueryDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_AsyncWaitGameplayTagQueryDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncWaitGameplayTagQueryDelegate_DelegateWrapper(const FMulticastScriptDelegate& AsyncWaitGameplayTagQueryDelegate)
{
	AsyncWaitGameplayTagQueryDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAbilityAsync_WaitGameplayTagQuery::execWaitGameplayTagQueryOnActor)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_STRUCT(FGameplayTagQuery,Z_Param_TagQuery);
		P_GET_ENUM(EWaitGameplayTagQueryTriggerCondition,Z_Param_TriggerCondition);
		P_GET_UBOOL(Z_Param_bOnlyTriggerOnce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityAsync_WaitGameplayTagQuery**)Z_Param__Result=UAbilityAsync_WaitGameplayTagQuery::WaitGameplayTagQueryOnActor(Z_Param_TargetActor,Z_Param_TagQuery,EWaitGameplayTagQueryTriggerCondition(Z_Param_TriggerCondition),Z_Param_bOnlyTriggerOnce);
		P_NATIVE_END;
	}
	void UAbilityAsync_WaitGameplayTagQuery::StaticRegisterNativesUAbilityAsync_WaitGameplayTagQuery()
	{
		UClass* Class = UAbilityAsync_WaitGameplayTagQuery::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitGameplayTagQueryOnActor", &UAbilityAsync_WaitGameplayTagQuery::execWaitGameplayTagQueryOnActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics
	{
		struct AbilityAsync_WaitGameplayTagQuery_eventWaitGameplayTagQueryOnActor_Parms
		{
			AActor* TargetActor;
			FGameplayTagQuery TagQuery;
			EWaitGameplayTagQueryTriggerCondition TriggerCondition;
			bool bOnlyTriggerOnce;
			UAbilityAsync_WaitGameplayTagQuery* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerCondition_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerCondition_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerCondition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyTriggerOnce_MetaData[];
#endif
		static void NewProp_bOnlyTriggerOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyTriggerOnce;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagQuery_eventWaitGameplayTagQueryOnActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagQuery_eventWaitGameplayTagQueryOnActor_Parms, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_TagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_TagQuery_MetaData)) }; // 689482789
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_TriggerCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_TriggerCondition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_TriggerCondition = { "TriggerCondition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagQuery_eventWaitGameplayTagQueryOnActor_Parms, TriggerCondition), Z_Construct_UEnum_GameplayAbilities_EWaitGameplayTagQueryTriggerCondition, METADATA_PARAMS(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_TriggerCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_TriggerCondition_MetaData)) }; // 2105784171
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_bOnlyTriggerOnce_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_bOnlyTriggerOnce_SetBit(void* Obj)
	{
		((AbilityAsync_WaitGameplayTagQuery_eventWaitGameplayTagQueryOnActor_Parms*)Obj)->bOnlyTriggerOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_bOnlyTriggerOnce = { "bOnlyTriggerOnce", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AbilityAsync_WaitGameplayTagQuery_eventWaitGameplayTagQueryOnActor_Parms), &Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_bOnlyTriggerOnce_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_bOnlyTriggerOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_bOnlyTriggerOnce_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityAsync_WaitGameplayTagQuery_eventWaitGameplayTagQueryOnActor_Parms, ReturnValue), Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_TagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_TriggerCondition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_TriggerCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_bOnlyTriggerOnce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/**\n\x09 * \x09Wait until the given gameplay tag query has become true or false, based on TriggerCondition, looking at the target actors ASC.\n\x09 *  If the the tag query already satisfies the TriggerCondition when this task is started, it will immediately broadcast the Triggered\n\x09 *  event. It will keep listening as long as bOnlyTriggerOnce = false.\n\x09 *  If used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayTagQuery instead.\n\x09 */" },
		{ "CPP_Default_bOnlyTriggerOnce", "false" },
		{ "CPP_Default_TriggerCondition", "WhenTrue" },
		{ "DefaultToSelf", "TargetActor" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTagQuery.h" },
		{ "ToolTip", "Wait until the given gameplay tag query has become true or false, based on TriggerCondition, looking at the target actors ASC.\nIf the the tag query already satisfies the TriggerCondition when this task is started, it will immediately broadcast the Triggered\nevent. It will keep listening as long as bOnlyTriggerOnce = false.\nIf used in an ability graph, this async action will wait even after activation ends. It's recommended to use WaitGameplayTagQuery instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery, nullptr, "WaitGameplayTagQueryOnActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::AbilityAsync_WaitGameplayTagQuery_eventWaitGameplayTagQueryOnActor_Parms), Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityAsync_WaitGameplayTagQuery);
	UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_NoRegister()
	{
		return UAbilityAsync_WaitGameplayTagQuery::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Triggered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityAsync,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor, "WaitGameplayTagQueryOnActor" }, // 2481275866
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This class defines an async node to wait on a gameplay tag query. */" },
		{ "IncludePath", "Abilities/Async/AbilityAsync_WaitGameplayTagQuery.h" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTagQuery.h" },
		{ "ToolTip", "This class defines an async node to wait on a gameplay tag query." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::NewProp_Triggered_MetaData[] = {
		{ "Comment", "/** This delegate will be triggered when the trigger condition has been met. */" },
		{ "ModuleRelativePath", "Public/Abilities/Async/AbilityAsync_WaitGameplayTagQuery.h" },
		{ "ToolTip", "This delegate will be triggered when the trigger condition has been met." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::NewProp_Triggered = { "Triggered", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityAsync_WaitGameplayTagQuery, Triggered), Z_Construct_UDelegateFunction_GameplayAbilities_AsyncWaitGameplayTagQueryDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::NewProp_Triggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::NewProp_Triggered_MetaData)) }; // 2221806015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::NewProp_Triggered,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityAsync_WaitGameplayTagQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::ClassParams = {
		&UAbilityAsync_WaitGameplayTagQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery()
	{
		if (!Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagQuery.OuterSingleton, Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagQuery.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityAsync_WaitGameplayTagQuery>()
	{
		return UAbilityAsync_WaitGameplayTagQuery::StaticClass();
	}
	UAbilityAsync_WaitGameplayTagQuery::UAbilityAsync_WaitGameplayTagQuery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityAsync_WaitGameplayTagQuery);
	UAbilityAsync_WaitGameplayTagQuery::~UAbilityAsync_WaitGameplayTagQuery() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityAsync_WaitGameplayTagQuery, UAbilityAsync_WaitGameplayTagQuery::StaticClass, TEXT("UAbilityAsync_WaitGameplayTagQuery"), &Z_Registration_Info_UClass_UAbilityAsync_WaitGameplayTagQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityAsync_WaitGameplayTagQuery), 2505564345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_367685081(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Async_AbilityAsync_WaitGameplayTagQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
