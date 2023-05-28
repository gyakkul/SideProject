// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoElementBase.h"
#include "BaseGizmos/GizmoElementRenderState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBase();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBase_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UGizmoElementBase::StaticRegisterNativesUGizmoElementBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementBase);
	UClass* Z_Construct_UClass_UGizmoElementBase_NoRegister()
	{
		return UGizmoElementBase::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoElementBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledForPerspectiveProjection_MetaData[];
#endif
		static void NewProp_bEnabledForPerspectiveProjection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledForPerspectiveProjection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledForOrthographicProjection_MetaData[];
#endif
		static void NewProp_bEnabledForOrthographicProjection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledForOrthographicProjection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledForDefaultState_MetaData[];
#endif
		static void NewProp_bEnabledForDefaultState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledForDefaultState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledForHoveringState_MetaData[];
#endif
		static void NewProp_bEnabledForHoveringState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledForHoveringState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledForInteractingState_MetaData[];
#endif
		static void NewProp_bEnabledForInteractingState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledForInteractingState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PartIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshRenderAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshRenderAttributes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ElementState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementState;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ElementInteractionState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementInteractionState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementInteractionState;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ViewDependentType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewDependentType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewDependentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewDependentAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewDependentAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewDependentAngleTol_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewDependentAngleTol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewDependentAxialMaxCosAngleTol_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewDependentAxialMaxCosAngleTol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewDependentPlanarMinCosAngleTol_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewDependentPlanarMinCosAngleTol;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ViewAlignType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewAlignType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewAlignType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewAlignAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewAlignAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewAlignNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewAlignNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewAlignAxialAngleTol_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewAlignAxialAngleTol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewAlignAxialMaxCosAngleTol_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewAlignAxialMaxCosAngleTol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelHitDistanceThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelHitDistanceThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoElementBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for 2d and 3d primitive objects intended to be used as part of 3D Gizmos.\n * Contains common properties and utility functions.\n * This class does nothing by itself, use subclasses like UGizmoElementCylinder\n */" },
		{ "IncludePath", "BaseGizmos/GizmoElementBase.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Base class for 2d and 3d primitive objects intended to be used as part of 3D Gizmos.\nContains common properties and utility functions.\nThis class does nothing by itself, use subclasses like UGizmoElementCylinder" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "// Whether element is enabled. Render and LineTrace only occur when bEnabled is true.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Whether element is enabled. Render and LineTrace only occur when bEnabled is true." },
	};
#endif
	void Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UGizmoElementBase*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoElementBase), &Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForPerspectiveProjection_MetaData[] = {
		{ "Comment", "// Whether element is enabled for perspective projection\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Whether element is enabled for perspective projection" },
	};
