// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AI/AITask_UseGameplayInteraction.h"
#include "GameplayInteractionContext.h"
#include "GameplayInteractionsTypes.h"
#include "SmartObjectRuntime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask_UseGameplayInteraction() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UAITask_UseGameplayInteraction();
	GAMEPLAYINTERACTIONSMODULE_API UClass* Z_Construct_UClass_UAITask_UseGameplayInteraction_NoRegister();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionAbortContext();
	GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayInteractionContext();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectClaimHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayInteractionsModule();
// End Cross Module References
	DEFINE_FUNCTION(UAITask_UseGameplayInteraction::execRequestAbort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestAbort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAITask_UseGameplayInteraction::execUseClaimedGameplayInteractionSmartObject)
	{
		P_GET_OBJECT(AAIController,Z_Param_Controller);
		P_GET_STRUCT(FSmartObjectClaimHandle,Z_Param_ClaimHandle);
		P_GET_UBOOL(Z_Param_bLockAILogic);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAITask_UseGameplayInteraction**)Z_Param__Result=UAITask_UseGameplayInteraction::UseClaimedGameplayInteractionSmartObject(Z_Param_Controller,Z_Param_ClaimHandle,Z_Param_bLockAILogic);
		P_NATIVE_END;
	}
	void UAITask_UseGameplayInteraction::StaticRegisterNativesUAITask_UseGameplayInteraction()
	{
		UClass* Class = UAITask_UseGameplayInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestAbort", &UAITask_UseGameplayInteraction::execRequestAbort },
			{ "UseClaimedGameplayInteractionSmartObject", &UAITask_UseGameplayInteraction::execUseClaimedGameplayInteractionSmartObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Tasks" },
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITask_UseGameplayInteraction, nullptr, "RequestAbort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics
	{
		struct AITask_UseGameplayInteraction_eventUseClaimedGameplayInteractionSmartObject_Parms
		{
			AAIController* Controller;
			FSmartObjectClaimHandle ClaimHandle;
			bool bLockAILogic;
			UAITask_UseGameplayInteraction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClaimHandle;
		static void NewProp_bLockAILogic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockAILogic;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AITask_UseGameplayInteraction_eventUseClaimedGameplayInteractionSmartObject_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::NewProp_ClaimHandle = { "ClaimHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AITask_UseGameplayInteraction_eventUseClaimedGameplayInteractionSmartObject_Parms, ClaimHandle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(nullptr, 0) }; // 931449528
	void Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::NewProp_bLockAILogic_SetBit(void* Obj)
	{
		((AITask_UseGameplayInteraction_eventUseClaimedGameplayInteractionSmartObject_Parms*)Obj)->bLockAILogic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::NewProp_bLockAILogic = { "bLockAILogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AITask_UseGameplayInteraction_eventUseClaimedGameplayInteractionSmartObject_Parms), &Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::NewProp_bLockAILogic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AITask_UseGameplayInteraction_eventUseClaimedGameplayInteractionSmartObject_Parms, ReturnValue), Z_Construct_UClass_UAITask_UseGameplayInteraction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::NewProp_ClaimHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::NewProp_bLockAILogic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "AI|Tasks" },
		{ "CPP_Default_bLockAILogic", "true" },
		{ "DefaultToSelf", "Controller" },
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITask_UseGameplayInteraction, nullptr, "UseClaimedGameplayInteractionSmartObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::AITask_UseGameplayInteraction_eventUseClaimedGameplayInteractionSmartObject_Parms), Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAITask_UseGameplayInteraction);
	UClass* Z_Construct_UClass_UAITask_UseGameplayInteraction_NoRegister()
	{
		return UAITask_UseGameplayInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayInteractionContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayInteractionContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClaimedHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClaimedHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbortContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbortContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAITask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayInteractionsModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAITask_UseGameplayInteraction_RequestAbort, "RequestAbort" }, // 312532400
		{ &Z_Construct_UFunction_UAITask_UseGameplayInteraction_UseClaimedGameplayInteractionSmartObject, "UseClaimedGameplayInteractionSmartObject" }, // 3634104342
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/AITask_UseGameplayInteraction.h" },
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnFinished_MetaData[] = {
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAITask_UseGameplayInteraction, OnFinished), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnFinished_MetaData)) }; // 2832075636
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_GameplayInteractionContext_MetaData[] = {
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_GameplayInteractionContext = { "GameplayInteractionContext", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAITask_UseGameplayInteraction, GameplayInteractionContext), Z_Construct_UScriptStruct_FGameplayInteractionContext, METADATA_PARAMS(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_GameplayInteractionContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_GameplayInteractionContext_MetaData)) }; // 1598215578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_ClaimedHandle_MetaData[] = {
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_ClaimedHandle = { "ClaimedHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAITask_UseGameplayInteraction, ClaimedHandle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_ClaimedHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_ClaimedHandle_MetaData)) }; // 931449528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_AbortContext_MetaData[] = {
		{ "ModuleRelativePath", "Private/AI/AITask_UseGameplayInteraction.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_AbortContext = { "AbortContext", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAITask_UseGameplayInteraction, AbortContext), Z_Construct_UScriptStruct_FGameplayInteractionAbortContext, METADATA_PARAMS(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_AbortContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_AbortContext_MetaData)) }; // 2210915608
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_OnFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_GameplayInteractionContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_ClaimedHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::NewProp_AbortContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITask_UseGameplayInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::ClassParams = {
		&UAITask_UseGameplayInteraction::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAITask_UseGameplayInteraction()
	{
		if (!Z_Registration_Info_UClass_UAITask_UseGameplayInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAITask_UseGameplayInteraction.OuterSingleton, Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAITask_UseGameplayInteraction.OuterSingleton;
	}
	template<> GAMEPLAYINTERACTIONSMODULE_API UClass* StaticClass<UAITask_UseGameplayInteraction>()
	{
		return UAITask_UseGameplayInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask_UseGameplayInteraction);
	UAITask_UseGameplayInteraction::~UAITask_UseGameplayInteraction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAITask_UseGameplayInteraction, UAITask_UseGameplayInteraction::StaticClass, TEXT("UAITask_UseGameplayInteraction"), &Z_Registration_Info_UClass_UAITask_UseGameplayInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAITask_UseGameplayInteraction), 934011811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_1806955623(TEXT("/Script/GameplayInteractionsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
