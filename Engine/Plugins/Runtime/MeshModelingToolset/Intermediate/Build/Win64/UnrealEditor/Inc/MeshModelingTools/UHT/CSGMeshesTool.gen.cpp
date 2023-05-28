// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CSGMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSGMeshesTool() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCSGMeshesTool();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCSGMeshesTool_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCSGMeshesToolBuilder();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCSGMeshesToolBuilder_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCSGMeshesToolProperties();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCSGMeshesToolProperties_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UTrimMeshesToolProperties();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UTrimMeshesToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ECSGOperation();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ETrimOperation();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ETrimSide();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	void UCSGMeshesToolProperties::StaticRegisterNativesUCSGMeshesToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSGMeshesToolProperties);
	UClass* Z_Construct_UClass_UCSGMeshesToolProperties_NoRegister()
	{
		return UCSGMeshesToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UCSGMeshesToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTryFixHoles_MetaData[];
#endif
		static void NewProp_bTryFixHoles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryFixHoles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTryCollapseEdges_MetaData[];
#endif
		static void NewProp_bTryCollapseEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryCollapseEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowNewBoundaries_MetaData[];
#endif
		static void NewProp_bShowNewBoundaries_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowNewBoundaries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSubtractedMesh_MetaData[];
#endif
		static void NewProp_bShowSubtractedMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSubtractedMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubtractedMeshOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SubtractedMeshOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubtractedMeshColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubtractedMeshColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFirstMeshMaterials_MetaData[];
#endif
		static void NewProp_bUseFirstMeshMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFirstMeshMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSGMeshesToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the CSG operation\n */" },
		{ "IncludePath", "CSGMeshesTool.h" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Standard properties of the CSG operation" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Boolean" },
		{ "Comment", "/** Type of Boolean operation */" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Type of Boolean operation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSGMeshesToolProperties, Operation), Z_Construct_UEnum_ModelingOperators_ECSGOperation, METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_Operation_MetaData)) }; // 3512141495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bTryFixHoles_MetaData[] = {
		{ "Category", "Boolean" },
		{ "Comment", "/** Try to fill holes created by the Boolean operation, e.g. due to numerical errors */" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Try to fill holes created by the Boolean operation, e.g. due to numerical errors" },
	};
