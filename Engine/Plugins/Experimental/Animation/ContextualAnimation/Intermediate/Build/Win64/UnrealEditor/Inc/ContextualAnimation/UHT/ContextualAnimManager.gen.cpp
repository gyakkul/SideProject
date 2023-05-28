// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextualAnimManager.h"
#include "ContextualAnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimManager() {}
// Cross Module References
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimManager();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimManager_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimStartSceneParams();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimation();
// End Cross Module References
	DEFINE_FUNCTION(UContextualAnimManager::execOnSceneInstanceEnded)
	{
		P_GET_OBJECT(UContextualAnimSceneInstance,Z_Param_SceneInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSceneInstanceEnded(Z_Param_SceneInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimManager::execBP_TryStartScene)
	{
		P_GET_OBJECT(UContextualAnimSceneAsset,Z_Param_SceneAsset);
		P_GET_STRUCT_REF(FContextualAnimStartSceneParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UContextualAnimSceneInstance**)Z_Param__Result=P_THIS->BP_TryStartScene(Z_Param_SceneAsset,Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimManager::execGetContextualAnimManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UContextualAnimManager**)Z_Param__Result=UContextualAnimManager::GetContextualAnimManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimManager::execGetSceneWithActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UContextualAnimSceneInstance**)Z_Param__Result=P_THIS->GetSceneWithActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimManager::execIsActorInAnyScene)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActorInAnyScene(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimManager::execTryStopSceneWithActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryStopSceneWithActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UContextualAnimManager::StaticRegisterNativesUContextualAnimManager()
	{
		UClass* Class = UContextualAnimManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_TryStartScene", &UContextualAnimManager::execBP_TryStartScene },
			{ "GetContextualAnimManager", &UContextualAnimManager::execGetContextualAnimManager },
			{ "GetSceneWithActor", &UContextualAnimManager::execGetSceneWithActor },
			{ "IsActorInAnyScene", &UContextualAnimManager::execIsActorInAnyScene },
			{ "OnSceneInstanceEnded", &UContextualAnimManager::execOnSceneInstanceEnded },
			{ "TryStopSceneWithActor", &UContextualAnimManager::execTryStopSceneWithActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics
	{
		struct ContextualAnimManager_eventBP_TryStartScene_Parms
		{
			const UContextualAnimSceneAsset* SceneAsset;
			FContextualAnimStartSceneParams Params;
			UContextualAnimSceneInstance* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::NewProp_SceneAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::NewProp_SceneAsset = { "SceneAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimManager_eventBP_TryStartScene_Parms, SceneAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::NewProp_SceneAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::NewProp_SceneAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimManager_eventBP_TryStartScene_Parms, Params), Z_Construct_UScriptStruct_FContextualAnimStartSceneParams, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::NewProp_Params_MetaData)) }; // 1100142325
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimManager_eventBP_TryStartScene_Parms, ReturnValue), Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::NewProp_SceneAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Manager" },
		{ "Comment", "/** Attempts to start an scene instance with the supplied actors using the first valid set based on selection criteria */" },
		{ "DisplayName", "Try Start Scene" },
		{ "ModuleRelativePath", "Public/ContextualAnimManager.h" },
		{ "ToolTip", "Attempts to start an scene instance with the supplied actors using the first valid set based on selection criteria" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimManager, nullptr, "BP_TryStartScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::ContextualAnimManager_eventBP_TryStartScene_Parms), Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager_Statics
	{
		struct ContextualAnimManager_eventGetContextualAnimManager_Parms
		{
			UObject* WorldContextObject;
			UContextualAnimManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimManager_eventGetContextualAnimManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimManager_eventGetContextualAnimManager_Parms, ReturnValue), Z_Construct_UClass_UContextualAnimManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Manager" },
		{ "ModuleRelativePath", "Public/ContextualAnimManager.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimManager, nullptr, "GetContextualAnimManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager_Statics::ContextualAnimManager_eventGetContextualAnimManager_Parms), Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor_Statics
	{
		struct ContextualAnimManager_eventGetSceneWithActor_Parms
		{
			AActor* Actor;
			UContextualAnimSceneInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimManager_eventGetSceneWithActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimManager_eventGetSceneWithActor_Parms, ReturnValue), Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Manager" },
		{ "ModuleRelativePath", "Public/ContextualAnimManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimManager, nullptr, "GetSceneWithActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor_Statics::ContextualAnimManager_eventGetSceneWithActor_Parms), Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics
	{
		struct ContextualAnimManager_eventIsActorInAnyScene_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimManager_eventIsActorInAnyScene_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextualAnimManager_eventIsActorInAnyScene_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextualAnimManager_eventIsActorInAnyScene_Parms), &Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Manager" },
		{ "ModuleRelativePath", "Public/ContextualAnimManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimManager, nullptr, "IsActorInAnyScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics::ContextualAnimManager_eventIsActorInAnyScene_Parms), Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimManager_OnSceneInstanceEnded_Statics
	{
		struct ContextualAnimManager_eventOnSceneInstanceEnded_Parms
		{
			UContextualAnimSceneInstance* SceneInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimManager_OnSceneInstanceEnded_Statics::NewProp_SceneInstance = { "SceneInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimManager_eventOnSceneInstanceEnded_Parms, SceneInstance), Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimManager_OnSceneInstanceEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimManager_OnSceneInstanceEnded_Statics::NewProp_SceneInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimManager_OnSceneInstanceEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimManager_OnSceneInstanceEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimManager, nullptr, "OnSceneInstanceEnded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimManager_OnSceneInstanceEnded_Statics::ContextualAnimManager_eventOnSceneInstanceEnded_Parms), Z_Construct_UFunction_UContextualAnimManager_OnSceneInstanceEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimManager_OnSceneInstanceEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimManager_OnSceneInstanceEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimManager_OnSceneInstanceEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimManager_OnSceneInstanceEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimManager_OnSceneInstanceEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics
	{
		struct ContextualAnimManager_eventTryStopSceneWithActor_Parms
		{
			AActor* Actor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimManager_eventTryStopSceneWithActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextualAnimManager_eventTryStopSceneWithActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextualAnimManager_eventTryStopSceneWithActor_Parms), &Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Manager" },
		{ "ModuleRelativePath", "Public/ContextualAnimManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimManager, nullptr, "TryStopSceneWithActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics::ContextualAnimManager_eventTryStopSceneWithActor_Parms), Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimManager);
	UClass* Z_Construct_UClass_UContextualAnimManager_NoRegister()
	{
		return UContextualAnimManager::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneActorCompContainer_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneActorCompContainer_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SceneActorCompContainer;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Instances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContextualAnimManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContextualAnimManager_BP_TryStartScene, "BP_TryStartScene" }, // 2849435383
		{ &Z_Construct_UFunction_UContextualAnimManager_GetContextualAnimManager, "GetContextualAnimManager" }, // 2233328988
		{ &Z_Construct_UFunction_UContextualAnimManager_GetSceneWithActor, "GetSceneWithActor" }, // 31116906
		{ &Z_Construct_UFunction_UContextualAnimManager_IsActorInAnyScene, "IsActorInAnyScene" }, // 677751854
		{ &Z_Construct_UFunction_UContextualAnimManager_OnSceneInstanceEnded, "OnSceneInstanceEnded" }, // 3896394512
		{ &Z_Construct_UFunction_UContextualAnimManager_TryStopSceneWithActor, "TryStopSceneWithActor" }, // 155751111
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContextualAnimManager.h" },
		{ "ModuleRelativePath", "Public/ContextualAnimManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UContextualAnimManager_Statics::NewProp_SceneActorCompContainer_ElementProp = { "SceneActorCompContainer", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimManager_Statics::NewProp_SceneActorCompContainer_MetaData[] = {
		{ "Comment", "/** Container for all SceneActorComps in the world */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimManager.h" },
		{ "ToolTip", "Container for all SceneActorComps in the world" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UContextualAnimManager_Statics::NewProp_SceneActorCompContainer = { "SceneActorCompContainer", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimManager, SceneActorCompContainer), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimManager_Statics::NewProp_SceneActorCompContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimManager_Statics::NewProp_SceneActorCompContainer_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UContextualAnimManager_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimManager_Statics::NewProp_Instances_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContextualAnimManager_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimManager, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimManager_Statics::NewProp_Instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimManager_Statics::NewProp_Instances_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextualAnimManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimManager_Statics::NewProp_SceneActorCompContainer_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimManager_Statics::NewProp_SceneActorCompContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimManager_Statics::NewProp_Instances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimManager_Statics::NewProp_Instances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimManager_Statics::ClassParams = {
		&UContextualAnimManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UContextualAnimManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimManager()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimManager.OuterSingleton, Z_Construct_UClass_UContextualAnimManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimManager.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UClass* StaticClass<UContextualAnimManager>()
	{
		return UContextualAnimManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimManager);
	UContextualAnimManager::~UContextualAnimManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextualAnimManager, UContextualAnimManager::StaticClass, TEXT("UContextualAnimManager"), &Z_Registration_Info_UClass_UContextualAnimManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimManager), 4289095309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_1834702114(TEXT("/Script/ContextualAnimation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