#endif
	void Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForPerspectiveProjection_SetBit(void* Obj)
	{
		((UGizmoElementBase*)Obj)->bEnabledForPerspectiveProjection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForPerspectiveProjection = { "bEnabledForPerspectiveProjection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoElementBase), &Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForPerspectiveProjection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForPerspectiveProjection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForPerspectiveProjection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForOrthographicProjection_MetaData[] = {
		{ "Comment", "// Whether element is enabled for orthographic projection\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Whether element is enabled for orthographic projection" },
	};
#endif
	void Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForOrthographicProjection_SetBit(void* Obj)
	{
		((UGizmoElementBase*)Obj)->bEnabledForOrthographicProjection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForOrthographicProjection = { "bEnabledForOrthographicProjection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoElementBase), &Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForOrthographicProjection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForOrthographicProjection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForOrthographicProjection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForDefaultState_MetaData[] = {
		{ "Comment", "// Whether element is enabled when element state is default\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Whether element is enabled when element state is default" },
	};
#endif
	void Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForDefaultState_SetBit(void* Obj)
	{
		((UGizmoElementBase*)Obj)->bEnabledForDefaultState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForDefaultState = { "bEnabledForDefaultState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoElementBase), &Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForDefaultState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForDefaultState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForDefaultState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForHoveringState_MetaData[] = {
		{ "Comment", "// Whether element is enabled when element state is hovering\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Whether element is enabled when element state is hovering" },
	};
#endif
	void Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForHoveringState_SetBit(void* Obj)
	{
		((UGizmoElementBase*)Obj)->bEnabledForHoveringState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForHoveringState = { "bEnabledForHoveringState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoElementBase), &Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForHoveringState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForHoveringState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForHoveringState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForInteractingState_MetaData[] = {
		{ "Comment", "// Whether element is enabled when element state is interacting\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Whether element is enabled when element state is interacting" },
	};
#endif
	void Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForInteractingState_SetBit(void* Obj)
	{
		((UGizmoElementBase*)Obj)->bEnabledForInteractingState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForInteractingState = { "bEnabledForInteractingState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGizmoElementBase), &Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForInteractingState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForInteractingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForInteractingState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_PartIdentifier_MetaData[] = {
		{ "Comment", "// Part identifier\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Part identifier" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_PartIdentifier = { "PartIdentifier", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBase, PartIdentifier), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_PartIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_PartIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_MeshRenderAttributes_MetaData[] = {
		{ "Comment", "// Mesh render state attributes for this element\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Mesh render state attributes for this element" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_MeshRenderAttributes = { "MeshRenderAttributes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBase, MeshRenderAttributes), Z_Construct_UScriptStruct_FGizmoElementMeshRenderStateAttributes, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_MeshRenderAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_MeshRenderAttributes_MetaData)) }; // 3956374243
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementState_MetaData[] = {
		{ "Comment", "// Element state - indicates whether object is visible or hittable\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Element state - indicates whether object is visible or hittable" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementState = { "ElementState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBase, ElementState), Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementState_MetaData)) }; // 4178158715
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementInteractionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementInteractionState_MetaData[] = {
		{ "Comment", "// Current element interaction state - None, Hovering or Interacting\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Current element interaction state - None, Hovering or Interacting" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementInteractionState = { "ElementInteractionState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBase, ElementInteractionState), Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementInteractionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementInteractionState_MetaData)) }; // 1160638805
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentType_MetaData[] = {
		{ "Comment", "// View-dependent type - None, Axis or Plane. \n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "View-dependent type - None, Axis or Plane." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentType = { "ViewDependentType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBase, ViewDependentType), Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentType_MetaData)) }; // 537868036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAxis_MetaData[] = {
		{ "Comment", "// View-dependent axis or plane normal, based on the view-dependent type.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "View-dependent axis or plane normal, based on the view-dependent type." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAxis = { "ViewDependentAxis", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBase, ViewDependentAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAngleTol_MetaData[] = {
		{ "Comment", "// View-dependent angle tolerance based on :\n//   For Axis, minimum radians between view dependent axis and view direction.\n//   For Planar, minimum radians between view dependent axis and the plane where axis is its normal.\n// When the angle between the view direction and the axis/plane is less than this tolerance, this object should be culled.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "View-dependent angle tolerance based on :\n  For Axis, minimum radians between view dependent axis and view direction.\n  For Planar, minimum radians between view dependent axis and the plane where axis is its normal.\nWhen the angle between the view direction and the axis/plane is less than this tolerance, this object should be culled." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAngleTol = { "ViewDependentAngleTol", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBase, ViewDependentAngleTol), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAngleTol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAngleTol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAxialMaxCosAngleTol_MetaData[] = {
		{ "Comment", "// Axial view alignment minimum cos angle tolerance, computed based on ViewDependentAngleTol. \n// When the cos of the angle between the view direction and the axis is less than this value, this object should not be culled.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Axial view alignment minimum cos angle tolerance, computed based on ViewDependentAngleTol.\nWhen the cos of the angle between the view direction and the axis is less than this value, this object should not be culled." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAxialMaxCosAngleTol = { "ViewDependentAxialMaxCosAngleTol", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBase, ViewDependentAxialMaxCosAngleTol), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAxialMaxCosAngleTol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAxialMaxCosAngleTol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentPlanarMinCosAngleTol_MetaData[] = {
		{ "Comment", "// Planar view alignment minimum cos angle tolerance, computed based on ViewDependentAngleTol. \n// When the cos of the angle between the view direction and the axis is greater than this value, this object should not be culled.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Planar view alignment minimum cos angle tolerance, computed based on ViewDependentAngleTol.\nWhen the cos of the angle between the view direction and the axis is greater than this value, this object should not be culled." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentPlanarMinCosAngleTol = { "ViewDependentPlanarMinCosAngleTol", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBase, ViewDependentPlanarMinCosAngleTol), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentPlanarMinCosAngleTol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentPlanarMinCosAngleTol_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignType_MetaData[] = {
		{ "Comment", "// View align type: None, PointEye, or PointWorld.\n// PointEye rotates this axis to align with the view up axis.\n// PointWorld rotates this axis to align with the world up axis.\n// Axial rotates around this axis to align the normal as closely as possible to the view direction.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "View align type: None, PointEye, or PointWorld.\nPointEye rotates this axis to align with the view up axis.\nPointWorld rotates this axis to align with the world up axis.\nAxial rotates around this axis to align the normal as closely as possible to the view direction." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignType = { "ViewAlignType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBase, ViewAlignType), Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignType_MetaData)) }; // 4209599927
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxis_MetaData[] = {
		{ "Comment", "// View align axis. \n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "View align axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxis = { "ViewAlignAxis", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBase, ViewAlignAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignNormal_MetaData[] = {
		{ "Comment", "// View align normal.\n// PointEye and PointWorld both rotate the normal to align with the view direction.\n// Axial rotates the normal to align as closely as possible with view direction.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "View align normal.\nPointEye and PointWorld both rotate the normal to align with the view direction.\nAxial rotates the normal to align as closely as possible with view direction." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignNormal = { "ViewAlignNormal", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBase, ViewAlignNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxialAngleTol_MetaData[] = {
		{ "Comment", "// Axial view alignment angle tolerance in radians, based on angle between align normal and view direction. \n// When angle between the view align normal and the view direction is greater than this angle, the align rotation will be computed.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Axial view alignment angle tolerance in radians, based on angle between align normal and view direction.\nWhen angle between the view align normal and the view direction is greater than this angle, the align rotation will be computed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxialAngleTol = { "ViewAlignAxialAngleTol", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBase, ViewAlignAxialAngleTol), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxialAngleTol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxialAngleTol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxialMaxCosAngleTol_MetaData[] = {
		{ "Comment", "// Axial view alignment minimum cos angle tolerance, computed based on ViewAlignAxialAngleTol. \n// When the cos of the angle between the view direction and the align normal is less than this value, the align rotation will be computed.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Axial view alignment minimum cos angle tolerance, computed based on ViewAlignAxialAngleTol.\nWhen the cos of the angle between the view direction and the align normal is less than this value, the align rotation will be computed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxialMaxCosAngleTol = { "ViewAlignAxialMaxCosAngleTol", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBase, ViewAlignAxialMaxCosAngleTol), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxialMaxCosAngleTol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxialMaxCosAngleTol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_PixelHitDistanceThreshold_MetaData[] = {
		{ "Comment", "// Pixel hit distance threshold, element will be scaled enough to add this threshold when line-tracing.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementBase.h" },
		{ "ToolTip", "Pixel hit distance threshold, element will be scaled enough to add this threshold when line-tracing." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_PixelHitDistanceThreshold = { "PixelHitDistanceThreshold", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementBase, PixelHitDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_PixelHitDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_PixelHitDistanceThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForPerspectiveProjection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForOrthographicProjection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForDefaultState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForHoveringState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_bEnabledForInteractingState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_PartIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_MeshRenderAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementInteractionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ElementInteractionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAngleTol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentAxialMaxCosAngleTol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewDependentPlanarMinCosAngleTol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxialAngleTol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_ViewAlignAxialMaxCosAngleTol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementBase_Statics::NewProp_PixelHitDistanceThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoElementBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementBase_Statics::ClassParams = {
		&UGizmoElementBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoElementBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::PropPointers),
		0,
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoElementBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoElementBase()
	{
		if (!Z_Registration_Info_UClass_UGizmoElementBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementBase.OuterSingleton, Z_Construct_UClass_UGizmoElementBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoElementBase.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementBase>()
	{
		return UGizmoElementBase::StaticClass();
	}
	UGizmoElementBase::UGizmoElementBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementBase);
	UGizmoElementBase::~UGizmoElementBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementBase, UGizmoElementBase::StaticClass, TEXT("UGizmoElementBase"), &Z_Registration_Info_UClass_UGizmoElementBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementBase), 1874962388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBase_h_2876962803(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