#endif
	void Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bTryFixHoles_SetBit(void* Obj)
	{
		((UCSGMeshesToolProperties*)Obj)->bTryFixHoles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bTryFixHoles = { "bTryFixHoles", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCSGMeshesToolProperties), &Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bTryFixHoles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bTryFixHoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bTryFixHoles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bTryCollapseEdges_MetaData[] = {
		{ "Category", "Boolean" },
		{ "Comment", "/** Try to collapse extra edges created by the Boolean operation */" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Try to collapse extra edges created by the Boolean operation" },
	};
#endif
	void Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bTryCollapseEdges_SetBit(void* Obj)
	{
		((UCSGMeshesToolProperties*)Obj)->bTryCollapseEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bTryCollapseEdges = { "bTryCollapseEdges", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCSGMeshesToolProperties), &Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bTryCollapseEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bTryCollapseEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bTryCollapseEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_WindingThreshold_MetaData[] = {
		{ "Category", "Boolean" },
		{ "Comment", "/** Threshold to determine whether a triangle in one mesh is inside or outside of the other */" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Threshold to determine whether a triangle in one mesh is inside or outside of the other" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_WindingThreshold = { "WindingThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSGMeshesToolProperties, WindingThreshold), METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_WindingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_WindingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bShowNewBoundaries_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Show boundary edges created by the Boolean operation, which might happen due to numerical errors */" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Show boundary edges created by the Boolean operation, which might happen due to numerical errors" },
	};
#endif
	void Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bShowNewBoundaries_SetBit(void* Obj)
	{
		((UCSGMeshesToolProperties*)Obj)->bShowNewBoundaries = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bShowNewBoundaries = { "bShowNewBoundaries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCSGMeshesToolProperties), &Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bShowNewBoundaries_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bShowNewBoundaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bShowNewBoundaries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bShowSubtractedMesh_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Show a translucent version of the subtracted mesh, to help visualize geometry that is being removed */" },
		{ "EditCondition", "Operation == ECSGOperation::DifferenceAB || Operation == ECSGOperation::DifferenceBA" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Show a translucent version of the subtracted mesh, to help visualize geometry that is being removed" },
	};
#endif
	void Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bShowSubtractedMesh_SetBit(void* Obj)
	{
		((UCSGMeshesToolProperties*)Obj)->bShowSubtractedMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bShowSubtractedMesh = { "bShowSubtractedMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCSGMeshesToolProperties), &Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bShowSubtractedMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bShowSubtractedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bShowSubtractedMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_SubtractedMeshOpacity_MetaData[] = {
		{ "Category", "Display" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Opacity of the translucent subtracted mesh */" },
		{ "DisplayName", "Opacity Subtracted Mesh" },
		{ "EditCondition", "bShowSubtractedMesh && Operation == ECSGOperation::DifferenceAB || bShowSubtractedMesh && Operation == ECSGOperation::DifferenceBA" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Opacity of the translucent subtracted mesh" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_SubtractedMeshOpacity = { "SubtractedMeshOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSGMeshesToolProperties, SubtractedMeshOpacity), METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_SubtractedMeshOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_SubtractedMeshOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_SubtractedMeshColor_MetaData[] = {
		{ "Category", "Display" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Color of the translucent subtracted mesh */" },
		{ "DisplayName", "Color Subtracted Mesh" },
		{ "EditCondition", "bShowSubtractedMesh && Operation == ECSGOperation::DifferenceAB || bShowSubtractedMesh && Operation == ECSGOperation::DifferenceBA" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Color of the translucent subtracted mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_SubtractedMeshColor = { "SubtractedMeshColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSGMeshesToolProperties, SubtractedMeshColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_SubtractedMeshColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_SubtractedMeshColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bUseFirstMeshMaterials_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** If true, only the first mesh will keep its material assignments, and all other faces will have the first material assigned */" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "If true, only the first mesh will keep its material assignments, and all other faces will have the first material assigned" },
	};
#endif
	void Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bUseFirstMeshMaterials_SetBit(void* Obj)
	{
		((UCSGMeshesToolProperties*)Obj)->bUseFirstMeshMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bUseFirstMeshMaterials = { "bUseFirstMeshMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCSGMeshesToolProperties), &Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bUseFirstMeshMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bUseFirstMeshMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bUseFirstMeshMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSGMeshesToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bTryFixHoles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bTryCollapseEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_WindingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bShowNewBoundaries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bShowSubtractedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_SubtractedMeshOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_SubtractedMeshColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesToolProperties_Statics::NewProp_bUseFirstMeshMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSGMeshesToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSGMeshesToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSGMeshesToolProperties_Statics::ClassParams = {
		&UCSGMeshesToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSGMeshesToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSGMeshesToolProperties()
	{
		if (!Z_Registration_Info_UClass_UCSGMeshesToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSGMeshesToolProperties.OuterSingleton, Z_Construct_UClass_UCSGMeshesToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSGMeshesToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UCSGMeshesToolProperties>()
	{
		return UCSGMeshesToolProperties::StaticClass();
	}
	UCSGMeshesToolProperties::UCSGMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSGMeshesToolProperties);
	UCSGMeshesToolProperties::~UCSGMeshesToolProperties() {}
	void UTrimMeshesToolProperties::StaticRegisterNativesUTrimMeshesToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTrimMeshesToolProperties);
	UClass* Z_Construct_UClass_UTrimMeshesToolProperties_NoRegister()
	{
		return UTrimMeshesToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UTrimMeshesToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WhichMesh_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhichMesh_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WhichMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TrimSide_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrimSide_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TrimSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindingThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTrimmingMesh_MetaData[];
#endif
		static void NewProp_bShowTrimmingMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTrimmingMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpacityOfTrimmingMesh_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OpacityOfTrimmingMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorOfTrimmingMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOfTrimmingMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrimMeshesToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrimMeshesToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Properties of the trim mode\n */" },
		{ "IncludePath", "CSGMeshesTool.h" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Properties of the trim mode" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_WhichMesh_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_WhichMesh_MetaData[] = {
		{ "Category", "Operation" },
		{ "Comment", "/** Which object to trim */" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Which object to trim" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_WhichMesh = { "WhichMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTrimMeshesToolProperties, WhichMesh), Z_Construct_UEnum_ModelingOperators_ETrimOperation, METADATA_PARAMS(Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_WhichMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_WhichMesh_MetaData)) }; // 3477833904
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_TrimSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_TrimSide_MetaData[] = {
		{ "Category", "Operation" },
		{ "Comment", "/** Whether to remove the surface inside or outside of the trimming geometry */" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Whether to remove the surface inside or outside of the trimming geometry" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_TrimSide = { "TrimSide", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTrimMeshesToolProperties, TrimSide), Z_Construct_UEnum_ModelingOperators_ETrimSide, METADATA_PARAMS(Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_TrimSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_TrimSide_MetaData)) }; // 1329152576
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_WindingThreshold_MetaData[] = {
		{ "Category", "Operation" },
		{ "Comment", "/** Threshold to determine whether a triangle in one mesh is inside or outside of the other */" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Threshold to determine whether a triangle in one mesh is inside or outside of the other" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_WindingThreshold = { "WindingThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTrimMeshesToolProperties, WindingThreshold), METADATA_PARAMS(Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_WindingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_WindingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_bShowTrimmingMesh_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Whether to show a translucent version of the trimming mesh, to help visualize what is being cut */" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Whether to show a translucent version of the trimming mesh, to help visualize what is being cut" },
	};
#endif
	void Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_bShowTrimmingMesh_SetBit(void* Obj)
	{
		((UTrimMeshesToolProperties*)Obj)->bShowTrimmingMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_bShowTrimmingMesh = { "bShowTrimmingMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTrimMeshesToolProperties), &Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_bShowTrimmingMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_bShowTrimmingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_bShowTrimmingMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_OpacityOfTrimmingMesh_MetaData[] = {
		{ "Category", "Display" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Opacity of translucent version of the trimming mesh */" },
		{ "EditCondition", "bShowTrimmingMesh" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Opacity of translucent version of the trimming mesh" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_OpacityOfTrimmingMesh = { "OpacityOfTrimmingMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTrimMeshesToolProperties, OpacityOfTrimmingMesh), METADATA_PARAMS(Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_OpacityOfTrimmingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_OpacityOfTrimmingMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_ColorOfTrimmingMesh_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Color of translucent version of the trimming mesh */" },
		{ "EditCondition", "bShowTrimmingMesh" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Color of translucent version of the trimming mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_ColorOfTrimmingMesh = { "ColorOfTrimmingMesh", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTrimMeshesToolProperties, ColorOfTrimmingMesh), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_ColorOfTrimmingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_ColorOfTrimmingMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrimMeshesToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_WhichMesh_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_WhichMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_TrimSide_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_TrimSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_WindingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_bShowTrimmingMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_OpacityOfTrimmingMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrimMeshesToolProperties_Statics::NewProp_ColorOfTrimmingMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrimMeshesToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrimMeshesToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrimMeshesToolProperties_Statics::ClassParams = {
		&UTrimMeshesToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTrimMeshesToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTrimMeshesToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTrimMeshesToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrimMeshesToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrimMeshesToolProperties()
	{
		if (!Z_Registration_Info_UClass_UTrimMeshesToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrimMeshesToolProperties.OuterSingleton, Z_Construct_UClass_UTrimMeshesToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTrimMeshesToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UTrimMeshesToolProperties>()
	{
		return UTrimMeshesToolProperties::StaticClass();
	}
	UTrimMeshesToolProperties::UTrimMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrimMeshesToolProperties);
	UTrimMeshesToolProperties::~UTrimMeshesToolProperties() {}
	void UCSGMeshesTool::StaticRegisterNativesUCSGMeshesTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSGMeshesTool);
	UClass* Z_Construct_UClass_UCSGMeshesTool_NoRegister()
	{
		return UCSGMeshesTool::StaticClass();
	}
	struct Z_Construct_UClass_UCSGMeshesTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CSGProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CSGProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrimProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrimProperties;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OriginalMeshPreviews_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMeshPreviews_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalMeshPreviews;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewsGhostMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewsGhostMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawnLineSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawnLineSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSGMeshesTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCreateFromSelectedTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple Mesh Plane Cutting Tool\n */" },
		{ "IncludePath", "CSGMeshesTool.h" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Simple Mesh Plane Cutting Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_CSGProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_CSGProperties = { "CSGProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSGMeshesTool, CSGProperties), Z_Construct_UClass_UCSGMeshesToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_CSGProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_CSGProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_TrimProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_TrimProperties = { "TrimProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSGMeshesTool, TrimProperties), Z_Construct_UClass_UTrimMeshesToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_TrimProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_TrimProperties_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_OriginalMeshPreviews_Inner = { "OriginalMeshPreviews", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_OriginalMeshPreviews_MetaData[] = {
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_OriginalMeshPreviews = { "OriginalMeshPreviews", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSGMeshesTool, OriginalMeshPreviews), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_OriginalMeshPreviews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_OriginalMeshPreviews_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_PreviewsGhostMaterial_MetaData[] = {
		{ "Comment", "// Material used to show the otherwise-invisible cutting/trimming mesh\n" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
		{ "ToolTip", "Material used to show the otherwise-invisible cutting/trimming mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_PreviewsGhostMaterial = { "PreviewsGhostMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSGMeshesTool, PreviewsGhostMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_PreviewsGhostMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_PreviewsGhostMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_DrawnLineSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_DrawnLineSet = { "DrawnLineSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSGMeshesTool, DrawnLineSet), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_DrawnLineSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_DrawnLineSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSGMeshesTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_CSGProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_TrimProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_OriginalMeshPreviews_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_OriginalMeshPreviews,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_PreviewsGhostMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSGMeshesTool_Statics::NewProp_DrawnLineSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSGMeshesTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSGMeshesTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSGMeshesTool_Statics::ClassParams = {
		&UCSGMeshesTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSGMeshesTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSGMeshesTool()
	{
		if (!Z_Registration_Info_UClass_UCSGMeshesTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSGMeshesTool.OuterSingleton, Z_Construct_UClass_UCSGMeshesTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSGMeshesTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UCSGMeshesTool>()
	{
		return UCSGMeshesTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSGMeshesTool);
	UCSGMeshesTool::~UCSGMeshesTool() {}
	void UCSGMeshesToolBuilder::StaticRegisterNativesUCSGMeshesToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSGMeshesToolBuilder);
	UClass* Z_Construct_UClass_UCSGMeshesToolBuilder_NoRegister()
	{
		return UCSGMeshesToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UCSGMeshesToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSGMeshesToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSGMeshesToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CSGMeshesTool.h" },
		{ "ModuleRelativePath", "Public/CSGMeshesTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSGMeshesToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSGMeshesToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSGMeshesToolBuilder_Statics::ClassParams = {
		&UCSGMeshesToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCSGMeshesToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSGMeshesToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSGMeshesToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UCSGMeshesToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSGMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_UCSGMeshesToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSGMeshesToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UCSGMeshesToolBuilder>()
	{
		return UCSGMeshesToolBuilder::StaticClass();
	}
	UCSGMeshesToolBuilder::UCSGMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSGMeshesToolBuilder);
	UCSGMeshesToolBuilder::~UCSGMeshesToolBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CSGMeshesTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CSGMeshesTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSGMeshesToolProperties, UCSGMeshesToolProperties::StaticClass, TEXT("UCSGMeshesToolProperties"), &Z_Registration_Info_UClass_UCSGMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSGMeshesToolProperties), 1443003715U) },
		{ Z_Construct_UClass_UTrimMeshesToolProperties, UTrimMeshesToolProperties::StaticClass, TEXT("UTrimMeshesToolProperties"), &Z_Registration_Info_UClass_UTrimMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrimMeshesToolProperties), 1926338897U) },
		{ Z_Construct_UClass_UCSGMeshesTool, UCSGMeshesTool::StaticClass, TEXT("UCSGMeshesTool"), &Z_Registration_Info_UClass_UCSGMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSGMeshesTool), 2619178768U) },
		{ Z_Construct_UClass_UCSGMeshesToolBuilder, UCSGMeshesToolBuilder::StaticClass, TEXT("UCSGMeshesToolBuilder"), &Z_Registration_Info_UClass_UCSGMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSGMeshesToolBuilder), 3463335816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CSGMeshesTool_h_668426165(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CSGMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CSGMeshesTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
