// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingComponentsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelingComponentsSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingComponentsEditorSettings();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingComponentsEditorSettings_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingComponentsSettings();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingComponentsSettings_NoRegister();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EModelingComponentsPlaneVisualizationMode();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UModelingComponentsSettings::StaticRegisterNativesUModelingComponentsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModelingComponentsSettings);
	UClass* Z_Construct_UClass_UModelingComponentsSettings_NoRegister()
	{
		return UModelingComponentsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UModelingComponentsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRayTracingWhileEditing_MetaData[];
#endif
		static void NewProp_bEnableRayTracingWhileEditing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRayTracingWhileEditing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRayTracing_MetaData[];
#endif
		static void NewProp_bEnableRayTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRayTracing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModelingComponentsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingComponentsSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the Modeling Components plug-in. These settings are primarily used to configure two things:\n *   - Behavior of things like optional Rendering features inside Modeling Tools, eg for edit-preview rendering\n *   - Setup of New Mesh Objects emitted by Modeling Tools (eg their default collision settings, etc)\n */" },
		{ "IncludePath", "ModelingComponentsSettings.h" },
		{ "ModuleRelativePath", "Public/ModelingComponentsSettings.h" },
		{ "ToolTip", "Settings for the Modeling Components plug-in. These settings are primarily used to configure two things:\n  - Behavior of things like optional Rendering features inside Modeling Tools, eg for edit-preview rendering\n  - Setup of New Mesh Objects emitted by Modeling Tools (eg their default collision settings, etc)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableRayTracingWhileEditing_MetaData[] = {
		{ "Category", "Modeling Tools|Rendering" },
		{ "Comment", "/** Enable Realtime Raytracing support for Mesh Editing Tools. This will impact performance of Tools with Real-Time feedback like 3D Sculpting. */" },
		{ "ModuleRelativePath", "Public/ModelingComponentsSettings.h" },
		{ "ToolTip", "Enable Realtime Raytracing support for Mesh Editing Tools. This will impact performance of Tools with Real-Time feedback like 3D Sculpting." },
	};
#endif
	void Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableRayTracingWhileEditing_SetBit(void* Obj)
	{
		((UModelingComponentsSettings*)Obj)->bEnableRayTracingWhileEditing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableRayTracingWhileEditing = { "bEnableRayTracingWhileEditing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UModelingComponentsSettings), &Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableRayTracingWhileEditing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableRayTracingWhileEditing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableRayTracingWhileEditing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableRayTracing_MetaData[] = {
		{ "Category", "Modeling Tools|New Mesh Objects" },
		{ "Comment", "/** Enable Raytracing Support for new Mesh Objects created by Modeling Tools, if support is optional (eg DynamicMeshActors) */" },
		{ "ModuleRelativePath", "Public/ModelingComponentsSettings.h" },
		{ "ToolTip", "Enable Raytracing Support for new Mesh Objects created by Modeling Tools, if support is optional (eg DynamicMeshActors)" },
	};
#endif
	void Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableRayTracing_SetBit(void* Obj)
	{
		((UModelingComponentsSettings*)Obj)->bEnableRayTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableRayTracing = { "bEnableRayTracing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UModelingComponentsSettings), &Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableRayTracing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Category", "Modeling Tools|New Mesh Objects" },
		{ "Comment", "/** Enable Collision Support for new Mesh Objects created by Modeling Tools */" },
		{ "ModuleRelativePath", "Public/ModelingComponentsSettings.h" },
		{ "ToolTip", "Enable Collision Support for new Mesh Objects created by Modeling Tools" },
	};
#endif
	void Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((UModelingComponentsSettings*)Obj)->bEnableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UModelingComponentsSettings), &Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_CollisionMode_MetaData[] = {
		{ "Category", "Modeling Tools|New Mesh Objects" },
		{ "Comment", "/** Default Collision Mode set on new Mesh Objects created by Modeling Tools */" },
		{ "ModuleRelativePath", "Public/ModelingComponentsSettings.h" },
		{ "ToolTip", "Default Collision Mode set on new Mesh Objects created by Modeling Tools" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_CollisionMode = { "CollisionMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingComponentsSettings, CollisionMode), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_CollisionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_CollisionMode_MetaData)) }; // 3043805667
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModelingComponentsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableRayTracingWhileEditing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableRayTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingComponentsSettings_Statics::NewProp_CollisionMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModelingComponentsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelingComponentsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelingComponentsSettings_Statics::ClassParams = {
		&UModelingComponentsSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModelingComponentsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModelingComponentsSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UModelingComponentsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingComponentsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModelingComponentsSettings()
	{
		if (!Z_Registration_Info_UClass_UModelingComponentsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelingComponentsSettings.OuterSingleton, Z_Construct_UClass_UModelingComponentsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModelingComponentsSettings.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UModelingComponentsSettings>()
	{
		return UModelingComponentsSettings::StaticClass();
	}
	UModelingComponentsSettings::UModelingComponentsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModelingComponentsSettings);
	UModelingComponentsSettings::~UModelingComponentsSettings() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModelingComponentsPlaneVisualizationMode;
	static UEnum* EModelingComponentsPlaneVisualizationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EModelingComponentsPlaneVisualizationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EModelingComponentsPlaneVisualizationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EModelingComponentsPlaneVisualizationMode, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("EModelingComponentsPlaneVisualizationMode"));
		}
		return Z_Registration_Info_UEnum_EModelingComponentsPlaneVisualizationMode.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EModelingComponentsPlaneVisualizationMode>()
	{
		return EModelingComponentsPlaneVisualizationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_EModelingComponentsPlaneVisualizationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_EModelingComponentsPlaneVisualizationMode_Statics::Enumerators[] = {
		{ "EModelingComponentsPlaneVisualizationMode::SimpleGrid", (int64)EModelingComponentsPlaneVisualizationMode::SimpleGrid },
		{ "EModelingComponentsPlaneVisualizationMode::HierarchicalGrid", (int64)EModelingComponentsPlaneVisualizationMode::HierarchicalGrid },
		{ "EModelingComponentsPlaneVisualizationMode::FixedScreenAreaGrid", (int64)EModelingComponentsPlaneVisualizationMode::FixedScreenAreaGrid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_EModelingComponentsPlaneVisualizationMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Modeling Components plugin-wide plane visualization modes */" },
		{ "FixedScreenAreaGrid.Comment", "/** Draw a grid with a fixed size in screen space */" },
		{ "FixedScreenAreaGrid.Name", "EModelingComponentsPlaneVisualizationMode::FixedScreenAreaGrid" },
		{ "FixedScreenAreaGrid.ToolTip", "Draw a grid with a fixed size in screen space" },
		{ "HierarchicalGrid.Comment", "/** Draw a hierarchical grid */" },
		{ "HierarchicalGrid.Name", "EModelingComponentsPlaneVisualizationMode::HierarchicalGrid" },
		{ "HierarchicalGrid.ToolTip", "Draw a hierarchical grid" },
		{ "ModuleRelativePath", "Public/ModelingComponentsSettings.h" },
		{ "SimpleGrid.Comment", "/** Draw a grid with a fixed size in world space */" },
		{ "SimpleGrid.Name", "EModelingComponentsPlaneVisualizationMode::SimpleGrid" },
		{ "SimpleGrid.ToolTip", "Draw a grid with a fixed size in world space" },
		{ "ToolTip", "Modeling Components plugin-wide plane visualization modes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_EModelingComponentsPlaneVisualizationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"EModelingComponentsPlaneVisualizationMode",
		"EModelingComponentsPlaneVisualizationMode",
		Z_Construct_UEnum_ModelingComponents_EModelingComponentsPlaneVisualizationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EModelingComponentsPlaneVisualizationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingComponents_EModelingComponentsPlaneVisualizationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EModelingComponentsPlaneVisualizationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_EModelingComponentsPlaneVisualizationMode()
	{
		if (!Z_Registration_Info_UEnum_EModelingComponentsPlaneVisualizationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModelingComponentsPlaneVisualizationMode.InnerSingleton, Z_Construct_UEnum_ModelingComponents_EModelingComponentsPlaneVisualizationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EModelingComponentsPlaneVisualizationMode.InnerSingleton;
	}
	void UModelingComponentsEditorSettings::StaticRegisterNativesUModelingComponentsEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModelingComponentsEditorSettings);
	UClass* Z_Construct_UClass_UModelingComponentsEditorSettings_NoRegister()
	{
		return UModelingComponentsEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UModelingComponentsEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GridMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GridMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumGridLines_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumGridLines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Editor preferences for the Modeling Components plug-in.\n */" },
		{ "IncludePath", "ModelingComponentsSettings.h" },
		{ "ModuleRelativePath", "Public/ModelingComponentsSettings.h" },
		{ "ToolTip", "Editor preferences for the Modeling Components plug-in." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridMode_MetaData[] = {
		{ "Category", "Modeling Tools|Work Plane Configuration" },
		{ "Comment", "/** The type of grid to draw in the viewport for modeling mode tools */" },
		{ "ModuleRelativePath", "Public/ModelingComponentsSettings.h" },
		{ "ToolTip", "The type of grid to draw in the viewport for modeling mode tools" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridMode = { "GridMode", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingComponentsEditorSettings, GridMode), Z_Construct_UEnum_ModelingComponents_EModelingComponentsPlaneVisualizationMode, METADATA_PARAMS(Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridMode_MetaData)) }; // 133785858
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_NumGridLines_MetaData[] = {
		{ "Category", "Modeling Tools|Work Plane Configuration" },
		{ "ClampMin", "2" },
		{ "Comment", "/** The number of lines to be drawn for the plane */" },
		{ "EditCondition", "GridMode != EModelingComponentsPlaneVisualizationMode::HierarchicalGrid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ModelingComponentsSettings.h" },
		{ "ToolTip", "The number of lines to be drawn for the plane" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_NumGridLines = { "NumGridLines", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingComponentsEditorSettings, NumGridLines), METADATA_PARAMS(Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_NumGridLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_NumGridLines_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridSpacing_MetaData[] = {
		{ "Category", "Modeling Tools|Work Plane Configuration" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The space between grid lines in world space */" },
		{ "EditCondition", "GridMode == EModelingComponentsPlaneVisualizationMode::SimpleGrid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ModelingComponentsSettings.h" },
		{ "ToolTip", "The space between grid lines in world space" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridSpacing = { "GridSpacing", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingComponentsEditorSettings, GridSpacing), METADATA_PARAMS(Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridScale_MetaData[] = {
		{ "Category", "Modeling Tools|Work Plane Configuration" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The base scale used to determine the size of the hierarchical plane */" },
		{ "EditCondition", "GridMode == EModelingComponentsPlaneVisualizationMode::HierarchicalGrid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ModelingComponentsSettings.h" },
		{ "ToolTip", "The base scale used to determine the size of the hierarchical plane" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridScale = { "GridScale", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingComponentsEditorSettings, GridScale), METADATA_PARAMS(Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "Modeling Tools|Work Plane Configuration" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The fraction of the viewport that the grid should occupy if looking at the plane's center */" },
		{ "EditCondition", "GridMode == EModelingComponentsPlaneVisualizationMode::FixedScreenAreaGrid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ModelingComponentsSettings.h" },
		{ "ToolTip", "The fraction of the viewport that the grid should occupy if looking at the plane's center" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingComponentsEditorSettings, GridSize), METADATA_PARAMS(Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_NumGridLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::NewProp_GridSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelingComponentsEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::ClassParams = {
		&UModelingComponentsEditorSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModelingComponentsEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UModelingComponentsEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelingComponentsEditorSettings.OuterSingleton, Z_Construct_UClass_UModelingComponentsEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModelingComponentsEditorSettings.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UModelingComponentsEditorSettings>()
	{
		return UModelingComponentsEditorSettings::StaticClass();
	}
	UModelingComponentsEditorSettings::UModelingComponentsEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModelingComponentsEditorSettings);
	UModelingComponentsEditorSettings::~UModelingComponentsEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_Statics::EnumInfo[] = {
		{ EModelingComponentsPlaneVisualizationMode_StaticEnum, TEXT("EModelingComponentsPlaneVisualizationMode"), &Z_Registration_Info_UEnum_EModelingComponentsPlaneVisualizationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 133785858U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModelingComponentsSettings, UModelingComponentsSettings::StaticClass, TEXT("UModelingComponentsSettings"), &Z_Registration_Info_UClass_UModelingComponentsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelingComponentsSettings), 3170769322U) },
		{ Z_Construct_UClass_UModelingComponentsEditorSettings, UModelingComponentsEditorSettings::StaticClass, TEXT("UModelingComponentsEditorSettings"), &Z_Registration_Info_UClass_UModelingComponentsEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelingComponentsEditorSettings), 2021535723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_163818507(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingComponentsSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
