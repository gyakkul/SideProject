// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextualAnimSceneInstance.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "ContextualAnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimSceneInstance() {}
// Cross Module References
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneInstance();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister();
	CONTEXTUALANIMATION_API UFunction* Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature();
	CONTEXTUALANIMATION_API UFunction* Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature();
	CONTEXTUALANIMATION_API UFunction* Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature();
	CONTEXTUALANIMATION_API UFunction* Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneBindings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimation();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature_Statics
	{
		struct _Script_ContextualAnimation_eventOnContextualAnimSceneEnded_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature_Statics::NewProp_SceneInstance = { "SceneInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ContextualAnimation_eventOnContextualAnimSceneEnded_Parms, SceneInstance), Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature_Statics::NewProp_SceneInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to notify external objects when this is scene is completed */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
		{ "ToolTip", "Delegate to notify external objects when this is scene is completed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ContextualAnimation, nullptr, "OnContextualAnimSceneEnded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature_Statics::_Script_ContextualAnimation_eventOnContextualAnimSceneEnded_Parms), Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnContextualAnimSceneEnded_DelegateWrapper(const FMulticastScriptDelegate& OnContextualAnimSceneEnded, UContextualAnimSceneInstance* SceneInstance)
{
	struct _Script_ContextualAnimation_eventOnContextualAnimSceneEnded_Parms
	{
		UContextualAnimSceneInstance* SceneInstance;
	};
	_Script_ContextualAnimation_eventOnContextualAnimSceneEnded_Parms Parms;
	Parms.SceneInstance=SceneInstance;
	OnContextualAnimSceneEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature_Statics
	{
		struct _Script_ContextualAnimation_eventOnContextualAnimSceneActorJoined_Parms
		{
			UContextualAnimSceneInstance* SceneInstance;
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneInstance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature_Statics::NewProp_SceneInstance = { "SceneInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ContextualAnimation_eventOnContextualAnimSceneActorJoined_Parms, SceneInstance), Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ContextualAnimation_eventOnContextualAnimSceneActorJoined_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature_Statics::NewProp_SceneInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to notify external objects when an actor join this scene */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
		{ "ToolTip", "Delegate to notify external objects when an actor join this scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ContextualAnimation, nullptr, "OnContextualAnimSceneActorJoined__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature_Statics::_Script_ContextualAnimation_eventOnContextualAnimSceneActorJoined_Parms), Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnContextualAnimSceneActorJoined_DelegateWrapper(const FMulticastScriptDelegate& OnContextualAnimSceneActorJoined, UContextualAnimSceneInstance* SceneInstance, AActor* Actor)
{
	struct _Script_ContextualAnimation_eventOnContextualAnimSceneActorJoined_Parms
	{
		UContextualAnimSceneInstance* SceneInstance;
		AActor* Actor;
	};
	_Script_ContextualAnimation_eventOnContextualAnimSceneActorJoined_Parms Parms;
	Parms.SceneInstance=SceneInstance;
	Parms.Actor=Actor;
	OnContextualAnimSceneActorJoined.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature_Statics
	{
		struct _Script_ContextualAnimation_eventOnContextualAnimSceneActorLeft_Parms
		{
			UContextualAnimSceneInstance* SceneInstance;
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneInstance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature_Statics::NewProp_SceneInstance = { "SceneInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ContextualAnimation_eventOnContextualAnimSceneActorLeft_Parms, SceneInstance), Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ContextualAnimation_eventOnContextualAnimSceneActorLeft_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature_Statics::NewProp_SceneInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to notify external objects when an actor left this scene */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
		{ "ToolTip", "Delegate to notify external objects when an actor left this scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ContextualAnimation, nullptr, "OnContextualAnimSceneActorLeft__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature_Statics::_Script_ContextualAnimation_eventOnContextualAnimSceneActorLeft_Parms), Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnContextualAnimSceneActorLeft_DelegateWrapper(const FMulticastScriptDelegate& OnContextualAnimSceneActorLeft, UContextualAnimSceneInstance* SceneInstance, AActor* Actor)
{
	struct _Script_ContextualAnimation_eventOnContextualAnimSceneActorLeft_Parms
	{
		UContextualAnimSceneInstance* SceneInstance;
		AActor* Actor;
	};
	_Script_ContextualAnimation_eventOnContextualAnimSceneActorLeft_Parms Parms;
	Parms.SceneInstance=SceneInstance;
	Parms.Actor=Actor;
	OnContextualAnimSceneActorLeft.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics
	{
		struct _Script_ContextualAnimation_eventOnContextualAnimSceneNotify_Parms
		{
			UContextualAnimSceneInstance* SceneInstance;
			AActor* Actor;
			FName NotifyName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneInstance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics::NewProp_SceneInstance = { "SceneInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ContextualAnimation_eventOnContextualAnimSceneNotify_Parms, SceneInstance), Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ContextualAnimation_eventOnContextualAnimSceneNotify_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ContextualAnimation_eventOnContextualAnimSceneNotify_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics::NewProp_SceneInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics::NewProp_NotifyName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to notify external objects about anim notify events */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
		{ "ToolTip", "Delegate to notify external objects about anim notify events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ContextualAnimation, nullptr, "OnContextualAnimSceneNotify__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics::_Script_ContextualAnimation_eventOnContextualAnimSceneNotify_Parms), Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnContextualAnimSceneNotify_DelegateWrapper(const FMulticastScriptDelegate& OnContextualAnimSceneNotify, UContextualAnimSceneInstance* SceneInstance, AActor* Actor, FName NotifyName)
{
	struct _Script_ContextualAnimation_eventOnContextualAnimSceneNotify_Parms
	{
		UContextualAnimSceneInstance* SceneInstance;
		AActor* Actor;
		FName NotifyName;
	};
	_Script_ContextualAnimation_eventOnContextualAnimSceneNotify_Parms Parms;
	Parms.SceneInstance=SceneInstance;
	Parms.Actor=Actor;
	Parms.NotifyName=NotifyName;
	OnContextualAnimSceneNotify.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UContextualAnimSceneInstance::execOnNotifyEndReceived)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyEndReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneInstance::execOnNotifyBeginReceived)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNotifyBeginReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneInstance::execOnMontageBlendingOut)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneInstance::execGetActorByRole)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Role);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActorByRole(Z_Param_Role);
		P_NATIVE_END;
	}
	void UContextualAnimSceneInstance::StaticRegisterNativesUContextualAnimSceneInstance()
	{
		UClass* Class = UContextualAnimSceneInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorByRole", &UContextualAnimSceneInstance::execGetActorByRole },
			{ "OnMontageBlendingOut", &UContextualAnimSceneInstance::execOnMontageBlendingOut },
			{ "OnNotifyBeginReceived", &UContextualAnimSceneInstance::execOnNotifyBeginReceived },
			{ "OnNotifyEndReceived", &UContextualAnimSceneInstance::execOnNotifyEndReceived },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole_Statics
	{
		struct ContextualAnimSceneInstance_eventGetActorByRole_Parms
		{
			FName Role;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Role;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneInstance_eventGetActorByRole_Parms, Role), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneInstance_eventGetActorByRole_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Instance" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneInstance, nullptr, "GetActorByRole", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole_Statics::ContextualAnimSceneInstance_eventGetActorByRole_Parms), Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics
	{
		struct ContextualAnimSceneInstance_eventOnMontageBlendingOut_Parms
		{
			UAnimMontage* Montage;
			bool bInterrupted;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static void NewProp_bInterrupted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneInstance_eventOnMontageBlendingOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((ContextualAnimSceneInstance_eventOnMontageBlendingOut_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextualAnimSceneInstance_eventOnMontageBlendingOut_Parms), &Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneInstance, nullptr, "OnMontageBlendingOut", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics::ContextualAnimSceneInstance_eventOnMontageBlendingOut_Parms), Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics
	{
		struct ContextualAnimSceneInstance_eventOnNotifyBeginReceived_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointNotifyPayload;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneInstance_eventOnNotifyBeginReceived_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload = { "BranchingPointNotifyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneInstance_eventOnNotifyBeginReceived_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData)) }; // 3465490004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::NewProp_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::NewProp_BranchingPointNotifyPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneInstance, nullptr, "OnNotifyBeginReceived", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::ContextualAnimSceneInstance_eventOnNotifyBeginReceived_Parms), Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics
	{
		struct ContextualAnimSceneInstance_eventOnNotifyEndReceived_Parms
		{
			FName NotifyName;
			FBranchingPointNotifyPayload BranchingPointNotifyPayload;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneInstance_eventOnNotifyEndReceived_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload = { "BranchingPointNotifyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneInstance_eventOnNotifyEndReceived_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload_MetaData)) }; // 3465490004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::NewProp_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::NewProp_BranchingPointNotifyPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneInstance, nullptr, "OnNotifyEndReceived", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::ContextualAnimSceneInstance_eventOnNotifyEndReceived_Parms), Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimSceneInstance);
	UClass* Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister()
	{
		return UContextualAnimSceneInstance::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimSceneInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSectionEndTimeReached_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSectionEndTimeReached;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSceneEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSceneEnded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActorJoined_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorJoined;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActorLeft_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActorLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNotifyBegin_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotifyBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNotifyEnd_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotifyEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimSceneInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContextualAnimSceneInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContextualAnimSceneInstance_GetActorByRole, "GetActorByRole" }, // 630835268
		{ &Z_Construct_UFunction_UContextualAnimSceneInstance_OnMontageBlendingOut, "OnMontageBlendingOut" }, // 3635511131
		{ &Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyBeginReceived, "OnNotifyBeginReceived" }, // 573062907
		{ &Z_Construct_UFunction_UContextualAnimSceneInstance_OnNotifyEndReceived, "OnNotifyEndReceived" }, // 2884755161
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Instance of a contextual animation scene */" },
		{ "IncludePath", "ContextualAnimSceneInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Instance of a contextual animation scene" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnSectionEndTimeReached_MetaData[] = {
		{ "Comment", "/**\n\x09 * Delegate to notify once the scene play time reaches the duration defined by the longest played montage of the selected section.\n\x09 * This delegate should be used if one or more montages have 'bEnableAutoBlendOut' set to 'false'.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
		{ "ToolTip", "Delegate to notify once the scene play time reaches the duration defined by the longest played montage of the selected section.\nThis delegate should be used if one or more montages have 'bEnableAutoBlendOut' set to 'false'." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnSectionEndTimeReached = { "OnSectionEndTimeReached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneInstance, OnSectionEndTimeReached), Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnSectionEndTimeReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnSectionEndTimeReached_MetaData)) }; // 541070511
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnSceneEnded_MetaData[] = {
		{ "Comment", "/**\n\x09 * Delegate to notify external objects when this is scene is completed after all montages played by the scene section blended out.\n\x09 * Will not be broadcasted if one or more montages have 'bEnableAutoBlendOut' set to 'false'.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
		{ "ToolTip", "Delegate to notify external objects when this is scene is completed after all montages played by the scene section blended out.\nWill not be broadcasted if one or more montages have 'bEnableAutoBlendOut' set to 'false'." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnSceneEnded = { "OnSceneEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneInstance, OnSceneEnded), Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneEnded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnSceneEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnSceneEnded_MetaData)) }; // 541070511
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnActorJoined_MetaData[] = {
		{ "Comment", "/** Delegate to notify external objects when an actor join */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
		{ "ToolTip", "Delegate to notify external objects when an actor join" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnActorJoined = { "OnActorJoined", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneInstance, OnActorJoined), Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorJoined__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnActorJoined_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnActorJoined_MetaData)) }; // 2919125519
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnActorLeft_MetaData[] = {
		{ "Comment", "/** Delegate to notify external objects when an actor leave */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
		{ "ToolTip", "Delegate to notify external objects when an actor leave" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnActorLeft = { "OnActorLeft", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneInstance, OnActorLeft), Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneActorLeft__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnActorLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnActorLeft_MetaData)) }; // 3185983880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnNotifyBegin_MetaData[] = {
		{ "Comment", "/** Delegate to notify external objects when an animation hits a 'PlayMontageNotify' or 'PlayMontageNotifyWindow' begin */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
		{ "ToolTip", "Delegate to notify external objects when an animation hits a 'PlayMontageNotify' or 'PlayMontageNotifyWindow' begin" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnNotifyBegin = { "OnNotifyBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneInstance, OnNotifyBegin), Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnNotifyBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnNotifyBegin_MetaData)) }; // 2304246818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnNotifyEnd_MetaData[] = {
		{ "Comment", "/** Delegate to notify external objects when an animation hits a 'PlayMontageNotify' or 'PlayMontageNotifyWindow' end */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
		{ "ToolTip", "Delegate to notify external objects when an animation hits a 'PlayMontageNotify' or 'PlayMontageNotifyWindow' end" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnNotifyEnd = { "OnNotifyEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneInstance, OnNotifyEnd), Z_Construct_UDelegateFunction_ContextualAnimation_OnContextualAnimSceneNotify__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnNotifyEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnNotifyEnd_MetaData)) }; // 2304246818
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_SceneAsset_MetaData[] = {
		{ "Comment", "/** Scene asset this instance was created from */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Scene asset this instance was created from" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_SceneAsset = { "SceneAsset", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneInstance, SceneAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_SceneAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_SceneAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_Bindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimSceneInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneInstance, Bindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_Bindings_MetaData)) }; // 1321072697
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextualAnimSceneInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnSectionEndTimeReached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnSceneEnded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnActorJoined,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnActorLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnNotifyBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_OnNotifyEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_SceneAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneInstance_Statics::NewProp_Bindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimSceneInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimSceneInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimSceneInstance_Statics::ClassParams = {
		&UContextualAnimSceneInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UContextualAnimSceneInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimSceneInstance()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimSceneInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimSceneInstance.OuterSingleton, Z_Construct_UClass_UContextualAnimSceneInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimSceneInstance.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UClass* StaticClass<UContextualAnimSceneInstance>()
	{
		return UContextualAnimSceneInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimSceneInstance);
	UContextualAnimSceneInstance::~UContextualAnimSceneInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextualAnimSceneInstance, UContextualAnimSceneInstance::StaticClass, TEXT("UContextualAnimSceneInstance"), &Z_Registration_Info_UClass_UContextualAnimSceneInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimSceneInstance), 3609087272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_605170004(TEXT("/Script/ContextualAnimation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
