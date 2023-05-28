// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/EditMode/ControlRigEditModeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigEditModeSettings() {}
// Cross Module References
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigEditModeSettings();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigEditModeSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UControlRigEditModeSettings::StaticRegisterNativesUControlRigEditModeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigEditModeSettings);
	UClass* Z_Construct_UClass_UControlRigEditModeSettings_NoRegister()
	{
		return UControlRigEditModeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigEditModeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayHierarchy_MetaData[];
#endif
		static void NewProp_bDisplayHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayNulls_MetaData[];
#endif
		static void NewProp_bDisplayNulls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayNulls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideControlShapes_MetaData[];
#endif
		static void NewProp_bHideControlShapes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideControlShapes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAllProxyControls_MetaData[];
#endif
		static void NewProp_bShowAllProxyControls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAllProxyControls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowControlsAsOverlay_MetaData[];
#endif
		static void NewProp_bShowControlsAsOverlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowControlsAsOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivenControlColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrivenControlColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayAxesOnSelection_MetaData[];
#endif
		static void NewProp_bDisplayAxesOnSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayAxesOnSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCoordSystemPerWidgetMode_MetaData[];
#endif
		static void NewProp_bCoordSystemPerWidgetMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCoordSystemPerWidgetMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySelectRigControls_MetaData[];
#endif
		static void NewProp_bOnlySelectRigControls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlySelectRigControls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocalTransformsInEachLocalSpace_MetaData[];
#endif
		static void NewProp_bLocalTransformsInEachLocalSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalTransformsInEachLocalSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInViewportTweenWidgetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastInViewportTweenWidgetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigEditModeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditModeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings object used to show useful information in the details panel */" },
		{ "IncludePath", "EditMode/ControlRigEditModeSettings.h" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditModeSettings.h" },
		{ "ToolTip", "Settings object used to show useful information in the details panel" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayHierarchy_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "Comment", "/** Whether to show all bones in the hierarchy */" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditModeSettings.h" },
		{ "ToolTip", "Whether to show all bones in the hierarchy" },
	};
#endif
	void Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayHierarchy_SetBit(void* Obj)
	{
		((UControlRigEditModeSettings*)Obj)->bDisplayHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayHierarchy = { "bDisplayHierarchy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigEditModeSettings), &Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayNulls_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "Comment", "/** Whether to show all nulls in the hierarchy */" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditModeSettings.h" },
		{ "ToolTip", "Whether to show all nulls in the hierarchy" },
	};
#endif
	void Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayNulls_SetBit(void* Obj)
	{
		((UControlRigEditModeSettings*)Obj)->bDisplayNulls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayNulls = { "bDisplayNulls", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigEditModeSettings), &Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayNulls_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayNulls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayNulls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bHideControlShapes_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "Comment", "/** Should we always hide control shapes in viewport */" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditModeSettings.h" },
		{ "ToolTip", "Should we always hide control shapes in viewport" },
	};
#endif
	void Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bHideControlShapes_SetBit(void* Obj)
	{
		((UControlRigEditModeSettings*)Obj)->bHideControlShapes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bHideControlShapes = { "bHideControlShapes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigEditModeSettings), &Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bHideControlShapes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bHideControlShapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bHideControlShapes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bShowAllProxyControls_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "Comment", "/** Should we always hide control shapes in viewport */" },
		{ "EditCondition", "!bHideControlShapes" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditModeSettings.h" },
		{ "ToolTip", "Should we always hide control shapes in viewport" },
	};
#endif
	void Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bShowAllProxyControls_SetBit(void* Obj)
	{
		((UControlRigEditModeSettings*)Obj)->bShowAllProxyControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bShowAllProxyControls = { "bShowAllProxyControls", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigEditModeSettings), &Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bShowAllProxyControls_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bShowAllProxyControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bShowAllProxyControls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bShowControlsAsOverlay_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "Comment", "/** Determins if controls should be rendered on top of other controls */" },
		{ "EditCondition", "!bHideControlShapes" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditModeSettings.h" },
		{ "ToolTip", "Determins if controls should be rendered on top of other controls" },
	};
#endif
	void Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bShowControlsAsOverlay_SetBit(void* Obj)
	{
		((UControlRigEditModeSettings*)Obj)->bShowControlsAsOverlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bShowControlsAsOverlay = { "bShowControlsAsOverlay", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigEditModeSettings), &Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bShowControlsAsOverlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bShowControlsAsOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bShowControlsAsOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_DrivenControlColor_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "Comment", "/** Indicates a control being driven by a proxy control */" },
		{ "EditCondition", "!bHideControlShapes" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditModeSettings.h" },
		{ "ToolTip", "Indicates a control being driven by a proxy control" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_DrivenControlColor = { "DrivenControlColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditModeSettings, DrivenControlColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_DrivenControlColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_DrivenControlColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayAxesOnSelection_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "Comment", "/** Should we show axes for the selected elements */" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditModeSettings.h" },
		{ "ToolTip", "Should we show axes for the selected elements" },
	};
#endif
	void Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayAxesOnSelection_SetBit(void* Obj)
	{
		((UControlRigEditModeSettings*)Obj)->bDisplayAxesOnSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayAxesOnSelection = { "bDisplayAxesOnSelection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigEditModeSettings), &Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayAxesOnSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayAxesOnSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayAxesOnSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_AxisScale_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "Comment", "/** The scale for axes to draw on the selection */" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditModeSettings.h" },
		{ "ToolTip", "The scale for axes to draw on the selection" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_AxisScale = { "AxisScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditModeSettings, AxisScale), METADATA_PARAMS(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_AxisScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_AxisScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bCoordSystemPerWidgetMode_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "Comment", "/** If true we restore the coordinate space when changing Widget Modes in the Viewport*/" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditModeSettings.h" },
		{ "ToolTip", "If true we restore the coordinate space when changing Widget Modes in the Viewport" },
	};
#endif
	void Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bCoordSystemPerWidgetMode_SetBit(void* Obj)
	{
		((UControlRigEditModeSettings*)Obj)->bCoordSystemPerWidgetMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bCoordSystemPerWidgetMode = { "bCoordSystemPerWidgetMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigEditModeSettings), &Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bCoordSystemPerWidgetMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bCoordSystemPerWidgetMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bCoordSystemPerWidgetMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bOnlySelectRigControls_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "Comment", "/** If true we can only select Rig Controls in the scene not other Actors. */" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditModeSettings.h" },
		{ "ToolTip", "If true we can only select Rig Controls in the scene not other Actors." },
	};
#endif
	void Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bOnlySelectRigControls_SetBit(void* Obj)
	{
		((UControlRigEditModeSettings*)Obj)->bOnlySelectRigControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bOnlySelectRigControls = { "bOnlySelectRigControls", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigEditModeSettings), &Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bOnlySelectRigControls_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bOnlySelectRigControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bOnlySelectRigControls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bLocalTransformsInEachLocalSpace_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "Comment", "/** If true when we transform multiple selected objects in the viewport they each transforms along their own local transform space */" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditModeSettings.h" },
		{ "ToolTip", "If true when we transform multiple selected objects in the viewport they each transforms along their own local transform space" },
	};
#endif
	void Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bLocalTransformsInEachLocalSpace_SetBit(void* Obj)
	{
		((UControlRigEditModeSettings*)Obj)->bLocalTransformsInEachLocalSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bLocalTransformsInEachLocalSpace = { "bLocalTransformsInEachLocalSpace", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigEditModeSettings), &Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bLocalTransformsInEachLocalSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bLocalTransformsInEachLocalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bLocalTransformsInEachLocalSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_GizmoScale_MetaData[] = {
		{ "Category", "Animation Settings" },
		{ "Comment", "/** The scale for Gizmos */" },
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditModeSettings.h" },
		{ "ToolTip", "The scale for Gizmos" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_GizmoScale = { "GizmoScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditModeSettings, GizmoScale), METADATA_PARAMS(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_GizmoScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_GizmoScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_LastInViewportTweenWidgetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditMode/ControlRigEditModeSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_LastInViewportTweenWidgetLocation = { "LastInViewportTweenWidgetLocation", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigEditModeSettings, LastInViewportTweenWidgetLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_LastInViewportTweenWidgetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_LastInViewportTweenWidgetLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigEditModeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayNulls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bHideControlShapes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bShowAllProxyControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bShowControlsAsOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_DrivenControlColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bDisplayAxesOnSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_AxisScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bCoordSystemPerWidgetMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bOnlySelectRigControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_bLocalTransformsInEachLocalSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_GizmoScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigEditModeSettings_Statics::NewProp_LastInViewportTweenWidgetLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigEditModeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigEditModeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigEditModeSettings_Statics::ClassParams = {
		&UControlRigEditModeSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigEditModeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigEditModeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigEditModeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigEditModeSettings()
	{
		if (!Z_Registration_Info_UClass_UControlRigEditModeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigEditModeSettings.OuterSingleton, Z_Construct_UClass_UControlRigEditModeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigEditModeSettings.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigEditModeSettings>()
	{
		return UControlRigEditModeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigEditModeSettings);
	UControlRigEditModeSettings::~UControlRigEditModeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditModeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditModeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigEditModeSettings, UControlRigEditModeSettings::StaticClass, TEXT("UControlRigEditModeSettings"), &Z_Registration_Info_UClass_UControlRigEditModeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigEditModeSettings), 937628376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditModeSettings_h_2627279077(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditModeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_EditMode_ControlRigEditModeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
