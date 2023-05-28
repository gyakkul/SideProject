// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Polymodeling/ExtrudeMeshSelectionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExtrudeMeshSelectionTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtrudeMeshSelectionTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtrudeMeshSelectionTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UExtrudeMeshSelectionToolBuilder::StaticRegisterNativesUExtrudeMeshSelectionToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExtrudeMeshSelectionToolBuilder);
	UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_NoRegister()
	{
		return UExtrudeMeshSelectionToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleTargetWithSelectionToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ToolBuilder\n */" },
		{ "IncludePath", "Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "ToolBuilder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtrudeMeshSelectionToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_Statics::ClassParams = {
		&UExtrudeMeshSelectionToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UExtrudeMeshSelectionToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExtrudeMeshSelectionToolBuilder.OuterSingleton, Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExtrudeMeshSelectionToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UExtrudeMeshSelectionToolBuilder>()
	{
		return UExtrudeMeshSelectionToolBuilder::StaticClass();
	}
	UExtrudeMeshSelectionToolBuilder::UExtrudeMeshSelectionToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExtrudeMeshSelectionToolBuilder);
	UExtrudeMeshSelectionToolBuilder::~UExtrudeMeshSelectionToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode;
	static UEnum* EExtrudeMeshSelectionInteractionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EExtrudeMeshSelectionInteractionMode"));
		}
		return Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EExtrudeMeshSelectionInteractionMode>()
	{
		return EExtrudeMeshSelectionInteractionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics::Enumerators[] = {
		{ "EExtrudeMeshSelectionInteractionMode::Interactive", (int64)EExtrudeMeshSelectionInteractionMode::Interactive },
		{ "EExtrudeMeshSelectionInteractionMode::Fixed", (int64)EExtrudeMeshSelectionInteractionMode::Fixed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics::Enum_MetaDataParams[] = {
		{ "Fixed.Comment", "/** Define the extrusion distance using a slider in the Settings */" },
		{ "Fixed.Name", "EExtrudeMeshSelectionInteractionMode::Fixed" },
		{ "Fixed.ToolTip", "Define the extrusion distance using a slider in the Settings" },
		{ "Interactive.Comment", "/** Define the extrusion distance using a 3D gizmo */" },
		{ "Interactive.Name", "EExtrudeMeshSelectionInteractionMode::Interactive" },
		{ "Interactive.ToolTip", "Define the extrusion distance using a 3D gizmo" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EExtrudeMeshSelectionInteractionMode",
		"EExtrudeMeshSelectionInteractionMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode()
	{
		if (!Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode;
	static UEnum* EExtrudeMeshSelectionRegionModifierMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EExtrudeMeshSelectionRegionModifierMode"));
		}
		return Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EExtrudeMeshSelectionRegionModifierMode>()
	{
		return EExtrudeMeshSelectionRegionModifierMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics::Enumerators[] = {
		{ "EExtrudeMeshSelectionRegionModifierMode::OriginalShape", (int64)EExtrudeMeshSelectionRegionModifierMode::OriginalShape },
		{ "EExtrudeMeshSelectionRegionModifierMode::FlattenToPlane", (int64)EExtrudeMeshSelectionRegionModifierMode::FlattenToPlane },
		{ "EExtrudeMeshSelectionRegionModifierMode::RaycastToPlane", (int64)EExtrudeMeshSelectionRegionModifierMode::RaycastToPlane },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics::Enum_MetaDataParams[] = {
		{ "FlattenToPlane.Comment", "/** Flatten the extrusion area to the X/Y plane of the extrusion frame */" },
		{ "FlattenToPlane.Name", "EExtrudeMeshSelectionRegionModifierMode::FlattenToPlane" },
		{ "FlattenToPlane.ToolTip", "Flatten the extrusion area to the X/Y plane of the extrusion frame" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "OriginalShape.Comment", "/** Transform the original selected area */" },
		{ "OriginalShape.Name", "EExtrudeMeshSelectionRegionModifierMode::OriginalShape" },
		{ "OriginalShape.ToolTip", "Transform the original selected area" },
		{ "RaycastToPlane.Comment", "/** Flatten the extrusion area by raycasting against the X/Y plane of the extrusion frame */" },
		{ "RaycastToPlane.Name", "EExtrudeMeshSelectionRegionModifierMode::RaycastToPlane" },
		{ "RaycastToPlane.ToolTip", "Flatten the extrusion area by raycasting against the X/Y plane of the extrusion frame" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EExtrudeMeshSelectionRegionModifierMode",
		"EExtrudeMeshSelectionRegionModifierMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode()
	{
		if (!Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode.InnerSingleton;
	}
	void UExtrudeMeshSelectionToolProperties::StaticRegisterNativesUExtrudeMeshSelectionToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExtrudeMeshSelectionToolProperties);
	UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_NoRegister()
	{
		return UExtrudeMeshSelectionToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeDistance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ExtrudeDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RegionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RegionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSubdivisions_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumSubdivisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreaseAngle_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CreaseAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RaycastMaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RaycastMaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShellsToSolids_MetaData[];
#endif
		static void NewProp_bShellsToSolids_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShellsToSolids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInferGroupsFromNbrs_MetaData[];
#endif
		static void NewProp_bInferGroupsFromNbrs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInferGroupsFromNbrs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGroupPerSubdivision_MetaData[];
#endif
		static void NewProp_bGroupPerSubdivision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupPerSubdivision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceSelectionGroups_MetaData[];
#endif
		static void NewProp_bReplaceSelectionGroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceSelectionGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_UVScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUVIslandPerGroup_MetaData[];
#endif
		static void NewProp_bUVIslandPerGroup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUVIslandPerGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInferMaterialID_MetaData[];
#endif
		static void NewProp_bInferMaterialID_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInferMaterialID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetMaterialID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SetMaterialID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowInputMaterials_MetaData[];
#endif
		static void NewProp_bShowInputMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInputMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** Control how the Extruded Area should be Transformed */" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control how the Extruded Area should be Transformed" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, InputMode), Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionInteractionMode, METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_InputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_InputMode_MetaData)) }; // 3287708611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_ExtrudeDistance_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** The Extrusion Distance used in Fixed Input Mode*/" },
		{ "DisplayName", "Fixed Distance" },
		{ "EditCondition", "InputMode == EExtrudeMeshSelectionInteractionMode::Fixed" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "The Extrusion Distance used in Fixed Input Mode" },
		{ "UIMax", "250" },
		{ "UIMin", "-250" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_ExtrudeDistance = { "ExtrudeDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, ExtrudeDistance), METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_ExtrudeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_ExtrudeDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RegionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RegionMode_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** Control how the Extruded Area should be deformed as part of the Extrusion */" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control how the Extruded Area should be deformed as part of the Extrusion" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RegionMode = { "RegionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, RegionMode), Z_Construct_UEnum_MeshModelingToolsExp_EExtrudeMeshSelectionRegionModifierMode, METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RegionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RegionMode_MetaData)) }; // 1258881422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_NumSubdivisions_MetaData[] = {
		{ "Category", "Extrude" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Specify the number of subdivisions along the sides of the Extrusion */" },
		{ "DisplayName", "Subdivisions" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Specify the number of subdivisions along the sides of the Extrusion" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_NumSubdivisions = { "NumSubdivisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, NumSubdivisions), METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_NumSubdivisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_NumSubdivisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_CreaseAngle_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** Specify the Crease Angle used to split the sides of the Extrusion into separate Groups */" },
		{ "Max", "180" },
		{ "Min", "0" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Specify the Crease Angle used to split the sides of the Extrusion into separate Groups" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_CreaseAngle = { "CreaseAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, CreaseAngle), METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_CreaseAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_CreaseAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RaycastMaxDistance_MetaData[] = {
		{ "Category", "Extrude" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Control the maximum distance each vertex may be moved in Raycast To Plane Mode */" },
		{ "DisplayName", "Max Distance" },
		{ "EditCondition", "RegionMode == EExtrudeMeshSelectionRegionModifierMode::RaycastToPlane" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control the maximum distance each vertex may be moved in Raycast To Plane Mode" },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RaycastMaxDistance = { "RaycastMaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, RaycastMaxDistance), METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RaycastMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RaycastMaxDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** If the Extruded Area has a fully open border, this option determines if Extrusion will create a Solid mesh or leave the base \"open\" */" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "If the Extruded Area has a fully open border, this option determines if Extrusion will create a Solid mesh or leave the base \"open\"" },
	};
#endif
	void Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids_SetBit(void* Obj)
	{
		((UExtrudeMeshSelectionToolProperties*)Obj)->bShellsToSolids = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids = { "bShellsToSolids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UExtrudeMeshSelectionToolProperties), &Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/** Control whether a single Group should be generated along the sides of the Extrusion, or multiple Groups based on the adjacent Groups around the Extruded Area border */" },
		{ "DisplayName", "Propagate Groups" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control whether a single Group should be generated along the sides of the Extrusion, or multiple Groups based on the adjacent Groups around the Extruded Area border" },
	};
#endif
	void Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs_SetBit(void* Obj)
	{
		((UExtrudeMeshSelectionToolProperties*)Obj)->bInferGroupsFromNbrs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs = { "bInferGroupsFromNbrs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UExtrudeMeshSelectionToolProperties), &Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/** Control whether a new Group is generated for each Subdivision */" },
		{ "DisplayName", "Per Subdivision" },
		{ "EditCondition", "NumSubdivisions > 0" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control whether a new Group is generated for each Subdivision" },
	};
#endif
	void Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision_SetBit(void* Obj)
	{
		((UExtrudeMeshSelectionToolProperties*)Obj)->bGroupPerSubdivision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision = { "bGroupPerSubdivision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UExtrudeMeshSelectionToolProperties), &Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/** Control whether groups in the Extruded Area are mapped to new Groups, or replaced with a single new Group */" },
		{ "DisplayName", "Replace Cap Groups" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control whether groups in the Extruded Area are mapped to new Groups, or replaced with a single new Group" },
	};
#endif
	void Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups_SetBit(void* Obj)
	{
		((UExtrudeMeshSelectionToolProperties*)Obj)->bReplaceSelectionGroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups = { "bReplaceSelectionGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UExtrudeMeshSelectionToolProperties), &Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "UVs" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** The automatically-generated UVs on the sides of the Extrusion are scaled by this value */" },
		{ "DisplayName", "UV Scale" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "The automatically-generated UVs on the sides of the Extrusion are scaled by this value" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.001000" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, UVScale), METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_UVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_UVScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup_MetaData[] = {
		{ "Category", "UVs" },
		{ "Comment", "/** Control whether a separate UV island should be generated for each output Group on the sides of the Extrusion, or a single UV island wrapping around the entire \"tube\" */" },
		{ "DisplayName", "Island Per Group" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control whether a separate UV island should be generated for each output Group on the sides of the Extrusion, or a single UV island wrapping around the entire \"tube\"" },
	};
#endif
	void Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup_SetBit(void* Obj)
	{
		((UExtrudeMeshSelectionToolProperties*)Obj)->bUVIslandPerGroup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup = { "bUVIslandPerGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UExtrudeMeshSelectionToolProperties), &Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Control whether SetMaterialID is assigned to all triangles along the sides of the Extrusion, or if MaterialIDs should be inferred from the Extruded Area */" },
		{ "DisplayName", "Infer Materials" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control whether SetMaterialID is assigned to all triangles along the sides of the Extrusion, or if MaterialIDs should be inferred from the Extruded Area" },
	};
#endif
	void Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID_SetBit(void* Obj)
	{
		((UExtrudeMeshSelectionToolProperties*)Obj)->bInferMaterialID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID = { "bInferMaterialID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UExtrudeMeshSelectionToolProperties), &Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_SetMaterialID_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Constant Material ID used when MaterialIDs are not being inferred, or no adjacent MaterialID exists */" },
		{ "DisplayName", "Material ID" },
		{ "EditCondition", "bInferMaterialID == false" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Constant Material ID used when MaterialIDs are not being inferred, or no adjacent MaterialID exists" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_SetMaterialID = { "SetMaterialID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtrudeMeshSelectionToolProperties, SetMaterialID), METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_SetMaterialID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_SetMaterialID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Control whether the original Mesh Materials should be shown, or a visualization of the extruded Groups */" },
		{ "DisplayName", "Show Materials" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ToolTip", "Control whether the original Mesh Materials should be shown, or a visualization of the extruded Groups" },
	};
#endif
	void Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials_SetBit(void* Obj)
	{
		((UExtrudeMeshSelectionToolProperties*)Obj)->bShowInputMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials = { "bShowInputMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UExtrudeMeshSelectionToolProperties), &Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_InputMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_InputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_ExtrudeDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RegionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RegionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_NumSubdivisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_CreaseAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_RaycastMaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_UVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_SetMaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtrudeMeshSelectionToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::ClassParams = {
		&UExtrudeMeshSelectionToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExtrudeMeshSelectionToolProperties()
	{
		if (!Z_Registration_Info_UClass_UExtrudeMeshSelectionToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExtrudeMeshSelectionToolProperties.OuterSingleton, Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExtrudeMeshSelectionToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UExtrudeMeshSelectionToolProperties>()
	{
		return UExtrudeMeshSelectionToolProperties::StaticClass();
	}
	UExtrudeMeshSelectionToolProperties::UExtrudeMeshSelectionToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExtrudeMeshSelectionToolProperties);
	UExtrudeMeshSelectionToolProperties::~UExtrudeMeshSelectionToolProperties() {}
	void UExtrudeMeshSelectionTool::StaticRegisterNativesUExtrudeMeshSelectionTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExtrudeMeshSelectionTool);
	UClass* Z_Construct_UClass_UExtrudeMeshSelectionTool_NoRegister()
	{
		return UExtrudeMeshSelectionTool::StaticClass();
	}
	struct Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExtrudeProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePreview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourcePreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditCompute_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditCompute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleTargetWithSelectionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Polymodeling/ExtrudeMeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_ExtrudeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_ExtrudeProperties = { "ExtrudeProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtrudeMeshSelectionTool, ExtrudeProperties), Z_Construct_UClass_UExtrudeMeshSelectionToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_ExtrudeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_ExtrudeProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_SourcePreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_SourcePreview = { "SourcePreview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtrudeMeshSelectionTool, SourcePreview), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_SourcePreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_SourcePreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_EditCompute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_EditCompute = { "EditCompute", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtrudeMeshSelectionTool, EditCompute), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_EditCompute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_EditCompute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtrudeMeshSelectionTool, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_TransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_TransformGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/ExtrudeMeshSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExtrudeMeshSelectionTool, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_TransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_TransformProxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_ExtrudeProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_SourcePreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_EditCompute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_TransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::NewProp_TransformProxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExtrudeMeshSelectionTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::ClassParams = {
		&UExtrudeMeshSelectionTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExtrudeMeshSelectionTool()
	{
		if (!Z_Registration_Info_UClass_UExtrudeMeshSelectionTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExtrudeMeshSelectionTool.OuterSingleton, Z_Construct_UClass_UExtrudeMeshSelectionTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExtrudeMeshSelectionTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UExtrudeMeshSelectionTool>()
	{
		return UExtrudeMeshSelectionTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExtrudeMeshSelectionTool);
	UExtrudeMeshSelectionTool::~UExtrudeMeshSelectionTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_ExtrudeMeshSelectionTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_ExtrudeMeshSelectionTool_h_Statics::EnumInfo[] = {
		{ EExtrudeMeshSelectionInteractionMode_StaticEnum, TEXT("EExtrudeMeshSelectionInteractionMode"), &Z_Registration_Info_UEnum_EExtrudeMeshSelectionInteractionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3287708611U) },
		{ EExtrudeMeshSelectionRegionModifierMode_StaticEnum, TEXT("EExtrudeMeshSelectionRegionModifierMode"), &Z_Registration_Info_UEnum_EExtrudeMeshSelectionRegionModifierMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1258881422U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_ExtrudeMeshSelectionTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExtrudeMeshSelectionToolBuilder, UExtrudeMeshSelectionToolBuilder::StaticClass, TEXT("UExtrudeMeshSelectionToolBuilder"), &Z_Registration_Info_UClass_UExtrudeMeshSelectionToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExtrudeMeshSelectionToolBuilder), 2572219202U) },
		{ Z_Construct_UClass_UExtrudeMeshSelectionToolProperties, UExtrudeMeshSelectionToolProperties::StaticClass, TEXT("UExtrudeMeshSelectionToolProperties"), &Z_Registration_Info_UClass_UExtrudeMeshSelectionToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExtrudeMeshSelectionToolProperties), 972623516U) },
		{ Z_Construct_UClass_UExtrudeMeshSelectionTool, UExtrudeMeshSelectionTool::StaticClass, TEXT("UExtrudeMeshSelectionTool"), &Z_Registration_Info_UClass_UExtrudeMeshSelectionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExtrudeMeshSelectionTool), 3331297429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_ExtrudeMeshSelectionTool_h_1412928960(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_ExtrudeMeshSelectionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_ExtrudeMeshSelectionTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_ExtrudeMeshSelectionTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_ExtrudeMeshSelectionTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
