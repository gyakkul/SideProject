// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CutMeshWithMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCutMeshWithMeshTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCutMeshWithMeshTool();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCutMeshWithMeshTool_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCutMeshWithMeshToolBuilder();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCutMeshWithMeshToolBuilder_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCutMeshWithMeshToolProperties();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCutMeshWithMeshToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	void UCutMeshWithMeshToolProperties::StaticRegisterNativesUCutMeshWithMeshToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCutMeshWithMeshToolProperties);
	UClass* Z_Construct_UClass_UCutMeshWithMeshToolProperties_NoRegister()
	{
		return UCutMeshWithMeshToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFirstMeshMaterials_MetaData[];
#endif
		static void NewProp_bUseFirstMeshMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFirstMeshMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the CutMeshWithMesh operation\n */" },
		{ "IncludePath", "CutMeshWithMeshTool.h" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
		{ "ToolTip", "Standard properties of the CutMeshWithMesh operation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryFixHoles_MetaData[] = {
		{ "Category", "Boolean" },
		{ "Comment", "/** Try to fill holes created by the Boolean operation, e.g. due to numerical errors */" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
		{ "ToolTip", "Try to fill holes created by the Boolean operation, e.g. due to numerical errors" },
	};
#endif
	void Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryFixHoles_SetBit(void* Obj)
	{
		((UCutMeshWithMeshToolProperties*)Obj)->bTryFixHoles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryFixHoles = { "bTryFixHoles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCutMeshWithMeshToolProperties), &Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryFixHoles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryFixHoles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryFixHoles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryCollapseEdges_MetaData[] = {
		{ "Category", "Boolean" },
		{ "Comment", "/** Try to collapse extra edges created by the Boolean operation */" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
		{ "ToolTip", "Try to collapse extra edges created by the Boolean operation" },
	};
#endif
	void Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryCollapseEdges_SetBit(void* Obj)
	{
		((UCutMeshWithMeshToolProperties*)Obj)->bTryCollapseEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryCollapseEdges = { "bTryCollapseEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCutMeshWithMeshToolProperties), &Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryCollapseEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryCollapseEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryCollapseEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_WindingThreshold_MetaData[] = {
		{ "Category", "Boolean" },
		{ "Comment", "/** Threshold to determine whether a triangle in one mesh is inside or outside of the other */" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
		{ "ToolTip", "Threshold to determine whether a triangle in one mesh is inside or outside of the other" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_WindingThreshold = { "WindingThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCutMeshWithMeshToolProperties, WindingThreshold), METADATA_PARAMS(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_WindingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_WindingThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bShowNewBoundaries_MetaData[] = {
		{ "Category", "Display" },
		{ "Comment", "/** Show boundary edges created by the Boolean operation, which might happen due to numerical errors */" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
		{ "ToolTip", "Show boundary edges created by the Boolean operation, which might happen due to numerical errors" },
	};
#endif
	void Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bShowNewBoundaries_SetBit(void* Obj)
	{
		((UCutMeshWithMeshToolProperties*)Obj)->bShowNewBoundaries = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bShowNewBoundaries = { "bShowNewBoundaries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCutMeshWithMeshToolProperties), &Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bShowNewBoundaries_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bShowNewBoundaries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bShowNewBoundaries_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bUseFirstMeshMaterials_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** If true, only the first mesh will keep its material assignments, and all other faces will have the first material assigned */" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
		{ "ToolTip", "If true, only the first mesh will keep its material assignments, and all other faces will have the first material assigned" },
	};
#endif
	void Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bUseFirstMeshMaterials_SetBit(void* Obj)
	{
		((UCutMeshWithMeshToolProperties*)Obj)->bUseFirstMeshMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bUseFirstMeshMaterials = { "bUseFirstMeshMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCutMeshWithMeshToolProperties), &Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bUseFirstMeshMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bUseFirstMeshMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bUseFirstMeshMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryFixHoles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bTryCollapseEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_WindingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bShowNewBoundaries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::NewProp_bUseFirstMeshMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCutMeshWithMeshToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::ClassParams = {
		&UCutMeshWithMeshToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCutMeshWithMeshToolProperties()
	{
		if (!Z_Registration_Info_UClass_UCutMeshWithMeshToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCutMeshWithMeshToolProperties.OuterSingleton, Z_Construct_UClass_UCutMeshWithMeshToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCutMeshWithMeshToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UCutMeshWithMeshToolProperties>()
	{
		return UCutMeshWithMeshToolProperties::StaticClass();
	}
	UCutMeshWithMeshToolProperties::UCutMeshWithMeshToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCutMeshWithMeshToolProperties);
	UCutMeshWithMeshToolProperties::~UCutMeshWithMeshToolProperties() {}
	void UCutMeshWithMeshTool::StaticRegisterNativesUCutMeshWithMeshTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCutMeshWithMeshTool);
	UClass* Z_Construct_UClass_UCutMeshWithMeshTool_NoRegister()
	{
		return UCutMeshWithMeshTool::StaticClass();
	}
	struct Z_Construct_UClass_UCutMeshWithMeshTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CutProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntersectPreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IntersectPreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawnLineSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawnLineSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCutMeshWithMeshTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCreateFromSelectedTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCutMeshWithMeshTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UCutMeshWithMeshTool cuts an input mesh into two pieces based on a second input mesh.\n * Essentially this just both a Boolean Subtract and a Boolean Intersection. However\n * doing those as two separate operations involves quite a few steps, so this Tool\n * does it in a single step and with some improved efficiency.\n */" },
		{ "IncludePath", "CutMeshWithMeshTool.h" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
		{ "ToolTip", "UCutMeshWithMeshTool cuts an input mesh into two pieces based on a second input mesh.\nEssentially this just both a Boolean Subtract and a Boolean Intersection. However\ndoing those as two separate operations involves quite a few steps, so this Tool\ndoes it in a single step and with some improved efficiency." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_CutProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_CutProperties = { "CutProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCutMeshWithMeshTool, CutProperties), Z_Construct_UClass_UCutMeshWithMeshToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_CutProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_CutProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_IntersectPreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_IntersectPreviewMesh = { "IntersectPreviewMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCutMeshWithMeshTool, IntersectPreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_IntersectPreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_IntersectPreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_DrawnLineSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_DrawnLineSet = { "DrawnLineSet", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCutMeshWithMeshTool, DrawnLineSet), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_DrawnLineSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_DrawnLineSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCutMeshWithMeshTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_CutProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_IntersectPreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCutMeshWithMeshTool_Statics::NewProp_DrawnLineSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCutMeshWithMeshTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCutMeshWithMeshTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCutMeshWithMeshTool_Statics::ClassParams = {
		&UCutMeshWithMeshTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCutMeshWithMeshTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCutMeshWithMeshTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCutMeshWithMeshTool()
	{
		if (!Z_Registration_Info_UClass_UCutMeshWithMeshTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCutMeshWithMeshTool.OuterSingleton, Z_Construct_UClass_UCutMeshWithMeshTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCutMeshWithMeshTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UCutMeshWithMeshTool>()
	{
		return UCutMeshWithMeshTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCutMeshWithMeshTool);
	UCutMeshWithMeshTool::~UCutMeshWithMeshTool() {}
	void UCutMeshWithMeshToolBuilder::StaticRegisterNativesUCutMeshWithMeshToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCutMeshWithMeshToolBuilder);
	UClass* Z_Construct_UClass_UCutMeshWithMeshToolBuilder_NoRegister()
	{
		return UCutMeshWithMeshToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UCutMeshWithMeshToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCutMeshWithMeshToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCutMeshWithMeshToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CutMeshWithMeshTool.h" },
		{ "ModuleRelativePath", "Public/CutMeshWithMeshTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCutMeshWithMeshToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCutMeshWithMeshToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCutMeshWithMeshToolBuilder_Statics::ClassParams = {
		&UCutMeshWithMeshToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCutMeshWithMeshToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCutMeshWithMeshToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCutMeshWithMeshToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UCutMeshWithMeshToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCutMeshWithMeshToolBuilder.OuterSingleton, Z_Construct_UClass_UCutMeshWithMeshToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCutMeshWithMeshToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UCutMeshWithMeshToolBuilder>()
	{
		return UCutMeshWithMeshToolBuilder::StaticClass();
	}
	UCutMeshWithMeshToolBuilder::UCutMeshWithMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCutMeshWithMeshToolBuilder);
	UCutMeshWithMeshToolBuilder::~UCutMeshWithMeshToolBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CutMeshWithMeshTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CutMeshWithMeshTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCutMeshWithMeshToolProperties, UCutMeshWithMeshToolProperties::StaticClass, TEXT("UCutMeshWithMeshToolProperties"), &Z_Registration_Info_UClass_UCutMeshWithMeshToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCutMeshWithMeshToolProperties), 2972877614U) },
		{ Z_Construct_UClass_UCutMeshWithMeshTool, UCutMeshWithMeshTool::StaticClass, TEXT("UCutMeshWithMeshTool"), &Z_Registration_Info_UClass_UCutMeshWithMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCutMeshWithMeshTool), 1248824104U) },
		{ Z_Construct_UClass_UCutMeshWithMeshToolBuilder, UCutMeshWithMeshToolBuilder::StaticClass, TEXT("UCutMeshWithMeshToolBuilder"), &Z_Registration_Info_UClass_UCutMeshWithMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCutMeshWithMeshToolBuilder), 358776744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CutMeshWithMeshTool_h_301638381(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CutMeshWithMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CutMeshWithMeshTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
