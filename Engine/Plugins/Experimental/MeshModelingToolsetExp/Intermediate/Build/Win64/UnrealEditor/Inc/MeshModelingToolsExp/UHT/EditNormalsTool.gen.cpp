// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditNormalsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditNormalsTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditNormalsAdvancedProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditNormalsAdvancedProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditNormalsOperatorFactory();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditNormalsOperatorFactory_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditNormalsTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditNormalsTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditNormalsToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditNormalsToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditNormalsToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UEditNormalsToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ENormalCalculationMethod();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ESplitNormalMethod();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UEditNormalsToolBuilder::StaticRegisterNativesUEditNormalsToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditNormalsToolBuilder);
	UClass* Z_Construct_UClass_UEditNormalsToolBuilder_NoRegister()
	{
		return UEditNormalsToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UEditNormalsToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditNormalsToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "EditNormalsTool.h" },
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditNormalsToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditNormalsToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditNormalsToolBuilder_Statics::ClassParams = {
		&UEditNormalsToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditNormalsToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditNormalsToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UEditNormalsToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditNormalsToolBuilder.OuterSingleton, Z_Construct_UClass_UEditNormalsToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditNormalsToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UEditNormalsToolBuilder>()
	{
		return UEditNormalsToolBuilder::StaticClass();
	}
	UEditNormalsToolBuilder::UEditNormalsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditNormalsToolBuilder);
	UEditNormalsToolBuilder::~UEditNormalsToolBuilder() {}
	void UEditNormalsToolProperties::StaticRegisterNativesUEditNormalsToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditNormalsToolProperties);
	UClass* Z_Construct_UClass_UEditNormalsToolProperties_NoRegister()
	{
		return UEditNormalsToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UEditNormalsToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeNormals_MetaData[];
#endif
		static void NewProp_bRecomputeNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeNormals;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NormalCalculationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalCalculationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NormalCalculationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixInconsistentNormals_MetaData[];
#endif
		static void NewProp_bFixInconsistentNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixInconsistentNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertNormals_MetaData[];
#endif
		static void NewProp_bInvertNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertNormals;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SplitNormalMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitNormalMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SplitNormalMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharpEdgeAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SharpEdgeAngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSharpVertices_MetaData[];
#endif
		static void NewProp_bAllowSharpVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSharpVertices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditNormalsToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties\n */" },
		{ "IncludePath", "EditNormalsTool.h" },
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
		{ "ToolTip", "Standard properties" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bRecomputeNormals_MetaData[] = {
		{ "Category", "NormalsCalculation" },
		{ "Comment", "/** Recompute all mesh normals */" },
		{ "EditCondition", "SplitNormalMethod == ESplitNormalMethod::UseExistingTopology" },
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
		{ "ToolTip", "Recompute all mesh normals" },
	};
#endif
	void Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bRecomputeNormals_SetBit(void* Obj)
	{
		((UEditNormalsToolProperties*)Obj)->bRecomputeNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bRecomputeNormals = { "bRecomputeNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditNormalsToolProperties), &Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bRecomputeNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bRecomputeNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bRecomputeNormals_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_NormalCalculationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_NormalCalculationMethod_MetaData[] = {
		{ "Category", "NormalsCalculation" },
		{ "Comment", "/** Choose the method for computing vertex normals */" },
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
		{ "ToolTip", "Choose the method for computing vertex normals" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_NormalCalculationMethod = { "NormalCalculationMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditNormalsToolProperties, NormalCalculationMethod), Z_Construct_UEnum_ModelingOperators_ENormalCalculationMethod, METADATA_PARAMS(Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_NormalCalculationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_NormalCalculationMethod_MetaData)) }; // 1825879533
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bFixInconsistentNormals_MetaData[] = {
		{ "Category", "NormalsCalculation" },
		{ "Comment", "/** For meshes with inconsistent triangle orientations/normals, flip as needed to make the normals consistent */" },
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
		{ "ToolTip", "For meshes with inconsistent triangle orientations/normals, flip as needed to make the normals consistent" },
	};
#endif
	void Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bFixInconsistentNormals_SetBit(void* Obj)
	{
		((UEditNormalsToolProperties*)Obj)->bFixInconsistentNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bFixInconsistentNormals = { "bFixInconsistentNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditNormalsToolProperties), &Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bFixInconsistentNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bFixInconsistentNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bFixInconsistentNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bInvertNormals_MetaData[] = {
		{ "Category", "NormalsCalculation" },
		{ "Comment", "/** Invert (flip) all mesh normals and associated triangle orientations */" },
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
		{ "ToolTip", "Invert (flip) all mesh normals and associated triangle orientations" },
	};
#endif
	void Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bInvertNormals_SetBit(void* Obj)
	{
		((UEditNormalsToolProperties*)Obj)->bInvertNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bInvertNormals = { "bInvertNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditNormalsToolProperties), &Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bInvertNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bInvertNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bInvertNormals_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_SplitNormalMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_SplitNormalMethod_MetaData[] = {
		{ "Category", "NormalsTopology" },
		{ "Comment", "/** Control whether and how the topology of the normals is recomputed, e.g. to create sharp edges where face normals change by a large amount or where face group IDs change.  Normals will always be recomputed unless SplitNormal Method is UseExistingTopology. */" },
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
		{ "ToolTip", "Control whether and how the topology of the normals is recomputed, e.g. to create sharp edges where face normals change by a large amount or where face group IDs change.  Normals will always be recomputed unless SplitNormal Method is UseExistingTopology." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_SplitNormalMethod = { "SplitNormalMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditNormalsToolProperties, SplitNormalMethod), Z_Construct_UEnum_ModelingOperators_ESplitNormalMethod, METADATA_PARAMS(Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_SplitNormalMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_SplitNormalMethod_MetaData)) }; // 969121903
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_SharpEdgeAngleThreshold_MetaData[] = {
		{ "Category", "NormalsTopology" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Threshold on angle of change in face normals across an edge, above which we create a sharp edge if bSplitNormals is true */" },
		{ "EditCondition", "SplitNormalMethod == ESplitNormalMethod::FaceNormalThreshold" },
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
		{ "ToolTip", "Threshold on angle of change in face normals across an edge, above which we create a sharp edge if bSplitNormals is true" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_SharpEdgeAngleThreshold = { "SharpEdgeAngleThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditNormalsToolProperties, SharpEdgeAngleThreshold), METADATA_PARAMS(Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_SharpEdgeAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_SharpEdgeAngleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bAllowSharpVertices_MetaData[] = {
		{ "Category", "NormalsTopology" },
		{ "Comment", "/** Assign separate normals at 'sharp' vertices, for example, at the tip of a cone */" },
		{ "EditCondition", "SplitNormalMethod == ESplitNormalMethod::FaceNormalThreshold" },
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
		{ "ToolTip", "Assign separate normals at 'sharp' vertices, for example, at the tip of a cone" },
	};
#endif
	void Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bAllowSharpVertices_SetBit(void* Obj)
	{
		((UEditNormalsToolProperties*)Obj)->bAllowSharpVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bAllowSharpVertices = { "bAllowSharpVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditNormalsToolProperties), &Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bAllowSharpVertices_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bAllowSharpVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bAllowSharpVertices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditNormalsToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bRecomputeNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_NormalCalculationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_NormalCalculationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bFixInconsistentNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bInvertNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_SplitNormalMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_SplitNormalMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_SharpEdgeAngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditNormalsToolProperties_Statics::NewProp_bAllowSharpVertices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditNormalsToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditNormalsToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditNormalsToolProperties_Statics::ClassParams = {
		&UEditNormalsToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditNormalsToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditNormalsToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditNormalsToolProperties()
	{
		if (!Z_Registration_Info_UClass_UEditNormalsToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditNormalsToolProperties.OuterSingleton, Z_Construct_UClass_UEditNormalsToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditNormalsToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UEditNormalsToolProperties>()
	{
		return UEditNormalsToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditNormalsToolProperties);
	UEditNormalsToolProperties::~UEditNormalsToolProperties() {}
	void UEditNormalsAdvancedProperties::StaticRegisterNativesUEditNormalsAdvancedProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditNormalsAdvancedProperties);
	UClass* Z_Construct_UClass_UEditNormalsAdvancedProperties_NoRegister()
	{
		return UEditNormalsAdvancedProperties::StaticClass();
	}
	struct Z_Construct_UClass_UEditNormalsAdvancedProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditNormalsAdvancedProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsAdvancedProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Advanced properties\n */" },
		{ "IncludePath", "EditNormalsTool.h" },
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
		{ "ToolTip", "Advanced properties" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditNormalsAdvancedProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditNormalsAdvancedProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditNormalsAdvancedProperties_Statics::ClassParams = {
		&UEditNormalsAdvancedProperties::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditNormalsAdvancedProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsAdvancedProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditNormalsAdvancedProperties()
	{
		if (!Z_Registration_Info_UClass_UEditNormalsAdvancedProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditNormalsAdvancedProperties.OuterSingleton, Z_Construct_UClass_UEditNormalsAdvancedProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditNormalsAdvancedProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UEditNormalsAdvancedProperties>()
	{
		return UEditNormalsAdvancedProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditNormalsAdvancedProperties);
	UEditNormalsAdvancedProperties::~UEditNormalsAdvancedProperties() {}
	void UEditNormalsOperatorFactory::StaticRegisterNativesUEditNormalsOperatorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditNormalsOperatorFactory);
	UClass* Z_Construct_UClass_UEditNormalsOperatorFactory_NoRegister()
	{
		return UEditNormalsOperatorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEditNormalsOperatorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Tool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditNormalsOperatorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsOperatorFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory with enough info to spawn the background-thread Operator to do a chunk of work for the tool\n *  stores a pointer to the tool and enough info to know which specific operator it should spawn\n */" },
		{ "IncludePath", "EditNormalsTool.h" },
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
		{ "ToolTip", "Factory with enough info to spawn the background-thread Operator to do a chunk of work for the tool\n stores a pointer to the tool and enough info to know which specific operator it should spawn" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsOperatorFactory_Statics::NewProp_Tool_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditNormalsOperatorFactory_Statics::NewProp_Tool = { "Tool", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditNormalsOperatorFactory, Tool), Z_Construct_UClass_UEditNormalsTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditNormalsOperatorFactory_Statics::NewProp_Tool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsOperatorFactory_Statics::NewProp_Tool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditNormalsOperatorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditNormalsOperatorFactory_Statics::NewProp_Tool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditNormalsOperatorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditNormalsOperatorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditNormalsOperatorFactory_Statics::ClassParams = {
		&UEditNormalsOperatorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditNormalsOperatorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsOperatorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditNormalsOperatorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsOperatorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditNormalsOperatorFactory()
	{
		if (!Z_Registration_Info_UClass_UEditNormalsOperatorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditNormalsOperatorFactory.OuterSingleton, Z_Construct_UClass_UEditNormalsOperatorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditNormalsOperatorFactory.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UEditNormalsOperatorFactory>()
	{
		return UEditNormalsOperatorFactory::StaticClass();
	}
	UEditNormalsOperatorFactory::UEditNormalsOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditNormalsOperatorFactory);
	UEditNormalsOperatorFactory::~UEditNormalsOperatorFactory() {}
	void UEditNormalsTool::StaticRegisterNativesUEditNormalsTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditNormalsTool);
	UClass* Z_Construct_UClass_UEditNormalsTool_NoRegister()
	{
		return UEditNormalsTool::StaticClass();
	}
	struct Z_Construct_UClass_UEditNormalsTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BasicProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdvancedProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupLayerProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PolygroupLayerProperties;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Previews_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Previews_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Previews;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditNormalsTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple Mesh Normal Updating Tool\n */" },
		{ "IncludePath", "EditNormalsTool.h" },
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
		{ "ToolTip", "Simple Mesh Normal Updating Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditNormalsTool, BasicProperties), Z_Construct_UClass_UEditNormalsToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_BasicProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_BasicProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_AdvancedProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_AdvancedProperties = { "AdvancedProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditNormalsTool, AdvancedProperties), Z_Construct_UClass_UEditNormalsAdvancedProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_AdvancedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_AdvancedProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_PolygroupLayerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_PolygroupLayerProperties = { "PolygroupLayerProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditNormalsTool, PolygroupLayerProperties), Z_Construct_UClass_UPolygroupLayersProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_PolygroupLayerProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_PolygroupLayerProperties_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_Previews_Inner = { "Previews", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_Previews_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditNormalsTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_Previews = { "Previews", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditNormalsTool, Previews), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_Previews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_Previews_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditNormalsTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_BasicProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_AdvancedProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_PolygroupLayerProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_Previews_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditNormalsTool_Statics::NewProp_Previews,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditNormalsTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditNormalsTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditNormalsTool_Statics::ClassParams = {
		&UEditNormalsTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditNormalsTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditNormalsTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditNormalsTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditNormalsTool()
	{
		if (!Z_Registration_Info_UClass_UEditNormalsTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditNormalsTool.OuterSingleton, Z_Construct_UClass_UEditNormalsTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditNormalsTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UEditNormalsTool>()
	{
		return UEditNormalsTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditNormalsTool);
	UEditNormalsTool::~UEditNormalsTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditNormalsTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditNormalsTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditNormalsToolBuilder, UEditNormalsToolBuilder::StaticClass, TEXT("UEditNormalsToolBuilder"), &Z_Registration_Info_UClass_UEditNormalsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditNormalsToolBuilder), 207807184U) },
		{ Z_Construct_UClass_UEditNormalsToolProperties, UEditNormalsToolProperties::StaticClass, TEXT("UEditNormalsToolProperties"), &Z_Registration_Info_UClass_UEditNormalsToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditNormalsToolProperties), 49169422U) },
		{ Z_Construct_UClass_UEditNormalsAdvancedProperties, UEditNormalsAdvancedProperties::StaticClass, TEXT("UEditNormalsAdvancedProperties"), &Z_Registration_Info_UClass_UEditNormalsAdvancedProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditNormalsAdvancedProperties), 691363264U) },
		{ Z_Construct_UClass_UEditNormalsOperatorFactory, UEditNormalsOperatorFactory::StaticClass, TEXT("UEditNormalsOperatorFactory"), &Z_Registration_Info_UClass_UEditNormalsOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditNormalsOperatorFactory), 1144079328U) },
		{ Z_Construct_UClass_UEditNormalsTool, UEditNormalsTool::StaticClass, TEXT("UEditNormalsTool"), &Z_Registration_Info_UClass_UEditNormalsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditNormalsTool), 3213237852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditNormalsTool_h_685799947(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditNormalsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_EditNormalsTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
