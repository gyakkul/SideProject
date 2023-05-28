// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataprepGeometryOperations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepGeometryOperations() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepEditingOperation();
	DATAPREPGEOMETRYOPERATIONS_API UClass* Z_Construct_UClass_UDataprepBakeTransformOperation();
	DATAPREPGEOMETRYOPERATIONS_API UClass* Z_Construct_UClass_UDataprepBakeTransformOperation_NoRegister();
	DATAPREPGEOMETRYOPERATIONS_API UClass* Z_Construct_UClass_UDataprepPlaneCutOperation();
	DATAPREPGEOMETRYOPERATIONS_API UClass* Z_Construct_UClass_UDataprepPlaneCutOperation_NoRegister();
	DATAPREPGEOMETRYOPERATIONS_API UClass* Z_Construct_UClass_UDataprepRemeshOperation();
	DATAPREPGEOMETRYOPERATIONS_API UClass* Z_Construct_UClass_UDataprepRemeshOperation_NoRegister();
	DATAPREPGEOMETRYOPERATIONS_API UClass* Z_Construct_UClass_UDataprepSimplifyMeshOperation();
	DATAPREPGEOMETRYOPERATIONS_API UClass* Z_Construct_UClass_UDataprepSimplifyMeshOperation_NoRegister();
	DATAPREPGEOMETRYOPERATIONS_API UClass* Z_Construct_UClass_UDataprepWeldEdgesOperation();
	DATAPREPGEOMETRYOPERATIONS_API UClass* Z_Construct_UClass_UDataprepWeldEdgesOperation_NoRegister();
	DATAPREPGEOMETRYOPERATIONS_API UEnum* Z_Construct_UEnum_DataprepGeometryOperations_EPlaneCutKeepSide();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ERemeshType();
	UPackage* Z_Construct_UPackage__Script_DataprepGeometryOperations();
