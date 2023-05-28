// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IKRigDefinition.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
#include "IKRigSkeleton.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigDefinition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigDefinition();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigDefinition_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigEffectorGoal();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigEffectorGoal_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver_NoRegister();
	IKRIG_API UEnum* Z_Construct_UEnum_IKRig_EIKRigGoalPreviewMode();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FBoneChain();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIKRigSkeleton();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRetargetDefinition();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References
#if WITH_EDITORONLY_DATA
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIKRigGoalPreviewMode;
	static UEnum* EIKRigGoalPreviewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIKRigGoalPreviewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIKRigGoalPreviewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IKRig_EIKRigGoalPreviewMode, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("EIKRigGoalPreviewMode"));
		}
		return Z_Registration_Info_UEnum_EIKRigGoalPreviewMode.OuterSingleton;
	}
	template<> IKRIG_API UEnum* StaticEnum<EIKRigGoalPreviewMode>()
	{
		return EIKRigGoalPreviewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_IKRig_EIKRigGoalPreviewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IKRig_EIKRigGoalPreviewMode_Statics::Enumerators[] = {
		{ "EIKRigGoalPreviewMode::Additive", (int64)EIKRigGoalPreviewMode::Additive },
		{ "EIKRigGoalPreviewMode::Absolute", (int64)EIKRigGoalPreviewMode::Absolute },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IKRig_EIKRigGoalPreviewMode_Statics::Enum_MetaDataParams[] = {
		{ "Absolute.DisplayName", "Absolute" },
		{ "Absolute.Name", "EIKRigGoalPreviewMode::Absolute" },
		{ "Additive.DisplayName", "Additive" },
		{ "Additive.Name", "EIKRigGoalPreviewMode::Additive" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IKRig_EIKRigGoalPreviewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		"EIKRigGoalPreviewMode",
		"EIKRigGoalPreviewMode",
		Z_Construct_UEnum_IKRig_EIKRigGoalPreviewMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_EIKRigGoalPreviewMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IKRig_EIKRigGoalPreviewMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_EIKRigGoalPreviewMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IKRig_EIKRigGoalPreviewMode()
	{
		if (!Z_Registration_Info_UEnum_EIKRigGoalPreviewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIKRigGoalPreviewMode.InnerSingleton, Z_Construct_UEnum_IKRig_EIKRigGoalPreviewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIKRigGoalPreviewMode.InnerSingleton;
	}
#endif // WITH_EDITORONLY_DATA
	void UIKRigEffectorGoal::StaticRegisterNativesUIKRigEffectorGoal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRigEffectorGoal);
	UClass* Z_Construct_UClass_UIKRigEffectorGoal_NoRegister()
	{
		return UIKRigEffectorGoal::StaticClass();
	}
	struct Z_Construct_UClass_UIKRigEffectorGoal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialTransform;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviewMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThicknessMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThicknessMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposePosition_MetaData[];
#endif
		static void NewProp_bExposePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposeRotation_MetaData[];
#endif
		static void NewProp_bExposeRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeRotation;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRigEffectorGoal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigEffectorGoal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IKRigDefinition.h" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_GoalName_MetaData[] = {
		{ "Category", "Goal Settings" },
		{ "Comment", "/** The name used to refer to this goal from outside systems.\n\x09 * This is the name to use when referring to this Goal from Blueprint, Anim Graph, Control Rig or IK Retargeter.*/" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "The name used to refer to this goal from outside systems.\nThis is the name to use when referring to this Goal from Blueprint, Anim Graph, Control Rig or IK Retargeter." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigEffectorGoal, GoalName), METADATA_PARAMS(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_GoalName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Goal Settings" },
		{ "Comment", "/** The name of the bone that this Goal is located at.*/" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "The name of the bone that this Goal is located at." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigEffectorGoal, BoneName), METADATA_PARAMS(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_PositionAlpha_MetaData[] = {
		{ "Category", "Goal Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1, default is 1. Blend between the input bone position (0.0) and the current goal position (1.0).*/" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "Range 0-1, default is 1. Blend between the input bone position (0.0) and the current goal position (1.0)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_PositionAlpha = { "PositionAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigEffectorGoal, PositionAlpha), METADATA_PARAMS(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_PositionAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_PositionAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_RotationAlpha_MetaData[] = {
		{ "Category", "Goal Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1, default is 1. Blend between the input bone rotation (0.0) and the current goal rotation (1.0).*/" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "Range 0-1, default is 1. Blend between the input bone rotation (0.0) and the current goal rotation (1.0)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigEffectorGoal, RotationAlpha), METADATA_PARAMS(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_RotationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_RotationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_CurrentTransform_MetaData[] = {
		{ "Category", "Goal Settings" },
		{ "Comment", "/** The current transform of this Goal, in the Global Space of the character.*/" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "The current transform of this Goal, in the Global Space of the character." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_CurrentTransform = { "CurrentTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigEffectorGoal, CurrentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_CurrentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_CurrentTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_InitialTransform_MetaData[] = {
		{ "Category", "Goal Settings" },
		{ "Comment", "/** The initial transform of this Goal, as defined by the initial transform of the Goal's bone in the retarget pose.*/" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "The initial transform of this Goal, as defined by the initial transform of the Goal's bone in the retarget pose." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_InitialTransform = { "InitialTransform", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigEffectorGoal, InitialTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_InitialTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_InitialTransform_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_PreviewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_PreviewMode_MetaData[] = {
		{ "Category", "Goal Settings" },
		{ "Comment", "/** Effects how this Goal transform is previewed in the IK Rig editor.\n\x09* \"Additive\" interprets the Goal transform as being relative to the input pose. Useful for previewing animations.\n\x09* \"Absolute\" pins the Goal transform to the Gizmo in the viewport.\n\x09*/" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "Effects how this Goal transform is previewed in the IK Rig editor.\n\"Additive\" interprets the Goal transform as being relative to the input pose. Useful for previewing animations.\n\"Absolute\" pins the Goal transform to the Gizmo in the viewport." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_PreviewMode = { "PreviewMode", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigEffectorGoal, PreviewMode), Z_Construct_UEnum_IKRig_EIKRigGoalPreviewMode, METADATA_PARAMS(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_PreviewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_PreviewMode_MetaData)) }; // 609866128
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_SizeMultiplier_MetaData[] = {
		{ "Category", "Viewport Goal Settings" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/**The size of the Goal gizmo drawing in the editor viewport.*/" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "The size of the Goal gizmo drawing in the editor viewport." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_SizeMultiplier = { "SizeMultiplier", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigEffectorGoal, SizeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_SizeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_SizeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_ThicknessMultiplier_MetaData[] = {
		{ "Category", "Viewport Goal Settings" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**The thickness of the Goal gizmo drawing in the editor viewport.*/" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "The thickness of the Goal gizmo drawing in the editor viewport." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_ThicknessMultiplier = { "ThicknessMultiplier", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigEffectorGoal, ThicknessMultiplier), METADATA_PARAMS(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_ThicknessMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_ThicknessMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_bExposePosition_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/** Should position data be exposed in Blueprint */" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "Should position data be exposed in Blueprint" },
	};
#endif
	void Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_bExposePosition_SetBit(void* Obj)
	{
		((UIKRigEffectorGoal*)Obj)->bExposePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_bExposePosition = { "bExposePosition", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRigEffectorGoal), &Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_bExposePosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_bExposePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_bExposePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_bExposeRotation_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/** Should rotation data be exposed in Blueprint */" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "Should rotation data be exposed in Blueprint" },
	};
#endif
	void Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_bExposeRotation_SetBit(void* Obj)
	{
		((UIKRigEffectorGoal*)Obj)->bExposeRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_bExposeRotation = { "bExposeRotation", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRigEffectorGoal), &Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_bExposeRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_bExposeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_bExposeRotation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRigEffectorGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_PositionAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_RotationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_CurrentTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_InitialTransform,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_PreviewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_PreviewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_SizeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_ThicknessMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_bExposePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigEffectorGoal_Statics::NewProp_bExposeRotation,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRigEffectorGoal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRigEffectorGoal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRigEffectorGoal_Statics::ClassParams = {
		&UIKRigEffectorGoal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRigEffectorGoal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigEffectorGoal_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRigEffectorGoal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigEffectorGoal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRigEffectorGoal()
	{
		if (!Z_Registration_Info_UClass_UIKRigEffectorGoal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRigEffectorGoal.OuterSingleton, Z_Construct_UClass_UIKRigEffectorGoal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRigEffectorGoal.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRigEffectorGoal>()
	{
		return UIKRigEffectorGoal::StaticClass();
	}
	UIKRigEffectorGoal::UIKRigEffectorGoal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRigEffectorGoal);
	UIKRigEffectorGoal::~UIKRigEffectorGoal() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneChain;
class UScriptStruct* FBoneChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneChain, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("BoneChain"));
	}
	return Z_Registration_Info_UScriptStruct_BoneChain.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FBoneChain>()
{
	return FBoneChain::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoneChain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKGoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IKGoalName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneChain_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneChain>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_ChainName_MetaData[] = {
		{ "Category", "BoneChain" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_ChainName = { "ChainName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneChain, ChainName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_ChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_ChainName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_StartBone_MetaData[] = {
		{ "Category", "BoneChain" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneChain, StartBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_StartBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_StartBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_EndBone_MetaData[] = {
		{ "Category", "BoneChain" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_EndBone = { "EndBone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneChain, EndBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_EndBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_EndBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_IKGoalName_MetaData[] = {
		{ "Category", "BoneChain" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_IKGoalName = { "IKGoalName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneChain, IKGoalName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_IKGoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_IKGoalName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_ChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_StartBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_EndBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneChain_Statics::NewProp_IKGoalName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		&NewStructOps,
		"BoneChain",
		sizeof(FBoneChain),
		alignof(FBoneChain),
		Z_Construct_UScriptStruct_FBoneChain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneChain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneChain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneChain()
	{
		if (!Z_Registration_Info_UScriptStruct_BoneChain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneChain.InnerSingleton, Z_Construct_UScriptStruct_FBoneChain_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoneChain.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RetargetDefinition;
class UScriptStruct* FRetargetDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RetargetDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RetargetDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRetargetDefinition, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("RetargetDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_RetargetDefinition.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FRetargetDefinition>()
{
	return FRetargetDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRetargetDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RootBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneChains_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneChains_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneChains;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRetargetDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRetargetDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetDefinition_Statics::NewProp_RootBone_MetaData[] = {
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRetargetDefinition_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRetargetDefinition, RootBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRetargetDefinition_Statics::NewProp_RootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetDefinition_Statics::NewProp_RootBone_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRetargetDefinition_Statics::NewProp_BoneChains_Inner = { "BoneChains", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneChain, METADATA_PARAMS(nullptr, 0) }; // 732417858
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetDefinition_Statics::NewProp_BoneChains_MetaData[] = {
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRetargetDefinition_Statics::NewProp_BoneChains = { "BoneChains", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRetargetDefinition, BoneChains), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRetargetDefinition_Statics::NewProp_BoneChains_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetDefinition_Statics::NewProp_BoneChains_MetaData)) }; // 732417858
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRetargetDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetDefinition_Statics::NewProp_RootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetDefinition_Statics::NewProp_BoneChains_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetDefinition_Statics::NewProp_BoneChains,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRetargetDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		&NewStructOps,
		"RetargetDefinition",
		sizeof(FRetargetDefinition),
		alignof(FRetargetDefinition),
		Z_Construct_UScriptStruct_FRetargetDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRetargetDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRetargetDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_RetargetDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RetargetDefinition.InnerSingleton, Z_Construct_UScriptStruct_FRetargetDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RetargetDefinition.InnerSingleton;
	}
	void UIKRigDefinition::StaticRegisterNativesUIKRigDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRigDefinition);
	UClass* Z_Construct_UClass_UIKRigDefinition_NoRegister()
	{
		return UIKRigDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UIKRigDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoneSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawGoals_MetaData[];
#endif
		static void NewProp_DrawGoals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawGoals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GoalSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GoalThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Controller;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Goals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Goals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Goals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Solvers_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Solvers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Solvers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Solvers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetDefinition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRigDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigDefinition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IKRigDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "Category", "PreviewMesh" },
		{ "Comment", "/** The skeletal mesh to run the IK solve on (loaded into viewport).\n\x09* NOTE: you can assign ANY Skeletal Mesh to apply the IK Rig to. Compatibility is determined when a new mesh is assigned\n\x09* by comparing it's hierarchy with the goals, solvers and bone settings required by the rig. See output log for details. */" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "The skeletal mesh to run the IK solve on (loaded into viewport).\nNOTE: you can assign ANY Skeletal Mesh to apply the IK Rig to. Compatibility is determined when a new mesh is assigned\nby comparing it's hierarchy with the goals, solvers and bone settings required by the rig. See output log for details." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0014010000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigDefinition, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_PreviewSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_BoneSize_MetaData[] = {
		{ "Comment", "/**The size of the Bones in the editor viewport. This is set by callbacks from the viewport Character>Bones menu*/" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "The size of the Bones in the editor viewport. This is set by callbacks from the viewport Character>Bones menu" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_BoneSize = { "BoneSize", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigDefinition, BoneSize), METADATA_PARAMS(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_BoneSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_BoneSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_DrawGoals_MetaData[] = {
		{ "Category", "Viewport Goal Settings" },
		{ "Comment", "/**Draw bones in the viewport.*/" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "Draw bones in the viewport." },
	};
#endif
	void Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_DrawGoals_SetBit(void* Obj)
	{
		((UIKRigDefinition*)Obj)->DrawGoals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_DrawGoals = { "DrawGoals", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRigDefinition), &Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_DrawGoals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_DrawGoals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_DrawGoals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_GoalSize_MetaData[] = {
		{ "Category", "Viewport Goal Settings" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/**The size of the Goals in the editor viewport.*/" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "The size of the Goals in the editor viewport." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_GoalSize = { "GoalSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigDefinition, GoalSize), METADATA_PARAMS(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_GoalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_GoalSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_GoalThickness_MetaData[] = {
		{ "Category", "Viewport Goal Settings" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** The thickness of the Goals in the editor viewport.*/" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "The thickness of the Goals in the editor viewport." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_GoalThickness = { "GoalThickness", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigDefinition, GoalThickness), METADATA_PARAMS(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_GoalThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_GoalThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Controller_MetaData[] = {
		{ "Comment", "/** The controller responsible for managing this asset's data (all editor mutation goes through this) */" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "The controller responsible for managing this asset's data (all editor mutation goes through this)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigDefinition, Controller), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Controller_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Comment", "/** hierarchy and bone-pose transforms */" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "hierarchy and bone-pose transforms" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigDefinition, Skeleton), Z_Construct_UScriptStruct_FIKRigSkeleton, METADATA_PARAMS(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Skeleton_MetaData)) }; // 2842946516
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Goals_Inner = { "Goals", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UIKRigEffectorGoal_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Goals_MetaData[] = {
		{ "Comment", "/** goals, used as effectors by solvers that support them */" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "goals, used as effectors by solvers that support them" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Goals = { "Goals", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigDefinition, Goals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Goals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Goals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Solvers_Inner_MetaData[] = {
		{ "Comment", "/** polymorphic stack of solvers, executed in serial fashion where output of prior solve is input to the next */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "polymorphic stack of solvers, executed in serial fashion where output of prior solve is input to the next" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Solvers_Inner = { "Solvers", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UIKRigSolver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Solvers_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Solvers_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Solvers_MetaData[] = {
		{ "Comment", "/** polymorphic stack of solvers, executed in serial fashion where output of prior solve is input to the next */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "polymorphic stack of solvers, executed in serial fashion where output of prior solve is input to the next" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Solvers = { "Solvers", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigDefinition, Solvers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Solvers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Solvers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_RetargetDefinition_MetaData[] = {
		{ "Comment", "/** bone chains for IK Retargeter */" },
		{ "ModuleRelativePath", "Public/IKRigDefinition.h" },
		{ "ToolTip", "bone chains for IK Retargeter" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_RetargetDefinition = { "RetargetDefinition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigDefinition, RetargetDefinition), Z_Construct_UScriptStruct_FRetargetDefinition, METADATA_PARAMS(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_RetargetDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_RetargetDefinition_MetaData)) }; // 2977963424
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRigDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_PreviewSkeletalMesh,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_BoneSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_DrawGoals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_GoalSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_GoalThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Controller,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Goals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Goals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Solvers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_Solvers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigDefinition_Statics::NewProp_RetargetDefinition,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIKRigDefinition_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UIKRigDefinition, IInterface_PreviewMeshProvider), false },  // 3026411520
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRigDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRigDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRigDefinition_Statics::ClassParams = {
		&UIKRigDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRigDefinition_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigDefinition_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRigDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRigDefinition()
	{
		if (!Z_Registration_Info_UClass_UIKRigDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRigDefinition.OuterSingleton, Z_Construct_UClass_UIKRigDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRigDefinition.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRigDefinition>()
	{
		return UIKRigDefinition::StaticClass();
	}
	UIKRigDefinition::UIKRigDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRigDefinition);
	UIKRigDefinition::~UIKRigDefinition() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UIKRigDefinition)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigDefinition_h_Statics
	{
#if WITH_EDITORONLY_DATA
		static const FEnumRegisterCompiledInInfo EnumInfo[];
#endif
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
#if WITH_EDITORONLY_DATA
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigDefinition_h_Statics::EnumInfo[] = {
		{ EIKRigGoalPreviewMode_StaticEnum, TEXT("EIKRigGoalPreviewMode"), &Z_Registration_Info_UEnum_EIKRigGoalPreviewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 609866128U) },
	};
#endif
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigDefinition_h_Statics::ScriptStructInfo[] = {
		{ FBoneChain::StaticStruct, Z_Construct_UScriptStruct_FBoneChain_Statics::NewStructOps, TEXT("BoneChain"), &Z_Registration_Info_UScriptStruct_BoneChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneChain), 732417858U) },
		{ FRetargetDefinition::StaticStruct, Z_Construct_UScriptStruct_FRetargetDefinition_Statics::NewStructOps, TEXT("RetargetDefinition"), &Z_Registration_Info_UScriptStruct_RetargetDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRetargetDefinition), 2977963424U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRigEffectorGoal, UIKRigEffectorGoal::StaticClass, TEXT("UIKRigEffectorGoal"), &Z_Registration_Info_UClass_UIKRigEffectorGoal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRigEffectorGoal), 3473057856U) },
		{ Z_Construct_UClass_UIKRigDefinition, UIKRigDefinition::StaticClass, TEXT("UIKRigDefinition"), &Z_Registration_Info_UClass_UIKRigDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRigDefinition), 1007303746U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigDefinition_h_2548286905(TEXT("/Script/IKRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigDefinition_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigDefinition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigDefinition_h_Statics::ScriptStructInfo),
		IF_WITH_EDITORONLY_DATA(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigDefinition_h_Statics::EnumInfo, nullptr), IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_IKRigDefinition_h_Statics::EnumInfo), 0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
