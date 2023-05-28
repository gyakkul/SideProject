// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Polymodeling/OffsetMeshSelectionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOffsetMeshSelectionTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshSelectionTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshSelectionTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshSelectionToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshSelectionToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UOffsetMeshSelectionToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleTargetWithSelectionToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UOffsetMeshSelectionToolBuilder::StaticRegisterNativesUOffsetMeshSelectionToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOffsetMeshSelectionToolBuilder);
	UClass* Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_NoRegister()
	{
		return UOffsetMeshSelectionToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleTargetWithSelectionToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ToolBuilder\n */" },
		{ "IncludePath", "Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "ToolBuilder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOffsetMeshSelectionToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_Statics::ClassParams = {
		&UOffsetMeshSelectionToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOffsetMeshSelectionToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UOffsetMeshSelectionToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOffsetMeshSelectionToolBuilder.OuterSingleton, Z_Construct_UClass_UOffsetMeshSelectionToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOffsetMeshSelectionToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UOffsetMeshSelectionToolBuilder>()
	{
		return UOffsetMeshSelectionToolBuilder::StaticClass();
	}
	UOffsetMeshSelectionToolBuilder::UOffsetMeshSelectionToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOffsetMeshSelectionToolBuilder);
	UOffsetMeshSelectionToolBuilder::~UOffsetMeshSelectionToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode;
	static UEnum* EOffsetMeshSelectionInteractionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EOffsetMeshSelectionInteractionMode"));
		}
		return Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EOffsetMeshSelectionInteractionMode>()
	{
		return EOffsetMeshSelectionInteractionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics::Enumerators[] = {
		{ "EOffsetMeshSelectionInteractionMode::Fixed", (int64)EOffsetMeshSelectionInteractionMode::Fixed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics::Enum_MetaDataParams[] = {
		{ "Fixed.Comment", "/** Define the offset distance using a slider in the Settings */" },
		{ "Fixed.Name", "EOffsetMeshSelectionInteractionMode::Fixed" },
		{ "Fixed.ToolTip", "Define the offset distance using a slider in the Settings" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EOffsetMeshSelectionInteractionMode",
		"EOffsetMeshSelectionInteractionMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode()
	{
		if (!Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionInteractionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode;
	static UEnum* EOffsetMeshSelectionDirectionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EOffsetMeshSelectionDirectionMode"));
		}
		return Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EOffsetMeshSelectionDirectionMode>()
	{
		return EOffsetMeshSelectionDirectionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics::Enumerators[] = {
		{ "EOffsetMeshSelectionDirectionMode::VertexNormals", (int64)EOffsetMeshSelectionDirectionMode::VertexNormals },
		{ "EOffsetMeshSelectionDirectionMode::FaceNormals", (int64)EOffsetMeshSelectionDirectionMode::FaceNormals },
		{ "EOffsetMeshSelectionDirectionMode::ConstantWidth", (int64)EOffsetMeshSelectionDirectionMode::ConstantWidth },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics::Enum_MetaDataParams[] = {
		{ "ConstantWidth.Comment", "/**  */" },
		{ "ConstantWidth.Name", "EOffsetMeshSelectionDirectionMode::ConstantWidth" },
		{ "FaceNormals.Comment", "/** */" },
		{ "FaceNormals.Name", "EOffsetMeshSelectionDirectionMode::FaceNormals" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "VertexNormals.Comment", "/** */" },
		{ "VertexNormals.Name", "EOffsetMeshSelectionDirectionMode::VertexNormals" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EOffsetMeshSelectionDirectionMode",
		"EOffsetMeshSelectionDirectionMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode()
	{
		if (!Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode.InnerSingleton;
	}
	void UOffsetMeshSelectionToolProperties::StaticRegisterNativesUOffsetMeshSelectionToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOffsetMeshSelectionToolProperties);
	UClass* Z_Construct_UClass_UOffsetMeshSelectionToolProperties_NoRegister()
	{
		return UOffsetMeshSelectionToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetDistance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OffsetDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSubdivisions_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumSubdivisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreaseAngle_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CreaseAngle;
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
	UObject* (*const Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_OffsetDistance_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** The Extrusion Distance used in Fixed Input Mode*/" },
		{ "DisplayName", "Distance" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "The Extrusion Distance used in Fixed Input Mode" },
		{ "UIMax", "250" },
		{ "UIMin", "-250" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_OffsetDistance = { "OffsetDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOffsetMeshSelectionToolProperties, OffsetDistance), METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_OffsetDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_OffsetDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Control how the Offset Area should be displaced */" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Control how the Offset Area should be displaced" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOffsetMeshSelectionToolProperties, Direction), Z_Construct_UEnum_MeshModelingToolsExp_EOffsetMeshSelectionDirectionMode, METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_Direction_MetaData)) }; // 168829366
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_NumSubdivisions_MetaData[] = {
		{ "Category", "Offset" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Specify the number of subdivisions along the sides of the Extrusion */" },
		{ "DisplayName", "Subdivisions" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Specify the number of subdivisions along the sides of the Extrusion" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_NumSubdivisions = { "NumSubdivisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOffsetMeshSelectionToolProperties, NumSubdivisions), METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_NumSubdivisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_NumSubdivisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_CreaseAngle_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** Specify the Crease Angle used to split the sides of the Extrusion into separate Groups */" },
		{ "Max", "180" },
		{ "Min", "0" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Specify the Crease Angle used to split the sides of the Extrusion into separate Groups" },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_CreaseAngle = { "CreaseAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOffsetMeshSelectionToolProperties, CreaseAngle), METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_CreaseAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_CreaseAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids_MetaData[] = {
		{ "Category", "Offset" },
		{ "Comment", "/** If the Offset Area has a fully open border, this option determines if Extrusion will create a Solid mesh or leave the base \"open\" */" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "If the Offset Area has a fully open border, this option determines if Extrusion will create a Solid mesh or leave the base \"open\"" },
	};
#endif
	void Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids_SetBit(void* Obj)
	{
		((UOffsetMeshSelectionToolProperties*)Obj)->bShellsToSolids = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids = { "bShellsToSolids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOffsetMeshSelectionToolProperties), &Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/** Control whether a single Group should be generated along the sides of the Extrusion, or multiple Groups based on the adjacent Groups around the Offset Area border */" },
		{ "DisplayName", "Propagate Groups" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Control whether a single Group should be generated along the sides of the Extrusion, or multiple Groups based on the adjacent Groups around the Offset Area border" },
	};
#endif
	void Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs_SetBit(void* Obj)
	{
		((UOffsetMeshSelectionToolProperties*)Obj)->bInferGroupsFromNbrs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs = { "bInferGroupsFromNbrs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOffsetMeshSelectionToolProperties), &Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/** Control whether a new Group is generated for each Subdivision */" },
		{ "DisplayName", "Per Subdivision" },
		{ "EditCondition", "NumSubdivisions > 0" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Control whether a new Group is generated for each Subdivision" },
	};
#endif
	void Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision_SetBit(void* Obj)
	{
		((UOffsetMeshSelectionToolProperties*)Obj)->bGroupPerSubdivision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision = { "bGroupPerSubdivision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOffsetMeshSelectionToolProperties), &Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/** Control whether groups in the Offset Area are mapped to new Groups, or replaced with a single new Group */" },
		{ "DisplayName", "Replace Cap Groups" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Control whether groups in the Offset Area are mapped to new Groups, or replaced with a single new Group" },
	};
#endif
	void Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups_SetBit(void* Obj)
	{
		((UOffsetMeshSelectionToolProperties*)Obj)->bReplaceSelectionGroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups = { "bReplaceSelectionGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOffsetMeshSelectionToolProperties), &Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "UVs" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** The automatically-generated UVs on the sides of the Extrusion are scaled by this value */" },
		{ "DisplayName", "UV Scale" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "The automatically-generated UVs on the sides of the Extrusion are scaled by this value" },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.001000" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOffsetMeshSelectionToolProperties, UVScale), METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_UVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_UVScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup_MetaData[] = {
		{ "Category", "UVs" },
		{ "Comment", "/** Control whether a separate UV island should be generated for each output Group on the sides of the Extrusion, or a single UV island wrapping around the entire \"tube\" */" },
		{ "DisplayName", "Island Per Group" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Control whether a separate UV island should be generated for each output Group on the sides of the Extrusion, or a single UV island wrapping around the entire \"tube\"" },
	};
#endif
	void Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup_SetBit(void* Obj)
	{
		((UOffsetMeshSelectionToolProperties*)Obj)->bUVIslandPerGroup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup = { "bUVIslandPerGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOffsetMeshSelectionToolProperties), &Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Control whether SetMaterialID is assigned to all triangles along the sides of the Extrusion, or if MaterialIDs should be inferred from the Offset Area */" },
		{ "DisplayName", "Infer Materials" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Control whether SetMaterialID is assigned to all triangles along the sides of the Extrusion, or if MaterialIDs should be inferred from the Offset Area" },
	};
#endif
	void Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID_SetBit(void* Obj)
	{
		((UOffsetMeshSelectionToolProperties*)Obj)->bInferMaterialID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID = { "bInferMaterialID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOffsetMeshSelectionToolProperties), &Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_SetMaterialID_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Constant Material ID used when MaterialIDs are not being inferred, or no adjacent MaterialID exists */" },
		{ "DisplayName", "Material ID" },
		{ "EditCondition", "bInferMaterialID == false" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Constant Material ID used when MaterialIDs are not being inferred, or no adjacent MaterialID exists" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_SetMaterialID = { "SetMaterialID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOffsetMeshSelectionToolProperties, SetMaterialID), METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_SetMaterialID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_SetMaterialID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Control whether the original Mesh Materials should be shown, or a visualization of the Offset Groups */" },
		{ "DisplayName", "Show Materials" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ToolTip", "Control whether the original Mesh Materials should be shown, or a visualization of the Offset Groups" },
	};
#endif
	void Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials_SetBit(void* Obj)
	{
		((UOffsetMeshSelectionToolProperties*)Obj)->bShowInputMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials = { "bShowInputMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOffsetMeshSelectionToolProperties), &Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_OffsetDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_NumSubdivisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_CreaseAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShellsToSolids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferGroupsFromNbrs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bGroupPerSubdivision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bReplaceSelectionGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_UVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bUVIslandPerGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bInferMaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_SetMaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::NewProp_bShowInputMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOffsetMeshSelectionToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::ClassParams = {
		&UOffsetMeshSelectionToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOffsetMeshSelectionToolProperties()
	{
		if (!Z_Registration_Info_UClass_UOffsetMeshSelectionToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOffsetMeshSelectionToolProperties.OuterSingleton, Z_Construct_UClass_UOffsetMeshSelectionToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOffsetMeshSelectionToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UOffsetMeshSelectionToolProperties>()
	{
		return UOffsetMeshSelectionToolProperties::StaticClass();
	}
	UOffsetMeshSelectionToolProperties::UOffsetMeshSelectionToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOffsetMeshSelectionToolProperties);
	UOffsetMeshSelectionToolProperties::~UOffsetMeshSelectionToolProperties() {}
	void UOffsetMeshSelectionTool::StaticRegisterNativesUOffsetMeshSelectionTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOffsetMeshSelectionTool);
	UClass* Z_Construct_UClass_UOffsetMeshSelectionTool_NoRegister()
	{
		return UOffsetMeshSelectionTool::StaticClass();
	}
	struct Z_Construct_UClass_UOffsetMeshSelectionTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OffsetProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePreview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourcePreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditCompute_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditCompute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleTargetWithSelectionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Polymodeling/OffsetMeshSelectionTool.h" },
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_OffsetProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_OffsetProperties = { "OffsetProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOffsetMeshSelectionTool, OffsetProperties), Z_Construct_UClass_UOffsetMeshSelectionToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_OffsetProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_OffsetProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_SourcePreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_SourcePreview = { "SourcePreview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOffsetMeshSelectionTool, SourcePreview), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_SourcePreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_SourcePreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_EditCompute_MetaData[] = {
		{ "ModuleRelativePath", "Public/Polymodeling/OffsetMeshSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_EditCompute = { "EditCompute", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOffsetMeshSelectionTool, EditCompute), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_EditCompute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_EditCompute_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_OffsetProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_SourcePreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::NewProp_EditCompute,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOffsetMeshSelectionTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::ClassParams = {
		&UOffsetMeshSelectionTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOffsetMeshSelectionTool()
	{
		if (!Z_Registration_Info_UClass_UOffsetMeshSelectionTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOffsetMeshSelectionTool.OuterSingleton, Z_Construct_UClass_UOffsetMeshSelectionTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOffsetMeshSelectionTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UOffsetMeshSelectionTool>()
	{
		return UOffsetMeshSelectionTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOffsetMeshSelectionTool);
	UOffsetMeshSelectionTool::~UOffsetMeshSelectionTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_OffsetMeshSelectionTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_OffsetMeshSelectionTool_h_Statics::EnumInfo[] = {
		{ EOffsetMeshSelectionInteractionMode_StaticEnum, TEXT("EOffsetMeshSelectionInteractionMode"), &Z_Registration_Info_UEnum_EOffsetMeshSelectionInteractionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3553471459U) },
		{ EOffsetMeshSelectionDirectionMode_StaticEnum, TEXT("EOffsetMeshSelectionDirectionMode"), &Z_Registration_Info_UEnum_EOffsetMeshSelectionDirectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 168829366U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_OffsetMeshSelectionTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOffsetMeshSelectionToolBuilder, UOffsetMeshSelectionToolBuilder::StaticClass, TEXT("UOffsetMeshSelectionToolBuilder"), &Z_Registration_Info_UClass_UOffsetMeshSelectionToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOffsetMeshSelectionToolBuilder), 1897112400U) },
		{ Z_Construct_UClass_UOffsetMeshSelectionToolProperties, UOffsetMeshSelectionToolProperties::StaticClass, TEXT("UOffsetMeshSelectionToolProperties"), &Z_Registration_Info_UClass_UOffsetMeshSelectionToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOffsetMeshSelectionToolProperties), 3687556841U) },
		{ Z_Construct_UClass_UOffsetMeshSelectionTool, UOffsetMeshSelectionTool::StaticClass, TEXT("UOffsetMeshSelectionTool"), &Z_Registration_Info_UClass_UOffsetMeshSelectionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOffsetMeshSelectionTool), 344951865U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_OffsetMeshSelectionTool_h_1870253690(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_OffsetMeshSelectionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_OffsetMeshSelectionTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_OffsetMeshSelectionTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Polymodeling_OffsetMeshSelectionTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
