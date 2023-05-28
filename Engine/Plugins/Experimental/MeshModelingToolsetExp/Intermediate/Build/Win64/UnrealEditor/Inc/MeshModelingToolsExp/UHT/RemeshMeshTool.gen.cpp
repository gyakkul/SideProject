// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemeshMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemeshMeshTool() {}
// Cross Module References
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshStatisticsProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshMeshTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshMeshTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshMeshToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshMeshToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshMeshToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshMeshToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshProperties();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ERemeshType();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void URemeshMeshToolBuilder::StaticRegisterNativesURemeshMeshToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemeshMeshToolBuilder);
	UClass* Z_Construct_UClass_URemeshMeshToolBuilder_NoRegister()
	{
		return URemeshMeshToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_URemeshMeshToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemeshMeshToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "RemeshMeshTool.h" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemeshMeshToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemeshMeshToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemeshMeshToolBuilder_Statics::ClassParams = {
		&URemeshMeshToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URemeshMeshToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemeshMeshToolBuilder()
	{
		if (!Z_Registration_Info_UClass_URemeshMeshToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemeshMeshToolBuilder.OuterSingleton, Z_Construct_UClass_URemeshMeshToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemeshMeshToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URemeshMeshToolBuilder>()
	{
		return URemeshMeshToolBuilder::StaticClass();
	}
	URemeshMeshToolBuilder::URemeshMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemeshMeshToolBuilder);
	URemeshMeshToolBuilder::~URemeshMeshToolBuilder() {}
	void URemeshMeshToolProperties::StaticRegisterNativesURemeshMeshToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemeshMeshToolProperties);
	UClass* Z_Construct_UClass_URemeshMeshToolProperties_NoRegister()
	{
		return URemeshMeshToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_URemeshMeshToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTriangleCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetTriangleCount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SmoothingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SmoothingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDiscardAttributes_MetaData[];
#endif
		static void NewProp_bDiscardAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiscardAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGroupColors_MetaData[];
#endif
		static void NewProp_bShowGroupColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGroupColors;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemeshType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemeshType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RemeshType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemeshIterations_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RemeshIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRemeshIterations_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxRemeshIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraProjectionIterations_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ExtraProjectionIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTargetEdgeLength_MetaData[];
#endif
		static void NewProp_bUseTargetEdgeLength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTargetEdgeLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetEdgeLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetEdgeLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReproject_MetaData[];
#endif
		static void NewProp_bReproject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReproject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReprojectConstraints_MetaData[];
#endif
		static void NewProp_bReprojectConstraints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReprojectConstraints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryCornerAngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundaryCornerAngleThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemeshMeshToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URemeshProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the Remesh operation\n */" },
		{ "IncludePath", "RemeshMeshTool.h" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Standard properties of the Remesh operation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_TargetTriangleCount_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Target triangle count */" },
		{ "EditCondition", "bUseTargetEdgeLength == false" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Target triangle count" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_TargetTriangleCount = { "TargetTriangleCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemeshMeshToolProperties, TargetTriangleCount), METADATA_PARAMS(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_TargetTriangleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_TargetTriangleCount_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_SmoothingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_SmoothingType_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Smoothing type */" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Smoothing type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_SmoothingType = { "SmoothingType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemeshMeshToolProperties, SmoothingType), Z_Construct_UEnum_ModelingOperators_ERemeshSmoothingType, METADATA_PARAMS(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_SmoothingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_SmoothingType_MetaData)) }; // 2861688910
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bDiscardAttributes_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Discard UVs and existing normals, allowing the remesher to ignore any UV and normal seams. New per-vertex normals are computed. */" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Discard UVs and existing normals, allowing the remesher to ignore any UV and normal seams. New per-vertex normals are computed." },
	};
