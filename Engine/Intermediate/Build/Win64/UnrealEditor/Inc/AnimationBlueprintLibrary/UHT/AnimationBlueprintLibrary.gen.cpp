// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationBlueprintLibrary.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationBlueprintLibrary() {}
// Cross Module References
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UAnimationBlueprintLibrary();
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UAnimationBlueprintLibrary_NoRegister();
	ANIMATIONBLUEPRINTLIBRARY_API UEnum* Z_Construct_UEnum_AnimationBlueprintLibrary_ESmartNameContainerType();
	ANIMATIONBLUEPRINTLIBRARY_API UFunction* Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature();
	ANIMATIONBLUEPRINTLIBRARY_API UFunction* Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationGraph_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMetaData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveAnimationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveBasePoseType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERawCurveTrackTypes();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionRootLock();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSyncMarker();
	UPackage* Z_Construct_UPackage__Script_AnimationBlueprintLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESmartNameContainerType;
	static UEnum* ESmartNameContainerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESmartNameContainerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESmartNameContainerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationBlueprintLibrary_ESmartNameContainerType, (UObject*)Z_Construct_UPackage__Script_AnimationBlueprintLibrary(), TEXT("ESmartNameContainerType"));
		}
		return Z_Registration_Info_UEnum_ESmartNameContainerType.OuterSingleton;
	}
	template<> ANIMATIONBLUEPRINTLIBRARY_API UEnum* StaticEnum<ESmartNameContainerType>()
	{
		return ESmartNameContainerType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimationBlueprintLibrary_ESmartNameContainerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimationBlueprintLibrary_ESmartNameContainerType_Statics::Enumerators[] = {
		{ "ESmartNameContainerType::SNCT_CurveMapping", (int64)ESmartNameContainerType::SNCT_CurveMapping },
		{ "ESmartNameContainerType::SNCT_TrackCurveMapping", (int64)ESmartNameContainerType::SNCT_TrackCurveMapping },
		{ "ESmartNameContainerType::SNCT_MAX", (int64)ESmartNameContainerType::SNCT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimationBlueprintLibrary_ESmartNameContainerType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "SNCT_CurveMapping.DisplayName", "Curve Names" },
		{ "SNCT_CurveMapping.Name", "ESmartNameContainerType::SNCT_CurveMapping" },
		{ "SNCT_MAX.Name", "ESmartNameContainerType::SNCT_MAX" },
		{ "SNCT_TrackCurveMapping.DisplayName", "Track Curve Names" },
		{ "SNCT_TrackCurveMapping.Name", "ESmartNameContainerType::SNCT_TrackCurveMapping" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationBlueprintLibrary_ESmartNameContainerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimationBlueprintLibrary,
		nullptr,
		"ESmartNameContainerType",
		"ESmartNameContainerType",
		Z_Construct_UEnum_AnimationBlueprintLibrary_ESmartNameContainerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationBlueprintLibrary_ESmartNameContainerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimationBlueprintLibrary_ESmartNameContainerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationBlueprintLibrary_ESmartNameContainerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimationBlueprintLibrary_ESmartNameContainerType()
	{
		if (!Z_Registration_Info_UEnum_ESmartNameContainerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESmartNameContainerType.InnerSingleton, Z_Construct_UEnum_AnimationBlueprintLibrary_ESmartNameContainerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESmartNameContainerType.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature_Statics
	{
		struct _Script_AnimationBlueprintLibrary_eventOnNotifyReplaced_Parms
		{
			const UAnimNotify* OldNotify;
			const UAnimNotify* NewNotify;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldNotify;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewNotify;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature_Statics::NewProp_OldNotify = { "OldNotify", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AnimationBlueprintLibrary_eventOnNotifyReplaced_Parms, OldNotify), Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature_Statics::NewProp_NewNotify = { "NewNotify", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AnimationBlueprintLibrary_eventOnNotifyReplaced_Parms, NewNotify), Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature_Statics::NewProp_OldNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature_Statics::NewProp_NewNotify,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate called when a notify was replaced */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Delegate called when a notify was replaced" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AnimationBlueprintLibrary, nullptr, "OnNotifyReplaced__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature_Statics::_Script_AnimationBlueprintLibrary_eventOnNotifyReplaced_Parms), Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNotifyReplaced_DelegateWrapper(const FScriptDelegate& OnNotifyReplaced, const UAnimNotify* OldNotify, const UAnimNotify* NewNotify)
{
	struct _Script_AnimationBlueprintLibrary_eventOnNotifyReplaced_Parms
	{
		const UAnimNotify* OldNotify;
		const UAnimNotify* NewNotify;
	};
	_Script_AnimationBlueprintLibrary_eventOnNotifyReplaced_Parms Parms;
	Parms.OldNotify=OldNotify;
	Parms.NewNotify=NewNotify;
	OnNotifyReplaced.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature_Statics
	{
		struct _Script_AnimationBlueprintLibrary_eventOnNotifyStateReplaced_Parms
		{
			const UAnimNotifyState* OldNotifyState;
			const UAnimNotifyState* NewNotifyState;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldNotifyState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewNotifyState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature_Statics::NewProp_OldNotifyState = { "OldNotifyState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AnimationBlueprintLibrary_eventOnNotifyStateReplaced_Parms, OldNotifyState), Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature_Statics::NewProp_NewNotifyState = { "NewNotifyState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AnimationBlueprintLibrary_eventOnNotifyStateReplaced_Parms, NewNotifyState), Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature_Statics::NewProp_OldNotifyState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature_Statics::NewProp_NewNotifyState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate called when a notify state was replaced */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Delegate called when a notify state was replaced" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AnimationBlueprintLibrary, nullptr, "OnNotifyStateReplaced__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature_Statics::_Script_AnimationBlueprintLibrary_eventOnNotifyStateReplaced_Parms), Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNotifyStateReplaced_DelegateWrapper(const FScriptDelegate& OnNotifyStateReplaced, const UAnimNotifyState* OldNotifyState, const UAnimNotifyState* NewNotifyState)
{
	struct _Script_AnimationBlueprintLibrary_eventOnNotifyStateReplaced_Parms
	{
		const UAnimNotifyState* OldNotifyState;
		const UAnimNotifyState* NewNotifyState;
	};
	_Script_AnimationBlueprintLibrary_eventOnNotifyStateReplaced_Parms Parms;
	Parms.OldNotifyState=OldNotifyState;
	Parms.NewNotifyState=NewNotifyState;
	OnNotifyStateReplaced.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddNodeAssetOverride)
	{
		P_GET_OBJECT(UAnimBlueprint,Z_Param_AnimBlueprint);
		P_GET_OBJECT(UAnimationAsset,Z_Param_Target);
		P_GET_OBJECT(UAnimationAsset,Z_Param_Override);
		P_GET_UBOOL(Z_Param_bPrintAppliedOverrides);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::AddNodeAssetOverride(Z_Param_AnimBlueprint,Z_Param_Target,Z_Param_Override,Z_Param_bPrintAppliedOverrides);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetNodesOfClass)
	{
		P_GET_OBJECT(UAnimBlueprint,Z_Param_AnimationBlueprint);
		P_GET_OBJECT(UClass,Z_Param_NodeClass);
		P_GET_TARRAY_REF(UAnimGraphNode_Base*,Z_Param_Out_GraphNodes);
		P_GET_UBOOL(Z_Param_bIncludeChildClasses);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetNodesOfClass(Z_Param_AnimationBlueprint,Z_Param_NodeClass,Z_Param_Out_GraphNodes,Z_Param_bIncludeChildClasses);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetAnimationGraphs)
	{
		P_GET_OBJECT(UAnimBlueprint,Z_Param_AnimationBlueprint);
		P_GET_TARRAY_REF(UAnimationGraph*,Z_Param_Out_AnimationGraphs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetAnimationGraphs(Z_Param_AnimationBlueprint,Z_Param_Out_AnimationGraphs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execFindBonePathToRoot)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_TARRAY_REF(FName,Z_Param_Out_BonePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::FindBonePathToRoot(Z_Param_AnimationSequenceBase,Z_Param_BoneName,Z_Param_Out_BonePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execEvaluateRootBoneTimecodeSubframeAttributeAtTime)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EvalTime);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSubframe);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::EvaluateRootBoneTimecodeSubframeAttributeAtTime(Z_Param_AnimationSequenceBase,Z_Param_EvalTime,Z_Param_Out_OutSubframe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execEvaluateRootBoneTimecodeAttributesAtTime)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EvalTime);
		P_GET_STRUCT_REF(FQualifiedFrameTime,Z_Param_Out_OutQualifiedFrameTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::EvaluateRootBoneTimecodeAttributesAtTime(Z_Param_AnimationSequenceBase,Z_Param_EvalTime,Z_Param_Out_OutQualifiedFrameTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execIsValidTime)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::IsValidTime(Z_Param_AnimationSequenceBase,Z_Param_Time,Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetTimeAtFrame)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FIntProperty,Z_Param_Frame);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetTimeAtFrame(Z_Param_AnimationSequenceBase,Z_Param_Frame,Z_Param_Out_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetFrameAtTime)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Frame);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetFrameAtTime(Z_Param_AnimationSequenceBase,Z_Param_Time,Z_Param_Out_Frame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execSetRateScale)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RateScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::SetRateScale(Z_Param_AnimationSequenceBase,Z_Param_RateScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetRateScale)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RateScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetRateScale(Z_Param_AnimationSequenceBase,Z_Param_Out_RateScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetSequenceLength)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Length);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetSequenceLength(Z_Param_AnimationSequenceBase,Z_Param_Out_Length);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveAllVirtualBones)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::RemoveAllVirtualBones(Z_Param_AnimationSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveVirtualBones)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_TARRAY(FName,Z_Param_VirtualBoneNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::RemoveVirtualBones(Z_Param_AnimationSequence,Z_Param_VirtualBoneNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveVirtualBone)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_VirtualBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::RemoveVirtualBone(Z_Param_AnimationSequence,Z_Param_VirtualBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddVirtualBone)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_SourceBoneName);
		P_GET_PROPERTY(FNameProperty,Z_Param_TargetBoneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_VirtualBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::AddVirtualBone(Z_Param_AnimationSequence,Z_Param_SourceBoneName,Z_Param_TargetBoneName,Z_Param_Out_VirtualBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetBonePosesForFrame)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_TARRAY(FName,Z_Param_BoneNames);
		P_GET_PROPERTY(FIntProperty,Z_Param_Frame);
		P_GET_UBOOL(Z_Param_bExtractRootMotion);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Poses);
		P_GET_OBJECT(USkeletalMesh,Z_Param_PreviewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetBonePosesForFrame(Z_Param_AnimationSequenceBase,Z_Param_BoneNames,Z_Param_Frame,Z_Param_bExtractRootMotion,Z_Param_Out_Poses,Z_Param_PreviewMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetBonePosesForTime)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_TARRAY(FName,Z_Param_BoneNames);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_UBOOL(Z_Param_bExtractRootMotion);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Poses);
		P_GET_OBJECT(USkeletalMesh,Z_Param_PreviewMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetBonePosesForTime(Z_Param_AnimationSequenceBase,Z_Param_BoneNames,Z_Param_Time,Z_Param_bExtractRootMotion,Z_Param_Out_Poses,Z_Param_PreviewMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetBonePoseForFrame)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Frame);
		P_GET_UBOOL(Z_Param_bExtractRootMotion);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Pose);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetBonePoseForFrame(Z_Param_AnimationSequenceBase,Z_Param_BoneName,Z_Param_Frame,Z_Param_bExtractRootMotion,Z_Param_Out_Pose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetBonePoseForTime)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_UBOOL(Z_Param_bExtractRootMotion);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Pose);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetBonePoseForTime(Z_Param_AnimationSequenceBase,Z_Param_BoneName,Z_Param_Time,Z_Param_bExtractRootMotion,Z_Param_Out_Pose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execContainsMetaDataOfClass)
	{
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset);
		P_GET_OBJECT(UClass,Z_Param_MetaDataClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::ContainsMetaDataOfClass(Z_Param_AnimationAsset,Z_Param_MetaDataClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetMetaDataOfClass)
	{
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset);
		P_GET_OBJECT(UClass,Z_Param_MetaDataClass);
		P_GET_TARRAY_REF(UAnimMetaData*,Z_Param_Out_MetaDataOfClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetMetaDataOfClass(Z_Param_AnimationAsset,Z_Param_MetaDataClass,Z_Param_Out_MetaDataOfClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetMetaData)
	{
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset);
		P_GET_TARRAY_REF(UAnimMetaData*,Z_Param_Out_MetaData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetMetaData(Z_Param_AnimationAsset,Z_Param_Out_MetaData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveMetaDataOfClass)
	{
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset);
		P_GET_OBJECT(UClass,Z_Param_MetaDataClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::RemoveMetaDataOfClass(Z_Param_AnimationAsset,Z_Param_MetaDataClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveMetaData)
	{
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset);
		P_GET_OBJECT(UAnimMetaData,Z_Param_MetaDataObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::RemoveMetaData(Z_Param_AnimationAsset,Z_Param_MetaDataObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveAllMetaData)
	{
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::RemoveAllMetaData(Z_Param_AnimationAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddMetaDataObject)
	{
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset);
		P_GET_OBJECT(UAnimMetaData,Z_Param_MetaDataObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::AddMetaDataObject(Z_Param_AnimationAsset,Z_Param_MetaDataObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddMetaData)
	{
		P_GET_OBJECT(UAnimationAsset,Z_Param_AnimationAsset);
		P_GET_OBJECT(UClass,Z_Param_MetaDataClass);
		P_GET_OBJECT_REF(UAnimMetaData,Z_Param_Out_MetaDataInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::AddMetaData(Z_Param_AnimationAsset,Z_Param_MetaDataClass,Z_Param_Out_MetaDataInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execDoesCurveExist)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_GET_ENUM(ERawCurveTrackTypes,Z_Param_CurveType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::DoesCurveExist(Z_Param_AnimationSequence,Z_Param_CurveName,ERawCurveTrackTypes(Z_Param_CurveType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execFinalizeBoneAnimation)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::FinalizeBoneAnimation(Z_Param_AnimationSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveAllBoneAnimation)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::RemoveAllBoneAnimation(Z_Param_AnimationSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveBoneAnimation)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_UBOOL(Z_Param_bIncludeChildren);
		P_GET_UBOOL(Z_Param_bFinalize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::RemoveBoneAnimation(Z_Param_AnimationSequence,Z_Param_BoneName,Z_Param_bIncludeChildren,Z_Param_bFinalize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execCopyAnimationCurveNamesToSkeleton)
	{
		P_GET_OBJECT(USkeleton,Z_Param_OldSkeleton);
		P_GET_OBJECT(USkeleton,Z_Param_NewSkeleton);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_SequenceBase);
		P_GET_ENUM(ERawCurveTrackTypes,Z_Param_CurveType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::CopyAnimationCurveNamesToSkeleton(Z_Param_OldSkeleton,Z_Param_NewSkeleton,Z_Param_SequenceBase,ERawCurveTrackTypes(Z_Param_CurveType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetTransformationKeys)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_GET_TARRAY_REF(float,Z_Param_Out_Times);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetTransformationKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetVectorKeys)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_GET_TARRAY_REF(float,Z_Param_Out_Times);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetVectorKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetFloatKeys)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_GET_TARRAY_REF(float,Z_Param_Out_Times);
		P_GET_TARRAY_REF(float,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetFloatKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execDoesBoneNameExist)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_UBOOL_REF(Z_Param_Out_bExists);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::DoesBoneNameExist(Z_Param_AnimationSequence,Z_Param_BoneName,Z_Param_Out_bExists);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddVectorCurveKeys)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_GET_TARRAY_REF(float,Z_Param_Out_Times);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vectors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::AddVectorCurveKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Vectors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddVectorCurveKey)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_STRUCT(FVector,Z_Param_Vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::AddVectorCurveKey(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Time,Z_Param_Vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddFloatCurveKeys)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_GET_TARRAY_REF(float,Z_Param_Out_Times);
		P_GET_TARRAY_REF(float,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::AddFloatCurveKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddFloatCurveKey)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::AddFloatCurveKey(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Time,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddTransformationCurveKeys)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_GET_TARRAY_REF(float,Z_Param_Out_Times);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Transforms);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::AddTransformationCurveKeys(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Out_Times,Z_Param_Out_Transforms);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddTransformationCurveKey)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::AddTransformationCurveKey(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_Time,Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveAllCurveData)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::RemoveAllCurveData(Z_Param_AnimationSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveCurve)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_GET_UBOOL(Z_Param_bRemoveNameFromSkeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::RemoveCurve(Z_Param_AnimationSequence,Z_Param_CurveName,Z_Param_bRemoveNameFromSkeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddCurve)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_GET_ENUM(ERawCurveTrackTypes,Z_Param_CurveType);
		P_GET_UBOOL(Z_Param_bMetaDataCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::AddCurve(Z_Param_AnimationSequence,Z_Param_CurveName,ERawCurveTrackTypes(Z_Param_CurveType),Z_Param_bMetaDataCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetAnimationNotifyEventsForTrack)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyTrackName);
		P_GET_TARRAY_REF(FAnimNotifyEvent,Z_Param_Out_Events);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetAnimationNotifyEventsForTrack(Z_Param_AnimationSequenceBase,Z_Param_NotifyTrackName,Z_Param_Out_Events);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetAnimationSyncMarkersForTrack)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyTrackName);
		P_GET_TARRAY_REF(FAnimSyncMarker,Z_Param_Out_Markers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetAnimationSyncMarkersForTrack(Z_Param_AnimationSequence,Z_Param_NotifyTrackName,Z_Param_Out_Markers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetAnimNotifyEventDuration)
	{
		P_GET_STRUCT_REF(FAnimNotifyEvent,Z_Param_Out_NotifyEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAnimationBlueprintLibrary::GetAnimNotifyEventDuration(Z_Param_Out_NotifyEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetAnimNotifyEventTriggerTime)
	{
		P_GET_STRUCT_REF(FAnimNotifyEvent,Z_Param_Out_NotifyEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAnimationBlueprintLibrary::GetAnimNotifyEventTriggerTime(Z_Param_Out_NotifyEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execIsValidAnimNotifyTrackName)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyTrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::IsValidAnimNotifyTrackName(Z_Param_AnimationSequenceBase,Z_Param_NotifyTrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveAllAnimationNotifyTracks)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::RemoveAllAnimationNotifyTracks(Z_Param_AnimationSequenceBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveAnimationNotifyTrack)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyTrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::RemoveAnimationNotifyTrack(Z_Param_AnimationSequenceBase,Z_Param_NotifyTrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddAnimationNotifyTrack)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyTrackName);
		P_GET_STRUCT(FLinearColor,Z_Param_TrackColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::AddAnimationNotifyTrack(Z_Param_AnimationSequenceBase,Z_Param_NotifyTrackName,Z_Param_TrackColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetAnimationNotifyTrackNames)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_TARRAY_REF(FName,Z_Param_Out_TrackNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetAnimationNotifyTrackNames(Z_Param_AnimationSequenceBase,Z_Param_Out_TrackNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execCopyAnimNotifiesFromSequence)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_SourceAnimationSequenceBase);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_DestinationAnimationSequenceBase);
		P_GET_UBOOL(Z_Param_bDeleteExistingNotifies);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::CopyAnimNotifiesFromSequence(Z_Param_SourceAnimationSequenceBase,Z_Param_DestinationAnimationSequenceBase,Z_Param_bDeleteExistingNotifies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execReplaceAnimNotifies)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_OBJECT(UClass,Z_Param_OldNotifyClass);
		P_GET_OBJECT(UClass,Z_Param_NewNotifyClass);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotifyReplaced);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::ReplaceAnimNotifies(Z_Param_AnimationSequenceBase,Z_Param_OldNotifyClass,Z_Param_NewNotifyClass,FOnNotifyReplaced(Z_Param_OnNotifyReplaced));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execReplaceAnimNotifyStates)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_OBJECT(UClass,Z_Param_OldNotifyClass);
		P_GET_OBJECT(UClass,Z_Param_NewNotifyClass);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnNotifyStateReplaced);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::ReplaceAnimNotifyStates(Z_Param_AnimationSequenceBase,Z_Param_OldNotifyClass,Z_Param_NewNotifyClass,FOnNotifyStateReplaced(Z_Param_OnNotifyStateReplaced));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveAnimationNotifyEventsByTrack)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyTrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAnimationBlueprintLibrary::RemoveAnimationNotifyEventsByTrack(Z_Param_AnimationSequenceBase,Z_Param_NotifyTrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveAnimationNotifyEventsByName)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAnimationBlueprintLibrary::RemoveAnimationNotifyEventsByName(Z_Param_AnimationSequenceBase,Z_Param_NotifyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddAnimationNotifyStateEventObject)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_OBJECT(UAnimNotifyState,Z_Param_NotifyState);
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyTrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::AddAnimationNotifyStateEventObject(Z_Param_AnimationSequenceBase,Z_Param_StartTime,Z_Param_Duration,Z_Param_NotifyState,Z_Param_NotifyTrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddAnimationNotifyEventObject)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(UAnimNotify,Z_Param_Notify);
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyTrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::AddAnimationNotifyEventObject(Z_Param_AnimationSequenceBase,Z_Param_StartTime,Z_Param_Notify,Z_Param_NotifyTrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddAnimationNotifyStateEvent)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyTrackName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_OBJECT(UClass,Z_Param_NotifyStateClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UAnimNotifyState**)Z_Param__Result=UAnimationBlueprintLibrary::AddAnimationNotifyStateEvent(Z_Param_AnimationSequenceBase,Z_Param_NotifyTrackName,Z_Param_StartTime,Z_Param_Duration,Z_Param_NotifyStateClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddAnimationNotifyEvent)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyTrackName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(UClass,Z_Param_NotifyClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UAnimNotify**)Z_Param__Result=UAnimationBlueprintLibrary::AddAnimationNotifyEvent(Z_Param_AnimationSequenceBase,Z_Param_NotifyTrackName,Z_Param_StartTime,Z_Param_NotifyClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetAnimationNotifyEventNames)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_TARRAY_REF(FName,Z_Param_Out_EventNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetAnimationNotifyEventNames(Z_Param_AnimationSequenceBase,Z_Param_Out_EventNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetAnimationNotifyEvents)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_TARRAY_REF(FAnimNotifyEvent,Z_Param_Out_NotifyEvents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetAnimationNotifyEvents(Z_Param_AnimationSequenceBase,Z_Param_Out_NotifyEvents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveAllAnimationSyncMarkers)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::RemoveAllAnimationSyncMarkers(Z_Param_AnimationSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveAnimationSyncMarkersByTrack)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyTrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAnimationBlueprintLibrary::RemoveAnimationSyncMarkersByTrack(Z_Param_AnimationSequence,Z_Param_NotifyTrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execRemoveAnimationSyncMarkersByName)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_MarkerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAnimationBlueprintLibrary::RemoveAnimationSyncMarkersByName(Z_Param_AnimationSequence,Z_Param_MarkerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execIsValidAnimationSyncMarkerName)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_MarkerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::IsValidAnimationSyncMarkerName(Z_Param_AnimationSequence,Z_Param_MarkerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execAddAnimationSyncMarker)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FNameProperty,Z_Param_MarkerName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_PROPERTY(FNameProperty,Z_Param_NotifyTrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::AddAnimationSyncMarker(Z_Param_AnimationSequence,Z_Param_MarkerName,Z_Param_Time,Z_Param_NotifyTrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetUniqueMarkerNames)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_TARRAY_REF(FName,Z_Param_Out_MarkerNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetUniqueMarkerNames(Z_Param_AnimationSequence,Z_Param_Out_MarkerNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetAnimationSyncMarkers)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_TARRAY_REF(FAnimSyncMarker,Z_Param_Out_Markers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetAnimationSyncMarkers(Z_Param_AnimationSequence,Z_Param_Out_Markers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execSetIsRootMotionLockForced)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_UBOOL(Z_Param_bForced);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::SetIsRootMotionLockForced(Z_Param_AnimationSequence,Z_Param_bForced);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execIsRootMotionLockForced)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::IsRootMotionLockForced(Z_Param_AnimationSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execSetRootMotionLockType)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FByteProperty,Z_Param_RootMotionLockType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::SetRootMotionLockType(Z_Param_AnimationSequence,ERootMotionRootLock::Type(Z_Param_RootMotionLockType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetRootMotionLockType)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_LockType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetRootMotionLockType(Z_Param_AnimationSequence,(TEnumAsByte<ERootMotionRootLock::Type>&)(Z_Param_Out_LockType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execSetRootMotionEnabled)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::SetRootMotionEnabled(Z_Param_AnimationSequence,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execIsRootMotionEnabled)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::IsRootMotionEnabled(Z_Param_AnimationSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execSetAnimationInterpolationType)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_ENUM(EAnimInterpolationType,Z_Param_InterpolationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::SetAnimationInterpolationType(Z_Param_AnimationSequence,EAnimInterpolationType(Z_Param_InterpolationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetAnimationInterpolationType)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_ENUM_REF(EAnimInterpolationType,Z_Param_Out_InterpolationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetAnimationInterpolationType(Z_Param_AnimationSequence,(EAnimInterpolationType&)(Z_Param_Out_InterpolationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execSetAdditiveBasePoseType)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FByteProperty,Z_Param_AdditiveBasePoseType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::SetAdditiveBasePoseType(Z_Param_AnimationSequence,EAdditiveBasePoseType(Z_Param_AdditiveBasePoseType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetAdditiveBasePoseType)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AdditiveBasePoseType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetAdditiveBasePoseType(Z_Param_AnimationSequence,(TEnumAsByte<EAdditiveBasePoseType>&)(Z_Param_Out_AdditiveBasePoseType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execSetAdditiveAnimationType)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY(FByteProperty,Z_Param_AdditiveAnimationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::SetAdditiveAnimationType(Z_Param_AnimationSequence,EAdditiveAnimationType(Z_Param_AdditiveAnimationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetAdditiveAnimationType)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_AdditiveAnimationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetAdditiveAnimationType(Z_Param_AnimationSequence,(TEnumAsByte<EAdditiveAnimationType>&)(Z_Param_Out_AdditiveAnimationType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execSetCurveCompressionSettings)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_OBJECT(UAnimCurveCompressionSettings,Z_Param_CompressionSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::SetCurveCompressionSettings(Z_Param_AnimationSequence,Z_Param_CompressionSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetCurveCompressionSettings)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_OBJECT_REF(UAnimCurveCompressionSettings,Z_Param_Out_CompressionSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetCurveCompressionSettings(Z_Param_AnimationSequence,Z_Param_Out_CompressionSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execSetBoneCompressionSettings)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_OBJECT(UAnimBoneCompressionSettings,Z_Param_CompressionSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::SetBoneCompressionSettings(Z_Param_AnimationSequence,Z_Param_CompressionSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetBoneCompressionSettings)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_OBJECT_REF(UAnimBoneCompressionSettings,Z_Param_Out_CompressionSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetBoneCompressionSettings(Z_Param_AnimationSequence,Z_Param_Out_CompressionSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execIsValidRawAnimationTrackName)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_TrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationBlueprintLibrary::IsValidRawAnimationTrackName(Z_Param_AnimationSequenceBase,Z_Param_TrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetRawTrackData)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_TrackName);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PositionKeys);
		P_GET_TARRAY_REF(FQuat,Z_Param_Out_RotationKeys);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_ScalingKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetRawTrackData(Z_Param_AnimationSequenceBase,Z_Param_TrackName,Z_Param_Out_PositionKeys,Z_Param_Out_RotationKeys,Z_Param_Out_ScalingKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetRawTrackScaleData)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_TrackName);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_ScaleData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetRawTrackScaleData(Z_Param_AnimationSequenceBase,Z_Param_TrackName,Z_Param_Out_ScaleData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetRawTrackRotationData)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_TrackName);
		P_GET_TARRAY_REF(FQuat,Z_Param_Out_RotationData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetRawTrackRotationData(Z_Param_AnimationSequenceBase,Z_Param_TrackName,Z_Param_Out_RotationData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetRawTrackPositionData)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FNameProperty,Z_Param_TrackName);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PositionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetRawTrackPositionData(Z_Param_AnimationSequenceBase,Z_Param_TrackName,Z_Param_Out_PositionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetAnimationCurveNames)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimationSequence);
		P_GET_ENUM(ERawCurveTrackTypes,Z_Param_CurveType);
		P_GET_TARRAY_REF(FName,Z_Param_Out_CurveNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetAnimationCurveNames(Z_Param_AnimationSequence,ERawCurveTrackTypes(Z_Param_CurveType),Z_Param_Out_CurveNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetMontageSlotNames)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimationMontage);
		P_GET_TARRAY_REF(FName,Z_Param_Out_SlotNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetMontageSlotNames(Z_Param_AnimationMontage,Z_Param_Out_SlotNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetAnimationTrackNames)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_TARRAY_REF(FName,Z_Param_Out_TrackNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetAnimationTrackNames(Z_Param_AnimationSequenceBase,Z_Param_Out_TrackNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetNumKeys)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetNumKeys(Z_Param_AnimationSequenceBase,Z_Param_Out_NumKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBlueprintLibrary::execGetNumFrames)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumFrames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBlueprintLibrary::GetNumFrames(Z_Param_AnimationSequenceBase,Z_Param_Out_NumFrames);
		P_NATIVE_END;
	}
	void UAnimationBlueprintLibrary::StaticRegisterNativesUAnimationBlueprintLibrary()
	{
		UClass* Class = UAnimationBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAnimationNotifyEvent", &UAnimationBlueprintLibrary::execAddAnimationNotifyEvent },
			{ "AddAnimationNotifyEventObject", &UAnimationBlueprintLibrary::execAddAnimationNotifyEventObject },
			{ "AddAnimationNotifyStateEvent", &UAnimationBlueprintLibrary::execAddAnimationNotifyStateEvent },
			{ "AddAnimationNotifyStateEventObject", &UAnimationBlueprintLibrary::execAddAnimationNotifyStateEventObject },
			{ "AddAnimationNotifyTrack", &UAnimationBlueprintLibrary::execAddAnimationNotifyTrack },
			{ "AddAnimationSyncMarker", &UAnimationBlueprintLibrary::execAddAnimationSyncMarker },
			{ "AddCurve", &UAnimationBlueprintLibrary::execAddCurve },
			{ "AddFloatCurveKey", &UAnimationBlueprintLibrary::execAddFloatCurveKey },
			{ "AddFloatCurveKeys", &UAnimationBlueprintLibrary::execAddFloatCurveKeys },
			{ "AddMetaData", &UAnimationBlueprintLibrary::execAddMetaData },
			{ "AddMetaDataObject", &UAnimationBlueprintLibrary::execAddMetaDataObject },
			{ "AddNodeAssetOverride", &UAnimationBlueprintLibrary::execAddNodeAssetOverride },
			{ "AddTransformationCurveKey", &UAnimationBlueprintLibrary::execAddTransformationCurveKey },
			{ "AddTransformationCurveKeys", &UAnimationBlueprintLibrary::execAddTransformationCurveKeys },
			{ "AddVectorCurveKey", &UAnimationBlueprintLibrary::execAddVectorCurveKey },
			{ "AddVectorCurveKeys", &UAnimationBlueprintLibrary::execAddVectorCurveKeys },
			{ "AddVirtualBone", &UAnimationBlueprintLibrary::execAddVirtualBone },
			{ "ContainsMetaDataOfClass", &UAnimationBlueprintLibrary::execContainsMetaDataOfClass },
			{ "CopyAnimationCurveNamesToSkeleton", &UAnimationBlueprintLibrary::execCopyAnimationCurveNamesToSkeleton },
			{ "CopyAnimNotifiesFromSequence", &UAnimationBlueprintLibrary::execCopyAnimNotifiesFromSequence },
			{ "DoesBoneNameExist", &UAnimationBlueprintLibrary::execDoesBoneNameExist },
			{ "DoesCurveExist", &UAnimationBlueprintLibrary::execDoesCurveExist },
			{ "EvaluateRootBoneTimecodeAttributesAtTime", &UAnimationBlueprintLibrary::execEvaluateRootBoneTimecodeAttributesAtTime },
			{ "EvaluateRootBoneTimecodeSubframeAttributeAtTime", &UAnimationBlueprintLibrary::execEvaluateRootBoneTimecodeSubframeAttributeAtTime },
			{ "FinalizeBoneAnimation", &UAnimationBlueprintLibrary::execFinalizeBoneAnimation },
			{ "FindBonePathToRoot", &UAnimationBlueprintLibrary::execFindBonePathToRoot },
			{ "GetAdditiveAnimationType", &UAnimationBlueprintLibrary::execGetAdditiveAnimationType },
			{ "GetAdditiveBasePoseType", &UAnimationBlueprintLibrary::execGetAdditiveBasePoseType },
			{ "GetAnimationCurveNames", &UAnimationBlueprintLibrary::execGetAnimationCurveNames },
			{ "GetAnimationGraphs", &UAnimationBlueprintLibrary::execGetAnimationGraphs },
			{ "GetAnimationInterpolationType", &UAnimationBlueprintLibrary::execGetAnimationInterpolationType },
			{ "GetAnimationNotifyEventNames", &UAnimationBlueprintLibrary::execGetAnimationNotifyEventNames },
			{ "GetAnimationNotifyEvents", &UAnimationBlueprintLibrary::execGetAnimationNotifyEvents },
			{ "GetAnimationNotifyEventsForTrack", &UAnimationBlueprintLibrary::execGetAnimationNotifyEventsForTrack },
			{ "GetAnimationNotifyTrackNames", &UAnimationBlueprintLibrary::execGetAnimationNotifyTrackNames },
			{ "GetAnimationSyncMarkers", &UAnimationBlueprintLibrary::execGetAnimationSyncMarkers },
			{ "GetAnimationSyncMarkersForTrack", &UAnimationBlueprintLibrary::execGetAnimationSyncMarkersForTrack },
			{ "GetAnimationTrackNames", &UAnimationBlueprintLibrary::execGetAnimationTrackNames },
			{ "GetAnimNotifyEventDuration", &UAnimationBlueprintLibrary::execGetAnimNotifyEventDuration },
			{ "GetAnimNotifyEventTriggerTime", &UAnimationBlueprintLibrary::execGetAnimNotifyEventTriggerTime },
			{ "GetBoneCompressionSettings", &UAnimationBlueprintLibrary::execGetBoneCompressionSettings },
			{ "GetBonePoseForFrame", &UAnimationBlueprintLibrary::execGetBonePoseForFrame },
			{ "GetBonePoseForTime", &UAnimationBlueprintLibrary::execGetBonePoseForTime },
			{ "GetBonePosesForFrame", &UAnimationBlueprintLibrary::execGetBonePosesForFrame },
			{ "GetBonePosesForTime", &UAnimationBlueprintLibrary::execGetBonePosesForTime },
			{ "GetCurveCompressionSettings", &UAnimationBlueprintLibrary::execGetCurveCompressionSettings },
			{ "GetFloatKeys", &UAnimationBlueprintLibrary::execGetFloatKeys },
			{ "GetFrameAtTime", &UAnimationBlueprintLibrary::execGetFrameAtTime },
			{ "GetMetaData", &UAnimationBlueprintLibrary::execGetMetaData },
			{ "GetMetaDataOfClass", &UAnimationBlueprintLibrary::execGetMetaDataOfClass },
			{ "GetMontageSlotNames", &UAnimationBlueprintLibrary::execGetMontageSlotNames },
			{ "GetNodesOfClass", &UAnimationBlueprintLibrary::execGetNodesOfClass },
			{ "GetNumFrames", &UAnimationBlueprintLibrary::execGetNumFrames },
			{ "GetNumKeys", &UAnimationBlueprintLibrary::execGetNumKeys },
			{ "GetRateScale", &UAnimationBlueprintLibrary::execGetRateScale },
			{ "GetRawTrackData", &UAnimationBlueprintLibrary::execGetRawTrackData },
			{ "GetRawTrackPositionData", &UAnimationBlueprintLibrary::execGetRawTrackPositionData },
			{ "GetRawTrackRotationData", &UAnimationBlueprintLibrary::execGetRawTrackRotationData },
			{ "GetRawTrackScaleData", &UAnimationBlueprintLibrary::execGetRawTrackScaleData },
			{ "GetRootMotionLockType", &UAnimationBlueprintLibrary::execGetRootMotionLockType },
			{ "GetSequenceLength", &UAnimationBlueprintLibrary::execGetSequenceLength },
			{ "GetTimeAtFrame", &UAnimationBlueprintLibrary::execGetTimeAtFrame },
			{ "GetTransformationKeys", &UAnimationBlueprintLibrary::execGetTransformationKeys },
			{ "GetUniqueMarkerNames", &UAnimationBlueprintLibrary::execGetUniqueMarkerNames },
			{ "GetVectorKeys", &UAnimationBlueprintLibrary::execGetVectorKeys },
			{ "IsRootMotionEnabled", &UAnimationBlueprintLibrary::execIsRootMotionEnabled },
			{ "IsRootMotionLockForced", &UAnimationBlueprintLibrary::execIsRootMotionLockForced },
			{ "IsValidAnimationSyncMarkerName", &UAnimationBlueprintLibrary::execIsValidAnimationSyncMarkerName },
			{ "IsValidAnimNotifyTrackName", &UAnimationBlueprintLibrary::execIsValidAnimNotifyTrackName },
			{ "IsValidRawAnimationTrackName", &UAnimationBlueprintLibrary::execIsValidRawAnimationTrackName },
			{ "IsValidTime", &UAnimationBlueprintLibrary::execIsValidTime },
			{ "RemoveAllAnimationNotifyTracks", &UAnimationBlueprintLibrary::execRemoveAllAnimationNotifyTracks },
			{ "RemoveAllAnimationSyncMarkers", &UAnimationBlueprintLibrary::execRemoveAllAnimationSyncMarkers },
			{ "RemoveAllBoneAnimation", &UAnimationBlueprintLibrary::execRemoveAllBoneAnimation },
			{ "RemoveAllCurveData", &UAnimationBlueprintLibrary::execRemoveAllCurveData },
			{ "RemoveAllMetaData", &UAnimationBlueprintLibrary::execRemoveAllMetaData },
			{ "RemoveAllVirtualBones", &UAnimationBlueprintLibrary::execRemoveAllVirtualBones },
			{ "RemoveAnimationNotifyEventsByName", &UAnimationBlueprintLibrary::execRemoveAnimationNotifyEventsByName },
			{ "RemoveAnimationNotifyEventsByTrack", &UAnimationBlueprintLibrary::execRemoveAnimationNotifyEventsByTrack },
			{ "RemoveAnimationNotifyTrack", &UAnimationBlueprintLibrary::execRemoveAnimationNotifyTrack },
			{ "RemoveAnimationSyncMarkersByName", &UAnimationBlueprintLibrary::execRemoveAnimationSyncMarkersByName },
			{ "RemoveAnimationSyncMarkersByTrack", &UAnimationBlueprintLibrary::execRemoveAnimationSyncMarkersByTrack },
			{ "RemoveBoneAnimation", &UAnimationBlueprintLibrary::execRemoveBoneAnimation },
			{ "RemoveCurve", &UAnimationBlueprintLibrary::execRemoveCurve },
			{ "RemoveMetaData", &UAnimationBlueprintLibrary::execRemoveMetaData },
			{ "RemoveMetaDataOfClass", &UAnimationBlueprintLibrary::execRemoveMetaDataOfClass },
			{ "RemoveVirtualBone", &UAnimationBlueprintLibrary::execRemoveVirtualBone },
			{ "RemoveVirtualBones", &UAnimationBlueprintLibrary::execRemoveVirtualBones },
			{ "ReplaceAnimNotifies", &UAnimationBlueprintLibrary::execReplaceAnimNotifies },
			{ "ReplaceAnimNotifyStates", &UAnimationBlueprintLibrary::execReplaceAnimNotifyStates },
			{ "SetAdditiveAnimationType", &UAnimationBlueprintLibrary::execSetAdditiveAnimationType },
			{ "SetAdditiveBasePoseType", &UAnimationBlueprintLibrary::execSetAdditiveBasePoseType },
			{ "SetAnimationInterpolationType", &UAnimationBlueprintLibrary::execSetAnimationInterpolationType },
			{ "SetBoneCompressionSettings", &UAnimationBlueprintLibrary::execSetBoneCompressionSettings },
			{ "SetCurveCompressionSettings", &UAnimationBlueprintLibrary::execSetCurveCompressionSettings },
			{ "SetIsRootMotionLockForced", &UAnimationBlueprintLibrary::execSetIsRootMotionLockForced },
			{ "SetRateScale", &UAnimationBlueprintLibrary::execSetRateScale },
			{ "SetRootMotionEnabled", &UAnimationBlueprintLibrary::execSetRootMotionEnabled },
			{ "SetRootMotionLockType", &UAnimationBlueprintLibrary::execSetRootMotionLockType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics
	{
		struct AnimationBlueprintLibrary_eventAddAnimationNotifyEvent_Parms
		{
			UAnimSequenceBase* AnimationSequenceBase;
			FName NotifyTrackName;
			float StartTime;
			TSubclassOf<UAnimNotify>  NotifyClass;
			const UAnimNotify* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyTrackName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FClassPropertyParams NewProp_NotifyClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyEvent_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::NewProp_NotifyTrackName = { "NotifyTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyEvent_Parms, NotifyTrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyEvent_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::NewProp_NotifyClass = { "NotifyClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyEvent_Parms, NotifyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyEvent_Parms, ReturnValue), Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::NewProp_NotifyTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::NewProp_NotifyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|NotifyEvents" },
		{ "Comment", "/** Adds an Animation Notify Event to Notify track in the given Animation with the given Notify creation data */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Adds an Animation Notify Event to Notify track in the given Animation with the given Notify creation data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddAnimationNotifyEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::AnimationBlueprintLibrary_eventAddAnimationNotifyEvent_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics
	{
		struct AnimationBlueprintLibrary_eventAddAnimationNotifyEventObject_Parms
		{
			UAnimSequenceBase* AnimationSequenceBase;
			float StartTime;
			const UAnimNotify* Notify;
			FName NotifyTrackName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Notify;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyTrackName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyEventObject_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyEventObject_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::NewProp_Notify = { "Notify", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyEventObject_Parms, Notify), Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::NewProp_NotifyTrackName = { "NotifyTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyEventObject_Parms, NotifyTrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::NewProp_Notify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::NewProp_NotifyTrackName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|NotifyEvents" },
		{ "Comment", "/** Adds an the specific Animation Notify to the Animation Sequence (requires Notify's outer to be the Animation Sequence) */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Adds an the specific Animation Notify to the Animation Sequence (requires Notify's outer to be the Animation Sequence)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddAnimationNotifyEventObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::AnimationBlueprintLibrary_eventAddAnimationNotifyEventObject_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics
	{
		struct AnimationBlueprintLibrary_eventAddAnimationNotifyStateEvent_Parms
		{
			UAnimSequenceBase* AnimationSequenceBase;
			FName NotifyTrackName;
			float StartTime;
			float Duration;
			TSubclassOf<UAnimNotifyState>  NotifyStateClass;
			const UAnimNotifyState* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyTrackName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FClassPropertyParams NewProp_NotifyStateClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyStateEvent_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::NewProp_NotifyTrackName = { "NotifyTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyStateEvent_Parms, NotifyTrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyStateEvent_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyStateEvent_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::NewProp_NotifyStateClass = { "NotifyStateClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyStateEvent_Parms, NotifyStateClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyStateEvent_Parms, ReturnValue), Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::NewProp_NotifyTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::NewProp_NotifyStateClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|NotifyEvents" },
		{ "Comment", "/** Adds an Animation Notify State Event to Notify track in the given Animation with the given Notify State creation data */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Adds an Animation Notify State Event to Notify track in the given Animation with the given Notify State creation data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddAnimationNotifyStateEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::AnimationBlueprintLibrary_eventAddAnimationNotifyStateEvent_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics
	{
		struct AnimationBlueprintLibrary_eventAddAnimationNotifyStateEventObject_Parms
		{
			UAnimSequenceBase* AnimationSequenceBase;
			float StartTime;
			float Duration;
			const UAnimNotifyState* NotifyState;
			FName NotifyTrackName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NotifyState;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyTrackName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyStateEventObject_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyStateEventObject_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyStateEventObject_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::NewProp_NotifyState = { "NotifyState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyStateEventObject_Parms, NotifyState), Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::NewProp_NotifyTrackName = { "NotifyTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyStateEventObject_Parms, NotifyTrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::NewProp_NotifyState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::NewProp_NotifyTrackName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|NotifyEvents" },
		{ "Comment", "/** Adds an the specific Animation Notify State to the Animation Sequence (requires Notify State's outer to be the Animation Sequence) */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Adds an the specific Animation Notify State to the Animation Sequence (requires Notify State's outer to be the Animation Sequence)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddAnimationNotifyStateEventObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::AnimationBlueprintLibrary_eventAddAnimationNotifyStateEventObject_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics
	{
		struct AnimationBlueprintLibrary_eventAddAnimationNotifyTrack_Parms
		{
			UAnimSequenceBase* AnimationSequenceBase;
			FName NotifyTrackName;
			FLinearColor TrackColor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyTrackName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyTrack_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics::NewProp_NotifyTrackName = { "NotifyTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyTrack_Parms, NotifyTrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics::NewProp_TrackColor = { "TrackColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationNotifyTrack_Parms, TrackColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics::NewProp_NotifyTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics::NewProp_TrackColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|AnimationNotifies" },
		{ "Comment", "/** Adds an Animation Notify Track to the Animation Sequence */" },
		{ "CPP_Default_TrackColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Adds an Animation Notify Track to the Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddAnimationNotifyTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics::AnimationBlueprintLibrary_eventAddAnimationNotifyTrack_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics
	{
		struct AnimationBlueprintLibrary_eventAddAnimationSyncMarker_Parms
		{
			UAnimSequence* AnimationSequence;
			FName MarkerName;
			float Time;
			FName NotifyTrackName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MarkerName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyTrackName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationSyncMarker_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationSyncMarker_Parms, MarkerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationSyncMarker_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::NewProp_NotifyTrackName = { "NotifyTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddAnimationSyncMarker_Parms, NotifyTrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::NewProp_MarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::NewProp_NotifyTrackName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|MarkerSyncing" },
		{ "Comment", "/** Adds an Animation Sync Marker to Notify track in the given Animation with the corresponding Marker Name and Time */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Adds an Animation Sync Marker to Notify track in the given Animation with the corresponding Marker Name and Time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddAnimationSyncMarker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::AnimationBlueprintLibrary_eventAddAnimationSyncMarker_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics
	{
		struct AnimationBlueprintLibrary_eventAddCurve_Parms
		{
			UAnimSequence* AnimationSequence;
			FName CurveName;
			ERawCurveTrackTypes CurveType;
			bool bMetaDataCurve;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static void NewProp_bMetaDataCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMetaDataCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddCurve_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddCurve_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddCurve_Parms, CurveType), Z_Construct_UEnum_Engine_ERawCurveTrackTypes, METADATA_PARAMS(nullptr, 0) }; // 1535854795
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::NewProp_bMetaDataCurve_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventAddCurve_Parms*)Obj)->bMetaDataCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::NewProp_bMetaDataCurve = { "bMetaDataCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventAddCurve_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::NewProp_bMetaDataCurve_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::NewProp_bMetaDataCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "Comment", "/** Adds an Animation Curve by Type and Name to the given Animation Sequence */" },
		{ "CPP_Default_bMetaDataCurve", "false" },
		{ "CPP_Default_CurveType", "RCT_Float" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Adds an Animation Curve by Type and Name to the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::AnimationBlueprintLibrary_eventAddCurve_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics
	{
		struct AnimationBlueprintLibrary_eventAddFloatCurveKey_Parms
		{
			UAnimSequence* AnimationSequence;
			FName CurveName;
			float Time;
			float Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddFloatCurveKey_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddFloatCurveKey_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddFloatCurveKey_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddFloatCurveKey_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "Comment", "/** Adds a Float Key to the specified Animation Curve inside of the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Adds a Float Key to the specified Animation Curve inside of the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddFloatCurveKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::AnimationBlueprintLibrary_eventAddFloatCurveKey_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics
	{
		struct AnimationBlueprintLibrary_eventAddFloatCurveKeys_Parms
		{
			UAnimSequence* AnimationSequence;
			FName CurveName;
			TArray<float> Times;
			TArray<float> Values;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddFloatCurveKeys_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddFloatCurveKeys_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_Times_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddFloatCurveKeys_Parms, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_Times_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddFloatCurveKeys_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_Times_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_Times,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "Comment", "/** Adds a multiple of Float Keys to the specified Animation Curve inside of the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Adds a multiple of Float Keys to the specified Animation Curve inside of the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddFloatCurveKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::AnimationBlueprintLibrary_eventAddFloatCurveKeys_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics
	{
		struct AnimationBlueprintLibrary_eventAddMetaData_Parms
		{
			UAnimationAsset* AnimationAsset;
			TSubclassOf<UAnimMetaData>  MetaDataClass;
			UAnimMetaData* MetaDataInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset;
		static const UECodeGen_Private::FClassPropertyParams NewProp_MetaDataClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaDataInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics::NewProp_AnimationAsset = { "AnimationAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddMetaData_Parms, AnimationAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics::NewProp_MetaDataClass = { "MetaDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddMetaData_Parms, MetaDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics::NewProp_MetaDataInstance = { "MetaDataInstance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddMetaData_Parms, MetaDataInstance), Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics::NewProp_AnimationAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics::NewProp_MetaDataClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics::NewProp_MetaDataInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|MetaData" },
		{ "Comment", "/** Creates and Adds an instance of the specified MetaData Class to the given Animation Asset */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Creates and Adds an instance of the specified MetaData Class to the given Animation Asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddMetaData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics::AnimationBlueprintLibrary_eventAddMetaData_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject_Statics
	{
		struct AnimationBlueprintLibrary_eventAddMetaDataObject_Parms
		{
			UAnimationAsset* AnimationAsset;
			UAnimMetaData* MetaDataObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaDataObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject_Statics::NewProp_AnimationAsset = { "AnimationAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddMetaDataObject_Parms, AnimationAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject_Statics::NewProp_MetaDataObject = { "MetaDataObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddMetaDataObject_Parms, MetaDataObject), Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject_Statics::NewProp_AnimationAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject_Statics::NewProp_MetaDataObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|MetaData" },
		{ "Comment", "/** Adds an instance of the specified MetaData Class to the given Animation Asset (requires MetaDataObject's outer to be the Animation Asset) */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Adds an instance of the specified MetaData Class to the given Animation Asset (requires MetaDataObject's outer to be the Animation Asset)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddMetaDataObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject_Statics::AnimationBlueprintLibrary_eventAddMetaDataObject_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics
	{
		struct AnimationBlueprintLibrary_eventAddNodeAssetOverride_Parms
		{
			UAnimBlueprint* AnimBlueprint;
			const UAnimationAsset* Target;
			UAnimationAsset* Override;
			bool bPrintAppliedOverrides;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Override;
		static void NewProp_bPrintAppliedOverrides_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrintAppliedOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::NewProp_AnimBlueprint = { "AnimBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddNodeAssetOverride_Parms, AnimBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddNodeAssetOverride_Parms, Target), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::NewProp_Override = { "Override", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddNodeAssetOverride_Parms, Override), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::NewProp_bPrintAppliedOverrides_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventAddNodeAssetOverride_Parms*)Obj)->bPrintAppliedOverrides = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::NewProp_bPrintAppliedOverrides = { "bPrintAppliedOverrides", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventAddNodeAssetOverride_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::NewProp_bPrintAppliedOverrides_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::NewProp_AnimBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::NewProp_Override,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::NewProp_bPrintAppliedOverrides,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Adds an Animation Asset override for the provided AnimationBlueprint, replacing any instance of Target with Override\n\x09 *\n\x09 * @param AnimBlueprint\x09\x09\x09\x09\x09The Animation Blueprint to add/set the Override for\n\x09 * @param Target\x09\x09\x09\x09\x09\x09The Animation Asset to add an override for (overrides all instances of the asset)\n\x09 * @param Override\x09\x09\x09\x09\x09\x09The Animation Asset to used to override the Target with (types have to match)\n\x09 * @param bPrintAppliedOverrides\x09\x09""Flag whether or not to print the applied overrides\n\x09 */" },
		{ "CPP_Default_bPrintAppliedOverrides", "false" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Adds an Animation Asset override for the provided AnimationBlueprint, replacing any instance of Target with Override\n\n@param AnimBlueprint                                 The Animation Blueprint to add/set the Override for\n@param Target                                                The Animation Asset to add an override for (overrides all instances of the asset)\n@param Override                                              The Animation Asset to used to override the Target with (types have to match)\n@param bPrintAppliedOverrides                Flag whether or not to print the applied overrides" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddNodeAssetOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::AnimationBlueprintLibrary_eventAddNodeAssetOverride_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics
	{
		struct AnimationBlueprintLibrary_eventAddTransformationCurveKey_Parms
		{
			UAnimSequence* AnimationSequence;
			FName CurveName;
			float Time;
			FTransform Transform;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddTransformationCurveKey_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddTransformationCurveKey_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddTransformationCurveKey_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddTransformationCurveKey_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "Comment", "/** Adds a Transformation Key to the specified Animation Curve inside of the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Adds a Transformation Key to the specified Animation Curve inside of the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddTransformationCurveKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::AnimationBlueprintLibrary_eventAddTransformationCurveKey_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics
	{
		struct AnimationBlueprintLibrary_eventAddTransformationCurveKeys_Parms
		{
			UAnimSequence* AnimationSequence;
			FName CurveName;
			TArray<float> Times;
			TArray<FTransform> Transforms;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddTransformationCurveKeys_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddTransformationCurveKeys_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_Times_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddTransformationCurveKeys_Parms, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_Times_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_Transforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddTransformationCurveKeys_Parms, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_Times_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_Times,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::NewProp_Transforms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "Comment", "/** Adds a multiple of Transformation Keys to the specified Animation Curve inside of the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Adds a multiple of Transformation Keys to the specified Animation Curve inside of the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddTransformationCurveKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::AnimationBlueprintLibrary_eventAddTransformationCurveKeys_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics
	{
		struct AnimationBlueprintLibrary_eventAddVectorCurveKey_Parms
		{
			UAnimSequence* AnimationSequence;
			FName CurveName;
			float Time;
			FVector Vector;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddVectorCurveKey_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddVectorCurveKey_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddVectorCurveKey_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::NewProp_Vector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddVectorCurveKey_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::NewProp_Vector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::NewProp_Vector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "Comment", "/** Adds a Vector Key to the specified Animation Curve inside of the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Adds a Vector Key to the specified Animation Curve inside of the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddVectorCurveKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::AnimationBlueprintLibrary_eventAddVectorCurveKey_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics
	{
		struct AnimationBlueprintLibrary_eventAddVectorCurveKeys_Parms
		{
			UAnimSequence* AnimationSequence;
			FName CurveName;
			TArray<float> Times;
			TArray<FVector> Vectors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vectors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddVectorCurveKeys_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddVectorCurveKeys_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_Times_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddVectorCurveKeys_Parms, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_Times_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_Vectors_Inner = { "Vectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_Vectors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_Vectors = { "Vectors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddVectorCurveKeys_Parms, Vectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_Vectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_Vectors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_Times_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_Times,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_Vectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::NewProp_Vectors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "Comment", "/** Adds a multiple of Vector Keys to the specified Animation Curve inside of the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Adds a multiple of Vector Keys to the specified Animation Curve inside of the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddVectorCurveKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::AnimationBlueprintLibrary_eventAddVectorCurveKeys_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics
	{
		struct AnimationBlueprintLibrary_eventAddVirtualBone_Parms
		{
			const UAnimSequence* AnimationSequence;
			FName SourceBoneName;
			FName TargetBoneName;
			FName VirtualBoneName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceBoneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetBoneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VirtualBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddVirtualBone_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::NewProp_AnimationSequence_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::NewProp_SourceBoneName = { "SourceBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddVirtualBone_Parms, SourceBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::NewProp_TargetBoneName = { "TargetBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddVirtualBone_Parms, TargetBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::NewProp_VirtualBoneName = { "VirtualBoneName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventAddVirtualBone_Parms, VirtualBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::NewProp_SourceBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::NewProp_TargetBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::NewProp_VirtualBoneName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|VirtualBones" },
		{ "Comment", "/** Adds a Virtual Bone between the Source and Target Bones to the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Adds a Virtual Bone between the Source and Target Bones to the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "AddVirtualBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::AnimationBlueprintLibrary_eventAddVirtualBone_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics
	{
		struct AnimationBlueprintLibrary_eventContainsMetaDataOfClass_Parms
		{
			const UAnimationAsset* AnimationAsset;
			TSubclassOf<UAnimMetaData>  MetaDataClass;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset;
		static const UECodeGen_Private::FClassPropertyParams NewProp_MetaDataClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::NewProp_AnimationAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::NewProp_AnimationAsset = { "AnimationAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventContainsMetaDataOfClass_Parms, AnimationAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::NewProp_AnimationAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::NewProp_AnimationAsset_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::NewProp_MetaDataClass = { "MetaDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventContainsMetaDataOfClass_Parms, MetaDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventContainsMetaDataOfClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventContainsMetaDataOfClass_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::NewProp_AnimationAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::NewProp_MetaDataClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|MetaData" },
		{ "Comment", "/** Checks whether or not the given Animation Asset contains Meta Data Instance of the specified Meta Data Class */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Checks whether or not the given Animation Asset contains Meta Data Instance of the specified Meta Data Class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "ContainsMetaDataOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::AnimationBlueprintLibrary_eventContainsMetaDataOfClass_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics
	{
		struct AnimationBlueprintLibrary_eventCopyAnimationCurveNamesToSkeleton_Parms
		{
			USkeleton* OldSkeleton;
			USkeleton* NewSkeleton;
			UAnimSequenceBase* SequenceBase;
			ERawCurveTrackTypes CurveType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldSkeleton;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSkeleton;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SequenceBase;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::NewProp_OldSkeleton = { "OldSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventCopyAnimationCurveNamesToSkeleton_Parms, OldSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::NewProp_NewSkeleton = { "NewSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventCopyAnimationCurveNamesToSkeleton_Parms, NewSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::NewProp_SequenceBase = { "SequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventCopyAnimationCurveNamesToSkeleton_Parms, SequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventCopyAnimationCurveNamesToSkeleton_Parms, CurveType), Z_Construct_UEnum_Engine_ERawCurveTrackTypes, METADATA_PARAMS(nullptr, 0) }; // 1535854795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::NewProp_OldSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::NewProp_NewSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::NewProp_SequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::NewProp_CurveType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "Comment", "/** Ensures that any curve names that do not exist on the NewSkeleton are added to it, in which case the SmartName on the actual curve itself will also be updated */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Ensures that any curve names that do not exist on the NewSkeleton are added to it, in which case the SmartName on the actual curve itself will also be updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "CopyAnimationCurveNamesToSkeleton", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::AnimationBlueprintLibrary_eventCopyAnimationCurveNamesToSkeleton_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics
	{
		struct AnimationBlueprintLibrary_eventCopyAnimNotifiesFromSequence_Parms
		{
			UAnimSequenceBase* SourceAnimationSequenceBase;
			UAnimSequenceBase* DestinationAnimationSequenceBase;
			bool bDeleteExistingNotifies;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAnimationSequenceBase;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationAnimationSequenceBase;
		static void NewProp_bDeleteExistingNotifies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteExistingNotifies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::NewProp_SourceAnimationSequenceBase = { "SourceAnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventCopyAnimNotifiesFromSequence_Parms, SourceAnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::NewProp_DestinationAnimationSequenceBase = { "DestinationAnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventCopyAnimNotifiesFromSequence_Parms, DestinationAnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::NewProp_bDeleteExistingNotifies_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventCopyAnimNotifiesFromSequence_Parms*)Obj)->bDeleteExistingNotifies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::NewProp_bDeleteExistingNotifies = { "bDeleteExistingNotifies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventCopyAnimNotifiesFromSequence_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::NewProp_bDeleteExistingNotifies_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::NewProp_SourceAnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::NewProp_DestinationAnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::NewProp_bDeleteExistingNotifies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|NotifyEvents" },
		{ "Comment", "/** Copies animation notifies from Src Animation Sequence to Dest. Creates anim notify tracks as necessary. Returns true on success. */" },
		{ "CPP_Default_bDeleteExistingNotifies", "false" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Copies animation notifies from Src Animation Sequence to Dest. Creates anim notify tracks as necessary. Returns true on success." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "CopyAnimNotifiesFromSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::AnimationBlueprintLibrary_eventCopyAnimNotifiesFromSequence_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics
	{
		struct AnimationBlueprintLibrary_eventDoesBoneNameExist_Parms
		{
			UAnimSequence* AnimationSequence;
			FName BoneName;
			bool bExists;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_bExists_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExists;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventDoesBoneNameExist_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventDoesBoneNameExist_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::NewProp_bExists_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventDoesBoneNameExist_Parms*)Obj)->bExists = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::NewProp_bExists = { "bExists", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventDoesBoneNameExist_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::NewProp_bExists_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::NewProp_bExists,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Skeleton" },
		{ "Comment", "/** Checks whether or not the given Bone Name exist on the Skeleton referenced by the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Checks whether or not the given Bone Name exist on the Skeleton referenced by the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "DoesBoneNameExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::AnimationBlueprintLibrary_eventDoesBoneNameExist_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics
	{
		struct AnimationBlueprintLibrary_eventDoesCurveExist_Parms
		{
			UAnimSequence* AnimationSequence;
			FName CurveName;
			ERawCurveTrackTypes CurveType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventDoesCurveExist_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventDoesCurveExist_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventDoesCurveExist_Parms, CurveType), Z_Construct_UEnum_Engine_ERawCurveTrackTypes, METADATA_PARAMS(nullptr, 0) }; // 1535854795
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventDoesCurveExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventDoesCurveExist_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "Comment", "/** Checks whether or not the given Curve Name exist on the Skeleton referenced by the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Checks whether or not the given Curve Name exist on the Skeleton referenced by the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "DoesCurveExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::AnimationBlueprintLibrary_eventDoesCurveExist_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct FFrameTime
		{
			FFrameNumber FrameNumber;
			float SubFrame;
		};

		struct FQualifiedFrameTime
		{
			FFrameTime Time;
			FFrameRate Rate;
		};

		struct AnimationBlueprintLibrary_eventEvaluateRootBoneTimecodeAttributesAtTime_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			float EvalTime;
			FQualifiedFrameTime OutQualifiedFrameTime;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvalTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EvalTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutQualifiedFrameTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventEvaluateRootBoneTimecodeAttributesAtTime_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_AnimationSequenceBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_EvalTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_EvalTime = { "EvalTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventEvaluateRootBoneTimecodeAttributesAtTime_Parms, EvalTime), METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_EvalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_EvalTime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_OutQualifiedFrameTime = { "OutQualifiedFrameTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventEvaluateRootBoneTimecodeAttributesAtTime_Parms, OutQualifiedFrameTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventEvaluateRootBoneTimecodeAttributesAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventEvaluateRootBoneTimecodeAttributesAtTime_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_EvalTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_OutQualifiedFrameTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Helpers" },
		{ "Comment", "/** Evaluates timecode attributes (e.g. \"TCFrame\", \"TCSecond\", etc.) of the root bone and returns the resulting qualified frame time.\n\x09 *\n\x09 *  @param AnimationSequenceBase: Anim sequence for which to evaluate the root bone attributes.\n\x09 *  @param EvalTime: Time (in seconds) at which to evaluate the timecode bone attributes.\n\x09 *  @param OutQualifiedFrameTime: Resulting qualified frame time from evaluation. If the anim sequence has an import file frame rate\n\x09 *      set, then that will be used as the frame rate of the qualified frame time. Otherwise, the sampling frame rate of the anim\n\x09 *      sequence is used. If no timecode attributes are present on the bone or if none can be evaluated, the passed object will not be modified.\n\x09 *  @return: true if the root bone had timecode attributes that could be evaluated and a qualified frame time was set, or false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Evaluates timecode attributes (e.g. \"TCFrame\", \"TCSecond\", etc.) of the root bone and returns the resulting qualified frame time.\n\n@param AnimationSequenceBase: Anim sequence for which to evaluate the root bone attributes.\n@param EvalTime: Time (in seconds) at which to evaluate the timecode bone attributes.\n@param OutQualifiedFrameTime: Resulting qualified frame time from evaluation. If the anim sequence has an import file frame rate\n    set, then that will be used as the frame rate of the qualified frame time. Otherwise, the sampling frame rate of the anim\n    sequence is used. If no timecode attributes are present on the bone or if none can be evaluated, the passed object will not be modified.\n@return: true if the root bone had timecode attributes that could be evaluated and a qualified frame time was set, or false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "EvaluateRootBoneTimecodeAttributesAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::AnimationBlueprintLibrary_eventEvaluateRootBoneTimecodeAttributesAtTime_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics
	{
		struct AnimationBlueprintLibrary_eventEvaluateRootBoneTimecodeSubframeAttributeAtTime_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			float EvalTime;
			float OutSubframe;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvalTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EvalTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutSubframe;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventEvaluateRootBoneTimecodeSubframeAttributeAtTime_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_AnimationSequenceBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_EvalTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_EvalTime = { "EvalTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventEvaluateRootBoneTimecodeSubframeAttributeAtTime_Parms, EvalTime), METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_EvalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_EvalTime_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_OutSubframe = { "OutSubframe", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventEvaluateRootBoneTimecodeSubframeAttributeAtTime_Parms, OutSubframe), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventEvaluateRootBoneTimecodeSubframeAttributeAtTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventEvaluateRootBoneTimecodeSubframeAttributeAtTime_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_EvalTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_OutSubframe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Helpers" },
		{ "Comment", "/** Evaluates the subframe timecode attribute (e.g. \"TCSubframe\") of the root bone and returns the resulting value.\n\x09 *\n\x09 *  Since the subframe component of FFrameTime is clamped to the range [0.0, 1.0), it cannot accurately represent the use\n\x09 *  case where the timecode metadata represents subframe values as whole numbered subframes instead of as a percentage of a\n\x09 *  frame the way the engine does. The subframe component of the FQualifiedFrameTime returned by\n\x09 *  EvaluateRootBoneTimecodeAttributesAtTime() may not reflect the authored subframe metadata in that case.\n\x09 * \n\x09 *  This function allows access to the subframe values that were actually authored in the timecode metadata.\n\x09 *\n\x09 *  @param AnimationSequenceBase: Anim sequence for which to evaluate the root bone subframe attribute.\n\x09 *  @param EvalTime: Time (in seconds) at which to evaluate the subframe timecode bone attribute.\n\x09 *  @param OutSubframe: Resulting subframe value from evaluation. If no subframe timecode attribute is present\n\x09 *      on the bone or if it cannot be evaluated, the output parameter will not be modified.\n\x09 *  @return: true if the root bone had a subframe timecode attribute that could be evaluated and a value was set, or false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Evaluates the subframe timecode attribute (e.g. \"TCSubframe\") of the root bone and returns the resulting value.\n\nSince the subframe component of FFrameTime is clamped to the range [0.0, 1.0), it cannot accurately represent the use\ncase where the timecode metadata represents subframe values as whole numbered subframes instead of as a percentage of a\nframe the way the engine does. The subframe component of the FQualifiedFrameTime returned by\nEvaluateRootBoneTimecodeAttributesAtTime() may not reflect the authored subframe metadata in that case.\n\nThis function allows access to the subframe values that were actually authored in the timecode metadata.\n\n@param AnimationSequenceBase: Anim sequence for which to evaluate the root bone subframe attribute.\n@param EvalTime: Time (in seconds) at which to evaluate the subframe timecode bone attribute.\n@param OutSubframe: Resulting subframe value from evaluation. If no subframe timecode attribute is present\n    on the bone or if it cannot be evaluated, the output parameter will not be modified.\n@return: true if the root bone had a subframe timecode attribute that could be evaluated and a value was set, or false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "EvaluateRootBoneTimecodeSubframeAttributeAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::AnimationBlueprintLibrary_eventEvaluateRootBoneTimecodeSubframeAttributeAtTime_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_FinalizeBoneAnimation_Statics
	{
		struct AnimationBlueprintLibrary_eventFinalizeBoneAnimation_Parms
		{
			UAnimSequence* AnimationSequence;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_FinalizeBoneAnimation_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventFinalizeBoneAnimation_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_FinalizeBoneAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_FinalizeBoneAnimation_Statics::NewProp_AnimationSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_FinalizeBoneAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "FinalizeBoneAnimation has been deprecated, use UAnimDataController instead" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_FinalizeBoneAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "FinalizeBoneAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_FinalizeBoneAnimation_Statics::AnimationBlueprintLibrary_eventFinalizeBoneAnimation_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_FinalizeBoneAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_FinalizeBoneAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_FinalizeBoneAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_FinalizeBoneAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_FinalizeBoneAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_FinalizeBoneAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics
	{
		struct AnimationBlueprintLibrary_eventFindBonePathToRoot_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			FName BoneName;
			TArray<FName> BonePath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BonePath_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BonePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventFindBonePathToRoot_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventFindBonePathToRoot_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::NewProp_BonePath_Inner = { "BonePath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::NewProp_BonePath = { "BonePath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventFindBonePathToRoot_Parms, BonePath), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::NewProp_BonePath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::NewProp_BonePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Helpers" },
		{ "Comment", "/** Finds the Bone Path from the given Bone to the Root Bone */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Finds the Bone Path from the given Bone to the Root Bone" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "FindBonePathToRoot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::AnimationBlueprintLibrary_eventFindBonePathToRoot_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics
	{
		struct AnimationBlueprintLibrary_eventGetAdditiveAnimationType_Parms
		{
			const UAnimSequence* AnimationSequence;
			TEnumAsByte<EAdditiveAnimationType> AdditiveAnimationType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AdditiveAnimationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAdditiveAnimationType_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::NewProp_AnimationSequence_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::NewProp_AdditiveAnimationType = { "AdditiveAnimationType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAdditiveAnimationType_Parms, AdditiveAnimationType), Z_Construct_UEnum_Engine_EAdditiveAnimationType, METADATA_PARAMS(nullptr, 0) }; // 4258827446
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::NewProp_AdditiveAnimationType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Additive" },
		{ "Comment", "/** Retrieves the Additive Animation type for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the Additive Animation type for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetAdditiveAnimationType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::AnimationBlueprintLibrary_eventGetAdditiveAnimationType_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics
	{
		struct AnimationBlueprintLibrary_eventGetAdditiveBasePoseType_Parms
		{
			const UAnimSequence* AnimationSequence;
			TEnumAsByte<EAdditiveBasePoseType> AdditiveBasePoseType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AdditiveBasePoseType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAdditiveBasePoseType_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::NewProp_AnimationSequence_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::NewProp_AdditiveBasePoseType = { "AdditiveBasePoseType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAdditiveBasePoseType_Parms, AdditiveBasePoseType), Z_Construct_UEnum_Engine_EAdditiveBasePoseType, METADATA_PARAMS(nullptr, 0) }; // 3632598934
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::NewProp_AdditiveBasePoseType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Additive" },
		{ "Comment", "/** Retrieves the Additive Base Pose type for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the Additive Base Pose type for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetAdditiveBasePoseType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::AnimationBlueprintLibrary_eventGetAdditiveBasePoseType_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics
	{
		struct AnimationBlueprintLibrary_eventGetAnimationCurveNames_Parms
		{
			const UAnimSequence* AnimationSequence;
			ERawCurveTrackTypes CurveType;
			TArray<FName> CurveNames;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationCurveNames_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::NewProp_AnimationSequence_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationCurveNames_Parms, CurveType), Z_Construct_UEnum_Engine_ERawCurveTrackTypes, METADATA_PARAMS(nullptr, 0) }; // 1535854795
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationCurveNames_Parms, CurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::NewProp_CurveNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::NewProp_CurveNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Animation" },
		{ "Comment", "/** Retrieves the Names of the individual float curves for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the Names of the individual float curves for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetAnimationCurveNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::AnimationBlueprintLibrary_eventGetAnimationCurveNames_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics
	{
		struct AnimationBlueprintLibrary_eventGetAnimationGraphs_Parms
		{
			UAnimBlueprint* AnimationBlueprint;
			TArray<UAnimationGraph*> AnimationGraphs;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationBlueprint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationGraphs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationGraphs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics::NewProp_AnimationBlueprint = { "AnimationBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationGraphs_Parms, AnimationBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics::NewProp_AnimationGraphs_Inner = { "AnimationGraphs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimationGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics::NewProp_AnimationGraphs = { "AnimationGraphs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationGraphs_Parms, AnimationGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics::NewProp_AnimationBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics::NewProp_AnimationGraphs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics::NewProp_AnimationGraphs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Returns all Animation Graphs contained by the provided Animation Blueprint */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns all Animation Graphs contained by the provided Animation Blueprint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetAnimationGraphs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics::AnimationBlueprintLibrary_eventGetAnimationGraphs_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics
	{
		struct AnimationBlueprintLibrary_eventGetAnimationInterpolationType_Parms
		{
			const UAnimSequence* AnimationSequence;
			EAnimInterpolationType InterpolationType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationInterpolationType_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::NewProp_AnimationSequence_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::NewProp_InterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationInterpolationType_Parms, InterpolationType), Z_Construct_UEnum_Engine_EAnimInterpolationType, METADATA_PARAMS(nullptr, 0) }; // 3232896418
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::NewProp_InterpolationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::NewProp_InterpolationType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Interpolation" },
		{ "Comment", "/** Retrieves the Animation Interpolation type for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the Animation Interpolation type for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetAnimationInterpolationType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::AnimationBlueprintLibrary_eventGetAnimationInterpolationType_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics
	{
		struct AnimationBlueprintLibrary_eventGetAnimationNotifyEventNames_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			TArray<FName> EventNames;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationNotifyEventNames_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::NewProp_EventNames_Inner = { "EventNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::NewProp_EventNames = { "EventNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationNotifyEventNames_Parms, EventNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::NewProp_EventNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::NewProp_EventNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|NotifyEvents" },
		{ "Comment", "/** Retrieves all Unique Animation Notify Events found within the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves all Unique Animation Notify Events found within the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetAnimationNotifyEventNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::AnimationBlueprintLibrary_eventGetAnimationNotifyEventNames_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics
	{
		struct AnimationBlueprintLibrary_eventGetAnimationNotifyEvents_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			TArray<FAnimNotifyEvent> NotifyEvents;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotifyEvents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NotifyEvents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationNotifyEvents_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::NewProp_NotifyEvents_Inner = { "NotifyEvents", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) }; // 3418516681
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::NewProp_NotifyEvents = { "NotifyEvents", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationNotifyEvents_Parms, NotifyEvents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3418516681
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::NewProp_NotifyEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::NewProp_NotifyEvents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|NotifyEvents" },
		{ "Comment", "/** Retrieves all Animation Notify Events found within the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves all Animation Notify Events found within the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetAnimationNotifyEvents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::AnimationBlueprintLibrary_eventGetAnimationNotifyEvents_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics
	{
		struct AnimationBlueprintLibrary_eventGetAnimationNotifyEventsForTrack_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			FName NotifyTrackName;
			TArray<FAnimNotifyEvent> Events;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyTrackName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationNotifyEventsForTrack_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::NewProp_NotifyTrackName = { "NotifyTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationNotifyEventsForTrack_Parms, NotifyTrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(nullptr, 0) }; // 3418516681
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationNotifyEventsForTrack_Parms, Events), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3418516681
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::NewProp_NotifyTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::NewProp_Events_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::NewProp_Events,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|NotifyEvents" },
		{ "Comment", "/** Retrieves all Animation Notify Events for the given Notify Track Name from the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves all Animation Notify Events for the given Notify Track Name from the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetAnimationNotifyEventsForTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::AnimationBlueprintLibrary_eventGetAnimationNotifyEventsForTrack_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics
	{
		struct AnimationBlueprintLibrary_eventGetAnimationNotifyTrackNames_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			TArray<FName> TrackNames;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationNotifyTrackNames_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::NewProp_TrackNames_Inner = { "TrackNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::NewProp_TrackNames = { "TrackNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationNotifyTrackNames_Parms, TrackNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::NewProp_TrackNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::NewProp_TrackNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|AnimationNotifies" },
		{ "Comment", "/** Retrieves all Unique Animation Notify Track Names found within the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves all Unique Animation Notify Track Names found within the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetAnimationNotifyTrackNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::AnimationBlueprintLibrary_eventGetAnimationNotifyTrackNames_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics
	{
		struct AnimationBlueprintLibrary_eventGetAnimationSyncMarkers_Parms
		{
			const UAnimSequence* AnimationSequence;
			TArray<FAnimSyncMarker> Markers;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Markers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Markers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationSyncMarkers_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::NewProp_AnimationSequence_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::NewProp_Markers_Inner = { "Markers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimSyncMarker, METADATA_PARAMS(nullptr, 0) }; // 4278593792
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::NewProp_Markers = { "Markers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationSyncMarkers_Parms, Markers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4278593792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::NewProp_Markers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::NewProp_Markers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|MarkerSyncing" },
		{ "Comment", "/** Retrieves all the Animation Sync Markers for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves all the Animation Sync Markers for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetAnimationSyncMarkers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::AnimationBlueprintLibrary_eventGetAnimationSyncMarkers_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics
	{
		struct AnimationBlueprintLibrary_eventGetAnimationSyncMarkersForTrack_Parms
		{
			const UAnimSequence* AnimationSequence;
			FName NotifyTrackName;
			TArray<FAnimSyncMarker> Markers;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyTrackName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Markers_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Markers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationSyncMarkersForTrack_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::NewProp_AnimationSequence_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::NewProp_NotifyTrackName = { "NotifyTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationSyncMarkersForTrack_Parms, NotifyTrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::NewProp_Markers_Inner = { "Markers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimSyncMarker, METADATA_PARAMS(nullptr, 0) }; // 4278593792
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::NewProp_Markers = { "Markers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationSyncMarkersForTrack_Parms, Markers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4278593792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::NewProp_NotifyTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::NewProp_Markers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::NewProp_Markers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|MarkerSyncing" },
		{ "Comment", "/** Retrieves all Animation Sync Markers for the given Notify Track Name from the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves all Animation Sync Markers for the given Notify Track Name from the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetAnimationSyncMarkersForTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::AnimationBlueprintLibrary_eventGetAnimationSyncMarkersForTrack_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics
	{
		struct AnimationBlueprintLibrary_eventGetAnimationTrackNames_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			TArray<FName> TrackNames;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationTrackNames_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::NewProp_TrackNames_Inner = { "TrackNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::NewProp_TrackNames = { "TrackNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimationTrackNames_Parms, TrackNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::NewProp_TrackNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::NewProp_TrackNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Animation" },
		{ "Comment", "/** Retrieves the Names of the individual ATracks for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the Names of the individual ATracks for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetAnimationTrackNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::AnimationBlueprintLibrary_eventGetAnimationTrackNames_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics
	{
		struct AnimationBlueprintLibrary_eventGetAnimNotifyEventDuration_Parms
		{
			FAnimNotifyEvent NotifyEvent;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotifyEvent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::NewProp_NotifyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::NewProp_NotifyEvent = { "NotifyEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimNotifyEventDuration_Parms, NotifyEvent), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::NewProp_NotifyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::NewProp_NotifyEvent_MetaData)) }; // 3418516681
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimNotifyEventDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::NewProp_NotifyEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|AnimationNotifies" },
		{ "Comment", "/** Returns the duration for a NotifyEvent, only non-zero for Anim Notify States */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Returns the duration for a NotifyEvent, only non-zero for Anim Notify States" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetAnimNotifyEventDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::AnimationBlueprintLibrary_eventGetAnimNotifyEventDuration_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics
	{
		struct AnimationBlueprintLibrary_eventGetAnimNotifyEventTriggerTime_Parms
		{
			FAnimNotifyEvent NotifyEvent;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotifyEvent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::NewProp_NotifyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::NewProp_NotifyEvent = { "NotifyEvent", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimNotifyEventTriggerTime_Parms, NotifyEvent), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::NewProp_NotifyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::NewProp_NotifyEvent_MetaData)) }; // 3418516681
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetAnimNotifyEventTriggerTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::NewProp_NotifyEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|AnimationNotifies" },
		{ "Comment", "/** Returns the actual trigger time for a NotifyEvent */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Returns the actual trigger time for a NotifyEvent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetAnimNotifyEventTriggerTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::AnimationBlueprintLibrary_eventGetAnimNotifyEventTriggerTime_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics
	{
		struct AnimationBlueprintLibrary_eventGetBoneCompressionSettings_Parms
		{
			const UAnimSequence* AnimationSequence;
			UAnimBoneCompressionSettings* CompressionSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CompressionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBoneCompressionSettings_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::NewProp_AnimationSequence_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBoneCompressionSettings_Parms, CompressionSettings), Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::NewProp_CompressionSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Compression" },
		{ "Comment", "/** Retrieves the Bone Compression Settings for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the Bone Compression Settings for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetBoneCompressionSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::AnimationBlueprintLibrary_eventGetBoneCompressionSettings_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics
	{
		struct AnimationBlueprintLibrary_eventGetBonePoseForFrame_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			FName BoneName;
			int32 Frame;
			bool bExtractRootMotion;
			FTransform Pose;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Frame;
		static void NewProp_bExtractRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtractRootMotion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePoseForFrame_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePoseForFrame_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePoseForFrame_Parms, Frame), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::NewProp_bExtractRootMotion_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventGetBonePoseForFrame_Parms*)Obj)->bExtractRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::NewProp_bExtractRootMotion = { "bExtractRootMotion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventGetBonePoseForFrame_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::NewProp_bExtractRootMotion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePoseForFrame_Parms, Pose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::NewProp_bExtractRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::NewProp_Pose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Pose" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetBonePoseForFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::AnimationBlueprintLibrary_eventGetBonePoseForFrame_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics
	{
		struct AnimationBlueprintLibrary_eventGetBonePoseForTime_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			FName BoneName;
			float Time;
			bool bExtractRootMotion;
			FTransform Pose;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static void NewProp_bExtractRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtractRootMotion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePoseForTime_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePoseForTime_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePoseForTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::NewProp_bExtractRootMotion_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventGetBonePoseForTime_Parms*)Obj)->bExtractRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::NewProp_bExtractRootMotion = { "bExtractRootMotion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventGetBonePoseForTime_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::NewProp_bExtractRootMotion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePoseForTime_Parms, Pose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::NewProp_bExtractRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::NewProp_Pose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Pose" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetBonePoseForTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::AnimationBlueprintLibrary_eventGetBonePoseForTime_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics
	{
		struct AnimationBlueprintLibrary_eventGetBonePosesForFrame_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			TArray<FName> BoneNames;
			int32 Frame;
			bool bExtractRootMotion;
			TArray<FTransform> Poses;
			const USkeletalMesh* PreviewMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Frame;
		static void NewProp_bExtractRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtractRootMotion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Poses_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Poses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePosesForFrame_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePosesForFrame_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePosesForFrame_Parms, Frame), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_bExtractRootMotion_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventGetBonePosesForFrame_Parms*)Obj)->bExtractRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_bExtractRootMotion = { "bExtractRootMotion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventGetBonePosesForFrame_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_bExtractRootMotion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_Poses_Inner = { "Poses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_Poses = { "Poses", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePosesForFrame_Parms, Poses), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePosesForFrame_Parms, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_PreviewMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_BoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_bExtractRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_Poses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_Poses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::NewProp_PreviewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Pose" },
		{ "CPP_Default_PreviewMesh", "None" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetBonePosesForFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::AnimationBlueprintLibrary_eventGetBonePosesForFrame_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics
	{
		struct AnimationBlueprintLibrary_eventGetBonePosesForTime_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			TArray<FName> BoneNames;
			float Time;
			bool bExtractRootMotion;
			TArray<FTransform> Poses;
			const USkeletalMesh* PreviewMesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static void NewProp_bExtractRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtractRootMotion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Poses_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Poses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePosesForTime_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePosesForTime_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePosesForTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_bExtractRootMotion_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventGetBonePosesForTime_Parms*)Obj)->bExtractRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_bExtractRootMotion = { "bExtractRootMotion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventGetBonePosesForTime_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_bExtractRootMotion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_Poses_Inner = { "Poses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_Poses = { "Poses", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePosesForTime_Parms, Poses), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetBonePosesForTime_Parms, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_PreviewMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_BoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_bExtractRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_Poses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_Poses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::NewProp_PreviewMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Pose" },
		{ "CPP_Default_PreviewMesh", "None" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetBonePosesForTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::AnimationBlueprintLibrary_eventGetBonePosesForTime_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics
	{
		struct AnimationBlueprintLibrary_eventGetCurveCompressionSettings_Parms
		{
			const UAnimSequence* AnimationSequence;
			UAnimCurveCompressionSettings* CompressionSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CompressionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetCurveCompressionSettings_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::NewProp_AnimationSequence_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetCurveCompressionSettings_Parms, CompressionSettings), Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::NewProp_CompressionSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Compression" },
		{ "Comment", "/** Retrieves the Curve Compression Settings for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the Curve Compression Settings for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetCurveCompressionSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::AnimationBlueprintLibrary_eventGetCurveCompressionSettings_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics
	{
		struct AnimationBlueprintLibrary_eventGetFloatKeys_Parms
		{
			UAnimSequence* AnimationSequence;
			FName CurveName;
			TArray<float> Times;
			TArray<float> Values;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetFloatKeys_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetFloatKeys_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetFloatKeys_Parms, Times), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetFloatKeys_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::NewProp_Times_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::NewProp_Times,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "Comment", "/** Retrieves, a multiple of, Float Key(s) from the specified Animation Curve inside of the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves, a multiple of, Float Key(s) from the specified Animation Curve inside of the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetFloatKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::AnimationBlueprintLibrary_eventGetFloatKeys_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics
	{
		struct AnimationBlueprintLibrary_eventGetFrameAtTime_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			float Time;
			int32 Frame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetFrameAtTime_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::NewProp_AnimationSequenceBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetFrameAtTime_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetFrameAtTime_Parms, Frame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::NewProp_Frame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Helpers" },
		{ "Comment", "/** Retrieves the Frame Index at the specified Time Value for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the Frame Index at the specified Time Value for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetFrameAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::AnimationBlueprintLibrary_eventGetFrameAtTime_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics
	{
		struct AnimationBlueprintLibrary_eventGetMetaData_Parms
		{
			const UAnimationAsset* AnimationAsset;
			TArray<UAnimMetaData*> MetaData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::NewProp_AnimationAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::NewProp_AnimationAsset = { "AnimationAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetMetaData_Parms, AnimationAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::NewProp_AnimationAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::NewProp_AnimationAsset_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::NewProp_MetaData_Inner = { "MetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetMetaData_Parms, MetaData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::NewProp_AnimationAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::NewProp_MetaData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::NewProp_MetaData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|MetaData" },
		{ "Comment", "/** Retrieves all Meta Data Instances from the given Animation Asset */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves all Meta Data Instances from the given Animation Asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetMetaData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::AnimationBlueprintLibrary_eventGetMetaData_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics
	{
		struct AnimationBlueprintLibrary_eventGetMetaDataOfClass_Parms
		{
			const UAnimationAsset* AnimationAsset;
			TSubclassOf<UAnimMetaData>  MetaDataClass;
			TArray<UAnimMetaData*> MetaDataOfClass;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset;
		static const UECodeGen_Private::FClassPropertyParams NewProp_MetaDataClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaDataOfClass_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaDataOfClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::NewProp_AnimationAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::NewProp_AnimationAsset = { "AnimationAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetMetaDataOfClass_Parms, AnimationAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::NewProp_AnimationAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::NewProp_AnimationAsset_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::NewProp_MetaDataClass = { "MetaDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetMetaDataOfClass_Parms, MetaDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::NewProp_MetaDataOfClass_Inner = { "MetaDataOfClass", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::NewProp_MetaDataOfClass = { "MetaDataOfClass", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetMetaDataOfClass_Parms, MetaDataOfClass), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::NewProp_AnimationAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::NewProp_MetaDataClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::NewProp_MetaDataOfClass_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::NewProp_MetaDataOfClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|MetaData" },
		{ "Comment", "/** Retrieves all Meta Data Instances from the given Animation Asset */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves all Meta Data Instances from the given Animation Asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetMetaDataOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::AnimationBlueprintLibrary_eventGetMetaDataOfClass_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics
	{
		struct AnimationBlueprintLibrary_eventGetMontageSlotNames_Parms
		{
			const UAnimMontage* AnimationMontage;
			TArray<FName> SlotNames;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationMontage;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SlotNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::NewProp_AnimationMontage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::NewProp_AnimationMontage = { "AnimationMontage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetMontageSlotNames_Parms, AnimationMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::NewProp_AnimationMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::NewProp_AnimationMontage_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::NewProp_SlotNames_Inner = { "SlotNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::NewProp_SlotNames = { "SlotNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetMontageSlotNames_Parms, SlotNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::NewProp_AnimationMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::NewProp_SlotNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::NewProp_SlotNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Montage" },
		{ "Comment", "/** Retrieves the Names of the Animation Slots used in the given Montage */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the Names of the Animation Slots used in the given Montage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetMontageSlotNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::AnimationBlueprintLibrary_eventGetMontageSlotNames_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics
	{
		struct AnimationBlueprintLibrary_eventGetNodesOfClass_Parms
		{
			UAnimBlueprint* AnimationBlueprint;
			TSubclassOf<UAnimGraphNode_Base>  NodeClass;
			TArray<UAnimGraphNode_Base*> GraphNodes;
			bool bIncludeChildClasses;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationBlueprint;
		static const UECodeGen_Private::FClassPropertyParams NewProp_NodeClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphNodes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphNodes;
		static void NewProp_bIncludeChildClasses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::NewProp_AnimationBlueprint = { "AnimationBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetNodesOfClass_Parms, AnimationBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::NewProp_NodeClass = { "NodeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetNodesOfClass_Parms, NodeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimGraphNode_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::NewProp_GraphNodes_Inner = { "GraphNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimGraphNode_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::NewProp_GraphNodes = { "GraphNodes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetNodesOfClass_Parms, GraphNodes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::NewProp_bIncludeChildClasses_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventGetNodesOfClass_Parms*)Obj)->bIncludeChildClasses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::NewProp_bIncludeChildClasses = { "bIncludeChildClasses", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventGetNodesOfClass_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::NewProp_bIncludeChildClasses_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::NewProp_AnimationBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::NewProp_NodeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::NewProp_GraphNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::NewProp_GraphNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::NewProp_bIncludeChildClasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Returns all Animation Graph Nodes of the provided Node Class contained by the Animation Blueprint */" },
		{ "CPP_Default_bIncludeChildClasses", "true" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns all Animation Graph Nodes of the provided Node Class contained by the Animation Blueprint" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetNodesOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::AnimationBlueprintLibrary_eventGetNodesOfClass_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics
	{
		struct AnimationBlueprintLibrary_eventGetNumFrames_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			int32 NumFrames;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFrames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetNumFrames_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetNumFrames_Parms, NumFrames), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::NewProp_NumFrames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "AnimationSequence" },
		{ "Category", "AnimationBlueprintLibrary|Animation" },
		{ "Comment", "/** Retrieves the number of animation frames for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the number of animation frames for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetNumFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::AnimationBlueprintLibrary_eventGetNumFrames_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics
	{
		struct AnimationBlueprintLibrary_eventGetNumKeys_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			int32 NumKeys;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetNumKeys_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::NewProp_NumKeys = { "NumKeys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetNumKeys_Parms, NumKeys), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::NewProp_NumKeys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "AnimationSequence" },
		{ "Category", "AnimationBlueprintLibrary|Animation" },
		{ "Comment", "/** Retrieves the number of animation keys for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the number of animation keys for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetNumKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::AnimationBlueprintLibrary_eventGetNumKeys_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics
	{
		struct AnimationBlueprintLibrary_eventGetRateScale_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			float RateScale;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RateScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRateScale_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::NewProp_RateScale = { "RateScale", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRateScale_Parms, RateScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::NewProp_RateScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Animation" },
		{ "Comment", "/** Retrieves the (Play) Rate Scale of the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the (Play) Rate Scale of the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetRateScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::AnimationBlueprintLibrary_eventGetRateScale_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics
	{
		struct AnimationBlueprintLibrary_eventGetRawTrackData_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			FName TrackName;
			TArray<FVector> PositionKeys;
			TArray<FQuat> RotationKeys;
			TArray<FVector> ScalingKeys;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionKeys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PositionKeys;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationKeys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationKeys;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalingKeys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalingKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRawTrackData_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_AnimationSequenceBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_TrackName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRawTrackData_Parms, TrackName), METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_TrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_TrackName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_PositionKeys_Inner = { "PositionKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_PositionKeys = { "PositionKeys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRawTrackData_Parms, PositionKeys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_RotationKeys_Inner = { "RotationKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_RotationKeys = { "RotationKeys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRawTrackData_Parms, RotationKeys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_ScalingKeys_Inner = { "ScalingKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_ScalingKeys = { "ScalingKeys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRawTrackData_Parms, ScalingKeys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_PositionKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_PositionKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_RotationKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_RotationKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_ScalingKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::NewProp_ScalingKeys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|RawTrackData" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetRawTrackData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::AnimationBlueprintLibrary_eventGetRawTrackData_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics
	{
		struct AnimationBlueprintLibrary_eventGetRawTrackPositionData_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			FName TrackName;
			TArray<FVector> PositionData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PositionData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRawTrackPositionData_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::NewProp_AnimationSequenceBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::NewProp_TrackName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRawTrackPositionData_Parms, TrackName), METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::NewProp_TrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::NewProp_TrackName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::NewProp_PositionData_Inner = { "PositionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::NewProp_PositionData = { "PositionData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRawTrackPositionData_Parms, PositionData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::NewProp_PositionData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::NewProp_PositionData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|RawTrackData" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetRawTrackPositionData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::AnimationBlueprintLibrary_eventGetRawTrackPositionData_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics
	{
		struct AnimationBlueprintLibrary_eventGetRawTrackRotationData_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			FName TrackName;
			TArray<FQuat> RotationData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRawTrackRotationData_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::NewProp_AnimationSequenceBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::NewProp_TrackName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRawTrackRotationData_Parms, TrackName), METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::NewProp_TrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::NewProp_TrackName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::NewProp_RotationData_Inner = { "RotationData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::NewProp_RotationData = { "RotationData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRawTrackRotationData_Parms, RotationData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::NewProp_RotationData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::NewProp_RotationData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|RawTrackData" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetRawTrackRotationData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::AnimationBlueprintLibrary_eventGetRawTrackRotationData_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics
	{
		struct AnimationBlueprintLibrary_eventGetRawTrackScaleData_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			FName TrackName;
			TArray<FVector> ScaleData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScaleData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRawTrackScaleData_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::NewProp_AnimationSequenceBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::NewProp_TrackName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRawTrackScaleData_Parms, TrackName), METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::NewProp_TrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::NewProp_TrackName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::NewProp_ScaleData_Inner = { "ScaleData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::NewProp_ScaleData = { "ScaleData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRawTrackScaleData_Parms, ScaleData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::NewProp_ScaleData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::NewProp_ScaleData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|RawTrackData" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetRawTrackScaleData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::AnimationBlueprintLibrary_eventGetRawTrackScaleData_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics
	{
		struct AnimationBlueprintLibrary_eventGetRootMotionLockType_Parms
		{
			const UAnimSequence* AnimationSequence;
			TEnumAsByte<ERootMotionRootLock::Type> LockType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRootMotionLockType_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::NewProp_AnimationSequence_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::NewProp_LockType = { "LockType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetRootMotionLockType_Parms, LockType), Z_Construct_UEnum_Engine_ERootMotionRootLock, METADATA_PARAMS(nullptr, 0) }; // 2118872410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::NewProp_LockType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|RootMotion" },
		{ "Comment", "/** Retrieves the Root Motion Lock Type for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the Root Motion Lock Type for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetRootMotionLockType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::AnimationBlueprintLibrary_eventGetRootMotionLockType_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics
	{
		struct AnimationBlueprintLibrary_eventGetSequenceLength_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			float Length;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetSequenceLength_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetSequenceLength_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::NewProp_Length,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Animation" },
		{ "Comment", "/** Retrieves the Length of the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the Length of the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetSequenceLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::AnimationBlueprintLibrary_eventGetSequenceLength_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics
	{
		struct AnimationBlueprintLibrary_eventGetTimeAtFrame_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			int32 Frame;
			float Time;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetTimeAtFrame_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::NewProp_AnimationSequenceBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::NewProp_Frame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetTimeAtFrame_Parms, Frame), METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::NewProp_Frame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::NewProp_Frame_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetTimeAtFrame_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::NewProp_Frame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Helpers" },
		{ "Comment", "/** Retrieves the Time Value at the specified Frame Indexfor the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves the Time Value at the specified Frame Indexfor the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetTimeAtFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::AnimationBlueprintLibrary_eventGetTimeAtFrame_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics
	{
		struct AnimationBlueprintLibrary_eventGetTransformationKeys_Parms
		{
			UAnimSequence* AnimationSequence;
			FName CurveName;
			TArray<float> Times;
			TArray<FTransform> Values;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetTransformationKeys_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetTransformationKeys_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetTransformationKeys_Parms, Times), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetTransformationKeys_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::NewProp_Times_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::NewProp_Times,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "Comment", "/** Retrieves, a multiple of, Transformation Key(s) from the specified Animation Curve inside of the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves, a multiple of, Transformation Key(s) from the specified Animation Curve inside of the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetTransformationKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::AnimationBlueprintLibrary_eventGetTransformationKeys_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics
	{
		struct AnimationBlueprintLibrary_eventGetUniqueMarkerNames_Parms
		{
			const UAnimSequence* AnimationSequence;
			TArray<FName> MarkerNames;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MarkerNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetUniqueMarkerNames_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::NewProp_AnimationSequence_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::NewProp_MarkerNames_Inner = { "MarkerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::NewProp_MarkerNames = { "MarkerNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetUniqueMarkerNames_Parms, MarkerNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::NewProp_MarkerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::NewProp_MarkerNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|MarkerSyncing" },
		{ "Comment", "/** Retrieves all the Unique Names for the Animation Sync Markers contained by the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves all the Unique Names for the Animation Sync Markers contained by the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetUniqueMarkerNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::AnimationBlueprintLibrary_eventGetUniqueMarkerNames_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics
	{
		struct AnimationBlueprintLibrary_eventGetVectorKeys_Parms
		{
			UAnimSequence* AnimationSequence;
			FName CurveName;
			TArray<float> Times;
			TArray<FVector> Values;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetVectorKeys_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetVectorKeys_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetVectorKeys_Parms, Times), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventGetVectorKeys_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::NewProp_Times_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::NewProp_Times,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "Comment", "/** Retrieves, a multiple of, Vector Key(s) from the specified Animation Curve inside of the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Retrieves, a multiple of, Vector Key(s) from the specified Animation Curve inside of the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "GetVectorKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::AnimationBlueprintLibrary_eventGetVectorKeys_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics
	{
		struct AnimationBlueprintLibrary_eventIsRootMotionEnabled_Parms
		{
			const UAnimSequence* AnimationSequence;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventIsRootMotionEnabled_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::NewProp_AnimationSequence_MetaData)) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventIsRootMotionEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventIsRootMotionEnabled_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|RootMotion" },
		{ "Comment", "/** Checks whether or not Root Motion is Enabled for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Checks whether or not Root Motion is Enabled for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "IsRootMotionEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::AnimationBlueprintLibrary_eventIsRootMotionEnabled_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics
	{
		struct AnimationBlueprintLibrary_eventIsRootMotionLockForced_Parms
		{
			const UAnimSequence* AnimationSequence;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventIsRootMotionLockForced_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::NewProp_AnimationSequence_MetaData)) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventIsRootMotionLockForced_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventIsRootMotionLockForced_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|RootMotion" },
		{ "Comment", "/** Checks whether or not Root Motion locking is Forced for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Checks whether or not Root Motion locking is Forced for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "IsRootMotionLockForced", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::AnimationBlueprintLibrary_eventIsRootMotionLockForced_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics
	{
		struct AnimationBlueprintLibrary_eventIsValidAnimationSyncMarkerName_Parms
		{
			const UAnimSequence* AnimationSequence;
			FName MarkerName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MarkerName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventIsValidAnimationSyncMarkerName_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::NewProp_AnimationSequence_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventIsValidAnimationSyncMarkerName_Parms, MarkerName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventIsValidAnimationSyncMarkerName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventIsValidAnimationSyncMarkerName_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::NewProp_MarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Helpers" },
		{ "Comment", "/** Checks whether or not the given Marker Name is a valid Animation Sync Marker Name */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Checks whether or not the given Marker Name is a valid Animation Sync Marker Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "IsValidAnimationSyncMarkerName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::AnimationBlueprintLibrary_eventIsValidAnimationSyncMarkerName_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics
	{
		struct AnimationBlueprintLibrary_eventIsValidAnimNotifyTrackName_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			FName NotifyTrackName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyTrackName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventIsValidAnimNotifyTrackName_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::NewProp_NotifyTrackName = { "NotifyTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventIsValidAnimNotifyTrackName_Parms, NotifyTrackName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventIsValidAnimNotifyTrackName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventIsValidAnimNotifyTrackName_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::NewProp_NotifyTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Helpers" },
		{ "Comment", "/** Checks whether or not the given Track Name is a valid Animation Notify Track in the Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Checks whether or not the given Track Name is a valid Animation Notify Track in the Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "IsValidAnimNotifyTrackName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::AnimationBlueprintLibrary_eventIsValidAnimNotifyTrackName_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics
	{
		struct AnimationBlueprintLibrary_eventIsValidRawAnimationTrackName_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			FName TrackName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventIsValidRawAnimationTrackName_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::NewProp_AnimationSequenceBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::NewProp_TrackName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventIsValidRawAnimationTrackName_Parms, TrackName), METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::NewProp_TrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::NewProp_TrackName_MetaData)) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventIsValidRawAnimationTrackName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventIsValidRawAnimationTrackName_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Helpers" },
		{ "Comment", "/** Checks whether or not the given Animation Track Name is contained within the Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Checks whether or not the given Animation Track Name is contained within the Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "IsValidRawAnimationTrackName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::AnimationBlueprintLibrary_eventIsValidRawAnimationTrackName_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics
	{
		struct AnimationBlueprintLibrary_eventIsValidTime_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			float Time;
			bool IsValid;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventIsValidTime_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::NewProp_AnimationSequenceBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventIsValidTime_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::NewProp_Time_MetaData)) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventIsValidTime_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventIsValidTime_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::NewProp_IsValid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Helpers" },
		{ "Comment", "/** Checks whether or not the given Time Value lies within the given Animation Sequence's Length */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Checks whether or not the given Time Value lies within the given Animation Sequence's Length" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "IsValidTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::AnimationBlueprintLibrary_eventIsValidTime_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationNotifyTracks_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveAllAnimationNotifyTracks_Parms
		{
			UAnimSequenceBase* AnimationSequenceBase;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationNotifyTracks_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAllAnimationNotifyTracks_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationNotifyTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationNotifyTracks_Statics::NewProp_AnimationSequenceBase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationNotifyTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|AnimationNotifies" },
		{ "Comment", "/** Removes All Animation Notify Tracks from Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes All Animation Notify Tracks from Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationNotifyTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveAllAnimationNotifyTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationNotifyTracks_Statics::AnimationBlueprintLibrary_eventRemoveAllAnimationNotifyTracks_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationNotifyTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationNotifyTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationNotifyTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationNotifyTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationNotifyTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationNotifyTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationSyncMarkers_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveAllAnimationSyncMarkers_Parms
		{
			UAnimSequence* AnimationSequence;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationSyncMarkers_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAllAnimationSyncMarkers_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationSyncMarkers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationSyncMarkers_Statics::NewProp_AnimationSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationSyncMarkers_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|MarkerSyncing" },
		{ "Comment", "/** Removes All Animation Sync Markers found within the Animation Sequence, and returns the number of removed instances */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes All Animation Sync Markers found within the Animation Sequence, and returns the number of removed instances" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationSyncMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveAllAnimationSyncMarkers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationSyncMarkers_Statics::AnimationBlueprintLibrary_eventRemoveAllAnimationSyncMarkers_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationSyncMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationSyncMarkers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationSyncMarkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationSyncMarkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationSyncMarkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationSyncMarkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllBoneAnimation_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveAllBoneAnimation_Parms
		{
			UAnimSequence* AnimationSequence;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllBoneAnimation_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAllBoneAnimation_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllBoneAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllBoneAnimation_Statics::NewProp_AnimationSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllBoneAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "Comment", "/** Removes all Animation Bone Track Data from the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes all Animation Bone Track Data from the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllBoneAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveAllBoneAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllBoneAnimation_Statics::AnimationBlueprintLibrary_eventRemoveAllBoneAnimation_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllBoneAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllBoneAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllBoneAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllBoneAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllBoneAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllBoneAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllCurveData_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveAllCurveData_Parms
		{
			UAnimSequence* AnimationSequence;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllCurveData_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAllCurveData_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllCurveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllCurveData_Statics::NewProp_AnimationSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllCurveData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "Comment", "/** Removes all Animation Curve Data from the given Animation Sequence (Raw Animation Curves [Names] may not be removed from the Skeleton) */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes all Animation Curve Data from the given Animation Sequence (Raw Animation Curves [Names] may not be removed from the Skeleton)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllCurveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveAllCurveData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllCurveData_Statics::AnimationBlueprintLibrary_eventRemoveAllCurveData_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllCurveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllCurveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllCurveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllCurveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllCurveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllCurveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllMetaData_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveAllMetaData_Parms
		{
			UAnimationAsset* AnimationAsset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllMetaData_Statics::NewProp_AnimationAsset = { "AnimationAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAllMetaData_Parms, AnimationAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllMetaData_Statics::NewProp_AnimationAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|MetaData" },
		{ "Comment", "/** Removes all Meta Data from the given Animation Asset */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes all Meta Data from the given Animation Asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveAllMetaData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllMetaData_Statics::AnimationBlueprintLibrary_eventRemoveAllMetaData_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllMetaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveAllVirtualBones_Parms
		{
			const UAnimSequence* AnimationSequence;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAllVirtualBones_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones_Statics::NewProp_AnimationSequence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones_Statics::NewProp_AnimationSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|VirtualBones" },
		{ "Comment", "/** Removes all Virtual Bones from the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes all Virtual Bones from the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveAllVirtualBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones_Statics::AnimationBlueprintLibrary_eventRemoveAllVirtualBones_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveAnimationNotifyEventsByName_Parms
		{
			UAnimSequenceBase* AnimationSequenceBase;
			FName NotifyName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAnimationNotifyEventsByName_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAnimationNotifyEventsByName_Parms, NotifyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAnimationNotifyEventsByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics::NewProp_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|NotifyEvents" },
		{ "Comment", "/** Removes Animation Notify Events found by Name within the Animation Sequence, and returns the number of removed name instances */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes Animation Notify Events found by Name within the Animation Sequence, and returns the number of removed name instances" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveAnimationNotifyEventsByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics::AnimationBlueprintLibrary_eventRemoveAnimationNotifyEventsByName_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveAnimationNotifyEventsByTrack_Parms
		{
			UAnimSequenceBase* AnimationSequenceBase;
			FName NotifyTrackName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyTrackName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAnimationNotifyEventsByTrack_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics::NewProp_NotifyTrackName = { "NotifyTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAnimationNotifyEventsByTrack_Parms, NotifyTrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAnimationNotifyEventsByTrack_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics::NewProp_NotifyTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|NotifyEvents" },
		{ "Comment", "/** Removes Animation Notify Events found by Track within the Animation Sequence, and returns the number of removed name instances */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes Animation Notify Events found by Track within the Animation Sequence, and returns the number of removed name instances" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveAnimationNotifyEventsByTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics::AnimationBlueprintLibrary_eventRemoveAnimationNotifyEventsByTrack_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveAnimationNotifyTrack_Parms
		{
			UAnimSequenceBase* AnimationSequenceBase;
			FName NotifyTrackName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyTrackName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAnimationNotifyTrack_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack_Statics::NewProp_NotifyTrackName = { "NotifyTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAnimationNotifyTrack_Parms, NotifyTrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack_Statics::NewProp_NotifyTrackName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|AnimationNotifies" },
		{ "Comment", "/** Removes an Animation Notify Track from Animation Sequence by Name */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes an Animation Notify Track from Animation Sequence by Name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveAnimationNotifyTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack_Statics::AnimationBlueprintLibrary_eventRemoveAnimationNotifyTrack_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveAnimationSyncMarkersByName_Parms
		{
			UAnimSequence* AnimationSequence;
			FName MarkerName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MarkerName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAnimationSyncMarkersByName_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAnimationSyncMarkersByName_Parms, MarkerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAnimationSyncMarkersByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics::NewProp_MarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|MarkerSyncing" },
		{ "Comment", "/** Removes All Animation Sync Marker found within the Animation Sequence whose name matches MarkerName, and returns the number of removed instances */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes All Animation Sync Marker found within the Animation Sequence whose name matches MarkerName, and returns the number of removed instances" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveAnimationSyncMarkersByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics::AnimationBlueprintLibrary_eventRemoveAnimationSyncMarkersByName_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveAnimationSyncMarkersByTrack_Parms
		{
			UAnimSequence* AnimationSequence;
			FName NotifyTrackName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyTrackName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAnimationSyncMarkersByTrack_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics::NewProp_NotifyTrackName = { "NotifyTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAnimationSyncMarkersByTrack_Parms, NotifyTrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveAnimationSyncMarkersByTrack_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics::NewProp_NotifyTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|MarkerSyncing" },
		{ "Comment", "/** Removes All Animation Sync Marker found within the Animation Sequence that belong to the specific Notify Track, and returns the number of removed instances */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes All Animation Sync Marker found within the Animation Sequence that belong to the specific Notify Track, and returns the number of removed instances" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveAnimationSyncMarkersByTrack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics::AnimationBlueprintLibrary_eventRemoveAnimationSyncMarkersByTrack_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveBoneAnimation_Parms
		{
			UAnimSequence* AnimationSequence;
			FName BoneName;
			bool bIncludeChildren;
			bool bFinalize;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_bIncludeChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildren;
		static void NewProp_bFinalize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinalize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveBoneAnimation_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveBoneAnimation_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::NewProp_bIncludeChildren_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventRemoveBoneAnimation_Parms*)Obj)->bIncludeChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::NewProp_bIncludeChildren = { "bIncludeChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventRemoveBoneAnimation_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::NewProp_bIncludeChildren_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::NewProp_bFinalize_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventRemoveBoneAnimation_Parms*)Obj)->bFinalize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::NewProp_bFinalize = { "bFinalize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventRemoveBoneAnimation_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::NewProp_bFinalize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::NewProp_bIncludeChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::NewProp_bFinalize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Bones" },
		{ "Comment", "/** Removes an Animation Curve by Name from the given Animation Sequence (Raw Animation Curves [Names] may not be removed from the Skeleton) \n\x09 * \n\x09 *\x09@param AnimationSequence : AnimSequence\n\x09 *\x09@param BoneName : Name of bone track user wants to remove\n\x09 *\x09@param bIncludeChildren : true if user wants to include all children of BoneName\n\x09 *  @param bFinalize : If you set this to true, it will trigger compression. If you set bFinalize to be false, you'll have to manually trigger Finalize. \n\x09 */" },
		{ "CPP_Default_bFinalize", "true" },
		{ "CPP_Default_bIncludeChildren", "true" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes an Animation Curve by Name from the given Animation Sequence (Raw Animation Curves [Names] may not be removed from the Skeleton)\n\n    @param AnimationSequence : AnimSequence\n    @param BoneName : Name of bone track user wants to remove\n    @param bIncludeChildren : true if user wants to include all children of BoneName\n@param bFinalize : If you set this to true, it will trigger compression. If you set bFinalize to be false, you'll have to manually trigger Finalize." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveBoneAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::AnimationBlueprintLibrary_eventRemoveBoneAnimation_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveCurve_Parms
		{
			UAnimSequence* AnimationSequence;
			FName CurveName;
			bool bRemoveNameFromSkeleton;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static void NewProp_bRemoveNameFromSkeleton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveNameFromSkeleton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveCurve_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveCurve_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::NewProp_bRemoveNameFromSkeleton_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventRemoveCurve_Parms*)Obj)->bRemoveNameFromSkeleton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::NewProp_bRemoveNameFromSkeleton = { "bRemoveNameFromSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventRemoveCurve_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::NewProp_bRemoveNameFromSkeleton_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::NewProp_bRemoveNameFromSkeleton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Curves" },
		{ "Comment", "/** Removes an Animation Curve by Name from the given Animation Sequence (Raw Animation Curves [Names] may not be removed from the Skeleton) */" },
		{ "CPP_Default_bRemoveNameFromSkeleton", "false" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes an Animation Curve by Name from the given Animation Sequence (Raw Animation Curves [Names] may not be removed from the Skeleton)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::AnimationBlueprintLibrary_eventRemoveCurve_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveMetaData_Parms
		{
			UAnimationAsset* AnimationAsset;
			UAnimMetaData* MetaDataObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaDataObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData_Statics::NewProp_AnimationAsset = { "AnimationAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveMetaData_Parms, AnimationAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData_Statics::NewProp_MetaDataObject = { "MetaDataObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveMetaData_Parms, MetaDataObject), Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData_Statics::NewProp_AnimationAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData_Statics::NewProp_MetaDataObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|MetaData" },
		{ "Comment", "/** Removes the specified Meta Data Instance from the given Animation Asset */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes the specified Meta Data Instance from the given Animation Asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveMetaData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData_Statics::AnimationBlueprintLibrary_eventRemoveMetaData_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveMetaDataOfClass_Parms
		{
			UAnimationAsset* AnimationAsset;
			TSubclassOf<UAnimMetaData>  MetaDataClass;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationAsset;
		static const UECodeGen_Private::FClassPropertyParams NewProp_MetaDataClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass_Statics::NewProp_AnimationAsset = { "AnimationAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveMetaDataOfClass_Parms, AnimationAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass_Statics::NewProp_MetaDataClass = { "MetaDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveMetaDataOfClass_Parms, MetaDataClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimMetaData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass_Statics::NewProp_AnimationAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass_Statics::NewProp_MetaDataClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|MetaData" },
		{ "Comment", "/** Removes all Meta Data Instance of the specified Class from the given Animation Asset */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes all Meta Data Instance of the specified Class from the given Animation Asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveMetaDataOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass_Statics::AnimationBlueprintLibrary_eventRemoveMetaDataOfClass_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveVirtualBone_Parms
		{
			const UAnimSequence* AnimationSequence;
			FName VirtualBoneName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VirtualBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveVirtualBone_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::NewProp_AnimationSequence_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::NewProp_VirtualBoneName = { "VirtualBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveVirtualBone_Parms, VirtualBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::NewProp_VirtualBoneName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|VirtualBones" },
		{ "Comment", "/** Removes a Virtual Bone with the specified Bone Name from the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes a Virtual Bone with the specified Bone Name from the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveVirtualBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::AnimationBlueprintLibrary_eventRemoveVirtualBone_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics
	{
		struct AnimationBlueprintLibrary_eventRemoveVirtualBones_Parms
		{
			const UAnimSequence* AnimationSequence;
			TArray<FName> VirtualBoneNames;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VirtualBoneNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VirtualBoneNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveVirtualBones_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::NewProp_AnimationSequence_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::NewProp_VirtualBoneNames_Inner = { "VirtualBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::NewProp_VirtualBoneNames = { "VirtualBoneNames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventRemoveVirtualBones_Parms, VirtualBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::NewProp_VirtualBoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::NewProp_VirtualBoneNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|VirtualBones" },
		{ "Comment", "/** Removes Virtual Bones with the specified Bone Names from the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Removes Virtual Bones with the specified Bone Names from the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "RemoveVirtualBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::AnimationBlueprintLibrary_eventRemoveVirtualBones_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics
	{
		struct AnimationBlueprintLibrary_eventReplaceAnimNotifies_Parms
		{
			UAnimSequenceBase* AnimationSequenceBase;
			TSubclassOf<UAnimNotify>  OldNotifyClass;
			TSubclassOf<UAnimNotify>  NewNotifyClass;
			FScriptDelegate OnNotifyReplaced;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OldNotifyClass;
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewNotifyClass;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotifyReplaced;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventReplaceAnimNotifies_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::NewProp_OldNotifyClass = { "OldNotifyClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventReplaceAnimNotifies_Parms, OldNotifyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::NewProp_NewNotifyClass = { "NewNotifyClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventReplaceAnimNotifies_Parms, NewNotifyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::NewProp_OnNotifyReplaced = { "OnNotifyReplaced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventReplaceAnimNotifies_Parms, OnNotifyReplaced), Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyReplaced__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2446319199
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::NewProp_OldNotifyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::NewProp_NewNotifyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::NewProp_OnNotifyReplaced,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|NotifyEvents" },
		{ "Comment", "/** Replaces animation notifies in the specified Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Replaces animation notifies in the specified Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "ReplaceAnimNotifies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::AnimationBlueprintLibrary_eventReplaceAnimNotifies_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics
	{
		struct AnimationBlueprintLibrary_eventReplaceAnimNotifyStates_Parms
		{
			UAnimSequenceBase* AnimationSequenceBase;
			TSubclassOf<UAnimNotifyState>  OldNotifyClass;
			TSubclassOf<UAnimNotifyState>  NewNotifyClass;
			FScriptDelegate OnNotifyStateReplaced;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OldNotifyClass;
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewNotifyClass;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotifyStateReplaced;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventReplaceAnimNotifyStates_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::NewProp_OldNotifyClass = { "OldNotifyClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventReplaceAnimNotifyStates_Parms, OldNotifyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::NewProp_NewNotifyClass = { "NewNotifyClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventReplaceAnimNotifyStates_Parms, NewNotifyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::NewProp_OnNotifyStateReplaced = { "OnNotifyStateReplaced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventReplaceAnimNotifyStates_Parms, OnNotifyStateReplaced), Z_Construct_UDelegateFunction_AnimationBlueprintLibrary_OnNotifyStateReplaced__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2904633839
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::NewProp_OldNotifyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::NewProp_NewNotifyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::NewProp_OnNotifyStateReplaced,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|NotifyEvents" },
		{ "Comment", "/** Replaces animation notifies in the specified Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Replaces animation notifies in the specified Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "ReplaceAnimNotifyStates", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::AnimationBlueprintLibrary_eventReplaceAnimNotifyStates_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics
	{
		struct AnimationBlueprintLibrary_eventSetAdditiveAnimationType_Parms
		{
			UAnimSequence* AnimationSequence;
			TEnumAsByte<EAdditiveAnimationType> AdditiveAnimationType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditiveAnimationType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AdditiveAnimationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetAdditiveAnimationType_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::NewProp_AdditiveAnimationType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::NewProp_AdditiveAnimationType = { "AdditiveAnimationType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetAdditiveAnimationType_Parms, AdditiveAnimationType), Z_Construct_UEnum_Engine_EAdditiveAnimationType, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::NewProp_AdditiveAnimationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::NewProp_AdditiveAnimationType_MetaData)) }; // 4258827446
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::NewProp_AdditiveAnimationType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Additive" },
		{ "Comment", "/** Sets the Additive Animation type for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Sets the Additive Animation type for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "SetAdditiveAnimationType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::AnimationBlueprintLibrary_eventSetAdditiveAnimationType_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics
	{
		struct AnimationBlueprintLibrary_eventSetAdditiveBasePoseType_Parms
		{
			UAnimSequence* AnimationSequence;
			TEnumAsByte<EAdditiveBasePoseType> AdditiveBasePoseType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditiveBasePoseType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AdditiveBasePoseType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetAdditiveBasePoseType_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::NewProp_AdditiveBasePoseType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::NewProp_AdditiveBasePoseType = { "AdditiveBasePoseType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetAdditiveBasePoseType_Parms, AdditiveBasePoseType), Z_Construct_UEnum_Engine_EAdditiveBasePoseType, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::NewProp_AdditiveBasePoseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::NewProp_AdditiveBasePoseType_MetaData)) }; // 3632598934
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::NewProp_AdditiveBasePoseType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Additive" },
		{ "Comment", "/** Sets the Additive Base Pose type for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Sets the Additive Base Pose type for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "SetAdditiveBasePoseType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::AnimationBlueprintLibrary_eventSetAdditiveBasePoseType_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics
	{
		struct AnimationBlueprintLibrary_eventSetAnimationInterpolationType_Parms
		{
			UAnimSequence* AnimationSequence;
			EAnimInterpolationType InterpolationType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetAnimationInterpolationType_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics::NewProp_InterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetAnimationInterpolationType_Parms, InterpolationType), Z_Construct_UEnum_Engine_EAnimInterpolationType, METADATA_PARAMS(nullptr, 0) }; // 3232896418
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics::NewProp_InterpolationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics::NewProp_InterpolationType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Interpolation" },
		{ "Comment", "/** Sets the Animation Interpolation type for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Sets the Animation Interpolation type for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "SetAnimationInterpolationType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics::AnimationBlueprintLibrary_eventSetAnimationInterpolationType_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings_Statics
	{
		struct AnimationBlueprintLibrary_eventSetBoneCompressionSettings_Parms
		{
			UAnimSequence* AnimationSequence;
			UAnimBoneCompressionSettings* CompressionSettings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CompressionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetBoneCompressionSettings_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetBoneCompressionSettings_Parms, CompressionSettings), Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings_Statics::NewProp_CompressionSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Compression" },
		{ "Comment", "/** Sets the Bone Compression Settings for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Sets the Bone Compression Settings for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "SetBoneCompressionSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings_Statics::AnimationBlueprintLibrary_eventSetBoneCompressionSettings_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings_Statics
	{
		struct AnimationBlueprintLibrary_eventSetCurveCompressionSettings_Parms
		{
			UAnimSequence* AnimationSequence;
			UAnimCurveCompressionSettings* CompressionSettings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CompressionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetCurveCompressionSettings_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetCurveCompressionSettings_Parms, CompressionSettings), Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings_Statics::NewProp_CompressionSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Compression" },
		{ "Comment", "/** Sets the Curve Compression Settings for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Sets the Curve Compression Settings for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "SetCurveCompressionSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings_Statics::AnimationBlueprintLibrary_eventSetCurveCompressionSettings_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics
	{
		struct AnimationBlueprintLibrary_eventSetIsRootMotionLockForced_Parms
		{
			UAnimSequence* AnimationSequence;
			bool bForced;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static void NewProp_bForced_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForced;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetIsRootMotionLockForced_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics::NewProp_bForced_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventSetIsRootMotionLockForced_Parms*)Obj)->bForced = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics::NewProp_bForced = { "bForced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventSetIsRootMotionLockForced_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics::NewProp_bForced_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics::NewProp_bForced,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|RootMotion" },
		{ "Comment", "/** Sets whether or not Root Motion locking is Forced for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Sets whether or not Root Motion locking is Forced for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "SetIsRootMotionLockForced", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics::AnimationBlueprintLibrary_eventSetIsRootMotionLockForced_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale_Statics
	{
		struct AnimationBlueprintLibrary_eventSetRateScale_Parms
		{
			UAnimSequenceBase* AnimationSequenceBase;
			float RateScale;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RateScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetRateScale_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale_Statics::NewProp_RateScale = { "RateScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetRateScale_Parms, RateScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale_Statics::NewProp_RateScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|Animation" },
		{ "Comment", "/** Sets the (Play) Rate Scale for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Sets the (Play) Rate Scale for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "SetRateScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale_Statics::AnimationBlueprintLibrary_eventSetRateScale_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics
	{
		struct AnimationBlueprintLibrary_eventSetRootMotionEnabled_Parms
		{
			UAnimSequence* AnimationSequence;
			bool bEnabled;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetRootMotionEnabled_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AnimationBlueprintLibrary_eventSetRootMotionEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBlueprintLibrary_eventSetRootMotionEnabled_Parms), &Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|RootMotion" },
		{ "Comment", "/** Sets whether or not Root Motion is Enabled for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Sets whether or not Root Motion is Enabled for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "SetRootMotionEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics::AnimationBlueprintLibrary_eventSetRootMotionEnabled_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType_Statics
	{
		struct AnimationBlueprintLibrary_eventSetRootMotionLockType_Parms
		{
			UAnimSequence* AnimationSequence;
			TEnumAsByte<ERootMotionRootLock::Type> RootMotionLockType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RootMotionLockType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetRootMotionLockType_Parms, AnimationSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType_Statics::NewProp_RootMotionLockType = { "RootMotionLockType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBlueprintLibrary_eventSetRootMotionLockType_Parms, RootMotionLockType), Z_Construct_UEnum_Engine_ERootMotionRootLock, METADATA_PARAMS(nullptr, 0) }; // 2118872410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType_Statics::NewProp_AnimationSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType_Statics::NewProp_RootMotionLockType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationBlueprintLibrary|RootMotion" },
		{ "Comment", "/** Sets the Root Motion Lock Type for the given Animation Sequence */" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ToolTip", "Sets the Root Motion Lock Type for the given Animation Sequence" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBlueprintLibrary, nullptr, "SetRootMotionLockType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType_Statics::AnimationBlueprintLibrary_eventSetRootMotionLockType_Parms), Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationBlueprintLibrary);
	UClass* Z_Construct_UClass_UAnimationBlueprintLibrary_NoRegister()
	{
		return UAnimationBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationBlueprintLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEvent, "AddAnimationNotifyEvent" }, // 2386790544
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyEventObject, "AddAnimationNotifyEventObject" }, // 3696993137
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEvent, "AddAnimationNotifyStateEvent" }, // 2625919704
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyStateEventObject, "AddAnimationNotifyStateEventObject" }, // 448029568
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationNotifyTrack, "AddAnimationNotifyTrack" }, // 497799670
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddAnimationSyncMarker, "AddAnimationSyncMarker" }, // 2964406397
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddCurve, "AddCurve" }, // 561311761
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKey, "AddFloatCurveKey" }, // 779264899
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddFloatCurveKeys, "AddFloatCurveKeys" }, // 109801729
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaData, "AddMetaData" }, // 2224743853
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddMetaDataObject, "AddMetaDataObject" }, // 2617483091
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddNodeAssetOverride, "AddNodeAssetOverride" }, // 3842205035
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKey, "AddTransformationCurveKey" }, // 3350201235
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddTransformationCurveKeys, "AddTransformationCurveKeys" }, // 3738417125
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKey, "AddVectorCurveKey" }, // 2693784856
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVectorCurveKeys, "AddVectorCurveKeys" }, // 4023741671
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_AddVirtualBone, "AddVirtualBone" }, // 3063294095
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_ContainsMetaDataOfClass, "ContainsMetaDataOfClass" }, // 718488320
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimationCurveNamesToSkeleton, "CopyAnimationCurveNamesToSkeleton" }, // 308363750
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_CopyAnimNotifiesFromSequence, "CopyAnimNotifiesFromSequence" }, // 2245557146
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesBoneNameExist, "DoesBoneNameExist" }, // 3283084312
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_DoesCurveExist, "DoesCurveExist" }, // 1885501673
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeAttributesAtTime, "EvaluateRootBoneTimecodeAttributesAtTime" }, // 3483963258
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_EvaluateRootBoneTimecodeSubframeAttributeAtTime, "EvaluateRootBoneTimecodeSubframeAttributeAtTime" }, // 1230412057
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_FinalizeBoneAnimation, "FinalizeBoneAnimation" }, // 1607600357
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_FindBonePathToRoot, "FindBonePathToRoot" }, // 3322916809
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveAnimationType, "GetAdditiveAnimationType" }, // 1511505556
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAdditiveBasePoseType, "GetAdditiveBasePoseType" }, // 862510581
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationCurveNames, "GetAnimationCurveNames" }, // 3802452878
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationGraphs, "GetAnimationGraphs" }, // 2677010564
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationInterpolationType, "GetAnimationInterpolationType" }, // 3151039612
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventNames, "GetAnimationNotifyEventNames" }, // 3547338999
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEvents, "GetAnimationNotifyEvents" }, // 3252439479
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyEventsForTrack, "GetAnimationNotifyEventsForTrack" }, // 3864791358
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationNotifyTrackNames, "GetAnimationNotifyTrackNames" }, // 3888982168
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkers, "GetAnimationSyncMarkers" }, // 3892256485
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationSyncMarkersForTrack, "GetAnimationSyncMarkersForTrack" }, // 2273365173
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimationTrackNames, "GetAnimationTrackNames" }, // 167526128
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventDuration, "GetAnimNotifyEventDuration" }, // 3961356959
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetAnimNotifyEventTriggerTime, "GetAnimNotifyEventTriggerTime" }, // 2418895249
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBoneCompressionSettings, "GetBoneCompressionSettings" }, // 878209123
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForFrame, "GetBonePoseForFrame" }, // 2967232219
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePoseForTime, "GetBonePoseForTime" }, // 216734457
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForFrame, "GetBonePosesForFrame" }, // 1729423392
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetBonePosesForTime, "GetBonePosesForTime" }, // 2300744898
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetCurveCompressionSettings, "GetCurveCompressionSettings" }, // 2741174046
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFloatKeys, "GetFloatKeys" }, // 1337778119
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetFrameAtTime, "GetFrameAtTime" }, // 3482255153
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaData, "GetMetaData" }, // 3636776268
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMetaDataOfClass, "GetMetaDataOfClass" }, // 3572743747
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetMontageSlotNames, "GetMontageSlotNames" }, // 1603243886
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNodesOfClass, "GetNodesOfClass" }, // 1104410439
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumFrames, "GetNumFrames" }, // 812047174
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetNumKeys, "GetNumKeys" }, // 181564788
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRateScale, "GetRateScale" }, // 1053463195
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackData, "GetRawTrackData" }, // 3360463737
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackPositionData, "GetRawTrackPositionData" }, // 2993989501
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackRotationData, "GetRawTrackRotationData" }, // 1943751508
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRawTrackScaleData, "GetRawTrackScaleData" }, // 2583171370
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetRootMotionLockType, "GetRootMotionLockType" }, // 2778122714
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetSequenceLength, "GetSequenceLength" }, // 1508320713
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTimeAtFrame, "GetTimeAtFrame" }, // 2518922646
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetTransformationKeys, "GetTransformationKeys" }, // 2376076030
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetUniqueMarkerNames, "GetUniqueMarkerNames" }, // 1883353032
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_GetVectorKeys, "GetVectorKeys" }, // 1425712022
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionEnabled, "IsRootMotionEnabled" }, // 2192807669
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_IsRootMotionLockForced, "IsRootMotionLockForced" }, // 279331686
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimationSyncMarkerName, "IsValidAnimationSyncMarkerName" }, // 1088429730
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidAnimNotifyTrackName, "IsValidAnimNotifyTrackName" }, // 4063649953
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidRawAnimationTrackName, "IsValidRawAnimationTrackName" }, // 3252112976
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_IsValidTime, "IsValidTime" }, // 2131293195
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationNotifyTracks, "RemoveAllAnimationNotifyTracks" }, // 722407348
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllAnimationSyncMarkers, "RemoveAllAnimationSyncMarkers" }, // 2328061220
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllBoneAnimation, "RemoveAllBoneAnimation" }, // 3179896096
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllCurveData, "RemoveAllCurveData" }, // 2538802158
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllMetaData, "RemoveAllMetaData" }, // 3704304689
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAllVirtualBones, "RemoveAllVirtualBones" }, // 797851462
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByName, "RemoveAnimationNotifyEventsByName" }, // 403723253
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyEventsByTrack, "RemoveAnimationNotifyEventsByTrack" }, // 221573489
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationNotifyTrack, "RemoveAnimationNotifyTrack" }, // 26271958
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByName, "RemoveAnimationSyncMarkersByName" }, // 572157587
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveAnimationSyncMarkersByTrack, "RemoveAnimationSyncMarkersByTrack" }, // 961699438
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveBoneAnimation, "RemoveBoneAnimation" }, // 3040585185
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveCurve, "RemoveCurve" }, // 2604259653
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaData, "RemoveMetaData" }, // 31400651
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveMetaDataOfClass, "RemoveMetaDataOfClass" }, // 2442654729
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBone, "RemoveVirtualBone" }, // 67504907
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_RemoveVirtualBones, "RemoveVirtualBones" }, // 509746517
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifies, "ReplaceAnimNotifies" }, // 1490379205
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_ReplaceAnimNotifyStates, "ReplaceAnimNotifyStates" }, // 3384618549
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveAnimationType, "SetAdditiveAnimationType" }, // 1480853001
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAdditiveBasePoseType, "SetAdditiveBasePoseType" }, // 2321306725
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_SetAnimationInterpolationType, "SetAnimationInterpolationType" }, // 3102043284
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_SetBoneCompressionSettings, "SetBoneCompressionSettings" }, // 2023117299
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_SetCurveCompressionSettings, "SetCurveCompressionSettings" }, // 2076618322
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_SetIsRootMotionLockForced, "SetIsRootMotionLockForced" }, // 2699095037
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRateScale, "SetRateScale" }, // 1011522028
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionEnabled, "SetRootMotionEnabled" }, // 3111591867
		{ &Z_Construct_UFunction_UAnimationBlueprintLibrary_SetRootMotionLockType, "SetRootMotionLockType" }, // 2930665184
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Blueprint library for altering and analyzing animation / skeletal data */" },
		{ "IncludePath", "AnimationBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/AnimationBlueprintLibrary.h" },
		{ "ScriptName", "AnimationLibrary" },
		{ "ToolTip", "Blueprint library for altering and analyzing animation / skeletal data" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationBlueprintLibrary_Statics::ClassParams = {
		&UAnimationBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnimationBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UAnimationBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationBlueprintLibrary.OuterSingleton;
	}
	template<> ANIMATIONBLUEPRINTLIBRARY_API UClass* StaticClass<UAnimationBlueprintLibrary>()
	{
		return UAnimationBlueprintLibrary::StaticClass();
	}
	UAnimationBlueprintLibrary::UAnimationBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationBlueprintLibrary);
	UAnimationBlueprintLibrary::~UAnimationBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_Statics::EnumInfo[] = {
		{ ESmartNameContainerType_StaticEnum, TEXT("ESmartNameContainerType"), &Z_Registration_Info_UEnum_ESmartNameContainerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2957752652U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationBlueprintLibrary, UAnimationBlueprintLibrary::StaticClass, TEXT("UAnimationBlueprintLibrary"), &Z_Registration_Info_UClass_UAnimationBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationBlueprintLibrary), 3847251639U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_1687506838(TEXT("/Script/AnimationBlueprintLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
