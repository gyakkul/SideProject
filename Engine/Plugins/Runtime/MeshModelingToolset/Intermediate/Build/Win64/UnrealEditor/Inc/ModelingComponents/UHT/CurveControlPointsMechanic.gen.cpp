// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/CurveControlPointsMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveControlPointsMechanic() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_APreviewGeometryActor_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCurveControlPointsMechanic();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCurveControlPointsMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPointSetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UCurveControlPointsMechanic::StaticRegisterNativesUCurveControlPointsMechanic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveControlPointsMechanic);
	UClass* Z_Construct_UClass_UCurveControlPointsMechanic_NoRegister()
	{
		return UCurveControlPointsMechanic::StaticClass();
	}
	struct Z_Construct_UClass_UCurveControlPointsMechanic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClickBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HoverBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometryActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewGeometryActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawnControlPoints_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawnControlPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawnControlSegments_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawnControlSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSegment_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewSegment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointTransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointTransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointTransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointTransformGizmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveControlPointsMechanic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveControlPointsMechanic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A mechanic for displaying a sequence of control points and moving them about. Has an interactive initialization mode for\n * first setting the points.\n *\n * When editing, hold shift to select multiple points. Hold Ctrl to add an extra point along an edge. To add points to either end of\n * the sequence, first select either the first or last point and then hold Ctrl.\n * Backspace deletes currently selected points. In edit mode, holding Shift generally toggles the snapping behavior (makes it opposite\n * of the current SnappingEnabled setting), though this is not yet implemented while the gizmo is being dragged.\n *\n * TODO:\n * - Make it possible to open/close loop in edit mode\n * - Improve display of occluded control points (checkerboard the material)\n * - Allow deselection of vertices by clicking away?\n * - Lump the point/line set components into PreviewGeometryActor.\n */" },
		{ "IncludePath", "Mechanics/CurveControlPointsMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
		{ "ToolTip", "A mechanic for displaying a sequence of control points and moving them about. Has an interactive initialization mode for\nfirst setting the points.\n\nWhen editing, hold shift to select multiple points. Hold Ctrl to add an extra point along an edge. To add points to either end of\nthe sequence, first select either the first or last point and then hold Ctrl.\nBackspace deletes currently selected points. In edit mode, holding Shift generally toggles the snapping behavior (makes it opposite\nof the current SnappingEnabled setting), though this is not yet implemented while the gizmo is being dragged.\n\nTODO:\n- Make it possible to open/close loop in edit mode\n- Improve display of occluded control points (checkerboard the material)\n- Allow deselection of vertices by clicking away?\n- Lump the point/line set components into PreviewGeometryActor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_ClickBehavior_MetaData[] = {
		{ "Comment", "// Behaviors used for moving points around and hovering them\n" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
		{ "ToolTip", "Behaviors used for moving points around and hovering them" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_ClickBehavior = { "ClickBehavior", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveControlPointsMechanic, ClickBehavior), Z_Construct_UClass_USingleClickInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_ClickBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_ClickBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_HoverBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_HoverBehavior = { "HoverBehavior", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveControlPointsMechanic, HoverBehavior), Z_Construct_UClass_UMouseHoverBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_HoverBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_HoverBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewGeometryActor_MetaData[] = {
		{ "Comment", "/** Used for displaying points/segments */" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
		{ "ToolTip", "Used for displaying points/segments" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewGeometryActor = { "PreviewGeometryActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveControlPointsMechanic, PreviewGeometryActor), Z_Construct_UClass_APreviewGeometryActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewGeometryActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewGeometryActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_DrawnControlPoints_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_DrawnControlPoints = { "DrawnControlPoints", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveControlPointsMechanic, DrawnControlPoints), Z_Construct_UClass_UPointSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_DrawnControlPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_DrawnControlPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_DrawnControlSegments_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_DrawnControlSegments = { "DrawnControlSegments", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveControlPointsMechanic, DrawnControlSegments), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_DrawnControlSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_DrawnControlSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewPoint_MetaData[] = {
		{ "Comment", "// These get drawn separately because the other components have to be 1:1 with the control\n// points structure, which would make it complicated to keep track of special id's.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
		{ "ToolTip", "These get drawn separately because the other components have to be 1:1 with the control\npoints structure, which would make it complicated to keep track of special id's." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewPoint = { "PreviewPoint", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveControlPointsMechanic, PreviewPoint), Z_Construct_UClass_UPointSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewSegment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewSegment = { "PreviewSegment", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveControlPointsMechanic, PreviewSegment), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewSegment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PointTransformProxy_MetaData[] = {
		{ "Comment", "// Support for gizmo. Since the points aren't individual components, we don't actually use UTransformProxy\n// for the transform forwarding- we just use it for the callbacks.\n" },
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
		{ "ToolTip", "Support for gizmo. Since the points aren't individual components, we don't actually use UTransformProxy\nfor the transform forwarding- we just use it for the callbacks." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PointTransformProxy = { "PointTransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveControlPointsMechanic, PointTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PointTransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PointTransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PointTransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/CurveControlPointsMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PointTransformGizmo = { "PointTransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveControlPointsMechanic, PointTransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PointTransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PointTransformGizmo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveControlPointsMechanic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_ClickBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_HoverBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewGeometryActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_DrawnControlPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_DrawnControlSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PreviewSegment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PointTransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveControlPointsMechanic_Statics::NewProp_PointTransformGizmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveControlPointsMechanic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveControlPointsMechanic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveControlPointsMechanic_Statics::ClassParams = {
		&UCurveControlPointsMechanic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurveControlPointsMechanic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveControlPointsMechanic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveControlPointsMechanic()
	{
		if (!Z_Registration_Info_UClass_UCurveControlPointsMechanic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveControlPointsMechanic.OuterSingleton, Z_Construct_UClass_UCurveControlPointsMechanic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveControlPointsMechanic.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UCurveControlPointsMechanic>()
	{
		return UCurveControlPointsMechanic::StaticClass();
	}
	UCurveControlPointsMechanic::UCurveControlPointsMechanic() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveControlPointsMechanic);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveControlPointsMechanic, UCurveControlPointsMechanic::StaticClass, TEXT("UCurveControlPointsMechanic"), &Z_Registration_Info_UClass_UCurveControlPointsMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveControlPointsMechanic), 122294111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h_1913021254(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_CurveControlPointsMechanic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
