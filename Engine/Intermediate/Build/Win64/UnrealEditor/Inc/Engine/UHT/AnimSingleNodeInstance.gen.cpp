// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimSingleNodeInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSingleNodeInstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSingleNodeInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSingleNodeInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMirrorDataTable_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "PostEvaluateAnimEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPostEvaluateAnimEvent_DelegateWrapper(const FScriptDelegate& PostEvaluateAnimEvent)
{
	PostEvaluateAnimEvent.ProcessDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAnimSingleNodeInstance::execSetPreviewCurveOverride)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_PoseName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bRemoveIfZero);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewCurveOverride(Z_Param_Out_PoseName,Z_Param_Value,Z_Param_bRemoveIfZero);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSingleNodeInstance::execGetAnimationAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimationAsset**)Z_Param__Result=P_THIS->GetAnimationAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSingleNodeInstance::execSetAnimationAsset)
	{
		P_GET_OBJECT(UAnimationAsset,Z_Param_NewAsset);
		P_GET_UBOOL(Z_Param_bIsLooping);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimationAsset(Z_Param_NewAsset,Z_Param_bIsLooping,Z_Param_InPlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSingleNodeInstance::execStopAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAnim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSingleNodeInstance::execPlayAnim)
	{
		P_GET_UBOOL(Z_Param_bIsLooping);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStartPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAnim(Z_Param_bIsLooping,Z_Param_InPlayRate,Z_Param_InStartPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSingleNodeInstance::execGetLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLength();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSingleNodeInstance::execSetPlaying)
	{
		P_GET_UBOOL(Z_Param_bIsPlaying);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaying(Z_Param_bIsPlaying);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSingleNodeInstance::execSetBlendSpacePosition)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBlendSpacePosition(Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSingleNodeInstance::execSetPositionWithPreviousTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPreviousTime);
		P_GET_UBOOL(Z_Param_bFireNotifies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPositionWithPreviousTime(Z_Param_InPosition,Z_Param_InPreviousTime,Z_Param_bFireNotifies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSingleNodeInstance::execSetPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPosition);
		P_GET_UBOOL(Z_Param_bFireNotifies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPosition(Z_Param_InPosition,Z_Param_bFireNotifies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSingleNodeInstance::execSetReverse)
	{
		P_GET_UBOOL(Z_Param_bInReverse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReverse(Z_Param_bInReverse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSingleNodeInstance::execSetPlayRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPlayRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayRate(Z_Param_InPlayRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSingleNodeInstance::execSetLooping)
	{
		P_GET_UBOOL(Z_Param_bIsLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLooping(Z_Param_bIsLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSingleNodeInstance::execGetMirrorDataTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UMirrorDataTable**)Z_Param__Result=P_THIS->GetMirrorDataTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimSingleNodeInstance::execSetMirrorDataTable)
	{
		P_GET_OBJECT(UMirrorDataTable,Z_Param_MirrorDataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMirrorDataTable(Z_Param_MirrorDataTable);
		P_NATIVE_END;
	}
	void UAnimSingleNodeInstance::StaticRegisterNativesUAnimSingleNodeInstance()
	{
		UClass* Class = UAnimSingleNodeInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimationAsset", &UAnimSingleNodeInstance::execGetAnimationAsset },
			{ "GetLength", &UAnimSingleNodeInstance::execGetLength },
			{ "GetMirrorDataTable", &UAnimSingleNodeInstance::execGetMirrorDataTable },
			{ "PlayAnim", &UAnimSingleNodeInstance::execPlayAnim },
			{ "SetAnimationAsset", &UAnimSingleNodeInstance::execSetAnimationAsset },
			{ "SetBlendSpacePosition", &UAnimSingleNodeInstance::execSetBlendSpacePosition },
			{ "SetLooping", &UAnimSingleNodeInstance::execSetLooping },
			{ "SetMirrorDataTable", &UAnimSingleNodeInstance::execSetMirrorDataTable },
			{ "SetPlaying", &UAnimSingleNodeInstance::execSetPlaying },
			{ "SetPlayRate", &UAnimSingleNodeInstance::execSetPlayRate },
			{ "SetPosition", &UAnimSingleNodeInstance::execSetPosition },
			{ "SetPositionWithPreviousTime", &UAnimSingleNodeInstance::execSetPositionWithPreviousTime },
			{ "SetPreviewCurveOverride", &UAnimSingleNodeInstance::execSetPreviewCurveOverride },
			{ "SetReverse", &UAnimSingleNodeInstance::execSetReverse },
			{ "StopAnim", &UAnimSingleNodeInstance::execStopAnim },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics
	{
		struct AnimSingleNodeInstance_eventGetAnimationAsset_Parms
		{
			UAnimationAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventGetAnimationAsset_Parms, ReturnValue), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Get the currently used asset */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
		{ "ToolTip", "Get the currently used asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "GetAnimationAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::AnimSingleNodeInstance_eventGetAnimationAsset_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics
	{
		struct AnimSingleNodeInstance_eventGetLength_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventGetLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "GetLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::AnimSingleNodeInstance_eventGetLength_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics
	{
		struct AnimSingleNodeInstance_eventGetMirrorDataTable_Parms
		{
			const UMirrorDataTable* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventGetMirrorDataTable_Parms, ReturnValue), Z_Construct_UClass_UMirrorDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "GetMirrorDataTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics::AnimSingleNodeInstance_eventGetMirrorDataTable_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics
	{
		struct AnimSingleNodeInstance_eventPlayAnim_Parms
		{
			bool bIsLooping;
			float InPlayRate;
			float InStartPosition;
		};
		static void NewProp_bIsLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InStartPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_bIsLooping_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventPlayAnim_Parms*)Obj)->bIsLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimSingleNodeInstance_eventPlayAnim_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventPlayAnim_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_InStartPosition = { "InStartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventPlayAnim_Parms, InStartPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_bIsLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_InPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::NewProp_InStartPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/* For AnimSequence specific **/" },
		{ "CPP_Default_bIsLooping", "false" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "CPP_Default_InStartPosition", "0.000000" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
		{ "ToolTip", "For AnimSequence specific *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "PlayAnim", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::AnimSingleNodeInstance_eventPlayAnim_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics
	{
		struct AnimSingleNodeInstance_eventSetAnimationAsset_Parms
		{
			UAnimationAsset* NewAsset;
			bool bIsLooping;
			float InPlayRate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAsset;
		static void NewProp_bIsLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetAnimationAsset_Parms, NewAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_bIsLooping_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventSetAnimationAsset_Parms*)Obj)->bIsLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimSingleNodeInstance_eventSetAnimationAsset_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetAnimationAsset_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_NewAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_bIsLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::NewProp_InPlayRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Set New Asset - calls InitializeAnimation, for now we need MeshComponent **/" },
		{ "CPP_Default_bIsLooping", "true" },
		{ "CPP_Default_InPlayRate", "1.000000" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
		{ "ToolTip", "Set New Asset - calls InitializeAnimation, for now we need MeshComponent *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetAnimationAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::AnimSingleNodeInstance_eventSetAnimationAsset_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics
	{
		struct AnimSingleNodeInstance_eventSetBlendSpacePosition_Parms
		{
			FVector InPosition;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetBlendSpacePosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics::NewProp_InPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics::NewProp_InPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetBlendSpacePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics::AnimSingleNodeInstance_eventSetBlendSpacePosition_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics
	{
		struct AnimSingleNodeInstance_eventSetLooping_Parms
		{
			bool bIsLooping;
		};
		static void NewProp_bIsLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::NewProp_bIsLooping_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventSetLooping_Parms*)Obj)->bIsLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimSingleNodeInstance_eventSetLooping_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::NewProp_bIsLooping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetLooping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::AnimSingleNodeInstance_eventSetLooping_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics
	{
		struct AnimSingleNodeInstance_eventSetMirrorDataTable_Parms
		{
			const UMirrorDataTable* MirrorDataTable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MirrorDataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics::NewProp_MirrorDataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics::NewProp_MirrorDataTable = { "MirrorDataTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetMirrorDataTable_Parms, MirrorDataTable), Z_Construct_UClass_UMirrorDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics::NewProp_MirrorDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics::NewProp_MirrorDataTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics::NewProp_MirrorDataTable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetMirrorDataTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics::AnimSingleNodeInstance_eventSetMirrorDataTable_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics
	{
		struct AnimSingleNodeInstance_eventSetPlaying_Parms
		{
			bool bIsPlaying;
		};
		static void NewProp_bIsPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventSetPlaying_Parms*)Obj)->bIsPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimSingleNodeInstance_eventSetPlaying_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::NewProp_bIsPlaying,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::AnimSingleNodeInstance_eventSetPlaying_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics
	{
		struct AnimSingleNodeInstance_eventSetPlayRate_Parms
		{
			float InPlayRate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::NewProp_InPlayRate = { "InPlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPlayRate_Parms, InPlayRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::NewProp_InPlayRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetPlayRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::AnimSingleNodeInstance_eventSetPlayRate_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics
	{
		struct AnimSingleNodeInstance_eventSetPosition_Parms
		{
			float InPosition;
			bool bFireNotifies;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPosition;
		static void NewProp_bFireNotifies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireNotifies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPosition_Parms, InPosition), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::NewProp_bFireNotifies_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventSetPosition_Parms*)Obj)->bFireNotifies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::NewProp_bFireNotifies = { "bFireNotifies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimSingleNodeInstance_eventSetPosition_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::NewProp_bFireNotifies_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::NewProp_bFireNotifies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "CPP_Default_bFireNotifies", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::AnimSingleNodeInstance_eventSetPosition_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics
	{
		struct AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms
		{
			float InPosition;
			float InPreviousTime;
			bool bFireNotifies;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPreviousTime;
		static void NewProp_bFireNotifies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireNotifies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms, InPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_InPreviousTime = { "InPreviousTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms, InPreviousTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_bFireNotifies_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms*)Obj)->bFireNotifies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_bFireNotifies = { "bFireNotifies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_bFireNotifies_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_InPreviousTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::NewProp_bFireNotifies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "CPP_Default_bFireNotifies", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetPositionWithPreviousTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::AnimSingleNodeInstance_eventSetPositionWithPreviousTime_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics
	{
		struct AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms
		{
			FName PoseName;
			float Value;
			bool bRemoveIfZero;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PoseName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_bRemoveIfZero_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveIfZero;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_PoseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_PoseName = { "PoseName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms, PoseName), METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_PoseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_PoseName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_bRemoveIfZero_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms*)Obj)->bRemoveIfZero = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_bRemoveIfZero = { "bRemoveIfZero", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_bRemoveIfZero_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_PoseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::NewProp_bRemoveIfZero,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Set pose value */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
		{ "ToolTip", "Set pose value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetPreviewCurveOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::AnimSingleNodeInstance_eventSetPreviewCurveOverride_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics
	{
		struct AnimSingleNodeInstance_eventSetReverse_Parms
		{
			bool bInReverse;
		};
		static void NewProp_bInReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInReverse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::NewProp_bInReverse_SetBit(void* Obj)
	{
		((AnimSingleNodeInstance_eventSetReverse_Parms*)Obj)->bInReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::NewProp_bInReverse = { "bInReverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimSingleNodeInstance_eventSetReverse_Parms), &Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::NewProp_bInReverse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::NewProp_bInReverse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "SetReverse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::AnimSingleNodeInstance_eventSetReverse_Parms), Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSingleNodeInstance, nullptr, "StopAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSingleNodeInstance);
	UClass* Z_Construct_UClass_UAnimSingleNodeInstance_NoRegister()
	{
		return UAnimSingleNodeInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSingleNodeInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostEvaluateAnimEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_PostEvaluateAnimEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSingleNodeInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimSingleNodeInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_GetAnimationAsset, "GetAnimationAsset" }, // 1615948049
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_GetLength, "GetLength" }, // 3824507255
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_GetMirrorDataTable, "GetMirrorDataTable" }, // 2534911854
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_PlayAnim, "PlayAnim" }, // 1063424082
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetAnimationAsset, "SetAnimationAsset" }, // 3107476294
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetBlendSpacePosition, "SetBlendSpacePosition" }, // 2634491743
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetLooping, "SetLooping" }, // 3666029786
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetMirrorDataTable, "SetMirrorDataTable" }, // 1190617550
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlaying, "SetPlaying" }, // 632053307
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPlayRate, "SetPlayRate" }, // 1968659339
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPosition, "SetPosition" }, // 419748011
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPositionWithPreviousTime, "SetPositionWithPreviousTime" }, // 3604971891
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetPreviewCurveOverride, "SetPreviewCurveOverride" }, // 3024186703
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_SetReverse, "SetReverse" }, // 2435740863
		{ &Z_Construct_UFunction_UAnimSingleNodeInstance_StopAnim, "StopAnim" }, // 342349357
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSingleNodeInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/AnimSingleNodeInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_CurrentAsset_MetaData[] = {
		{ "Comment", "/** Current Asset being played **/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
		{ "ToolTip", "Current Asset being played *" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_CurrentAsset = { "CurrentAsset", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSingleNodeInstance, CurrentAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_CurrentAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_CurrentAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_PostEvaluateAnimEvent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimSingleNodeInstance.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_PostEvaluateAnimEvent = { "PostEvaluateAnimEvent", nullptr, (EPropertyFlags)0x0010000000082000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSingleNodeInstance, PostEvaluateAnimEvent), Z_Construct_UDelegateFunction_Engine_PostEvaluateAnimEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_PostEvaluateAnimEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_PostEvaluateAnimEvent_MetaData)) }; // 1741919778
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSingleNodeInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_CurrentAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSingleNodeInstance_Statics::NewProp_PostEvaluateAnimEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSingleNodeInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSingleNodeInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSingleNodeInstance_Statics::ClassParams = {
		&UAnimSingleNodeInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimSingleNodeInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSingleNodeInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSingleNodeInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSingleNodeInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSingleNodeInstance()
	{
		if (!Z_Registration_Info_UClass_UAnimSingleNodeInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSingleNodeInstance.OuterSingleton, Z_Construct_UClass_UAnimSingleNodeInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSingleNodeInstance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimSingleNodeInstance>()
	{
		return UAnimSingleNodeInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSingleNodeInstance);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSingleNodeInstance, UAnimSingleNodeInstance::StaticClass, TEXT("UAnimSingleNodeInstance"), &Z_Registration_Info_UClass_UAnimSingleNodeInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSingleNodeInstance), 3113325368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_3604780650(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