// End Cross Module References
	void UDataprepRemeshOperation::StaticRegisterNativesUDataprepRemeshOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepRemeshOperation);
	UClass* Z_Construct_UClass_UDataprepRemeshOperation_NoRegister()
	{
		return UDataprepRemeshOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepRemeshOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTriangleCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetTriangleCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDiscardAttributes_MetaData[];
#endif
		static void NewProp_bDiscardAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiscardAttributes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemeshType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemeshType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RemeshType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemeshIterations_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RemeshIterations;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshBoundaryConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshBoundaryConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshBoundaryConstraint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupBoundaryConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupBoundaryConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroupBoundaryConstraint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialBoundaryConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBoundaryConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialBoundaryConstraint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepRemeshOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepEditingOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepGeometryOperations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepRemeshOperation_Statics::Class_MetaDataParams[] = {
		{ "Category", "ObjectOperation" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Remesh" },
		{ "IncludePath", "DataprepGeometryOperations.h" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Experimental - Remesh input meshes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_TargetTriangleCount_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Target triangle count */" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Target triangle count" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_TargetTriangleCount = { "TargetTriangleCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepRemeshOperation, TargetTriangleCount), METADATA_PARAMS(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_TargetTriangleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_TargetTriangleCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_SmoothingStrength_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of Vertex Smoothing applied within Remeshing */" },
		{ "DisplayName", "Smoothing Rate" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Amount of Vertex Smoothing applied within Remeshing" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_SmoothingStrength = { "SmoothingStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepRemeshOperation, SmoothingStrength), METADATA_PARAMS(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_SmoothingStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_SmoothingStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_bDiscardAttributes_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Discard UVs and existing normals, allowing the remesher to ignore any UV and normal seams. New per-vertex normals are computed. */" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Discard UVs and existing normals, allowing the remesher to ignore any UV and normal seams. New per-vertex normals are computed." },
	};
#endif
	void Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_bDiscardAttributes_SetBit(void* Obj)
	{
		((UDataprepRemeshOperation*)Obj)->bDiscardAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_bDiscardAttributes = { "bDiscardAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepRemeshOperation), &Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_bDiscardAttributes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_bDiscardAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_bDiscardAttributes_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_RemeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_RemeshType_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Remeshing type */" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Remeshing type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_RemeshType = { "RemeshType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepRemeshOperation, RemeshType), Z_Construct_UEnum_ModelingOperators_ERemeshType, METADATA_PARAMS(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_RemeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_RemeshType_MetaData)) }; // 3337077985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_RemeshIterations_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of Remeshing passes */" },
		{ "EditCondition", "RemeshType == ERemeshType::FullPass" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Number of Remeshing passes" },
		{ "UIMax", "50" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_RemeshIterations = { "RemeshIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepRemeshOperation, RemeshIterations), METADATA_PARAMS(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_RemeshIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_RemeshIterations_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_MeshBoundaryConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_MeshBoundaryConstraint_MetaData[] = {
		{ "Category", "Remeshing|Boundary Constraints" },
		{ "Comment", "/** Mesh Boundary Constraint Type */" },
		{ "DisplayName", "Mesh Boundary" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Mesh Boundary Constraint Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_MeshBoundaryConstraint = { "MeshBoundaryConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepRemeshOperation, MeshBoundaryConstraint), Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint, METADATA_PARAMS(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_MeshBoundaryConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_MeshBoundaryConstraint_MetaData)) }; // 1916899982
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_GroupBoundaryConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_GroupBoundaryConstraint_MetaData[] = {
		{ "Category", "Remeshing|Boundary Constraints" },
		{ "Comment", "/** Group Boundary Constraint Type */" },
		{ "DisplayName", "Group Boundary" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Group Boundary Constraint Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_GroupBoundaryConstraint = { "GroupBoundaryConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepRemeshOperation, GroupBoundaryConstraint), Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint, METADATA_PARAMS(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_GroupBoundaryConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_GroupBoundaryConstraint_MetaData)) }; // 2514104683
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_MaterialBoundaryConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_MaterialBoundaryConstraint_MetaData[] = {
		{ "Category", "Remeshing|Boundary Constraints" },
		{ "Comment", "/** Material Boundary Constraint Type */" },
		{ "DisplayName", "Material Boundary" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Material Boundary Constraint Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_MaterialBoundaryConstraint = { "MaterialBoundaryConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepRemeshOperation, MaterialBoundaryConstraint), Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint, METADATA_PARAMS(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_MaterialBoundaryConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_MaterialBoundaryConstraint_MetaData)) }; // 1203065482
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepRemeshOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_TargetTriangleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_SmoothingStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_bDiscardAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_RemeshType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_RemeshType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_RemeshIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_MeshBoundaryConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_MeshBoundaryConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_GroupBoundaryConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_GroupBoundaryConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_MaterialBoundaryConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepRemeshOperation_Statics::NewProp_MaterialBoundaryConstraint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepRemeshOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepRemeshOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepRemeshOperation_Statics::ClassParams = {
		&UDataprepRemeshOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepRemeshOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepRemeshOperation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepRemeshOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepRemeshOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepRemeshOperation()
	{
		if (!Z_Registration_Info_UClass_UDataprepRemeshOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepRemeshOperation.OuterSingleton, Z_Construct_UClass_UDataprepRemeshOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepRemeshOperation.OuterSingleton;
	}
	template<> DATAPREPGEOMETRYOPERATIONS_API UClass* StaticClass<UDataprepRemeshOperation>()
	{
		return UDataprepRemeshOperation::StaticClass();
	}
	UDataprepRemeshOperation::UDataprepRemeshOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepRemeshOperation);
	UDataprepRemeshOperation::~UDataprepRemeshOperation() {}
	void UDataprepBakeTransformOperation::StaticRegisterNativesUDataprepBakeTransformOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepBakeTransformOperation);
	UClass* Z_Construct_UClass_UDataprepBakeTransformOperation_NoRegister()
	{
		return UDataprepBakeTransformOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepBakeTransformOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeRotation_MetaData[];
#endif
		static void NewProp_bBakeRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeRotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BakeScale_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeScale_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecenterPivot_MetaData[];
#endif
		static void NewProp_bRecenterPivot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecenterPivot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepEditingOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepGeometryOperations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::Class_MetaDataParams[] = {
		{ "Category", "ObjectOperation" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Bake Transform" },
		{ "IncludePath", "DataprepGeometryOperations.h" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Experimental - Bake transform of input meshes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_bBakeRotation_MetaData[] = {
		{ "Category", "BakeTransform" },
		{ "Comment", "/** Bake rotation */" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Bake rotation" },
	};
#endif
	void Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_bBakeRotation_SetBit(void* Obj)
	{
		((UDataprepBakeTransformOperation*)Obj)->bBakeRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_bBakeRotation = { "bBakeRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepBakeTransformOperation), &Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_bBakeRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_bBakeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_bBakeRotation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_BakeScale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_BakeScale_MetaData[] = {
		{ "Category", "BakeTransform" },
		{ "Comment", "/** Bake scale */" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Bake scale" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_BakeScale = { "BakeScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepBakeTransformOperation, BakeScale), Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod, METADATA_PARAMS(Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_BakeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_BakeScale_MetaData)) }; // 3157929877
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_bRecenterPivot_MetaData[] = {
		{ "Category", "BakeTransform" },
		{ "Comment", "/** Recenter pivot after baking transform */" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Recenter pivot after baking transform" },
	};
#endif
	void Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_bRecenterPivot_SetBit(void* Obj)
	{
		((UDataprepBakeTransformOperation*)Obj)->bRecenterPivot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_bRecenterPivot = { "bRecenterPivot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepBakeTransformOperation), &Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_bRecenterPivot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_bRecenterPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_bRecenterPivot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_bBakeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_BakeScale_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_BakeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::NewProp_bRecenterPivot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepBakeTransformOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::ClassParams = {
		&UDataprepBakeTransformOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepBakeTransformOperation()
	{
		if (!Z_Registration_Info_UClass_UDataprepBakeTransformOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepBakeTransformOperation.OuterSingleton, Z_Construct_UClass_UDataprepBakeTransformOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepBakeTransformOperation.OuterSingleton;
	}
	template<> DATAPREPGEOMETRYOPERATIONS_API UClass* StaticClass<UDataprepBakeTransformOperation>()
	{
		return UDataprepBakeTransformOperation::StaticClass();
	}
	UDataprepBakeTransformOperation::UDataprepBakeTransformOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepBakeTransformOperation);
	UDataprepBakeTransformOperation::~UDataprepBakeTransformOperation() {}
	void UDataprepWeldEdgesOperation::StaticRegisterNativesUDataprepWeldEdgesOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepWeldEdgesOperation);
	UClass* Z_Construct_UClass_UDataprepWeldEdgesOperation_NoRegister()
	{
		return UDataprepWeldEdgesOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyUnique_MetaData[];
#endif
		static void NewProp_bOnlyUnique_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyUnique;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepEditingOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepGeometryOperations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::Class_MetaDataParams[] = {
		{ "Category", "ObjectOperation" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Weld Edges" },
		{ "IncludePath", "DataprepGeometryOperations.h" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Experimental - Weld edges of input meshes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.00000001" },
		{ "Comment", "/** Merge search tolerance */" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Merge search tolerance" },
		{ "UIMax", "0.01" },
		{ "UIMin", "0.000001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepWeldEdgesOperation, Tolerance), METADATA_PARAMS(Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::NewProp_Tolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::NewProp_bOnlyUnique_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Apply to only unique pairs */" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Apply to only unique pairs" },
	};
#endif
	void Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::NewProp_bOnlyUnique_SetBit(void* Obj)
	{
		((UDataprepWeldEdgesOperation*)Obj)->bOnlyUnique = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::NewProp_bOnlyUnique = { "bOnlyUnique", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepWeldEdgesOperation), &Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::NewProp_bOnlyUnique_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::NewProp_bOnlyUnique_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::NewProp_bOnlyUnique_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::NewProp_bOnlyUnique,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepWeldEdgesOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::ClassParams = {
		&UDataprepWeldEdgesOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepWeldEdgesOperation()
	{
		if (!Z_Registration_Info_UClass_UDataprepWeldEdgesOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepWeldEdgesOperation.OuterSingleton, Z_Construct_UClass_UDataprepWeldEdgesOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepWeldEdgesOperation.OuterSingleton;
	}
	template<> DATAPREPGEOMETRYOPERATIONS_API UClass* StaticClass<UDataprepWeldEdgesOperation>()
	{
		return UDataprepWeldEdgesOperation::StaticClass();
	}
	UDataprepWeldEdgesOperation::UDataprepWeldEdgesOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepWeldEdgesOperation);
	UDataprepWeldEdgesOperation::~UDataprepWeldEdgesOperation() {}
	void UDataprepSimplifyMeshOperation::StaticRegisterNativesUDataprepSimplifyMeshOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepSimplifyMeshOperation);
	UClass* Z_Construct_UClass_UDataprepSimplifyMeshOperation_NoRegister()
	{
		return UDataprepSimplifyMeshOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDiscardAttributes_MetaData[];
#endif
		static void NewProp_bDiscardAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiscardAttributes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshBoundaryConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshBoundaryConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshBoundaryConstraint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupBoundaryConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupBoundaryConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroupBoundaryConstraint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialBoundaryConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBoundaryConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialBoundaryConstraint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepEditingOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepGeometryOperations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::Class_MetaDataParams[] = {
		{ "Category", "ObjectOperation" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Simplify Mesh" },
		{ "IncludePath", "DataprepGeometryOperations.h" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Experimental - Simplify input meshes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_TargetPercentage_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Target percentage of original triangle count */" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Target percentage of original triangle count" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_TargetPercentage = { "TargetPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepSimplifyMeshOperation, TargetPercentage), METADATA_PARAMS(Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_TargetPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_TargetPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_bDiscardAttributes_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Discard UVs and existing normals, allowing the simplifier to ignore any UV and normal seams. New per-vertex normals are computed. */" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Discard UVs and existing normals, allowing the simplifier to ignore any UV and normal seams. New per-vertex normals are computed." },
	};
#endif
	void Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_bDiscardAttributes_SetBit(void* Obj)
	{
		((UDataprepSimplifyMeshOperation*)Obj)->bDiscardAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_bDiscardAttributes = { "bDiscardAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepSimplifyMeshOperation), &Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_bDiscardAttributes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_bDiscardAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_bDiscardAttributes_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_MeshBoundaryConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_MeshBoundaryConstraint_MetaData[] = {
		{ "Category", "SimplifyMesh|Boundary Constraints" },
		{ "Comment", "/** Mesh Boundary Constraint Type */" },
		{ "DisplayName", "Mesh Boundary" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Mesh Boundary Constraint Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_MeshBoundaryConstraint = { "MeshBoundaryConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepSimplifyMeshOperation, MeshBoundaryConstraint), Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint, METADATA_PARAMS(Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_MeshBoundaryConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_MeshBoundaryConstraint_MetaData)) }; // 1916899982
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_GroupBoundaryConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_GroupBoundaryConstraint_MetaData[] = {
		{ "Category", "SimplifyMesh|Boundary Constraints" },
		{ "Comment", "/** Group Boundary Constraint Type */" },
		{ "DisplayName", "Group Boundary" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Group Boundary Constraint Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_GroupBoundaryConstraint = { "GroupBoundaryConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepSimplifyMeshOperation, GroupBoundaryConstraint), Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint, METADATA_PARAMS(Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_GroupBoundaryConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_GroupBoundaryConstraint_MetaData)) }; // 2514104683
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_MaterialBoundaryConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_MaterialBoundaryConstraint_MetaData[] = {
		{ "Category", "SimplifyMesh|Boundary Constraints" },
		{ "Comment", "/** Material Boundary Constraint Type */" },
		{ "DisplayName", "Material Boundary" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Material Boundary Constraint Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_MaterialBoundaryConstraint = { "MaterialBoundaryConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepSimplifyMeshOperation, MaterialBoundaryConstraint), Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint, METADATA_PARAMS(Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_MaterialBoundaryConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_MaterialBoundaryConstraint_MetaData)) }; // 1203065482
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_TargetPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_bDiscardAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_MeshBoundaryConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_MeshBoundaryConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_GroupBoundaryConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_GroupBoundaryConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_MaterialBoundaryConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::NewProp_MaterialBoundaryConstraint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepSimplifyMeshOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::ClassParams = {
		&UDataprepSimplifyMeshOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepSimplifyMeshOperation()
	{
		if (!Z_Registration_Info_UClass_UDataprepSimplifyMeshOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepSimplifyMeshOperation.OuterSingleton, Z_Construct_UClass_UDataprepSimplifyMeshOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepSimplifyMeshOperation.OuterSingleton;
	}
	template<> DATAPREPGEOMETRYOPERATIONS_API UClass* StaticClass<UDataprepSimplifyMeshOperation>()
	{
		return UDataprepSimplifyMeshOperation::StaticClass();
	}
	UDataprepSimplifyMeshOperation::UDataprepSimplifyMeshOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepSimplifyMeshOperation);
	UDataprepSimplifyMeshOperation::~UDataprepSimplifyMeshOperation() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlaneCutKeepSide;
	static UEnum* EPlaneCutKeepSide_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlaneCutKeepSide.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlaneCutKeepSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataprepGeometryOperations_EPlaneCutKeepSide, (UObject*)Z_Construct_UPackage__Script_DataprepGeometryOperations(), TEXT("EPlaneCutKeepSide"));
		}
		return Z_Registration_Info_UEnum_EPlaneCutKeepSide.OuterSingleton;
	}
	template<> DATAPREPGEOMETRYOPERATIONS_API UEnum* StaticEnum<EPlaneCutKeepSide>()
	{
		return EPlaneCutKeepSide_StaticEnum();
	}
	struct Z_Construct_UEnum_DataprepGeometryOperations_EPlaneCutKeepSide_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataprepGeometryOperations_EPlaneCutKeepSide_Statics::Enumerators[] = {
		{ "EPlaneCutKeepSide::Positive", (int64)EPlaneCutKeepSide::Positive },
		{ "EPlaneCutKeepSide::Negative", (int64)EPlaneCutKeepSide::Negative },
		{ "EPlaneCutKeepSide::Both", (int64)EPlaneCutKeepSide::Both },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataprepGeometryOperations_EPlaneCutKeepSide_Statics::Enum_MetaDataParams[] = {
		{ "Both.Name", "EPlaneCutKeepSide::Both" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "Negative.Name", "EPlaneCutKeepSide::Negative" },
		{ "Positive.Name", "EPlaneCutKeepSide::Positive" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataprepGeometryOperations_EPlaneCutKeepSide_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataprepGeometryOperations,
		nullptr,
		"EPlaneCutKeepSide",
		"EPlaneCutKeepSide",
		Z_Construct_UEnum_DataprepGeometryOperations_EPlaneCutKeepSide_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepGeometryOperations_EPlaneCutKeepSide_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataprepGeometryOperations_EPlaneCutKeepSide_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepGeometryOperations_EPlaneCutKeepSide_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataprepGeometryOperations_EPlaneCutKeepSide()
	{
		if (!Z_Registration_Info_UEnum_EPlaneCutKeepSide.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlaneCutKeepSide.InnerSingleton, Z_Construct_UEnum_DataprepGeometryOperations_EPlaneCutKeepSide_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlaneCutKeepSide.InnerSingleton;
	}
	void UDataprepPlaneCutOperation::StaticRegisterNativesUDataprepPlaneCutOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepPlaneCutOperation);
	UClass* Z_Construct_UClass_UDataprepPlaneCutOperation_NoRegister()
	{
		return UDataprepPlaneCutOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepPlaneCutOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutPlaneOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CutPlaneOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutPlaneNormalAngles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CutPlaneNormalAngles;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CutPlaneKeepSide_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutPlaneKeepSide_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CutPlaneKeepSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacingBetweenHalves_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpacingBetweenHalves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillCutHole_MetaData[];
#endif
		static void NewProp_bFillCutHole_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillCutHole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportSeparatePieces_MetaData[];
#endif
		static void NewProp_bExportSeparatePieces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSeparatePieces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepEditingOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepGeometryOperations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::Class_MetaDataParams[] = {
		{ "Category", "MeshOperation" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Plane Cut" },
		{ "IncludePath", "DataprepGeometryOperations.h" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Experimental - Plane cut input meshes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneOrigin_MetaData[] = {
		{ "Category", "PlaneCut" },
		{ "Comment", "/** Origin of the cutting plane */" },
		{ "DisplayName", "Plane's Origin" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Origin of the cutting plane" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneOrigin = { "CutPlaneOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepPlaneCutOperation, CutPlaneOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneNormalAngles_MetaData[] = {
		{ "Category", "PlaneCut" },
		{ "Comment", "/** Euler angles of the normal to the cutting plane (default plane is XY plane) */" },
		{ "DisplayName", "Plane's Orientation" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Euler angles of the normal to the cutting plane (default plane is XY plane)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneNormalAngles = { "CutPlaneNormalAngles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepPlaneCutOperation, CutPlaneNormalAngles), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneNormalAngles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneNormalAngles_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneKeepSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneKeepSide_MetaData[] = {
		{ "Category", "PlaneCut" },
		{ "Comment", "/** Specify which section(s) of the cut to keep. If 'Keep Both' is selected, both sides of the \n\x09\x09""cut are computed and a new actor added with the negative side. \n\x09*/" },
		{ "DisplayName", "Side(s) To Keep" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "Specify which section(s) of the cut to keep. If 'Keep Both' is selected, both sides of the\n              cut are computed and a new actor added with the negative side." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneKeepSide = { "CutPlaneKeepSide", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepPlaneCutOperation, CutPlaneKeepSide), Z_Construct_UEnum_DataprepGeometryOperations_EPlaneCutKeepSide, METADATA_PARAMS(Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneKeepSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneKeepSide_MetaData)) }; // 482302718
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_SpacingBetweenHalves_MetaData[] = {
		{ "Category", "PlaneCut" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If keeping both halves, separate the two pieces by this amount */" },
		{ "EditCondition", "CutPlaneKeepSide == EPlaneCutKeepSide::Both" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "If keeping both halves, separate the two pieces by this amount" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_SpacingBetweenHalves = { "SpacingBetweenHalves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepPlaneCutOperation, SpacingBetweenHalves), METADATA_PARAMS(Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_SpacingBetweenHalves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_SpacingBetweenHalves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_bFillCutHole_MetaData[] = {
		{ "Category", "PlaneCut" },
		{ "Comment", "/** If true, the cut surface is filled with simple planar hole fill surface(s) */" },
		{ "DisplayName", "Fill Holes" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "If true, the cut surface is filled with simple planar hole fill surface(s)" },
	};
#endif
	void Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_bFillCutHole_SetBit(void* Obj)
	{
		((UDataprepPlaneCutOperation*)Obj)->bFillCutHole = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_bFillCutHole = { "bFillCutHole", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepPlaneCutOperation), &Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_bFillCutHole_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_bFillCutHole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_bFillCutHole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_bExportSeparatePieces_MetaData[] = {
		{ "Category", "PlaneCut" },
		{ "Comment", "/** If true, meshes cut into multiple pieces will be saved as separate assets. */" },
		{ "DisplayName", "Export Separated Pieces As New Mesh Assets" },
		{ "ModuleRelativePath", "Private/DataprepGeometryOperations.h" },
		{ "ToolTip", "If true, meshes cut into multiple pieces will be saved as separate assets." },
	};
#endif
	void Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_bExportSeparatePieces_SetBit(void* Obj)
	{
		((UDataprepPlaneCutOperation*)Obj)->bExportSeparatePieces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_bExportSeparatePieces = { "bExportSeparatePieces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepPlaneCutOperation), &Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_bExportSeparatePieces_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_bExportSeparatePieces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_bExportSeparatePieces_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneNormalAngles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneKeepSide_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_CutPlaneKeepSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_SpacingBetweenHalves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_bFillCutHole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::NewProp_bExportSeparatePieces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepPlaneCutOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::ClassParams = {
		&UDataprepPlaneCutOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepPlaneCutOperation()
	{
		if (!Z_Registration_Info_UClass_UDataprepPlaneCutOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepPlaneCutOperation.OuterSingleton, Z_Construct_UClass_UDataprepPlaneCutOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepPlaneCutOperation.OuterSingleton;
	}
	template<> DATAPREPGEOMETRYOPERATIONS_API UClass* StaticClass<UDataprepPlaneCutOperation>()
	{
		return UDataprepPlaneCutOperation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepPlaneCutOperation);
	UDataprepPlaneCutOperation::~UDataprepPlaneCutOperation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometryOperations_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometryOperations_h_Statics::EnumInfo[] = {
		{ EPlaneCutKeepSide_StaticEnum, TEXT("EPlaneCutKeepSide"), &Z_Registration_Info_UEnum_EPlaneCutKeepSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 482302718U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometryOperations_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepRemeshOperation, UDataprepRemeshOperation::StaticClass, TEXT("UDataprepRemeshOperation"), &Z_Registration_Info_UClass_UDataprepRemeshOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepRemeshOperation), 3325940144U) },
		{ Z_Construct_UClass_UDataprepBakeTransformOperation, UDataprepBakeTransformOperation::StaticClass, TEXT("UDataprepBakeTransformOperation"), &Z_Registration_Info_UClass_UDataprepBakeTransformOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepBakeTransformOperation), 2131304116U) },
		{ Z_Construct_UClass_UDataprepWeldEdgesOperation, UDataprepWeldEdgesOperation::StaticClass, TEXT("UDataprepWeldEdgesOperation"), &Z_Registration_Info_UClass_UDataprepWeldEdgesOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepWeldEdgesOperation), 206060079U) },
		{ Z_Construct_UClass_UDataprepSimplifyMeshOperation, UDataprepSimplifyMeshOperation::StaticClass, TEXT("UDataprepSimplifyMeshOperation"), &Z_Registration_Info_UClass_UDataprepSimplifyMeshOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepSimplifyMeshOperation), 3189565597U) },
		{ Z_Construct_UClass_UDataprepPlaneCutOperation, UDataprepPlaneCutOperation::StaticClass, TEXT("UDataprepPlaneCutOperation"), &Z_Registration_Info_UClass_UDataprepPlaneCutOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepPlaneCutOperation), 136203625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometryOperations_h_1659392354(TEXT("/Script/DataprepGeometryOperations"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometryOperations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometryOperations_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometryOperations_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DataprepGeometryOperations_Source_Private_DataprepGeometryOperations_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
