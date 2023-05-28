// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshTangentsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshTangentsTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMeshTangentsTool();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMeshTangentsTool_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMeshTangentsToolBuilder();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMeshTangentsToolBuilder_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMeshTangentsToolProperties();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UMeshTangentsToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	MODELINGOPERATORSEDITORONLY_API UEnum* Z_Construct_UEnum_ModelingOperatorsEditorOnly_EMeshTangentsType();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp();
// End Cross Module References
	void UMeshTangentsToolBuilder::StaticRegisterNativesUMeshTangentsToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshTangentsToolBuilder);
	UClass* Z_Construct_UClass_UMeshTangentsToolBuilder_NoRegister()
	{
		return UMeshTangentsToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMeshTangentsToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshTangentsToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTangentsToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MeshTangentsTool.h" },
		{ "ModuleRelativePath", "Public/MeshTangentsTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshTangentsToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshTangentsToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshTangentsToolBuilder_Statics::ClassParams = {
		&UMeshTangentsToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshTangentsToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshTangentsToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMeshTangentsToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshTangentsToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshTangentsToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshTangentsToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UMeshTangentsToolBuilder>()
	{
		return UMeshTangentsToolBuilder::StaticClass();
	}
	UMeshTangentsToolBuilder::UMeshTangentsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshTangentsToolBuilder);
	UMeshTangentsToolBuilder::~UMeshTangentsToolBuilder() {}
	void UMeshTangentsToolProperties::StaticRegisterNativesUMeshTangentsToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshTangentsToolProperties);
	UClass* Z_Construct_UClass_UMeshTangentsToolProperties_NoRegister()
	{
		return UMeshTangentsToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMeshTangentsToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CalculationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalculationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CalculationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTangents_MetaData[];
#endif
		static void NewProp_bShowTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowNormals_MetaData[];
#endif
		static void NewProp_bShowNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDegenerates_MetaData[];
#endif
		static void NewProp_bShowDegenerates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDegenerates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompareWithMikkt_MetaData[];
#endif
		static void NewProp_bCompareWithMikkt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompareWithMikkt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompareWithMikktThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CompareWithMikktThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshTangentsToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTangentsToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshTangentsTool.h" },
		{ "ModuleRelativePath", "Public/MeshTangentsTool.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_CalculationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_CalculationMethod_MetaData[] = {
		{ "Category", "TangentsCalculation" },
		{ "Comment", "/** Method used for calculating the tangents */" },
		{ "ModuleRelativePath", "Public/MeshTangentsTool.h" },
		{ "ToolTip", "Method used for calculating the tangents" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_CalculationMethod = { "CalculationMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTangentsToolProperties, CalculationMethod), Z_Construct_UEnum_ModelingOperatorsEditorOnly_EMeshTangentsType, METADATA_PARAMS(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_CalculationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_CalculationMethod_MetaData)) }; // 166892232
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowTangents_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Display the mesh tangents */" },
		{ "ModuleRelativePath", "Public/MeshTangentsTool.h" },
		{ "ToolTip", "Display the mesh tangents" },
	};
#endif
	void Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowTangents_SetBit(void* Obj)
	{
		((UMeshTangentsToolProperties*)Obj)->bShowTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowTangents = { "bShowTangents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTangentsToolProperties), &Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowNormals_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Display the mesh normals */" },
		{ "ModuleRelativePath", "Public/MeshTangentsTool.h" },
		{ "ToolTip", "Display the mesh normals" },
	};
#endif
	void Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowNormals_SetBit(void* Obj)
	{
		((UMeshTangentsToolProperties*)Obj)->bShowNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowNormals = { "bShowNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTangentsToolProperties), &Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_LineLength_MetaData[] = {
		{ "Category", "Display" },
		{ "ClampMax", "10000000.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Length of lines used for displaying tangents and/or normals */" },
		{ "ModuleRelativePath", "Public/MeshTangentsTool.h" },
		{ "ToolTip", "Length of lines used for displaying tangents and/or normals" },
		{ "UIMax", "25.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_LineLength = { "LineLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTangentsToolProperties, LineLength), METADATA_PARAMS(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_LineLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_LineLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_LineThickness_MetaData[] = {
		{ "Category", "Display" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Thickness of lines used for displaying tangents and/or normals */" },
		{ "ModuleRelativePath", "Public/MeshTangentsTool.h" },
		{ "ToolTip", "Thickness of lines used for displaying tangents and/or normals" },
		{ "UIMax", "25.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTangentsToolProperties, LineThickness), METADATA_PARAMS(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_LineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_LineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowDegenerates_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Display tangents and/or normals for degenerate triangles */" },
		{ "ModuleRelativePath", "Public/MeshTangentsTool.h" },
		{ "ToolTip", "Display tangents and/or normals for degenerate triangles" },
	};
#endif
	void Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowDegenerates_SetBit(void* Obj)
	{
		((UMeshTangentsToolProperties*)Obj)->bShowDegenerates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowDegenerates = { "bShowDegenerates", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTangentsToolProperties), &Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowDegenerates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowDegenerates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowDegenerates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bCompareWithMikkt_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Display difference between FastMikkTSpace tangents and MikkTSpace tangents.\n\x09 * This is only available if the FastMikkTSpace Calculation Method is selected. */" },
		{ "DisplayName", "Compare with MikkT" },
		{ "EditCondition", "CalculationMethod == EMeshTangentsType::FastMikkTSpace" },
		{ "ModuleRelativePath", "Public/MeshTangentsTool.h" },
		{ "ToolTip", "Display difference between FastMikkTSpace tangents and MikkTSpace tangents.\nThis is only available if the FastMikkTSpace Calculation Method is selected." },
	};
#endif
	void Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bCompareWithMikkt_SetBit(void* Obj)
	{
		((UMeshTangentsToolProperties*)Obj)->bCompareWithMikkt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bCompareWithMikkt = { "bCompareWithMikkt", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTangentsToolProperties), &Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bCompareWithMikkt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bCompareWithMikkt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bCompareWithMikkt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_CompareWithMikktThreshold_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Minimum angle difference in degrees for a FastMikkTSpace tangent to be considered different to a MikkTSpace tangent.\n\x09 * This is only available if a Compare with MikkT is enabled and the FastMikkTSpace Calculation Method is selected. */" },
		{ "DisplayName", "Compare Threshold" },
		{ "EditCondition", "CalculationMethod == EMeshTangentsType::FastMikkTSpace && bCompareWithMikkt" },
		{ "ModuleRelativePath", "Public/MeshTangentsTool.h" },
		{ "ToolTip", "Minimum angle difference in degrees for a FastMikkTSpace tangent to be considered different to a MikkTSpace tangent.\nThis is only available if a Compare with MikkT is enabled and the FastMikkTSpace Calculation Method is selected." },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_CompareWithMikktThreshold = { "CompareWithMikktThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTangentsToolProperties, CompareWithMikktThreshold), METADATA_PARAMS(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_CompareWithMikktThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_CompareWithMikktThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshTangentsToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_CalculationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_CalculationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_LineLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_LineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bShowDegenerates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_bCompareWithMikkt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTangentsToolProperties_Statics::NewProp_CompareWithMikktThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshTangentsToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshTangentsToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshTangentsToolProperties_Statics::ClassParams = {
		&UMeshTangentsToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshTangentsToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshTangentsToolProperties()
	{
		if (!Z_Registration_Info_UClass_UMeshTangentsToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshTangentsToolProperties.OuterSingleton, Z_Construct_UClass_UMeshTangentsToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshTangentsToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UMeshTangentsToolProperties>()
	{
		return UMeshTangentsToolProperties::StaticClass();
	}
	UMeshTangentsToolProperties::UMeshTangentsToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshTangentsToolProperties);
	UMeshTangentsToolProperties::~UMeshTangentsToolProperties() {}
	void UMeshTangentsTool::StaticRegisterNativesUMeshTangentsTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshTangentsTool);
	UClass* Z_Construct_UClass_UMeshTangentsTool_NoRegister()
	{
		return UMeshTangentsTool::StaticClass();
	}
	struct Z_Construct_UClass_UMeshTangentsTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewGeometry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshTangentsTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTangentsTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple Mesh Simplifying Tool\n */" },
		{ "IncludePath", "MeshTangentsTool.h" },
		{ "ModuleRelativePath", "Public/MeshTangentsTool.h" },
		{ "ToolTip", "Simple Mesh Simplifying Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshTangentsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTangentsTool, Settings), Z_Construct_UClass_UMeshTangentsToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshTangentsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTangentsTool, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_DefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshTangentsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTangentsTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_PreviewGeometry_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshTangentsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_PreviewGeometry = { "PreviewGeometry", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTangentsTool, PreviewGeometry), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_PreviewGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_PreviewGeometry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshTangentsTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_DefaultMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTangentsTool_Statics::NewProp_PreviewGeometry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshTangentsTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshTangentsTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshTangentsTool_Statics::ClassParams = {
		&UMeshTangentsTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshTangentsTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshTangentsTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTangentsTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshTangentsTool()
	{
		if (!Z_Registration_Info_UClass_UMeshTangentsTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshTangentsTool.OuterSingleton, Z_Construct_UClass_UMeshTangentsTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshTangentsTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UMeshTangentsTool>()
	{
		return UMeshTangentsTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshTangentsTool);
	UMeshTangentsTool::~UMeshTangentsTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MeshTangentsTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MeshTangentsTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshTangentsToolBuilder, UMeshTangentsToolBuilder::StaticClass, TEXT("UMeshTangentsToolBuilder"), &Z_Registration_Info_UClass_UMeshTangentsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshTangentsToolBuilder), 3085854493U) },
		{ Z_Construct_UClass_UMeshTangentsToolProperties, UMeshTangentsToolProperties::StaticClass, TEXT("UMeshTangentsToolProperties"), &Z_Registration_Info_UClass_UMeshTangentsToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshTangentsToolProperties), 1577756988U) },
		{ Z_Construct_UClass_UMeshTangentsTool, UMeshTangentsTool::StaticClass, TEXT("UMeshTangentsTool"), &Z_Registration_Info_UClass_UMeshTangentsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshTangentsTool), 212643866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MeshTangentsTool_h_359053940(TEXT("/Script/MeshModelingToolsEditorOnlyExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MeshTangentsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_MeshTangentsTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
