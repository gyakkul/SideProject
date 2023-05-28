// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolCutter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolCutter() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureCollisionSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureCollisionSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureCutterSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureCutterSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureInteractiveTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolCutterBase();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolCutterBase_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolVoronoiCutterBase();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolVoronoiCutterBase_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureTransformGizmoSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureTransformGizmoSettings_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureCutterSettings::StaticRegisterNativesUFractureCutterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureCutterSettings);
	UClass* Z_Construct_UClass_UFractureCutterSettings_NoRegister()
	{
		return UFractureCutterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureCutterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChanceToFracture_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChanceToFracture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGroupFracture_MetaData[];
#endif
		static void NewProp_bGroupFracture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupFracture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGroupFractureToggleEnabled_MetaData[];
#endif
		static void NewProp_bGroupFractureToggleEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupFractureToggleEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grout_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Grout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGroutSettingEnabled_MetaData[];
#endif
		static void NewProp_bGroutSettingEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroutSettingEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSites_MetaData[];
#endif
		static void NewProp_bDrawSites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSitesToggleEnabled_MetaData[];
#endif
		static void NewProp_bDrawSitesToggleEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSitesToggleEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDiagram_MetaData[];
#endif
		static void NewProp_bDrawDiagram_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDiagram;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawNoisePreview_MetaData[];
#endif
		static void NewProp_bDrawNoisePreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawNoisePreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoisePreviewToggleEnabled_MetaData[];
#endif
		static void NewProp_bNoisePreviewToggleEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoisePreviewToggleEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FractionPreviewCells_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FractionPreviewCells;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoisePreviewScale_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_NoisePreviewScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoisePreviewHasScale_MetaData[];
#endif
		static void NewProp_bNoisePreviewHasScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoisePreviewHasScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Persistence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Persistence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OctaveNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OctaveNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoiseSettingsEnabled_MetaData[];
#endif
		static void NewProp_bNoiseSettingsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoiseSettingsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureCutterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings specifically related to the one-time destructive fracturing of a mesh **/" },
		{ "IncludePath", "FractureToolCutter.h" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings specifically related to the one-time destructive fracturing of a mesh *" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "CommonFracture" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Random number generator seed for repeatability. If the value is -1, a different random seed will be used every time, otherwise the specified seed will always be used */" },
		{ "DisplayName", "Random Seed" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Random number generator seed for repeatability. If the value is -1, a different random seed will be used every time, otherwise the specified seed will always be used" },
		{ "UIMax", "1000" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCutterSettings, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_ChanceToFracture_MetaData[] = {
		{ "Category", "CommonFracture" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Chance to fracture each selected bone. If 0, no bones will fracture; if 1, all bones will fracture. */" },
		{ "DisplayName", "Chance To Fracture Per Bone" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Chance to fracture each selected bone. If 0, no bones will fracture; if 1, all bones will fracture." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_ChanceToFracture = { "ChanceToFracture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCutterSettings, ChanceToFracture), METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_ChanceToFracture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_ChanceToFracture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroupFracture_MetaData[] = {
		{ "Category", "CommonFracture" },
		{ "Comment", "/** Generate a fracture pattern across all selected meshes.  */" },
		{ "DisplayName", "Group Fracture" },
		{ "EditCondition", "bGroupFractureToggleEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Generate a fracture pattern across all selected meshes." },
	};
#endif
	void Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroupFracture_SetBit(void* Obj)
	{
		((UFractureCutterSettings*)Obj)->bGroupFracture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroupFracture = { "bGroupFracture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureCutterSettings), &Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroupFracture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroupFracture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroupFracture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroupFractureToggleEnabled_MetaData[] = {
		{ "Comment", "// This flag allows tools to disable the above bGroupFracture option if/when it is not applicable\n" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "This flag allows tools to disable the above bGroupFracture option if/when it is not applicable" },
	};
#endif
	void Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroupFractureToggleEnabled_SetBit(void* Obj)
	{
		((UFractureCutterSettings*)Obj)->bGroupFractureToggleEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroupFractureToggleEnabled = { "bGroupFractureToggleEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureCutterSettings), &Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroupFractureToggleEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroupFractureToggleEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroupFractureToggleEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Grout_MetaData[] = {
		{ "Category", "CommonFracture" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of space to leave between cut pieces */" },
		{ "EditCondition", "bGroutSettingEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Amount of space to leave between cut pieces" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Grout = { "Grout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCutterSettings, Grout), METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Grout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Grout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroutSettingEnabled_MetaData[] = {
		{ "Comment", "// This flag allows tools to disable the above Grout setting if/when it's not applicable\n" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "This flag allows tools to disable the above Grout setting if/when it's not applicable" },
	};
#endif
	void Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroutSettingEnabled_SetBit(void* Obj)
	{
		((UFractureCutterSettings*)Obj)->bGroutSettingEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroutSettingEnabled = { "bGroutSettingEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureCutterSettings), &Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroutSettingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroutSettingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroutSettingEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawSites_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Draw points marking the centers of pieces to be cut out by the fracture pattern.  */" },
		{ "DisplayName", "Draw Sites" },
		{ "EditCondition", "bDrawSitesToggleEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Draw points marking the centers of pieces to be cut out by the fracture pattern." },
	};
#endif
	void Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawSites_SetBit(void* Obj)
	{
		((UFractureCutterSettings*)Obj)->bDrawSites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawSites = { "bDrawSites", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureCutterSettings), &Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawSites_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawSites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawSites_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawSitesToggleEnabled_MetaData[] = {
		{ "Comment", "// This flag allows tools to disable the above bDrawSites option if/when it is not applicable\n" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "This flag allows tools to disable the above bDrawSites option if/when it is not applicable" },
	};
#endif
	void Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawSitesToggleEnabled_SetBit(void* Obj)
	{
		((UFractureCutterSettings*)Obj)->bDrawSitesToggleEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawSitesToggleEnabled = { "bDrawSitesToggleEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureCutterSettings), &Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawSitesToggleEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawSitesToggleEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawSitesToggleEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawDiagram_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Draw the edges of the fracture pattern.  */" },
		{ "DisplayName", "Draw Diagram" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Draw the edges of the fracture pattern." },
	};
#endif
	void Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawDiagram_SetBit(void* Obj)
	{
		((UFractureCutterSettings*)Obj)->bDrawDiagram = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawDiagram = { "bDrawDiagram", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureCutterSettings), &Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawDiagram_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawDiagram_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawDiagram_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawNoisePreview_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Whether to show a solid preview of the cutting geometry, including any noise displacement */" },
		{ "EditCondition", "bNoisePreviewToggleEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Whether to show a solid preview of the cutting geometry, including any noise displacement" },
	};
#endif
	void Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawNoisePreview_SetBit(void* Obj)
	{
		((UFractureCutterSettings*)Obj)->bDrawNoisePreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawNoisePreview = { "bDrawNoisePreview", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureCutterSettings), &Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawNoisePreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawNoisePreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawNoisePreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoisePreviewToggleEnabled_MetaData[] = {
		{ "Comment", "// This flag allows tools to disable the above bDrawNoisePreview option if/when it is not applicable\n" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "This flag allows tools to disable the above bDrawNoisePreview option if/when it is not applicable" },
	};
#endif
	void Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoisePreviewToggleEnabled_SetBit(void* Obj)
	{
		((UFractureCutterSettings*)Obj)->bNoisePreviewToggleEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoisePreviewToggleEnabled = { "bNoisePreviewToggleEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureCutterSettings), &Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoisePreviewToggleEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoisePreviewToggleEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoisePreviewToggleEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_FractionPreviewCells_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Fraction of cells to show in noise preview */" },
		{ "EditCondition", "bDrawNoisePreview && bDrawSitesToggleEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Fraction of cells to show in noise preview" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_FractionPreviewCells = { "FractionPreviewCells", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCutterSettings, FractionPreviewCells), METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_FractionPreviewCells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_FractionPreviewCells_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_NoisePreviewScale_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ClampMax", "1000" },
		{ "ClampMin", ".01" },
		{ "Comment", "/** Scale of the noise preview plane */" },
		{ "EditCondition", "bDrawNoisePreview && bNoisePreviewHasScale" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Scale of the noise preview plane" },
		{ "UIMax", "10" },
		{ "UIMin", ".25" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_NoisePreviewScale = { "NoisePreviewScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCutterSettings, NoisePreviewScale), METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_NoisePreviewScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_NoisePreviewScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoisePreviewHasScale_MetaData[] = {
		{ "Comment", "// This flag allows tools to disable the noise preview scale setting if it's not applicable\n" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "This flag allows tools to disable the noise preview scale setting if it's not applicable" },
	};
#endif
	void Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoisePreviewHasScale_SetBit(void* Obj)
	{
		((UFractureCutterSettings*)Obj)->bNoisePreviewHasScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoisePreviewHasScale = { "bNoisePreviewHasScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureCutterSettings), &Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoisePreviewHasScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoisePreviewHasScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoisePreviewHasScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Size of the Perlin noise displacement (in cm). If 0, no noise will be applied */" },
		{ "EditCondition", "bNoiseSettingsEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Size of the Perlin noise displacement (in cm). If 0, no noise will be applied" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCutterSettings, Amplitude), METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Period of the Perlin noise.  Smaller values will create a smoother noise pattern */" },
		{ "EditCondition", "bNoiseSettingsEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Period of the Perlin noise.  Smaller values will create a smoother noise pattern" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCutterSettings, Frequency), METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Persistence_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Persistence of the layers of Perlin noise. At each layer (octave) after the first, the amplitude of the Perlin noise is scaled by this factor */" },
		{ "EditCondition", "bNoiseSettingsEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Persistence of the layers of Perlin noise. At each layer (octave) after the first, the amplitude of the Perlin noise is scaled by this factor" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Persistence = { "Persistence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCutterSettings, Persistence), METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Persistence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Persistence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Lacunarity_MetaData[] = {
		{ "Category", "Noise" },
		{ "Comment", "/** Lacunarity of the layers of Perlin noise. At each layer (octave) after the first, the frequency of the Perlin noise is scaled by this factor */" },
		{ "EditCondition", "bNoiseSettingsEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Lacunarity of the layers of Perlin noise. At each layer (octave) after the first, the frequency of the Perlin noise is scaled by this factor" },
		{ "UIMax", "4.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Lacunarity = { "Lacunarity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCutterSettings, Lacunarity), METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Lacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Lacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_OctaveNumber_MetaData[] = {
		{ "Category", "Noise" },
		{ "ClampMin", "1" },
		{ "Comment", "/** \n\x09 * Number of fractal layers of Perlin noise to apply. Each layer is additive, with Amplitude and Frequency parameters scaled by Persistence and Lacunarity\n\x09 * Smaller values (1 or 2) will create noise that looks like gentle rolling hills, while larger values (> 4) will tend to look more like craggy mountains\n\x09 */" },
		{ "EditCondition", "bNoiseSettingsEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Number of fractal layers of Perlin noise to apply. Each layer is additive, with Amplitude and Frequency parameters scaled by Persistence and Lacunarity\nSmaller values (1 or 2) will create noise that looks like gentle rolling hills, while larger values (> 4) will tend to look more like craggy mountains" },
		{ "UIMax", "8" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_OctaveNumber = { "OctaveNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCutterSettings, OctaveNumber), METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_OctaveNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_OctaveNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_PointSpacing_MetaData[] = {
		{ "Category", "Noise" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Distance (in cm) between vertices on cut surfaces where noise is added.  Larger spacing between vertices will create more efficient meshes with fewer triangles, but less resolution to see the shape of the added noise  */" },
		{ "DisplayName", "Point Spacing" },
		{ "EditCondition", "bNoiseSettingsEnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Distance (in cm) between vertices on cut surfaces where noise is added.  Larger spacing between vertices will create more efficient meshes with fewer triangles, but less resolution to see the shape of the added noise" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_PointSpacing = { "PointSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCutterSettings, PointSpacing), METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_PointSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_PointSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoiseSettingsEnabled_MetaData[] = {
		{ "Comment", "// This flag allows tools to disable the above Noise settings if/when they are not applicable\n" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "This flag allows tools to disable the above Noise settings if/when they are not applicable" },
	};
#endif
	void Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoiseSettingsEnabled_SetBit(void* Obj)
	{
		((UFractureCutterSettings*)Obj)->bNoiseSettingsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoiseSettingsEnabled = { "bNoiseSettingsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureCutterSettings), &Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoiseSettingsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoiseSettingsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoiseSettingsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureCutterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_ChanceToFracture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroupFracture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroupFractureToggleEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Grout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bGroutSettingEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawSites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawSitesToggleEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawDiagram,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bDrawNoisePreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoisePreviewToggleEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_FractionPreviewCells,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_NoisePreviewScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoisePreviewHasScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Persistence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_Lacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_OctaveNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_PointSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCutterSettings_Statics::NewProp_bNoiseSettingsEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureCutterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureCutterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureCutterSettings_Statics::ClassParams = {
		&UFractureCutterSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureCutterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureCutterSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCutterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureCutterSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureCutterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureCutterSettings.OuterSingleton, Z_Construct_UClass_UFractureCutterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureCutterSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureCutterSettings>()
	{
		return UFractureCutterSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureCutterSettings);
	UFractureCutterSettings::~UFractureCutterSettings() {}
	void UFractureCollisionSettings::StaticRegisterNativesUFractureCollisionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureCollisionSettings);
	UClass* Z_Construct_UClass_UFractureCollisionSettings_NoRegister()
	{
		return UFractureCollisionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureCollisionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddSamplesForCollision_MetaData[];
#endif
		static void NewProp_bAddSamplesForCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddSamplesForCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSpacing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureCollisionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCollisionSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings related to the collision properties of the fractured mesh pieces */" },
		{ "IncludePath", "FractureToolCutter.h" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings related to the collision properties of the fractured mesh pieces" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCollisionSettings_Statics::NewProp_bAddSamplesForCollision_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09 * If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\n\x09 * These extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\x09 * \n\x09 * Note this is *only* useful for simulations that use particle-implicit collisions\n\x09 */" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "If enabled, add extra vertices (without triangles) to the geometry in regions where vertices are spaced too far apart (e.g. across large triangles)\nThese extra vertices will be used as collision samples in particle-implicit collisions, and can help the physics system detect collisions more accurately\n\nNote this is *only* useful for simulations that use particle-implicit collisions" },
	};
#endif
	void Z_Construct_UClass_UFractureCollisionSettings_Statics::NewProp_bAddSamplesForCollision_SetBit(void* Obj)
	{
		((UFractureCollisionSettings*)Obj)->bAddSamplesForCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureCollisionSettings_Statics::NewProp_bAddSamplesForCollision = { "bAddSamplesForCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureCollisionSettings), &Z_Construct_UClass_UFractureCollisionSettings_Statics::NewProp_bAddSamplesForCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureCollisionSettings_Statics::NewProp_bAddSamplesForCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCollisionSettings_Statics::NewProp_bAddSamplesForCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureCollisionSettings_Statics::NewProp_PointSpacing_MetaData[] = {
		{ "Category", "Collision" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/**\n\x09 * The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\n\x09 * Only used if Add Samples For Collision is enabled\n\x09 */" },
		{ "EditCondition", "bAddSamplesForCollision" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "The number of centimeters to allow between vertices on the mesh surface: If there are gaps larger than this, add additional vertices (without triangles) to help support particle-implicit collisions\nOnly used if Add Samples For Collision is enabled" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureCollisionSettings_Statics::NewProp_PointSpacing = { "PointSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureCollisionSettings, PointSpacing), METADATA_PARAMS(Z_Construct_UClass_UFractureCollisionSettings_Statics::NewProp_PointSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCollisionSettings_Statics::NewProp_PointSpacing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureCollisionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCollisionSettings_Statics::NewProp_bAddSamplesForCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureCollisionSettings_Statics::NewProp_PointSpacing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureCollisionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureCollisionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureCollisionSettings_Statics::ClassParams = {
		&UFractureCollisionSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureCollisionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCollisionSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureCollisionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureCollisionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureCollisionSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureCollisionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureCollisionSettings.OuterSingleton, Z_Construct_UClass_UFractureCollisionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureCollisionSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureCollisionSettings>()
	{
		return UFractureCollisionSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureCollisionSettings);
	UFractureCollisionSettings::~UFractureCollisionSettings() {}
	void UFractureToolCutterBase::StaticRegisterNativesUFractureToolCutterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolCutterBase);
	UClass* Z_Construct_UClass_UFractureToolCutterBase_NoRegister()
	{
		return UFractureToolCutterBase::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolCutterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutterSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CutterSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolCutterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolCutterBase_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Cutter Base" },
		{ "IncludePath", "FractureToolCutter.h" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolCutterBase_Statics::NewProp_CutterSettings_MetaData[] = {
		{ "Category", "Slicing" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolCutterBase_Statics::NewProp_CutterSettings = { "CutterSettings", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolCutterBase, CutterSettings), Z_Construct_UClass_UFractureCutterSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolCutterBase_Statics::NewProp_CutterSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolCutterBase_Statics::NewProp_CutterSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolCutterBase_Statics::NewProp_CollisionSettings_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolCutterBase_Statics::NewProp_CollisionSettings = { "CollisionSettings", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolCutterBase, CollisionSettings), Z_Construct_UClass_UFractureCollisionSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolCutterBase_Statics::NewProp_CollisionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolCutterBase_Statics::NewProp_CollisionSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolCutterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolCutterBase_Statics::NewProp_CutterSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolCutterBase_Statics::NewProp_CollisionSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolCutterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolCutterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolCutterBase_Statics::ClassParams = {
		&UFractureToolCutterBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolCutterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolCutterBase_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolCutterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolCutterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolCutterBase()
	{
		if (!Z_Registration_Info_UClass_UFractureToolCutterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolCutterBase.OuterSingleton, Z_Construct_UClass_UFractureToolCutterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolCutterBase.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolCutterBase>()
	{
		return UFractureToolCutterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolCutterBase);
	UFractureToolCutterBase::~UFractureToolCutterBase() {}
	void UFractureToolVoronoiCutterBase::StaticRegisterNativesUFractureToolVoronoiCutterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolVoronoiCutterBase);
	UClass* Z_Construct_UClass_UFractureToolVoronoiCutterBase_NoRegister()
	{
		return UFractureToolVoronoiCutterBase::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VoronoiLineSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoronoiLineSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VoronoiLineSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolCutterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Voronoi Base" },
		{ "IncludePath", "FractureToolCutter.h" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::NewProp_VoronoiLineSets_Inner = { "VoronoiLineSets", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::NewProp_VoronoiLineSets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::NewProp_VoronoiLineSets = { "VoronoiLineSets", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolVoronoiCutterBase, VoronoiLineSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::NewProp_VoronoiLineSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::NewProp_VoronoiLineSets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::NewProp_VoronoiLineSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::NewProp_VoronoiLineSets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolVoronoiCutterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::ClassParams = {
		&UFractureToolVoronoiCutterBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolVoronoiCutterBase()
	{
		if (!Z_Registration_Info_UClass_UFractureToolVoronoiCutterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolVoronoiCutterBase.OuterSingleton, Z_Construct_UClass_UFractureToolVoronoiCutterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolVoronoiCutterBase.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolVoronoiCutterBase>()
	{
		return UFractureToolVoronoiCutterBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolVoronoiCutterBase);
	UFractureToolVoronoiCutterBase::~UFractureToolVoronoiCutterBase() {}
	void UFractureTransformGizmoSettings::StaticRegisterNativesUFractureTransformGizmoSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureTransformGizmoSettings);
	UClass* Z_Construct_UClass_UFractureTransformGizmoSettings_NoRegister()
	{
		return UFractureTransformGizmoSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureTransformGizmoSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGizmo_MetaData[];
#endif
		static void NewProp_bUseGizmo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterOnSelection_MetaData[];
#endif
		static void NewProp_bCenterOnSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterOnSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowUseGizmoOption_MetaData[];
#endif
		static void NewProp_bShowUseGizmoOption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowUseGizmoOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedCutter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AttachedCutter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsedToolsContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UsedToolsContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/// This helps create a 3D transform gizmo that can be used to adjust fracture placement\n// Note it is tailored to UFractureToolCutterBase, and expects Setup(), Shutdown()\n// and ResetGizmo() to be called on tool setup, shutdown, and selection change respectively\n" },
		{ "IncludePath", "FractureToolCutter.h" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This helps create a 3D transform gizmo that can be used to adjust fracture placement\nNote it is tailored to UFractureToolCutterBase, and expects Setup(), Shutdown()\nand ResetGizmo() to be called on tool setup, shutdown, and selection change respectively" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bUseGizmo_MetaData[] = {
		{ "Category", "PlacementControls" },
		{ "Comment", "/** Use a 3D rigid transform gizmo to place the fracture pattern.  Only supports grouped fracture. */" },
		{ "EditCondition", "bShowUseGizmoOption" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Use a 3D rigid transform gizmo to place the fracture pattern.  Only supports grouped fracture." },
	};
#endif
	void Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bUseGizmo_SetBit(void* Obj)
	{
		((UFractureTransformGizmoSettings*)Obj)->bUseGizmo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bUseGizmo = { "bUseGizmo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureTransformGizmoSettings), &Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bUseGizmo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bUseGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bUseGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bCenterOnSelection_MetaData[] = {
		{ "Category", "PlacementControls" },
		{ "Comment", "/** Recenter the gizmo to the center of the selection when selection changes */" },
		{ "EditCondition", "bUseGizmo" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "Recenter the gizmo to the center of the selection when selection changes" },
	};
#endif
	void Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bCenterOnSelection_SetBit(void* Obj)
	{
		((UFractureTransformGizmoSettings*)Obj)->bCenterOnSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bCenterOnSelection = { "bCenterOnSelection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureTransformGizmoSettings), &Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bCenterOnSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bCenterOnSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bCenterOnSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bShowUseGizmoOption_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
	};
#endif
	void Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bShowUseGizmoOption_SetBit(void* Obj)
	{
		((UFractureTransformGizmoSettings*)Obj)->bShowUseGizmoOption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bShowUseGizmoOption = { "bShowUseGizmoOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureTransformGizmoSettings), &Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bShowUseGizmoOption_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bShowUseGizmoOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bShowUseGizmoOption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureTransformGizmoSettings, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_TransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_TransformGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureTransformGizmoSettings, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_TransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_TransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_AttachedCutter_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_AttachedCutter = { "AttachedCutter", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureTransformGizmoSettings, AttachedCutter), Z_Construct_UClass_UFractureToolCutterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_AttachedCutter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_AttachedCutter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_UsedToolsContext_MetaData[] = {
		{ "Comment", "// the tools context responsible for the gizmo\n" },
		{ "ModuleRelativePath", "Private/FractureToolCutter.h" },
		{ "ToolTip", "the tools context responsible for the gizmo" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_UsedToolsContext = { "UsedToolsContext", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureTransformGizmoSettings, UsedToolsContext), Z_Construct_UClass_UInteractiveToolsContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_UsedToolsContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_UsedToolsContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bUseGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bCenterOnSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_bShowUseGizmoOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_TransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_TransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_AttachedCutter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::NewProp_UsedToolsContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureTransformGizmoSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::ClassParams = {
		&UFractureTransformGizmoSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureTransformGizmoSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureTransformGizmoSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureTransformGizmoSettings.OuterSingleton, Z_Construct_UClass_UFractureTransformGizmoSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureTransformGizmoSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureTransformGizmoSettings>()
	{
		return UFractureTransformGizmoSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureTransformGizmoSettings);
	UFractureTransformGizmoSettings::~UFractureTransformGizmoSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureCutterSettings, UFractureCutterSettings::StaticClass, TEXT("UFractureCutterSettings"), &Z_Registration_Info_UClass_UFractureCutterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureCutterSettings), 729981448U) },
		{ Z_Construct_UClass_UFractureCollisionSettings, UFractureCollisionSettings::StaticClass, TEXT("UFractureCollisionSettings"), &Z_Registration_Info_UClass_UFractureCollisionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureCollisionSettings), 159351680U) },
		{ Z_Construct_UClass_UFractureToolCutterBase, UFractureToolCutterBase::StaticClass, TEXT("UFractureToolCutterBase"), &Z_Registration_Info_UClass_UFractureToolCutterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolCutterBase), 3777264991U) },
		{ Z_Construct_UClass_UFractureToolVoronoiCutterBase, UFractureToolVoronoiCutterBase::StaticClass, TEXT("UFractureToolVoronoiCutterBase"), &Z_Registration_Info_UClass_UFractureToolVoronoiCutterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolVoronoiCutterBase), 921393663U) },
		{ Z_Construct_UClass_UFractureTransformGizmoSettings, UFractureTransformGizmoSettings::StaticClass, TEXT("UFractureTransformGizmoSettings"), &Z_Registration_Info_UClass_UFractureTransformGizmoSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureTransformGizmoSettings), 2775833215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_2410582544(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolCutter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
