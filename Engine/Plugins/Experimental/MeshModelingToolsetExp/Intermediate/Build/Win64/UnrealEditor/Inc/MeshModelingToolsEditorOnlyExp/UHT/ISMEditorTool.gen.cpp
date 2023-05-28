// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ISMEditorTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISMEditorTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolCameraFocusAPI_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickOrDragInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UISMEditorTool();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UISMEditorTool_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UISMEditorToolActionPropertySet();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UISMEditorToolActionPropertySet_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UISMEditorToolActionPropertySetBase();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UISMEditorToolActionPropertySetBase_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UISMEditorToolBuilder();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UISMEditorToolBuilder_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UISMEditorToolProperties();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UISMEditorToolProperties_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UISMEditorToolReplacePropertySet();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UISMEditorToolReplacePropertySet_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorToolActions();
	MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorTransformMode();
	MESHMODELINGTOOLSEDITORONLYEXP_API UScriptStruct* Z_Construct_UScriptStruct_FISMEditorTarget();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp();
// End Cross Module References
	void UISMEditorToolBuilder::StaticRegisterNativesUISMEditorToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISMEditorToolBuilder);
	UClass* Z_Construct_UClass_UISMEditorToolBuilder_NoRegister()
	{
		return UISMEditorToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UISMEditorToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISMEditorToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ISMEditorTool.h" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISMEditorToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISMEditorToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISMEditorToolBuilder_Statics::ClassParams = {
		&UISMEditorToolBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UISMEditorToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISMEditorToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UISMEditorToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISMEditorToolBuilder.OuterSingleton, Z_Construct_UClass_UISMEditorToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISMEditorToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UISMEditorToolBuilder>()
	{
		return UISMEditorToolBuilder::StaticClass();
	}
	UISMEditorToolBuilder::UISMEditorToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISMEditorToolBuilder);
	UISMEditorToolBuilder::~UISMEditorToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EISMEditorTransformMode;
	static UEnum* EISMEditorTransformMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EISMEditorTransformMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EISMEditorTransformMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorTransformMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp(), TEXT("EISMEditorTransformMode"));
		}
		return Z_Registration_Info_UEnum_EISMEditorTransformMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* StaticEnum<EISMEditorTransformMode>()
	{
		return EISMEditorTransformMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorTransformMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorTransformMode_Statics::Enumerators[] = {
		{ "EISMEditorTransformMode::SharedGizmo", (int64)EISMEditorTransformMode::SharedGizmo },
		{ "EISMEditorTransformMode::SharedGizmoLocal", (int64)EISMEditorTransformMode::SharedGizmoLocal },
		{ "EISMEditorTransformMode::PerObjectGizmo", (int64)EISMEditorTransformMode::PerObjectGizmo },
		{ "EISMEditorTransformMode::LastValue", (int64)EISMEditorTransformMode::LastValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorTransformMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Mesh Transform modes */" },
		{ "LastValue.Hidden", "" },
		{ "LastValue.Name", "EISMEditorTransformMode::LastValue" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
		{ "PerObjectGizmo.Comment", "/** Separate Gizmo for each Instance */" },
		{ "PerObjectGizmo.DisplayName", "Multi-Gizmo" },
		{ "PerObjectGizmo.Name", "EISMEditorTransformMode::PerObjectGizmo" },
		{ "PerObjectGizmo.ToolTip", "Separate Gizmo for each Instance" },
		{ "SharedGizmo.Comment", "/** Single Gizmo for all Instances */" },
		{ "SharedGizmo.DisplayName", "Shared Gizmo" },
		{ "SharedGizmo.Name", "EISMEditorTransformMode::SharedGizmo" },
		{ "SharedGizmo.ToolTip", "Single Gizmo for all Instances" },
		{ "SharedGizmoLocal.Comment", "/** Single Gizmo for all Instances, Rotations applied per-Instance */" },
		{ "SharedGizmoLocal.DisplayName", "Shared Gizmo (Local)" },
		{ "SharedGizmoLocal.Name", "EISMEditorTransformMode::SharedGizmoLocal" },
		{ "SharedGizmoLocal.ToolTip", "Single Gizmo for all Instances, Rotations applied per-Instance" },
		{ "ToolTip", "Mesh Transform modes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorTransformMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
		nullptr,
		"EISMEditorTransformMode",
		"EISMEditorTransformMode",
		Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorTransformMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorTransformMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorTransformMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorTransformMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorTransformMode()
	{
		if (!Z_Registration_Info_UEnum_EISMEditorTransformMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EISMEditorTransformMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorTransformMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EISMEditorTransformMode.InnerSingleton;
	}
	void UISMEditorToolProperties::StaticRegisterNativesUISMEditorToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISMEditorToolProperties);
	UClass* Z_Construct_UClass_UISMEditorToolProperties_NoRegister()
	{
		return UISMEditorToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UISMEditorToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetPivotMode_MetaData[];
#endif
		static void NewProp_bSetPivotMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetPivotMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSelectable_MetaData[];
#endif
		static void NewProp_bShowSelectable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSelectable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSelected_MetaData[];
#endif
		static void NewProp_bShowSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideWhenDragging_MetaData[];
#endif
		static void NewProp_bHideWhenDragging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideWhenDragging;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISMEditorToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the Transform Meshes operation\n */" },
		{ "IncludePath", "ISMEditorTool.h" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
		{ "ToolTip", "Standard properties of the Transform Meshes operation" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_TransformMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_TransformMode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Transformation Mode controls the overall behavior of the Gizmos in the Tool */" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
		{ "ToolTip", "Transformation Mode controls the overall behavior of the Gizmos in the Tool" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_TransformMode = { "TransformMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISMEditorToolProperties, TransformMode), Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorTransformMode, METADATA_PARAMS(Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_TransformMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_TransformMode_MetaData)) }; // 1670384743
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bSetPivotMode_MetaData[] = {
		{ "Category", "Pivot" },
		{ "Comment", "/** When true, the Gizmo can be moved independently without affecting objects. This allows the Gizmo to be repositioned before transforming. */" },
		{ "EditCondition", "TransformMode != EISMEditorTransformMode::PerObjectGizmo" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
		{ "ToolTip", "When true, the Gizmo can be moved independently without affecting objects. This allows the Gizmo to be repositioned before transforming." },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bSetPivotMode_SetBit(void* Obj)
	{
		((UISMEditorToolProperties*)Obj)->bSetPivotMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bSetPivotMode = { "bSetPivotMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UISMEditorToolProperties), &Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bSetPivotMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bSetPivotMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bSetPivotMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bShowSelectable_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Show a highlight around all selectable instances */" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
		{ "ToolTip", "Show a highlight around all selectable instances" },
	};
#endif
	void Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bShowSelectable_SetBit(void* Obj)
	{
		((UISMEditorToolProperties*)Obj)->bShowSelectable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bShowSelectable = { "bShowSelectable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UISMEditorToolProperties), &Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bShowSelectable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bShowSelectable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bShowSelectable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bShowSelected_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Show a highlight around the selected instances */" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
		{ "ToolTip", "Show a highlight around the selected instances" },
	};
#endif
	void Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bShowSelected_SetBit(void* Obj)
	{
		((UISMEditorToolProperties*)Obj)->bShowSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bShowSelected = { "bShowSelected", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UISMEditorToolProperties), &Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bShowSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bShowSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bShowSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bHideWhenDragging_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Hide the Selectable and Selected highlights when dragging with the Gizmos */" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
		{ "ToolTip", "Hide the Selectable and Selected highlights when dragging with the Gizmos" },
	};
#endif
	void Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bHideWhenDragging_SetBit(void* Obj)
	{
		((UISMEditorToolProperties*)Obj)->bHideWhenDragging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bHideWhenDragging = { "bHideWhenDragging", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UISMEditorToolProperties), &Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bHideWhenDragging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bHideWhenDragging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bHideWhenDragging_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_SelectedInstances_Inner = { "SelectedInstances", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_SelectedInstances_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** List of selected Component/Instance values */" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
		{ "ToolTip", "List of selected Component/Instance values" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_SelectedInstances = { "SelectedInstances", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISMEditorToolProperties, SelectedInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_SelectedInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_SelectedInstances_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISMEditorToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_TransformMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_TransformMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bSetPivotMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bShowSelectable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bShowSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_bHideWhenDragging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_SelectedInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorToolProperties_Statics::NewProp_SelectedInstances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISMEditorToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISMEditorToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISMEditorToolProperties_Statics::ClassParams = {
		&UISMEditorToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UISMEditorToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UISMEditorToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISMEditorToolProperties()
	{
		if (!Z_Registration_Info_UClass_UISMEditorToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISMEditorToolProperties.OuterSingleton, Z_Construct_UClass_UISMEditorToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISMEditorToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UISMEditorToolProperties>()
	{
		return UISMEditorToolProperties::StaticClass();
	}
	UISMEditorToolProperties::UISMEditorToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISMEditorToolProperties);
	UISMEditorToolProperties::~UISMEditorToolProperties() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ISMEditorTarget;
class UScriptStruct* FISMEditorTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ISMEditorTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ISMEditorTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FISMEditorTarget, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp(), TEXT("ISMEditorTarget"));
	}
	return Z_Registration_Info_UScriptStruct_ISMEditorTarget.OuterSingleton;
}
template<> MESHMODELINGTOOLSEDITORONLYEXP_API UScriptStruct* StaticStruct<FISMEditorTarget>()
{
	return FISMEditorTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FISMEditorTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMEditorTarget_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FISMEditorTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FISMEditorTarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMEditorTarget_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FISMEditorTarget_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMEditorTarget, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMEditorTarget_Statics::NewProp_TransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMEditorTarget_Statics::NewProp_TransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FISMEditorTarget_Statics::NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FISMEditorTarget_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FISMEditorTarget, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FISMEditorTarget_Statics::NewProp_TransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMEditorTarget_Statics::NewProp_TransformGizmo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FISMEditorTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMEditorTarget_Statics::NewProp_TransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FISMEditorTarget_Statics::NewProp_TransformGizmo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FISMEditorTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
		nullptr,
		&NewStructOps,
		"ISMEditorTarget",
		sizeof(FISMEditorTarget),
		alignof(FISMEditorTarget),
		Z_Construct_UScriptStruct_FISMEditorTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMEditorTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FISMEditorTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FISMEditorTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FISMEditorTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_ISMEditorTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ISMEditorTarget.InnerSingleton, Z_Construct_UScriptStruct_FISMEditorTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ISMEditorTarget.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EISMEditorToolActions;
	static UEnum* EISMEditorToolActions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EISMEditorToolActions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EISMEditorToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorToolActions, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp(), TEXT("EISMEditorToolActions"));
		}
		return Z_Registration_Info_UEnum_EISMEditorToolActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* StaticEnum<EISMEditorToolActions>()
	{
		return EISMEditorToolActions_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorToolActions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorToolActions_Statics::Enumerators[] = {
		{ "EISMEditorToolActions::NoAction", (int64)EISMEditorToolActions::NoAction },
		{ "EISMEditorToolActions::ClearSelection", (int64)EISMEditorToolActions::ClearSelection },
		{ "EISMEditorToolActions::Delete", (int64)EISMEditorToolActions::Delete },
		{ "EISMEditorToolActions::Duplicate", (int64)EISMEditorToolActions::Duplicate },
		{ "EISMEditorToolActions::Replace", (int64)EISMEditorToolActions::Replace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorToolActions_Statics::Enum_MetaDataParams[] = {
		{ "ClearSelection.Name", "EISMEditorToolActions::ClearSelection" },
		{ "Delete.Name", "EISMEditorToolActions::Delete" },
		{ "Duplicate.Name", "EISMEditorToolActions::Duplicate" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
		{ "NoAction.Name", "EISMEditorToolActions::NoAction" },
		{ "Replace.Name", "EISMEditorToolActions::Replace" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorToolActions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
		nullptr,
		"EISMEditorToolActions",
		"EISMEditorToolActions",
		Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorToolActions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorToolActions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorToolActions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorToolActions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorToolActions()
	{
		if (!Z_Registration_Info_UEnum_EISMEditorToolActions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EISMEditorToolActions.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EISMEditorToolActions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EISMEditorToolActions.InnerSingleton;
	}
	void UISMEditorToolActionPropertySetBase::StaticRegisterNativesUISMEditorToolActionPropertySetBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISMEditorToolActionPropertySetBase);
	UClass* Z_Construct_UClass_UISMEditorToolActionPropertySetBase_NoRegister()
	{
		return UISMEditorToolActionPropertySetBase::StaticClass();
	}
	struct Z_Construct_UClass_UISMEditorToolActionPropertySetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISMEditorToolActionPropertySetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorToolActionPropertySetBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ISMEditorTool.h" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISMEditorToolActionPropertySetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISMEditorToolActionPropertySetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISMEditorToolActionPropertySetBase_Statics::ClassParams = {
		&UISMEditorToolActionPropertySetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UISMEditorToolActionPropertySetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorToolActionPropertySetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISMEditorToolActionPropertySetBase()
	{
		if (!Z_Registration_Info_UClass_UISMEditorToolActionPropertySetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISMEditorToolActionPropertySetBase.OuterSingleton, Z_Construct_UClass_UISMEditorToolActionPropertySetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISMEditorToolActionPropertySetBase.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UISMEditorToolActionPropertySetBase>()
	{
		return UISMEditorToolActionPropertySetBase::StaticClass();
	}
	UISMEditorToolActionPropertySetBase::UISMEditorToolActionPropertySetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISMEditorToolActionPropertySetBase);
	UISMEditorToolActionPropertySetBase::~UISMEditorToolActionPropertySetBase() {}
	DEFINE_FUNCTION(UISMEditorToolActionPropertySet::execDuplicate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Duplicate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISMEditorToolActionPropertySet::execDelete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Delete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UISMEditorToolActionPropertySet::execClearSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSelection();
		P_NATIVE_END;
	}
	void UISMEditorToolActionPropertySet::StaticRegisterNativesUISMEditorToolActionPropertySet()
	{
		UClass* Class = UISMEditorToolActionPropertySet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearSelection", &UISMEditorToolActionPropertySet::execClearSelection },
			{ "Delete", &UISMEditorToolActionPropertySet::execDelete },
			{ "Duplicate", &UISMEditorToolActionPropertySet::execDuplicate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISMEditorToolActionPropertySet_ClearSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISMEditorToolActionPropertySet_ClearSelection_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "Comment", "/** Clear the active instance selection */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
		{ "ToolTip", "Clear the active instance selection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISMEditorToolActionPropertySet_ClearSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISMEditorToolActionPropertySet, nullptr, "ClearSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISMEditorToolActionPropertySet_ClearSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISMEditorToolActionPropertySet_ClearSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISMEditorToolActionPropertySet_ClearSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISMEditorToolActionPropertySet_ClearSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISMEditorToolActionPropertySet_Delete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISMEditorToolActionPropertySet_Delete_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "Comment", "/** Delete the selected instances */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
		{ "ToolTip", "Delete the selected instances" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISMEditorToolActionPropertySet_Delete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISMEditorToolActionPropertySet, nullptr, "Delete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISMEditorToolActionPropertySet_Delete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISMEditorToolActionPropertySet_Delete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISMEditorToolActionPropertySet_Delete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISMEditorToolActionPropertySet_Delete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UISMEditorToolActionPropertySet_Duplicate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISMEditorToolActionPropertySet_Duplicate_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionEdits" },
		{ "Comment", "/** Duplicate the selected instances */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
		{ "ToolTip", "Duplicate the selected instances" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISMEditorToolActionPropertySet_Duplicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISMEditorToolActionPropertySet, nullptr, "Duplicate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISMEditorToolActionPropertySet_Duplicate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISMEditorToolActionPropertySet_Duplicate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISMEditorToolActionPropertySet_Duplicate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISMEditorToolActionPropertySet_Duplicate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISMEditorToolActionPropertySet);
	UClass* Z_Construct_UClass_UISMEditorToolActionPropertySet_NoRegister()
	{
		return UISMEditorToolActionPropertySet::StaticClass();
	}
	struct Z_Construct_UClass_UISMEditorToolActionPropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISMEditorToolActionPropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UISMEditorToolActionPropertySetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISMEditorToolActionPropertySet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISMEditorToolActionPropertySet_ClearSelection, "ClearSelection" }, // 2908279505
		{ &Z_Construct_UFunction_UISMEditorToolActionPropertySet_Delete, "Delete" }, // 2329429788
		{ &Z_Construct_UFunction_UISMEditorToolActionPropertySet_Duplicate, "Duplicate" }, // 1980787879
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorToolActionPropertySet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ISMEditorTool.h" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISMEditorToolActionPropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISMEditorToolActionPropertySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISMEditorToolActionPropertySet_Statics::ClassParams = {
		&UISMEditorToolActionPropertySet::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UISMEditorToolActionPropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorToolActionPropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISMEditorToolActionPropertySet()
	{
		if (!Z_Registration_Info_UClass_UISMEditorToolActionPropertySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISMEditorToolActionPropertySet.OuterSingleton, Z_Construct_UClass_UISMEditorToolActionPropertySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISMEditorToolActionPropertySet.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UISMEditorToolActionPropertySet>()
	{
		return UISMEditorToolActionPropertySet::StaticClass();
	}
	UISMEditorToolActionPropertySet::UISMEditorToolActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISMEditorToolActionPropertySet);
	UISMEditorToolActionPropertySet::~UISMEditorToolActionPropertySet() {}
	DEFINE_FUNCTION(UISMEditorToolReplacePropertySet::execReplace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Replace();
		P_NATIVE_END;
	}
	void UISMEditorToolReplacePropertySet::StaticRegisterNativesUISMEditorToolReplacePropertySet()
	{
		UClass* Class = UISMEditorToolReplacePropertySet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Replace", &UISMEditorToolReplacePropertySet::execReplace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UISMEditorToolReplacePropertySet_Replace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UISMEditorToolReplacePropertySet_Replace_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Replace" },
		{ "Comment", "/** Clear the active instance selection */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
		{ "ToolTip", "Clear the active instance selection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISMEditorToolReplacePropertySet_Replace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISMEditorToolReplacePropertySet, nullptr, "Replace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UISMEditorToolReplacePropertySet_Replace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UISMEditorToolReplacePropertySet_Replace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UISMEditorToolReplacePropertySet_Replace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISMEditorToolReplacePropertySet_Replace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISMEditorToolReplacePropertySet);
	UClass* Z_Construct_UClass_UISMEditorToolReplacePropertySet_NoRegister()
	{
		return UISMEditorToolReplacePropertySet::StaticClass();
	}
	struct Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplaceWith_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplaceWith;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UISMEditorToolActionPropertySetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UISMEditorToolReplacePropertySet_Replace, "Replace" }, // 3220827384
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ISMEditorTool.h" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::NewProp_ReplaceWith_MetaData[] = {
		{ "Category", "Replace" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::NewProp_ReplaceWith = { "ReplaceWith", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISMEditorToolReplacePropertySet, ReplaceWith), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::NewProp_ReplaceWith_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::NewProp_ReplaceWith_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::NewProp_ReplaceWith,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISMEditorToolReplacePropertySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::ClassParams = {
		&UISMEditorToolReplacePropertySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISMEditorToolReplacePropertySet()
	{
		if (!Z_Registration_Info_UClass_UISMEditorToolReplacePropertySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISMEditorToolReplacePropertySet.OuterSingleton, Z_Construct_UClass_UISMEditorToolReplacePropertySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISMEditorToolReplacePropertySet.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UISMEditorToolReplacePropertySet>()
	{
		return UISMEditorToolReplacePropertySet::StaticClass();
	}
	UISMEditorToolReplacePropertySet::UISMEditorToolReplacePropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISMEditorToolReplacePropertySet);
	UISMEditorToolReplacePropertySet::~UISMEditorToolReplacePropertySet() {}
	void UISMEditorTool::StaticRegisterNativesUISMEditorTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISMEditorTool);
	UClass* Z_Construct_UClass_UISMEditorTool_NoRegister()
	{
		return UISMEditorTool::StaticClass();
	}
	struct Z_Construct_UClass_UISMEditorTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickOrDragBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClickOrDragBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RectangleMarqueeMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RectangleMarqueeMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplaceAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplaceAction;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetComponents;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveGizmos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGizmos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveGizmos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewGeometry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISMEditorTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ISMEditorTool.h" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ClickOrDragBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ClickOrDragBehavior = { "ClickOrDragBehavior", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISMEditorTool, ClickOrDragBehavior), Z_Construct_UClass_USingleClickOrDragInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ClickOrDragBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ClickOrDragBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorTool_Statics::NewProp_RectangleMarqueeMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UISMEditorTool_Statics::NewProp_RectangleMarqueeMechanic = { "RectangleMarqueeMechanic", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISMEditorTool, RectangleMarqueeMechanic), Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_RectangleMarqueeMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_RectangleMarqueeMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorTool_Statics::NewProp_TransformProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UISMEditorTool_Statics::NewProp_TransformProps = { "TransformProps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISMEditorTool, TransformProps), Z_Construct_UClass_UISMEditorToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_TransformProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_TransformProps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ToolActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ToolActions = { "ToolActions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISMEditorTool, ToolActions), Z_Construct_UClass_UISMEditorToolActionPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ToolActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ToolActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ReplaceAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ReplaceAction = { "ReplaceAction", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISMEditorTool, ReplaceAction), Z_Construct_UClass_UISMEditorToolReplacePropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ReplaceAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ReplaceAction_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UISMEditorTool_Statics::NewProp_TargetComponents_Inner = { "TargetComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorTool_Statics::NewProp_TargetComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UISMEditorTool_Statics::NewProp_TargetComponents = { "TargetComponents", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISMEditorTool, TargetComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_TargetComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_TargetComponents_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ActiveGizmos_Inner = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FISMEditorTarget, METADATA_PARAMS(nullptr, 0) }; // 2695609321
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ActiveGizmos_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ActiveGizmos = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISMEditorTool, ActiveGizmos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ActiveGizmos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ActiveGizmos_MetaData)) }; // 2695609321
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISMEditorTool_Statics::NewProp_PreviewGeometry_MetaData[] = {
		{ "ModuleRelativePath", "Public/ISMEditorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UISMEditorTool_Statics::NewProp_PreviewGeometry = { "PreviewGeometry", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UISMEditorTool, PreviewGeometry), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_PreviewGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorTool_Statics::NewProp_PreviewGeometry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISMEditorTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ClickOrDragBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorTool_Statics::NewProp_RectangleMarqueeMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorTool_Statics::NewProp_TransformProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ToolActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ReplaceAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorTool_Statics::NewProp_TargetComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorTool_Statics::NewProp_TargetComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ActiveGizmos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorTool_Statics::NewProp_ActiveGizmos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMEditorTool_Statics::NewProp_PreviewGeometry,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UISMEditorTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractiveToolCameraFocusAPI_NoRegister, (int32)VTABLE_OFFSET(UISMEditorTool, IInteractiveToolCameraFocusAPI), false },  // 3998126931
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISMEditorTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISMEditorTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISMEditorTool_Statics::ClassParams = {
		&UISMEditorTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UISMEditorTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UISMEditorTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISMEditorTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISMEditorTool()
	{
		if (!Z_Registration_Info_UClass_UISMEditorTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISMEditorTool.OuterSingleton, Z_Construct_UClass_UISMEditorTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISMEditorTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UISMEditorTool>()
	{
		return UISMEditorTool::StaticClass();
	}
	UISMEditorTool::UISMEditorTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISMEditorTool);
	UISMEditorTool::~UISMEditorTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ISMEditorTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ISMEditorTool_h_Statics::EnumInfo[] = {
		{ EISMEditorTransformMode_StaticEnum, TEXT("EISMEditorTransformMode"), &Z_Registration_Info_UEnum_EISMEditorTransformMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1670384743U) },
		{ EISMEditorToolActions_StaticEnum, TEXT("EISMEditorToolActions"), &Z_Registration_Info_UEnum_EISMEditorToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3434692967U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ISMEditorTool_h_Statics::ScriptStructInfo[] = {
		{ FISMEditorTarget::StaticStruct, Z_Construct_UScriptStruct_FISMEditorTarget_Statics::NewStructOps, TEXT("ISMEditorTarget"), &Z_Registration_Info_UScriptStruct_ISMEditorTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FISMEditorTarget), 2695609321U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ISMEditorTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISMEditorToolBuilder, UISMEditorToolBuilder::StaticClass, TEXT("UISMEditorToolBuilder"), &Z_Registration_Info_UClass_UISMEditorToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISMEditorToolBuilder), 1376106959U) },
		{ Z_Construct_UClass_UISMEditorToolProperties, UISMEditorToolProperties::StaticClass, TEXT("UISMEditorToolProperties"), &Z_Registration_Info_UClass_UISMEditorToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISMEditorToolProperties), 3826286310U) },
		{ Z_Construct_UClass_UISMEditorToolActionPropertySetBase, UISMEditorToolActionPropertySetBase::StaticClass, TEXT("UISMEditorToolActionPropertySetBase"), &Z_Registration_Info_UClass_UISMEditorToolActionPropertySetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISMEditorToolActionPropertySetBase), 1174417712U) },
		{ Z_Construct_UClass_UISMEditorToolActionPropertySet, UISMEditorToolActionPropertySet::StaticClass, TEXT("UISMEditorToolActionPropertySet"), &Z_Registration_Info_UClass_UISMEditorToolActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISMEditorToolActionPropertySet), 2891839319U) },
		{ Z_Construct_UClass_UISMEditorToolReplacePropertySet, UISMEditorToolReplacePropertySet::StaticClass, TEXT("UISMEditorToolReplacePropertySet"), &Z_Registration_Info_UClass_UISMEditorToolReplacePropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISMEditorToolReplacePropertySet), 3906667590U) },
		{ Z_Construct_UClass_UISMEditorTool, UISMEditorTool::StaticClass, TEXT("UISMEditorTool"), &Z_Registration_Info_UClass_UISMEditorTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISMEditorTool), 1684609517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ISMEditorTool_h_4190685081(TEXT("/Script/MeshModelingToolsEditorOnlyExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ISMEditorTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ISMEditorTool_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ISMEditorTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ISMEditorTool_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ISMEditorTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_ISMEditorTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