#endif
	void Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bDiscardAttributes_SetBit(void* Obj)
	{
		((URemeshMeshToolProperties*)Obj)->bDiscardAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bDiscardAttributes = { "bDiscardAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemeshMeshToolProperties), &Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bDiscardAttributes_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bDiscardAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bDiscardAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bShowGroupColors_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Display colors corresponding to the mesh's polygon groups */" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Display colors corresponding to the mesh's polygon groups" },
	};
#endif
	void Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bShowGroupColors_SetBit(void* Obj)
	{
		((URemeshMeshToolProperties*)Obj)->bShowGroupColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bShowGroupColors = { "bShowGroupColors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemeshMeshToolProperties), &Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bShowGroupColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bShowGroupColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bShowGroupColors_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshType_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Remeshing type */" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Remeshing type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshType = { "RemeshType", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemeshMeshToolProperties, RemeshType), Z_Construct_UEnum_ModelingOperators_ERemeshType, METADATA_PARAMS(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshType_MetaData)) }; // 3337077985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshIterations_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of Remeshing passes */" },
		{ "EditCondition", "RemeshType == ERemeshType::FullPass" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Number of Remeshing passes" },
		{ "UIMax", "50" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshIterations = { "RemeshIterations", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemeshMeshToolProperties, RemeshIterations), METADATA_PARAMS(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_MaxRemeshIterations_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum number of Remeshing passes, for Remeshers that have convergence criteria */" },
		{ "EditCondition", "RemeshType != ERemeshType::FullPass" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Maximum number of Remeshing passes, for Remeshers that have convergence criteria" },
		{ "UIMax", "200" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_MaxRemeshIterations = { "MaxRemeshIterations", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemeshMeshToolProperties, MaxRemeshIterations), METADATA_PARAMS(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_MaxRemeshIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_MaxRemeshIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_ExtraProjectionIterations_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/** For NormalFlowRemesher: extra iterations of normal flow with no remeshing */" },
		{ "EditCondition", "RemeshType == ERemeshType::NormalFlow" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "For NormalFlowRemesher: extra iterations of normal flow with no remeshing" },
		{ "UIMax", "200" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_ExtraProjectionIterations = { "ExtraProjectionIterations", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemeshMeshToolProperties, ExtraProjectionIterations), METADATA_PARAMS(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_ExtraProjectionIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_ExtraProjectionIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bUseTargetEdgeLength_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** If true, the target count is ignored and the target edge length is used directly */" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "If true, the target count is ignored and the target edge length is used directly" },
	};
#endif
	void Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bUseTargetEdgeLength_SetBit(void* Obj)
	{
		((URemeshMeshToolProperties*)Obj)->bUseTargetEdgeLength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bUseTargetEdgeLength = { "bUseTargetEdgeLength", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemeshMeshToolProperties), &Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bUseTargetEdgeLength_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bUseTargetEdgeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bUseTargetEdgeLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_TargetEdgeLength_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Target edge length */" },
		{ "EditCondition", "bUseTargetEdgeLength == true" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "NoSpinbox", "true" },
		{ "ToolTip", "Target edge length" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_TargetEdgeLength = { "TargetEdgeLength", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemeshMeshToolProperties, TargetEdgeLength), METADATA_PARAMS(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_TargetEdgeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_TargetEdgeLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReproject_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Enable projection back to input mesh */" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Enable projection back to input mesh" },
	};
#endif
	void Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReproject_SetBit(void* Obj)
	{
		((URemeshMeshToolProperties*)Obj)->bReproject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReproject = { "bReproject", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemeshMeshToolProperties), &Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReproject_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReproject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReproject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReprojectConstraints_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "Comment", "/** Project constrained vertices back to original constraint curves */" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Project constrained vertices back to original constraint curves" },
	};
#endif
	void Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReprojectConstraints_SetBit(void* Obj)
	{
		((URemeshMeshToolProperties*)Obj)->bReprojectConstraints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReprojectConstraints = { "bReprojectConstraints", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemeshMeshToolProperties), &Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReprojectConstraints_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReprojectConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReprojectConstraints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_BoundaryCornerAngleThreshold_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Angle threshold in degrees for classifying a boundary vertex as a corner. Corners will be fixed if Reproject Constraints is active. */" },
		{ "EditCondition", "bReprojectConstraints" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ToolTip", "Angle threshold in degrees for classifying a boundary vertex as a corner. Corners will be fixed if Reproject Constraints is active." },
		{ "UIMax", "180" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_BoundaryCornerAngleThreshold = { "BoundaryCornerAngleThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemeshMeshToolProperties, BoundaryCornerAngleThreshold), METADATA_PARAMS(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_BoundaryCornerAngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_BoundaryCornerAngleThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemeshMeshToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_TargetTriangleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_SmoothingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_SmoothingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bDiscardAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bShowGroupColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_RemeshIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_MaxRemeshIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_ExtraProjectionIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bUseTargetEdgeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_TargetEdgeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReproject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_bReprojectConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshToolProperties_Statics::NewProp_BoundaryCornerAngleThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemeshMeshToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemeshMeshToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemeshMeshToolProperties_Statics::ClassParams = {
		&URemeshMeshToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemeshMeshToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URemeshMeshToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemeshMeshToolProperties()
	{
		if (!Z_Registration_Info_UClass_URemeshMeshToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemeshMeshToolProperties.OuterSingleton, Z_Construct_UClass_URemeshMeshToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemeshMeshToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URemeshMeshToolProperties>()
	{
		return URemeshMeshToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemeshMeshToolProperties);
	URemeshMeshToolProperties::~URemeshMeshToolProperties() {}
	void URemeshMeshTool::StaticRegisterNativesURemeshMeshTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemeshMeshTool);
	UClass* Z_Construct_UClass_URemeshMeshTool_NoRegister()
	{
		return URemeshMeshTool::StaticClass();
	}
	struct Z_Construct_UClass_URemeshMeshTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshStatisticsProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshStatisticsProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshElementsDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshElementsDisplay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemeshMeshTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple Mesh Remeshing Tool\n *\n * Note this is a subclass of UMultiSelectionTool, however we currently only ever apply it to one mesh at a time. The\n * function URemeshMeshToolBuilder::CanBuildTool will return true only when a single mesh is selected, and the tool will\n * only be applied to the first mesh in the selection list. The reason we inherit from UMultiSelectionTool is so \n * that subclasses of this class can work with multiple meshes (see, for example, UProjectToTargetTool.)\n */" },
		{ "IncludePath", "RemeshMeshTool.h" },
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Simple Mesh Remeshing Tool\n\nNote this is a subclass of UMultiSelectionTool, however we currently only ever apply it to one mesh at a time. The\nfunction URemeshMeshToolBuilder::CanBuildTool will return true only when a single mesh is selected, and the tool will\nonly be applied to the first mesh in the selection list. The reason we inherit from UMultiSelectionTool is so\nthat subclasses of this class can work with multiple meshes (see, for example, UProjectToTargetTool.)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemeshMeshTool, BasicProperties), Z_Construct_UClass_URemeshMeshToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_BasicProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_BasicProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_MeshStatisticsProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_MeshStatisticsProperties = { "MeshStatisticsProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemeshMeshTool, MeshStatisticsProperties), Z_Construct_UClass_UMeshStatisticsProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_MeshStatisticsProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_MeshStatisticsProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemeshMeshTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_Preview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_MeshElementsDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemeshMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_MeshElementsDisplay = { "MeshElementsDisplay", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemeshMeshTool, MeshElementsDisplay), Z_Construct_UClass_UMeshElementsVisualizer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_MeshElementsDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_MeshElementsDisplay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemeshMeshTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_BasicProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_MeshStatisticsProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_Preview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshMeshTool_Statics::NewProp_MeshElementsDisplay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemeshMeshTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemeshMeshTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemeshMeshTool_Statics::ClassParams = {
		&URemeshMeshTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemeshMeshTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URemeshMeshTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshMeshTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemeshMeshTool()
	{
		if (!Z_Registration_Info_UClass_URemeshMeshTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemeshMeshTool.OuterSingleton, Z_Construct_UClass_URemeshMeshTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemeshMeshTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URemeshMeshTool>()
	{
		return URemeshMeshTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemeshMeshTool);
	URemeshMeshTool::~URemeshMeshTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemeshMeshTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemeshMeshTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemeshMeshToolBuilder, URemeshMeshToolBuilder::StaticClass, TEXT("URemeshMeshToolBuilder"), &Z_Registration_Info_UClass_URemeshMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemeshMeshToolBuilder), 708363584U) },
		{ Z_Construct_UClass_URemeshMeshToolProperties, URemeshMeshToolProperties::StaticClass, TEXT("URemeshMeshToolProperties"), &Z_Registration_Info_UClass_URemeshMeshToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemeshMeshToolProperties), 596228413U) },
		{ Z_Construct_UClass_URemeshMeshTool, URemeshMeshTool::StaticClass, TEXT("URemeshMeshTool"), &Z_Registration_Info_UClass_URemeshMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemeshMeshTool), 1289735194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemeshMeshTool_h_1258405822(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemeshMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RemeshMeshTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
