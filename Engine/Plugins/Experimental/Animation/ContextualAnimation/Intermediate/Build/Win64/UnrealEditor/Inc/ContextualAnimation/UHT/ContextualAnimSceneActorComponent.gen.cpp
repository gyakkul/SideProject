// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextualAnimSceneActorComponent.h"
#include "ContextualAnimTypes.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimSceneActorComponent() {}
// Cross Module References
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneActorComponent();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister();
	CONTEXTUALANIMATION_API UFunction* Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimIKTarget();
	CONTEXTUALANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FContextualAnimSceneBindings();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimation();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature_Statics
	{
		struct _Script_ContextualAnimation_eventContextualAnimSceneActorCompDelegate_Parms
		{
			UContextualAnimSceneActorComponent* SceneActorComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneActorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneActorComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature_Statics::NewProp_SceneActorComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature_Statics::NewProp_SceneActorComponent = { "SceneActorComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ContextualAnimation_eventContextualAnimSceneActorCompDelegate_Parms, SceneActorComponent), Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature_Statics::NewProp_SceneActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature_Statics::NewProp_SceneActorComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature_Statics::NewProp_SceneActorComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ContextualAnimation, nullptr, "ContextualAnimSceneActorCompDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature_Statics::_Script_ContextualAnimation_eventContextualAnimSceneActorCompDelegate_Parms), Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FContextualAnimSceneActorCompDelegate_DelegateWrapper(const FMulticastScriptDelegate& ContextualAnimSceneActorCompDelegate, UContextualAnimSceneActorComponent* SceneActorComponent)
{
	struct _Script_ContextualAnimation_eventContextualAnimSceneActorCompDelegate_Parms
	{
		UContextualAnimSceneActorComponent* SceneActorComponent;
	};
	_Script_ContextualAnimation_eventContextualAnimSceneActorCompDelegate_Parms Parms;
	Parms.SceneActorComponent=SceneActorComponent;
	ContextualAnimSceneActorCompDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UContextualAnimSceneActorComponent::execServerEarlyOutContextualAnimScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerEarlyOutContextualAnimScene_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerEarlyOutContextualAnimScene_Validate"));
			return;
		}
		P_THIS->ServerEarlyOutContextualAnimScene_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneActorComponent::execServerStartContextualAnimScene)
	{
		P_GET_STRUCT(FContextualAnimSceneBindings,Z_Param_InBindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerStartContextualAnimScene_Validate(Z_Param_InBindings))
		{
			RPC_ValidateFailed(TEXT("ServerStartContextualAnimScene_Validate"));
			return;
		}
		P_THIS->ServerStartContextualAnimScene_Implementation(Z_Param_InBindings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneActorComponent::execOnMontageBlendingOut)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_UBOOL(Z_Param_bInterrupted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMontageBlendingOut(Z_Param_Montage,Z_Param_bInterrupted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneActorComponent::execOnRep_Bindings)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_LastRepBindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Bindings(Z_Param_Out_LastRepBindings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneActorComponent::execOnTickPose)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMeshComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_UBOOL(Z_Param_bNeedsValidRootMotion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTickPose(Z_Param_SkinnedMeshComponent,Z_Param_DeltaTime,Z_Param_bNeedsValidRootMotion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneActorComponent::execStartContextualAnimScene)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_InBindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartContextualAnimScene(Z_Param_Out_InBindings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneActorComponent::execGetIKTargetByGoalName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FContextualAnimIKTarget*)Z_Param__Result=P_THIS->GetIKTargetByGoalName(Z_Param_GoalName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneActorComponent::execGetIKTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FContextualAnimIKTarget>*)Z_Param__Result=P_THIS->GetIKTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneActorComponent::execOnLeftScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeftScene();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UContextualAnimSceneActorComponent::execOnJoinedScene)
	{
		P_GET_STRUCT_REF(FContextualAnimSceneBindings,Z_Param_Out_InBindings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnJoinedScene(Z_Param_Out_InBindings);
		P_NATIVE_END;
	}
	struct ContextualAnimSceneActorComponent_eventServerStartContextualAnimScene_Parms
	{
		FContextualAnimSceneBindings InBindings;
	};
	static FName NAME_UContextualAnimSceneActorComponent_ServerEarlyOutContextualAnimScene = FName(TEXT("ServerEarlyOutContextualAnimScene"));
	void UContextualAnimSceneActorComponent::ServerEarlyOutContextualAnimScene()
	{
		ProcessEvent(FindFunctionChecked(NAME_UContextualAnimSceneActorComponent_ServerEarlyOutContextualAnimScene),NULL);
	}
	static FName NAME_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene = FName(TEXT("ServerStartContextualAnimScene"));
	void UContextualAnimSceneActorComponent::ServerStartContextualAnimScene(FContextualAnimSceneBindings const& InBindings)
	{
		ContextualAnimSceneActorComponent_eventServerStartContextualAnimScene_Parms Parms;
		Parms.InBindings=InBindings;
		ProcessEvent(FindFunctionChecked(NAME_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene),&Parms);
	}
	void UContextualAnimSceneActorComponent::StaticRegisterNativesUContextualAnimSceneActorComponent()
	{
		UClass* Class = UContextualAnimSceneActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIKTargetByGoalName", &UContextualAnimSceneActorComponent::execGetIKTargetByGoalName },
			{ "GetIKTargets", &UContextualAnimSceneActorComponent::execGetIKTargets },
			{ "OnJoinedScene", &UContextualAnimSceneActorComponent::execOnJoinedScene },
			{ "OnLeftScene", &UContextualAnimSceneActorComponent::execOnLeftScene },
			{ "OnMontageBlendingOut", &UContextualAnimSceneActorComponent::execOnMontageBlendingOut },
			{ "OnRep_Bindings", &UContextualAnimSceneActorComponent::execOnRep_Bindings },
			{ "OnTickPose", &UContextualAnimSceneActorComponent::execOnTickPose },
			{ "ServerEarlyOutContextualAnimScene", &UContextualAnimSceneActorComponent::execServerEarlyOutContextualAnimScene },
			{ "ServerStartContextualAnimScene", &UContextualAnimSceneActorComponent::execServerStartContextualAnimScene },
			{ "StartContextualAnimScene", &UContextualAnimSceneActorComponent::execStartContextualAnimScene },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics
	{
		struct ContextualAnimSceneActorComponent_eventGetIKTargetByGoalName_Parms
		{
			FName GoalName;
			FContextualAnimIKTarget ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneActorComponent_eventGetIKTargetByGoalName_Parms, GoalName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneActorComponent_eventGetIKTargetByGoalName_Parms, ReturnValue), Z_Construct_UScriptStruct_FContextualAnimIKTarget, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::NewProp_ReturnValue_MetaData)) }; // 2700139966
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Actor Component" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneActorComponent, nullptr, "GetIKTargetByGoalName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::ContextualAnimSceneActorComponent_eventGetIKTargetByGoalName_Parms), Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics
	{
		struct ContextualAnimSceneActorComponent_eventGetIKTargets_Parms
		{
			TArray<FContextualAnimIKTarget> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContextualAnimIKTarget, METADATA_PARAMS(nullptr, 0) }; // 2700139966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneActorComponent_eventGetIKTargets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::NewProp_ReturnValue_MetaData)) }; // 2700139966
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Actor Component" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneActorComponent, nullptr, "GetIKTargets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::ContextualAnimSceneActorComponent_eventGetIKTargets_Parms), Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene_Statics
	{
		struct ContextualAnimSceneActorComponent_eventOnJoinedScene_Parms
		{
			FContextualAnimSceneBindings InBindings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene_Statics::NewProp_InBindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene_Statics::NewProp_InBindings = { "InBindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneActorComponent_eventOnJoinedScene_Parms, InBindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene_Statics::NewProp_InBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene_Statics::NewProp_InBindings_MetaData)) }; // 1321072697
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene_Statics::NewProp_InBindings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Actor Component" },
		{ "Comment", "/** Called when the actor owner of this component joins an scene */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
		{ "ToolTip", "Called when the actor owner of this component joins an scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneActorComponent, nullptr, "OnJoinedScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene_Statics::ContextualAnimSceneActorComponent_eventOnJoinedScene_Parms), Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnLeftScene_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnLeftScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Actor Component" },
		{ "Comment", "/** Called from the scene instance when the actor owner of this component leave an scene */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
		{ "ToolTip", "Called from the scene instance when the actor owner of this component leave an scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnLeftScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneActorComponent, nullptr, "OnLeftScene", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnLeftScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnLeftScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnLeftScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnLeftScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics
	{
		struct ContextualAnimSceneActorComponent_eventOnMontageBlendingOut_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneActorComponent_eventOnMontageBlendingOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
	{
		((ContextualAnimSceneActorComponent_eventOnMontageBlendingOut_Parms*)Obj)->bInterrupted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextualAnimSceneActorComponent_eventOnMontageBlendingOut_Parms), &Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics::NewProp_bInterrupted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneActorComponent, nullptr, "OnMontageBlendingOut", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics::ContextualAnimSceneActorComponent_eventOnMontageBlendingOut_Parms), Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings_Statics
	{
		struct ContextualAnimSceneActorComponent_eventOnRep_Bindings_Parms
		{
			FContextualAnimSceneBindings LastRepBindings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastRepBindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastRepBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings_Statics::NewProp_LastRepBindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings_Statics::NewProp_LastRepBindings = { "LastRepBindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneActorComponent_eventOnRep_Bindings_Parms, LastRepBindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings_Statics::NewProp_LastRepBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings_Statics::NewProp_LastRepBindings_MetaData)) }; // 1321072697
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings_Statics::NewProp_LastRepBindings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneActorComponent, nullptr, "OnRep_Bindings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings_Statics::ContextualAnimSceneActorComponent_eventOnRep_Bindings_Parms), Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics
	{
		struct ContextualAnimSceneActorComponent_eventOnTickPose_Parms
		{
			USkinnedMeshComponent* SkinnedMeshComponent;
			float DeltaTime;
			bool bNeedsValidRootMotion;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMeshComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static void NewProp_bNeedsValidRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsValidRootMotion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::NewProp_SkinnedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::NewProp_SkinnedMeshComponent = { "SkinnedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneActorComponent_eventOnTickPose_Parms, SkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::NewProp_SkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::NewProp_SkinnedMeshComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneActorComponent_eventOnTickPose_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::NewProp_bNeedsValidRootMotion_SetBit(void* Obj)
	{
		((ContextualAnimSceneActorComponent_eventOnTickPose_Parms*)Obj)->bNeedsValidRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::NewProp_bNeedsValidRootMotion = { "bNeedsValidRootMotion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextualAnimSceneActorComponent_eventOnTickPose_Parms), &Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::NewProp_bNeedsValidRootMotion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::NewProp_SkinnedMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::NewProp_bNeedsValidRootMotion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Event called right before owner's mesh ticks the pose when we are in a scene instance and IK Targets are required. \n\x09 * Used to update IK Targets before animation need them \n\x09 */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
		{ "ToolTip", "Event called right before owner's mesh ticks the pose when we are in a scene instance and IK Targets are required.\nUsed to update IK Targets before animation need them" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneActorComponent, nullptr, "OnTickPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::ContextualAnimSceneActorComponent_eventOnTickPose_Parms), Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerEarlyOutContextualAnimScene_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerEarlyOutContextualAnimScene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerEarlyOutContextualAnimScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneActorComponent, nullptr, "ServerEarlyOutContextualAnimScene", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerEarlyOutContextualAnimScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerEarlyOutContextualAnimScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerEarlyOutContextualAnimScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerEarlyOutContextualAnimScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Statics::NewProp_InBindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Statics::NewProp_InBindings = { "InBindings", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneActorComponent_eventServerStartContextualAnimScene_Parms, InBindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Statics::NewProp_InBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Statics::NewProp_InBindings_MetaData)) }; // 1321072697
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Statics::NewProp_InBindings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneActorComponent, nullptr, "ServerStartContextualAnimScene", nullptr, nullptr, sizeof(ContextualAnimSceneActorComponent_eventServerStartContextualAnimScene_Parms), Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics
	{
		struct ContextualAnimSceneActorComponent_eventStartContextualAnimScene_Parms
		{
			FContextualAnimSceneBindings InBindings;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBindings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::NewProp_InBindings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::NewProp_InBindings = { "InBindings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimSceneActorComponent_eventStartContextualAnimScene_Parms, InBindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::NewProp_InBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::NewProp_InBindings_MetaData)) }; // 1321072697
	void Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextualAnimSceneActorComponent_eventStartContextualAnimScene_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextualAnimSceneActorComponent_eventStartContextualAnimScene_Parms), &Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::NewProp_InBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Contextual Anim|Scene Actor Component" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimSceneActorComponent, nullptr, "StartContextualAnimScene", nullptr, nullptr, sizeof(Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::ContextualAnimSceneActorComponent_eventStartContextualAnimScene_Parms), Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimSceneActorComponent);
	UClass* Z_Construct_UClass_UContextualAnimSceneActorComponent_NoRegister()
	{
		return UContextualAnimSceneActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnJoinedSceneDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJoinedSceneDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLeftSceneDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeftSceneDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebug_MetaData[];
#endif
		static void NewProp_bEnableDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepBindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RepBindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IKTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargetByGoalName, "GetIKTargetByGoalName" }, // 1013878550
		{ &Z_Construct_UFunction_UContextualAnimSceneActorComponent_GetIKTargets, "GetIKTargets" }, // 3832969569
		{ &Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnJoinedScene, "OnJoinedScene" }, // 2324980216
		{ &Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnLeftScene, "OnLeftScene" }, // 2767480995
		{ &Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnMontageBlendingOut, "OnMontageBlendingOut" }, // 1591240452
		{ &Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnRep_Bindings, "OnRep_Bindings" }, // 4183058218
		{ &Z_Construct_UFunction_UContextualAnimSceneActorComponent_OnTickPose, "OnTickPose" }, // 4066112084
		{ &Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerEarlyOutContextualAnimScene, "ServerEarlyOutContextualAnimScene" }, // 605968887
		{ &Z_Construct_UFunction_UContextualAnimSceneActorComponent_ServerStartContextualAnimScene, "ServerStartContextualAnimScene" }, // 647023275
		{ &Z_Construct_UFunction_UContextualAnimSceneActorComponent_StartContextualAnimScene, "StartContextualAnimScene" }, // 1481673495
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "ContextualAnimSceneActorComponent.h" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_OnJoinedSceneDelegate_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Event that happens when the actor owner of this component joins an scene */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
		{ "ToolTip", "Event that happens when the actor owner of this component joins an scene" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_OnJoinedSceneDelegate = { "OnJoinedSceneDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneActorComponent, OnJoinedSceneDelegate), Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_OnJoinedSceneDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_OnJoinedSceneDelegate_MetaData)) }; // 3325809101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_OnLeftSceneDelegate_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Event that happens when the actor owner of this component leave an scene */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
		{ "ToolTip", "Event that happens when the actor owner of this component leave an scene" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_OnLeftSceneDelegate = { "OnLeftSceneDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneActorComponent, OnLeftSceneDelegate), Z_Construct_UDelegateFunction_ContextualAnimation_ContextualAnimSceneActorCompDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_OnLeftSceneDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_OnLeftSceneDelegate_MetaData)) }; // 3325809101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_SceneAsset_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_SceneAsset = { "SceneAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneActorComponent, SceneAsset), Z_Construct_UClass_UContextualAnimSceneAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_SceneAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_SceneAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_bEnableDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
	};
#endif
	void Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
	{
		((UContextualAnimSceneActorComponent*)Obj)->bEnableDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContextualAnimSceneActorComponent), &Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_bEnableDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_bEnableDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_RepBindings_MetaData[] = {
		{ "Comment", "/** \n\x09 * Replicated copy of the bindings so we can start the action on simulated proxies \n\x09 * This gets replicated only from the initiator of the action and then set on all the other members of the interaction\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
		{ "ToolTip", "Replicated copy of the bindings so we can start the action on simulated proxies\nThis gets replicated only from the initiator of the action and then set on all the other members of the interaction" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_RepBindings = { "RepBindings", "OnRep_Bindings", (EPropertyFlags)0x0020080100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneActorComponent, RepBindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_RepBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_RepBindings_MetaData)) }; // 1321072697
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_Bindings_MetaData[] = {
		{ "Comment", "/**\n\x09 * Bindings for the interaction we are currently playing.\n\x09 * Used to update IK, keep montage in sync, disable/enable collision between actors etc\n\x09 */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
		{ "ToolTip", "Bindings for the interaction we are currently playing.\nUsed to update IK, keep montage in sync, disable/enable collision between actors etc" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneActorComponent, Bindings), Z_Construct_UScriptStruct_FContextualAnimSceneBindings, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_Bindings_MetaData)) }; // 1321072697
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_IKTargets_Inner = { "IKTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContextualAnimIKTarget, METADATA_PARAMS(nullptr, 0) }; // 2700139966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_IKTargets_MetaData[] = {
		{ "Comment", "/** List of IKTarget for this frame */" },
		{ "ModuleRelativePath", "Public/ContextualAnimSceneActorComponent.h" },
		{ "ToolTip", "List of IKTarget for this frame" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_IKTargets = { "IKTargets", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimSceneActorComponent, IKTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_IKTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_IKTargets_MetaData)) }; // 2700139966
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_OnJoinedSceneDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_OnLeftSceneDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_SceneAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_bEnableDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_RepBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_IKTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::NewProp_IKTargets,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister, (int32)VTABLE_OFFSET(UContextualAnimSceneActorComponent, IIKGoalCreatorInterface), false },  // 4091412036
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimSceneActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::ClassParams = {
		&UContextualAnimSceneActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimSceneActorComponent()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimSceneActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimSceneActorComponent.OuterSingleton, Z_Construct_UClass_UContextualAnimSceneActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimSceneActorComponent.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UClass* StaticClass<UContextualAnimSceneActorComponent>()
	{
		return UContextualAnimSceneActorComponent::StaticClass();
	}

	void UContextualAnimSceneActorComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RepBindings(TEXT("RepBindings"));

		const bool bIsValid = true
			&& Name_RepBindings == ClassReps[(int32)ENetFields_Private::RepBindings].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UContextualAnimSceneActorComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimSceneActorComponent);
	UContextualAnimSceneActorComponent::~UContextualAnimSceneActorComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextualAnimSceneActorComponent, UContextualAnimSceneActorComponent::StaticClass, TEXT("UContextualAnimSceneActorComponent"), &Z_Registration_Info_UClass_UContextualAnimSceneActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimSceneActorComponent), 1456505358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_2761859034(TEXT("/Script/ContextualAnimation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
