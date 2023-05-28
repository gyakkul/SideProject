// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorGizmos/TransformGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformGizmo() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxisList();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformGizmo();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformGizmo_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformGizmoSource_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformMode();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_EditorInteractiveToolsFramework_ETransformGizmoPartIdentifier();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoConstantFrameAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementArrow_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBox_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCircle_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementGroup_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementHitMultiTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementRectangle_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementTorus_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoObjectModifyStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoViewContext_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorInteractiveToolsFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransformGizmoPartIdentifier;
	static UEnum* ETransformGizmoPartIdentifier_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransformGizmoPartIdentifier.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransformGizmoPartIdentifier.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EditorInteractiveToolsFramework_ETransformGizmoPartIdentifier, (UObject*)Z_Construct_UPackage__Script_EditorInteractiveToolsFramework(), TEXT("ETransformGizmoPartIdentifier"));
		}
		return Z_Registration_Info_UEnum_ETransformGizmoPartIdentifier.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ETransformGizmoPartIdentifier>()
	{
		return ETransformGizmoPartIdentifier_StaticEnum();
	}
	struct Z_Construct_UEnum_EditorInteractiveToolsFramework_ETransformGizmoPartIdentifier_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EditorInteractiveToolsFramework_ETransformGizmoPartIdentifier_Statics::Enumerators[] = {
		{ "ETransformGizmoPartIdentifier::Default", (int64)ETransformGizmoPartIdentifier::Default },
		{ "ETransformGizmoPartIdentifier::TranslateAll", (int64)ETransformGizmoPartIdentifier::TranslateAll },
		{ "ETransformGizmoPartIdentifier::TranslateXAxis", (int64)ETransformGizmoPartIdentifier::TranslateXAxis },
		{ "ETransformGizmoPartIdentifier::TranslateYAxis", (int64)ETransformGizmoPartIdentifier::TranslateYAxis },
		{ "ETransformGizmoPartIdentifier::TranslateZAxis", (int64)ETransformGizmoPartIdentifier::TranslateZAxis },
		{ "ETransformGizmoPartIdentifier::TranslateXYPlanar", (int64)ETransformGizmoPartIdentifier::TranslateXYPlanar },
		{ "ETransformGizmoPartIdentifier::TranslateYZPlanar", (int64)ETransformGizmoPartIdentifier::TranslateYZPlanar },
		{ "ETransformGizmoPartIdentifier::TranslateXZPlanar", (int64)ETransformGizmoPartIdentifier::TranslateXZPlanar },
		{ "ETransformGizmoPartIdentifier::TranslateScreenSpace", (int64)ETransformGizmoPartIdentifier::TranslateScreenSpace },
		{ "ETransformGizmoPartIdentifier::RotateAll", (int64)ETransformGizmoPartIdentifier::RotateAll },
		{ "ETransformGizmoPartIdentifier::RotateXAxis", (int64)ETransformGizmoPartIdentifier::RotateXAxis },
		{ "ETransformGizmoPartIdentifier::RotateYAxis", (int64)ETransformGizmoPartIdentifier::RotateYAxis },
		{ "ETransformGizmoPartIdentifier::RotateZAxis", (int64)ETransformGizmoPartIdentifier::RotateZAxis },
		{ "ETransformGizmoPartIdentifier::RotateScreenSpace", (int64)ETransformGizmoPartIdentifier::RotateScreenSpace },
		{ "ETransformGizmoPartIdentifier::RotateArcball", (int64)ETransformGizmoPartIdentifier::RotateArcball },
		{ "ETransformGizmoPartIdentifier::RotateArcballInnerCircle", (int64)ETransformGizmoPartIdentifier::RotateArcballInnerCircle },
		{ "ETransformGizmoPartIdentifier::ScaleAll", (int64)ETransformGizmoPartIdentifier::ScaleAll },
		{ "ETransformGizmoPartIdentifier::ScaleXAxis", (int64)ETransformGizmoPartIdentifier::ScaleXAxis },
		{ "ETransformGizmoPartIdentifier::ScaleYAxis", (int64)ETransformGizmoPartIdentifier::ScaleYAxis },
		{ "ETransformGizmoPartIdentifier::ScaleZAxis", (int64)ETransformGizmoPartIdentifier::ScaleZAxis },
		{ "ETransformGizmoPartIdentifier::ScaleXYPlanar", (int64)ETransformGizmoPartIdentifier::ScaleXYPlanar },
		{ "ETransformGizmoPartIdentifier::ScaleYZPlanar", (int64)ETransformGizmoPartIdentifier::ScaleYZPlanar },
		{ "ETransformGizmoPartIdentifier::ScaleXZPlanar", (int64)ETransformGizmoPartIdentifier::ScaleXZPlanar },
		{ "ETransformGizmoPartIdentifier::ScaleUniform", (int64)ETransformGizmoPartIdentifier::ScaleUniform },
		{ "ETransformGizmoPartIdentifier::Max", (int64)ETransformGizmoPartIdentifier::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EditorInteractiveToolsFramework_ETransformGizmoPartIdentifier_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//\n// Part identifiers are used to associate transform gizmo parts with their corresponding representation \n// in the render and hit target. The render and hit target should use the default identifier for \n// any of their internal elements that do not correspond to transform gizmo parts, for example non-hittable\n// visual guide elements.\n//\n" },
		{ "Default.Name", "ETransformGizmoPartIdentifier::Default" },
		{ "Max.Name", "ETransformGizmoPartIdentifier::Max" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "RotateAll.Name", "ETransformGizmoPartIdentifier::RotateAll" },
		{ "RotateArcball.Name", "ETransformGizmoPartIdentifier::RotateArcball" },
		{ "RotateArcballInnerCircle.Name", "ETransformGizmoPartIdentifier::RotateArcballInnerCircle" },
		{ "RotateScreenSpace.Name", "ETransformGizmoPartIdentifier::RotateScreenSpace" },
		{ "RotateXAxis.Name", "ETransformGizmoPartIdentifier::RotateXAxis" },
		{ "RotateYAxis.Name", "ETransformGizmoPartIdentifier::RotateYAxis" },
		{ "RotateZAxis.Name", "ETransformGizmoPartIdentifier::RotateZAxis" },
		{ "ScaleAll.Name", "ETransformGizmoPartIdentifier::ScaleAll" },
		{ "ScaleUniform.Name", "ETransformGizmoPartIdentifier::ScaleUniform" },
		{ "ScaleXAxis.Name", "ETransformGizmoPartIdentifier::ScaleXAxis" },
		{ "ScaleXYPlanar.Name", "ETransformGizmoPartIdentifier::ScaleXYPlanar" },
		{ "ScaleXZPlanar.Name", "ETransformGizmoPartIdentifier::ScaleXZPlanar" },
		{ "ScaleYAxis.Name", "ETransformGizmoPartIdentifier::ScaleYAxis" },
		{ "ScaleYZPlanar.Name", "ETransformGizmoPartIdentifier::ScaleYZPlanar" },
		{ "ScaleZAxis.Name", "ETransformGizmoPartIdentifier::ScaleZAxis" },
		{ "ToolTip", "Part identifiers are used to associate transform gizmo parts with their corresponding representation\nin the render and hit target. The render and hit target should use the default identifier for\nany of their internal elements that do not correspond to transform gizmo parts, for example non-hittable\nvisual guide elements." },
		{ "TranslateAll.Name", "ETransformGizmoPartIdentifier::TranslateAll" },
		{ "TranslateScreenSpace.Name", "ETransformGizmoPartIdentifier::TranslateScreenSpace" },
		{ "TranslateXAxis.Name", "ETransformGizmoPartIdentifier::TranslateXAxis" },
		{ "TranslateXYPlanar.Name", "ETransformGizmoPartIdentifier::TranslateXYPlanar" },
		{ "TranslateXZPlanar.Name", "ETransformGizmoPartIdentifier::TranslateXZPlanar" },
		{ "TranslateYAxis.Name", "ETransformGizmoPartIdentifier::TranslateYAxis" },
		{ "TranslateYZPlanar.Name", "ETransformGizmoPartIdentifier::TranslateYZPlanar" },
		{ "TranslateZAxis.Name", "ETransformGizmoPartIdentifier::TranslateZAxis" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EditorInteractiveToolsFramework_ETransformGizmoPartIdentifier_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
		nullptr,
		"ETransformGizmoPartIdentifier",
		"ETransformGizmoPartIdentifier",
		Z_Construct_UEnum_EditorInteractiveToolsFramework_ETransformGizmoPartIdentifier_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EditorInteractiveToolsFramework_ETransformGizmoPartIdentifier_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EditorInteractiveToolsFramework_ETransformGizmoPartIdentifier_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EditorInteractiveToolsFramework_ETransformGizmoPartIdentifier_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EditorInteractiveToolsFramework_ETransformGizmoPartIdentifier()
	{
		if (!Z_Registration_Info_UEnum_ETransformGizmoPartIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransformGizmoPartIdentifier.InnerSingleton, Z_Construct_UEnum_EditorInteractiveToolsFramework_ETransformGizmoPartIdentifier_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransformGizmoPartIdentifier.InnerSingleton;
	}
	void UTransformGizmo::StaticRegisterNativesUTransformGizmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransformGizmo);
	UClass* Z_Construct_UClass_UTransformGizmo_NoRegister()
	{
		return UTransformGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UTransformGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HitTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MouseBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmoSource_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_TransformGizmoSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoElementRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoElementRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoViewContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoViewContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInInteraction_MetaData[];
#endif
		static void NewProp_bInInteraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToWorldGrid_MetaData[];
#endif
		static void NewProp_bSnapToWorldGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToWorldGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGridSizeIsExplicit_MetaData[];
#endif
		static void NewProp_bGridSizeIsExplicit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGridSizeIsExplicit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExplicitGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotationGridSizeIsExplicit_MetaData[];
#endif
		static void NewProp_bRotationGridSizeIsExplicit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotationGridSizeIsExplicit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitRotationGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExplicitRotationGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToWorldRotGrid_MetaData[];
#endif
		static void NewProp_bSnapToWorldRotGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToWorldRotGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslateXAxisElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslateXAxisElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslateYAxisElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslateYAxisElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslateZAxisElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslateZAxisElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslateScreenSpaceElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslateScreenSpaceElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslatePlanarXYElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslatePlanarXYElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslatePlanarYZElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslatePlanarYZElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslatePlanarXZElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslatePlanarXZElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateXAxisElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotateXAxisElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateYAxisElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotateYAxisElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateZAxisElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotateZAxisElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateOuterCircleElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotateOuterCircleElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateArcballOuterElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotateArcballOuterElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateArcballInnerElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotateArcballInnerElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateScreenSpaceElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotateScreenSpaceElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleXAxisElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScaleXAxisElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleYAxisElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScaleYAxisElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleZAxisElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScaleZAxisElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalePlanarXYElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScalePlanarXYElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalePlanarYZElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScalePlanarYZElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalePlanarXZElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScalePlanarXZElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleUniformElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScaleUniformElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraAxisSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraAxisSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StateTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransparentVertexColorMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransparentVertexColorMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GridMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisMaterialX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AxisMaterialX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisMaterialY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AxisMaterialY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisMaterialZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AxisMaterialZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAxisMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentAxisMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GreyMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GreyMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WhiteMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpaquePlaneMaterialXY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OpaquePlaneMaterialXY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ScaleMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentTransform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAxisToDraw_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentAxisToDraw;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LastHitPart_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastHitPart_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LastHitPart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAxisList_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionAxisList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAxisOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionAxisOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAxisDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionAxisDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAxisStartParam_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionAxisStartParam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAxisCurrParam_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionAxisCurrParam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionPlanarOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionPlanarOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionPlanarNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionPlanarNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionPlanarAxisX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionPlanarAxisX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionPlanarAxisY_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionPlanarAxisY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionPlanarStartPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionPlanarStartPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionPlanarCurrPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionPlanarCurrPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStartAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionStartAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCurrAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionCurrAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionScreenAxisDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionScreenAxisDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionScreenStartPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionScreenStartPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionScreenEndPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionScreenEndPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionScreenCurrPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionScreenCurrPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransformGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UTransformGizmo provides standard Transformation Gizmo interactions,\n * applied to a UTransformProxy target object. By default the Gizmo will be\n * a standard XYZ translate/rotate Gizmo (axis and plane translation).\n */" },
		{ "IncludePath", "EditorGizmos/TransformGizmo.h" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "UTransformGizmo provides standard Transformation Gizmo interactions,\napplied to a UTransformProxy target object. By default the Gizmo will be\na standard XYZ translate/rotate Gizmo (axis and plane translation)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ActiveTarget_MetaData[] = {
		{ "Comment", "/** The active target object for the Gizmo */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "The active target object for the Gizmo" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ActiveTarget = { "ActiveTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, ActiveTarget), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ActiveTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ActiveTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_HitTarget_MetaData[] = {
		{ "Comment", "/** The hit target object */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "The hit target object" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_HitTarget = { "HitTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, HitTarget), Z_Construct_UClass_UGizmoElementHitMultiTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_HitTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_HitTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_MouseBehavior_MetaData[] = {
		{ "Comment", "/** The mouse click behavior of the gizmo is accessible so that it can be modified to use different mouse keys. */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "The mouse click behavior of the gizmo is accessible so that it can be modified to use different mouse keys." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_MouseBehavior = { "MouseBehavior", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, MouseBehavior), Z_Construct_UClass_UClickDragInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_MouseBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_MouseBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TransformGizmoSource_MetaData[] = {
		{ "Comment", "/** Transform Gizmo Source */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Transform Gizmo Source" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TransformGizmoSource = { "TransformGizmoSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, TransformGizmoSource), Z_Construct_UClass_UTransformGizmoSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TransformGizmoSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TransformGizmoSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GizmoElementRoot_MetaData[] = {
		{ "Comment", "/** Root of renderable gizmo elements */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Root of renderable gizmo elements" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GizmoElementRoot = { "GizmoElementRoot", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, GizmoElementRoot), Z_Construct_UClass_UGizmoElementGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GizmoElementRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GizmoElementRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GizmoViewContext_MetaData[] = {
		{ "Comment", "/** Gizmo view context, needed for screen space interactions */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Gizmo view context, needed for screen space interactions" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GizmoViewContext = { "GizmoViewContext", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, GizmoViewContext), Z_Construct_UClass_UGizmoViewContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GizmoViewContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GizmoViewContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bVisible_MetaData[] = {
		{ "Comment", "/** Whether gizmo is visible. */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Whether gizmo is visible." },
	};
#endif
	void Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((UTransformGizmo*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTransformGizmo), &Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bInInteraction_MetaData[] = {
		{ "Comment", "/** Whether gizmo is interacting. */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Whether gizmo is interacting." },
	};
#endif
	void Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bInInteraction_SetBit(void* Obj)
	{
		((UTransformGizmo*)Obj)->bInInteraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bInInteraction = { "bInInteraction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTransformGizmo), &Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bInInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bInInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bInInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bSnapToWorldGrid_MetaData[] = {
		{ "Comment", "/** If true, then when using world frame, Axis and Plane translation snap to the world grid via the ContextQueriesAPI (in PositionSnapFunction) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "If true, then when using world frame, Axis and Plane translation snap to the world grid via the ContextQueriesAPI (in PositionSnapFunction)" },
	};
#endif
	void Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bSnapToWorldGrid_SetBit(void* Obj)
	{
		((UTransformGizmo*)Obj)->bSnapToWorldGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bSnapToWorldGrid = { "bSnapToWorldGrid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTransformGizmo), &Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bSnapToWorldGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bSnapToWorldGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bSnapToWorldGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bGridSizeIsExplicit_MetaData[] = {
		{ "Comment", "/**\n\x09 * Optional grid size which overrides the Context Grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Optional grid size which overrides the Context Grid" },
	};
#endif
	void Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bGridSizeIsExplicit_SetBit(void* Obj)
	{
		((UTransformGizmo*)Obj)->bGridSizeIsExplicit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bGridSizeIsExplicit = { "bGridSizeIsExplicit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTransformGizmo), &Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bGridSizeIsExplicit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bGridSizeIsExplicit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bGridSizeIsExplicit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ExplicitGridSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ExplicitGridSize = { "ExplicitGridSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, ExplicitGridSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ExplicitGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ExplicitGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit_MetaData[] = {
		{ "Comment", "/**\n\x09 * Optional grid size which overrides the Context Rotation Grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Optional grid size which overrides the Context Rotation Grid" },
	};
#endif
	void Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit_SetBit(void* Obj)
	{
		((UTransformGizmo*)Obj)->bRotationGridSizeIsExplicit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit = { "bRotationGridSizeIsExplicit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTransformGizmo), &Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ExplicitRotationGridSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ExplicitRotationGridSize = { "ExplicitRotationGridSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, ExplicitRotationGridSize), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ExplicitRotationGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ExplicitRotationGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, then when using world frame, Axis and Plane translation snap to the world grid via the ContextQueriesAPI (in RotationSnapFunction)\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "If true, then when using world frame, Axis and Plane translation snap to the world grid via the ContextQueriesAPI (in RotationSnapFunction)" },
	};
#endif
	void Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid_SetBit(void* Obj)
	{
		((UTransformGizmo*)Obj)->bSnapToWorldRotGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid = { "bSnapToWorldRotGrid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTransformGizmo), &Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateXAxisElement_MetaData[] = {
		{ "Comment", "/** Translate X Axis */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Translate X Axis" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateXAxisElement = { "TranslateXAxisElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, TranslateXAxisElement), Z_Construct_UClass_UGizmoElementArrow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateXAxisElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateXAxisElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateYAxisElement_MetaData[] = {
		{ "Comment", "/** Translate Y Axis */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Translate Y Axis" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateYAxisElement = { "TranslateYAxisElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, TranslateYAxisElement), Z_Construct_UClass_UGizmoElementArrow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateYAxisElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateYAxisElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateZAxisElement_MetaData[] = {
		{ "Comment", "/** Translate Z Axis */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Translate Z Axis" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateZAxisElement = { "TranslateZAxisElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, TranslateZAxisElement), Z_Construct_UClass_UGizmoElementArrow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateZAxisElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateZAxisElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateScreenSpaceElement_MetaData[] = {
		{ "Comment", "/** Translate screen-space */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Translate screen-space" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateScreenSpaceElement = { "TranslateScreenSpaceElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, TranslateScreenSpaceElement), Z_Construct_UClass_UGizmoElementRectangle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateScreenSpaceElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateScreenSpaceElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslatePlanarXYElement_MetaData[] = {
		{ "Comment", "/** Translate planar XY handle */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Translate planar XY handle" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslatePlanarXYElement = { "TranslatePlanarXYElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, TranslatePlanarXYElement), Z_Construct_UClass_UGizmoElementRectangle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslatePlanarXYElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslatePlanarXYElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslatePlanarYZElement_MetaData[] = {
		{ "Comment", "/** Translate planar YZ handle */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Translate planar YZ handle" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslatePlanarYZElement = { "TranslatePlanarYZElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, TranslatePlanarYZElement), Z_Construct_UClass_UGizmoElementRectangle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslatePlanarYZElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslatePlanarYZElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslatePlanarXZElement_MetaData[] = {
		{ "Comment", "/** Translate planar XZ handle */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Translate planar XZ handle" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslatePlanarXZElement = { "TranslatePlanarXZElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, TranslatePlanarXZElement), Z_Construct_UClass_UGizmoElementRectangle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslatePlanarXZElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslatePlanarXZElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateXAxisElement_MetaData[] = {
		{ "Comment", "/** Rotate X Axis */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Rotate X Axis" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateXAxisElement = { "RotateXAxisElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, RotateXAxisElement), Z_Construct_UClass_UGizmoElementTorus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateXAxisElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateXAxisElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateYAxisElement_MetaData[] = {
		{ "Comment", "/** Rotate Y Axis */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Rotate Y Axis" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateYAxisElement = { "RotateYAxisElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, RotateYAxisElement), Z_Construct_UClass_UGizmoElementTorus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateYAxisElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateYAxisElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateZAxisElement_MetaData[] = {
		{ "Comment", "/** Rotate Z Axis */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Rotate Z Axis" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateZAxisElement = { "RotateZAxisElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, RotateZAxisElement), Z_Construct_UClass_UGizmoElementTorus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateZAxisElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateZAxisElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateOuterCircleElement_MetaData[] = {
		{ "Comment", "/** Rotate outer circle */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Rotate outer circle" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateOuterCircleElement = { "RotateOuterCircleElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, RotateOuterCircleElement), Z_Construct_UClass_UGizmoElementCircle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateOuterCircleElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateOuterCircleElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateArcballOuterElement_MetaData[] = {
		{ "Comment", "/** Rotate arcball outer circle */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Rotate arcball outer circle" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateArcballOuterElement = { "RotateArcballOuterElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, RotateArcballOuterElement), Z_Construct_UClass_UGizmoElementCircle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateArcballOuterElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateArcballOuterElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateArcballInnerElement_MetaData[] = {
		{ "Comment", "/** Rotate arcball inner circle */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Rotate arcball inner circle" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateArcballInnerElement = { "RotateArcballInnerElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, RotateArcballInnerElement), Z_Construct_UClass_UGizmoElementCircle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateArcballInnerElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateArcballInnerElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateScreenSpaceElement_MetaData[] = {
		{ "Comment", "/** Rotate screen space circle */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Rotate screen space circle" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateScreenSpaceElement = { "RotateScreenSpaceElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, RotateScreenSpaceElement), Z_Construct_UClass_UGizmoElementCircle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateScreenSpaceElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateScreenSpaceElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleXAxisElement_MetaData[] = {
		{ "Comment", "/** Scale X Axis object */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Scale X Axis object" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleXAxisElement = { "ScaleXAxisElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, ScaleXAxisElement), Z_Construct_UClass_UGizmoElementArrow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleXAxisElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleXAxisElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleYAxisElement_MetaData[] = {
		{ "Comment", "/** Scale Y Axis object */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Scale Y Axis object" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleYAxisElement = { "ScaleYAxisElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, ScaleYAxisElement), Z_Construct_UClass_UGizmoElementArrow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleYAxisElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleYAxisElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleZAxisElement_MetaData[] = {
		{ "Comment", "/** Scale Z Axis object */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Scale Z Axis object" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleZAxisElement = { "ScaleZAxisElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, ScaleZAxisElement), Z_Construct_UClass_UGizmoElementArrow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleZAxisElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleZAxisElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScalePlanarXYElement_MetaData[] = {
		{ "Comment", "/** Scale planar XY handle */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Scale planar XY handle" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScalePlanarXYElement = { "ScalePlanarXYElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, ScalePlanarXYElement), Z_Construct_UClass_UGizmoElementRectangle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScalePlanarXYElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScalePlanarXYElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScalePlanarYZElement_MetaData[] = {
		{ "Comment", "/** Scale planar YZ handle */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Scale planar YZ handle" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScalePlanarYZElement = { "ScalePlanarYZElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, ScalePlanarYZElement), Z_Construct_UClass_UGizmoElementRectangle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScalePlanarYZElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScalePlanarYZElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScalePlanarXZElement_MetaData[] = {
		{ "Comment", "/** Scale planar XZ handle */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Scale planar XZ handle" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScalePlanarXZElement = { "ScalePlanarXZElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, ScalePlanarXZElement), Z_Construct_UClass_UGizmoElementRectangle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScalePlanarXZElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScalePlanarXZElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleUniformElement_MetaData[] = {
		{ "Comment", "/** Uniform scale object */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Uniform scale object" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleUniformElement = { "ScaleUniformElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, ScaleUniformElement), Z_Construct_UClass_UGizmoElementBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleUniformElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleUniformElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CameraAxisSource_MetaData[] = {
		{ "Comment", "/** Axis that points towards camera, X/Y plane tangents aligned to right/up. Shared across Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Axis that points towards camera, X/Y plane tangents aligned to right/up. Shared across Gizmos, and created internally during SetActiveTarget()" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CameraAxisSource = { "CameraAxisSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, CameraAxisSource), Z_Construct_UClass_UGizmoConstantFrameAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CameraAxisSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CameraAxisSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_StateTarget_MetaData[] = {
		{ "Comment", "/** The state target is created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "The state target is created internally during SetActiveTarget()" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_StateTarget = { "StateTarget", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, StateTarget), Z_Construct_UClass_UGizmoObjectModifyStateTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_StateTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_StateTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TransparentVertexColorMaterial_MetaData[] = {
		{ "Comment", "/** Materials and colors to be used when drawing the items for each axis */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Materials and colors to be used when drawing the items for each axis" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TransparentVertexColorMaterial = { "TransparentVertexColorMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, TransparentVertexColorMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TransparentVertexColorMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TransparentVertexColorMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GridMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GridMaterial = { "GridMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, GridMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GridMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GridMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_AxisMaterialX_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_AxisMaterialX = { "AxisMaterialX", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, AxisMaterialX), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_AxisMaterialX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_AxisMaterialX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_AxisMaterialY_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_AxisMaterialY = { "AxisMaterialY", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, AxisMaterialY), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_AxisMaterialY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_AxisMaterialY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_AxisMaterialZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_AxisMaterialZ = { "AxisMaterialZ", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, AxisMaterialZ), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_AxisMaterialZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_AxisMaterialZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentAxisMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentAxisMaterial = { "CurrentAxisMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, CurrentAxisMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentAxisMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentAxisMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GreyMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GreyMaterial = { "GreyMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, GreyMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GreyMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GreyMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_WhiteMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_WhiteMaterial = { "WhiteMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, WhiteMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_WhiteMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_WhiteMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_OpaquePlaneMaterialXY_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_OpaquePlaneMaterialXY = { "OpaquePlaneMaterialXY", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, OpaquePlaneMaterialXY), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_OpaquePlaneMaterialXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_OpaquePlaneMaterialXY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleMultiplier_MetaData[] = {
		{ "Comment", "/** Percentage-based scale multiplier */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Percentage-based scale multiplier" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleMultiplier = { "ScaleMultiplier", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, ScaleMultiplier), METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentTransform_MetaData[] = {
		{ "Comment", "/** Current transform */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Current transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentTransform = { "CurrentTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, CurrentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentTransform_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentMode_MetaData[] = {
		{ "Comment", "/** Currently rendered transform mode */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Currently rendered transform mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentMode = { "CurrentMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, CurrentMode), Z_Construct_UEnum_EditorInteractiveToolsFramework_EGizmoTransformMode, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentMode_MetaData)) }; // 668756507
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentAxisToDraw_MetaData[] = {
		{ "Comment", "/** Currently rendered axis list */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Currently rendered axis list" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentAxisToDraw = { "CurrentAxisToDraw", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, CurrentAxisToDraw), Z_Construct_UEnum_CoreUObject_EAxisList, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentAxisToDraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentAxisToDraw_MetaData)) }; // 851332234
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_LastHitPart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_LastHitPart_MetaData[] = {
		{ "Comment", "/** Last hit part */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Last hit part" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_LastHitPart = { "LastHitPart", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, LastHitPart), Z_Construct_UEnum_EditorInteractiveToolsFramework_ETransformGizmoPartIdentifier, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_LastHitPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_LastHitPart_MetaData)) }; // 3407125187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisList_MetaData[] = {
		{ "Comment", "/** Active axis type (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active axis type (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisList = { "InteractionAxisList", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionAxisList), Z_Construct_UEnum_CoreUObject_EAxisList, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisList_MetaData)) }; // 851332234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisOrigin_MetaData[] = {
		{ "Comment", "/** Active world space axis origin (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active world space axis origin (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisOrigin = { "InteractionAxisOrigin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionAxisOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisDirection_MetaData[] = {
		{ "Comment", "/** Active world space axis (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active world space axis (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisDirection = { "InteractionAxisDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionAxisDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisStartParam_MetaData[] = {
		{ "Comment", "/** Active interaction start hit param (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active interaction start hit param (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisStartParam = { "InteractionAxisStartParam", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionAxisStartParam), METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisStartParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisStartParam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisCurrParam_MetaData[] = {
		{ "Comment", "/** Active interaction current hit param (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active interaction current hit param (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisCurrParam = { "InteractionAxisCurrParam", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionAxisCurrParam), METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisCurrParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisCurrParam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarOrigin_MetaData[] = {
		{ "Comment", "/** Active world space planar origin (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active world space planar origin (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarOrigin = { "InteractionPlanarOrigin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionPlanarOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarNormal_MetaData[] = {
		{ "Comment", "/** Active world space normal used for planar (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active world space normal used for planar (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarNormal = { "InteractionPlanarNormal", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionPlanarNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarAxisX_MetaData[] = {
		{ "Comment", "/** Active world space axis X used for planar (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active world space axis X used for planar (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarAxisX = { "InteractionPlanarAxisX", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionPlanarAxisX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarAxisX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarAxisX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarAxisY_MetaData[] = {
		{ "Comment", "/** Active world space axis Y used for planar (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active world space axis Y used for planar (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarAxisY = { "InteractionPlanarAxisY", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionPlanarAxisY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarAxisY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarAxisY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarStartPoint_MetaData[] = {
		{ "Comment", "/** Active interaction start point planar (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active interaction start point planar (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarStartPoint = { "InteractionPlanarStartPoint", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionPlanarStartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarStartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarStartPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarCurrPoint_MetaData[] = {
		{ "Comment", "/** Active interaction current point planar (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active interaction current point planar (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarCurrPoint = { "InteractionPlanarCurrPoint", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionPlanarCurrPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarCurrPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarCurrPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionStartAngle_MetaData[] = {
		{ "Comment", "/** Active interaction rotation start angle (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active interaction rotation start angle (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionStartAngle = { "InteractionStartAngle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionStartAngle), METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionStartAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionStartAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionCurrAngle_MetaData[] = {
		{ "Comment", "/** Active interaction rotation curr angle (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active interaction rotation curr angle (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionCurrAngle = { "InteractionCurrAngle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionCurrAngle), METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionCurrAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionCurrAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenAxisDirection_MetaData[] = {
		{ "Comment", "/** Active interaction screen axis dir (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active interaction screen axis dir (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenAxisDirection = { "InteractionScreenAxisDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionScreenAxisDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenAxisDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenAxisDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenStartPos_MetaData[] = {
		{ "Comment", "/** Active interaction screen start pos (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active interaction screen start pos (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenStartPos = { "InteractionScreenStartPos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionScreenStartPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenStartPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenStartPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenEndPos_MetaData[] = {
		{ "Comment", "/** Active interaction screen end pos (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active interaction screen end pos (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenEndPos = { "InteractionScreenEndPos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionScreenEndPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenEndPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenEndPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenCurrPos_MetaData[] = {
		{ "Comment", "/** Active interaction screen current pos (only valid between state target BeginModify/EndModify) */" },
		{ "ModuleRelativePath", "Public/EditorGizmos/TransformGizmo.h" },
		{ "ToolTip", "Active interaction screen current pos (only valid between state target BeginModify/EndModify)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenCurrPos = { "InteractionScreenCurrPos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTransformGizmo, InteractionScreenCurrPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenCurrPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenCurrPos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransformGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ActiveTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_HitTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_MouseBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TransformGizmoSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GizmoElementRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GizmoViewContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bInInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bSnapToWorldGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bGridSizeIsExplicit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ExplicitGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ExplicitRotationGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateXAxisElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateYAxisElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateZAxisElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslateScreenSpaceElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslatePlanarXYElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslatePlanarYZElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TranslatePlanarXZElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateXAxisElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateYAxisElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateZAxisElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateOuterCircleElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateArcballOuterElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateArcballInnerElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_RotateScreenSpaceElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleXAxisElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleYAxisElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleZAxisElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScalePlanarXYElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScalePlanarYZElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScalePlanarXZElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleUniformElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CameraAxisSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_StateTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_TransparentVertexColorMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GridMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_AxisMaterialX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_AxisMaterialY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_AxisMaterialZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentAxisMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_GreyMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_WhiteMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_OpaquePlaneMaterialXY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_ScaleMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_CurrentAxisToDraw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_LastHitPart_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_LastHitPart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisStartParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionAxisCurrParam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarAxisX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarAxisY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarStartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionPlanarCurrPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionStartAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionCurrAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenAxisDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenStartPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenEndPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformGizmo_Statics::NewProp_InteractionScreenCurrPos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransformGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformGizmo_Statics::ClassParams = {
		&UTransformGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTransformGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTransformGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransformGizmo()
	{
		if (!Z_Registration_Info_UClass_UTransformGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformGizmo.OuterSingleton, Z_Construct_UClass_UTransformGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTransformGizmo.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UTransformGizmo>()
	{
		return UTransformGizmo::StaticClass();
	}
	UTransformGizmo::UTransformGizmo() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformGizmo);
	UTransformGizmo::~UTransformGizmo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_Statics::EnumInfo[] = {
		{ ETransformGizmoPartIdentifier_StaticEnum, TEXT("ETransformGizmoPartIdentifier"), &Z_Registration_Info_UEnum_ETransformGizmoPartIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3407125187U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTransformGizmo, UTransformGizmo::StaticClass, TEXT("UTransformGizmo"), &Z_Registration_Info_UClass_UTransformGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformGizmo), 3718076258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_4205067945(TEXT("/Script/EditorInteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorGizmos_TransformGizmo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
