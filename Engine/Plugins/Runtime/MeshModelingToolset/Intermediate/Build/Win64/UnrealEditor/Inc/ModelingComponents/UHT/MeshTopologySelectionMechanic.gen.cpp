// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Selection/MeshTopologySelectionMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshTopologySelectionMechanic() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickOrDragInputBehavior_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_APreviewGeometryActor_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshTopologySelectionMechanic();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshTopologySelectionMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshTopologySelectionMechanicProperties();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UTriangleSetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	DEFINE_FUNCTION(UMeshTopologySelectionMechanicProperties::execSelectAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshTopologySelectionMechanicProperties::execInvertSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvertSelection();
		P_NATIVE_END;
	}
	void UMeshTopologySelectionMechanicProperties::StaticRegisterNativesUMeshTopologySelectionMechanicProperties()
	{
		UClass* Class = UMeshTopologySelectionMechanicProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InvertSelection", &UMeshTopologySelectionMechanicProperties::execInvertSelection },
			{ "SelectAll", &UMeshTopologySelectionMechanicProperties::execSelectAll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionActions" },
		{ "Comment", "/** Invert current selection. If selection is empty, has same effect as Select All, and is similarly dependent on selection filter. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "Invert current selection. If selection is empty, has same effect as Select All, and is similarly dependent on selection filter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshTopologySelectionMechanicProperties, nullptr, "InvertSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionActions" },
		{ "Comment", "/** Select all elements. Depends on selection filter, where vertices are preferred to edges to faces. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "Select all elements. Depends on selection filter, where vertices are preferred to edges to faces." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshTopologySelectionMechanicProperties, nullptr, "SelectAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshTopologySelectionMechanicProperties);
	UClass* Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_NoRegister()
	{
		return UMeshTopologySelectionMechanicProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectVertices_MetaData[];
#endif
		static void NewProp_bSelectVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectEdges_MetaData[];
#endif
		static void NewProp_bSelectEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectFaces_MetaData[];
#endif
		static void NewProp_bSelectFaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectFaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectEdgeLoops_MetaData[];
#endif
		static void NewProp_bSelectEdgeLoops_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectEdgeLoops;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectEdgeRings_MetaData[];
#endif
		static void NewProp_bSelectEdgeRings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectEdgeRings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitBackFaces_MetaData[];
#endif
		static void NewProp_bHitBackFaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitBackFaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMarquee_MetaData[];
#endif
		static void NewProp_bEnableMarquee_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMarquee;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMarqueeIgnoreOcclusion_MetaData[];
#endif
		static void NewProp_bMarqueeIgnoreOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarqueeIgnoreOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreferProjectedElement_MetaData[];
#endif
		static void NewProp_bPreferProjectedElement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferProjectedElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectDownRay_MetaData[];
#endif
		static void NewProp_bSelectDownRay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectDownRay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreOcclusion_MetaData[];
#endif
		static void NewProp_bIgnoreOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreOcclusion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_InvertSelection, "InvertSelection" }, // 1880745969
		{ &Z_Construct_UFunction_UMeshTopologySelectionMechanicProperties_SelectAll, "SelectAll" }, // 1694291077
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Selection/MeshTopologySelectionMechanic.h" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectVertices_MetaData[] = {
		{ "Category", "SelectionFilter" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
#endif
	void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectVertices_SetBit(void* Obj)
	{
		((UMeshTopologySelectionMechanicProperties*)Obj)->bSelectVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectVertices = { "bSelectVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectVertices_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdges_MetaData[] = {
		{ "Category", "SelectionFilter" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
#endif
	void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdges_SetBit(void* Obj)
	{
		((UMeshTopologySelectionMechanicProperties*)Obj)->bSelectEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdges = { "bSelectEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectFaces_MetaData[] = {
		{ "Category", "SelectionFilter" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
#endif
	void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectFaces_SetBit(void* Obj)
	{
		((UMeshTopologySelectionMechanicProperties*)Obj)->bSelectFaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectFaces = { "bSelectFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectFaces_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectFaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectFaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeLoops_MetaData[] = {
		{ "Category", "SelectionFilter" },
		{ "Comment", "/** When true, will select edge loops. Edge loops are paths along a string of valence-4 vertices. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "When true, will select edge loops. Edge loops are paths along a string of valence-4 vertices." },
	};
#endif
	void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeLoops_SetBit(void* Obj)
	{
		((UMeshTopologySelectionMechanicProperties*)Obj)->bSelectEdgeLoops = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeLoops = { "bSelectEdgeLoops", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeLoops_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeLoops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeLoops_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeRings_MetaData[] = {
		{ "Category", "SelectionFilter" },
		{ "Comment", "/** When set, will select rings of edges that are opposite each other across a quad face. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "When set, will select rings of edges that are opposite each other across a quad face." },
	};
#endif
	void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeRings_SetBit(void* Obj)
	{
		((UMeshTopologySelectionMechanicProperties*)Obj)->bSelectEdgeRings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeRings = { "bSelectEdgeRings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeRings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeRings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeRings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bHitBackFaces_MetaData[] = {
		{ "Category", "AdditionalSelectionOptions" },
		{ "Comment", "/** When set, faces that face away from the camera are ignored in selection and occlusion. Useful for working with inside-out meshes. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "When set, faces that face away from the camera are ignored in selection and occlusion. Useful for working with inside-out meshes." },
	};
#endif
	void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bHitBackFaces_SetBit(void* Obj)
	{
		((UMeshTopologySelectionMechanicProperties*)Obj)->bHitBackFaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bHitBackFaces = { "bHitBackFaces", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bHitBackFaces_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bHitBackFaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bHitBackFaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bEnableMarquee_MetaData[] = {
		{ "Category", "AdditionalSelectionOptions" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
#endif
	void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bEnableMarquee_SetBit(void* Obj)
	{
		((UMeshTopologySelectionMechanicProperties*)Obj)->bEnableMarquee = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bEnableMarquee = { "bEnableMarquee", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bEnableMarquee_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bEnableMarquee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bEnableMarquee_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bMarqueeIgnoreOcclusion_MetaData[] = {
		{ "Category", "AdditionalSelectionOptions" },
		{ "Comment", "/** Determines whether vertices should be checked for occlusion in marquee select (Note: marquee select currently only works with edges and vertices) */" },
		{ "EditCondition", "bEnableMarquee" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "Determines whether vertices should be checked for occlusion in marquee select (Note: marquee select currently only works with edges and vertices)" },
	};
#endif
	void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bMarqueeIgnoreOcclusion_SetBit(void* Obj)
	{
		((UMeshTopologySelectionMechanicProperties*)Obj)->bMarqueeIgnoreOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bMarqueeIgnoreOcclusion = { "bMarqueeIgnoreOcclusion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bMarqueeIgnoreOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bMarqueeIgnoreOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bMarqueeIgnoreOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bPreferProjectedElement_MetaData[] = {
		{ "Category", "AdditionalSelectionOptions|Ortho Viewport Behavior" },
		{ "Comment", "/** Prefer to select an edge projected to a point rather than the point, or a face projected to an edge rather than the edge. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "Prefer to select an edge projected to a point rather than the point, or a face projected to an edge rather than the edge." },
	};
#endif
	void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bPreferProjectedElement_SetBit(void* Obj)
	{
		((UMeshTopologySelectionMechanicProperties*)Obj)->bPreferProjectedElement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bPreferProjectedElement = { "bPreferProjectedElement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bPreferProjectedElement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bPreferProjectedElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bPreferProjectedElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectDownRay_MetaData[] = {
		{ "Category", "AdditionalSelectionOptions|Ortho Viewport Behavior" },
		{ "Comment", "/** If the closest element is valid, select other elements behind it that are aligned with it. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "If the closest element is valid, select other elements behind it that are aligned with it." },
	};
#endif
	void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectDownRay_SetBit(void* Obj)
	{
		((UMeshTopologySelectionMechanicProperties*)Obj)->bSelectDownRay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectDownRay = { "bSelectDownRay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectDownRay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectDownRay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectDownRay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bIgnoreOcclusion_MetaData[] = {
		{ "Category", "AdditionalSelectionOptions|Ortho Viewport Behavior" },
		{ "Comment", "/** Do not check whether the closest element is occluded from the current view. */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "Do not check whether the closest element is occluded from the current view." },
	};
#endif
	void Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bIgnoreOcclusion_SetBit(void* Obj)
	{
		((UMeshTopologySelectionMechanicProperties*)Obj)->bIgnoreOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bIgnoreOcclusion = { "bIgnoreOcclusion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshTopologySelectionMechanicProperties), &Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bIgnoreOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bIgnoreOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bIgnoreOcclusion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectFaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeLoops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectEdgeRings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bHitBackFaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bEnableMarquee,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bMarqueeIgnoreOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bPreferProjectedElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bSelectDownRay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::NewProp_bIgnoreOcclusion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshTopologySelectionMechanicProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::ClassParams = {
		&UMeshTopologySelectionMechanicProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshTopologySelectionMechanicProperties()
	{
		if (!Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.OuterSingleton, Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMeshTopologySelectionMechanicProperties>()
	{
		return UMeshTopologySelectionMechanicProperties::StaticClass();
	}
	UMeshTopologySelectionMechanicProperties::UMeshTopologySelectionMechanicProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshTopologySelectionMechanicProperties);
	UMeshTopologySelectionMechanicProperties::~UMeshTopologySelectionMechanicProperties() {}
	void UMeshTopologySelectionMechanic::StaticRegisterNativesUMeshTopologySelectionMechanic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshTopologySelectionMechanic);
	UClass* Z_Construct_UClass_UMeshTopologySelectionMechanic_NoRegister()
	{
		return UMeshTopologySelectionMechanic::StaticClass();
	}
	struct Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HoverBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickOrDragBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClickOrDragBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarqueeMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MarqueeMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewGeometryActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewGeometryActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawnTriangleSetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawnTriangleSetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighlightedFaceMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HighlightedFaceMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class mechanic for selecting a subset of mesh elements (edge loops, groups, corners, etc.)\n * Internally it relies on an FMeshTopologySelector to define which type of mesh topology is selectable.\n * \n * NOTE: Users should not use this class directly, but rather subclass it and specify a particular FMeshTopologySelector to use.\n */" },
		{ "IncludePath", "Selection/MeshTopologySelectionMechanic.h" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "Base class mechanic for selecting a subset of mesh elements (edge loops, groups, corners, etc.)\nInternally it relies on an FMeshTopologySelector to define which type of mesh topology is selectable.\n\nNOTE: Users should not use this class directly, but rather subclass it and specify a particular FMeshTopologySelector to use." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_Properties_MetaData[] = {
		{ "Comment", "// TODO: Is it worth issuing separate callbacks in normal selection changes and in FChange ones, to\n// allow the user to bundle in some FChanges into the normal callback?\n" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "TODO: Is it worth issuing separate callbacks in normal selection changes and in FChange ones, to\nallow the user to bundle in some FChanges into the normal callback?" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTopologySelectionMechanic, Properties), Z_Construct_UClass_UMeshTopologySelectionMechanicProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_Properties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_HoverBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_HoverBehavior = { "HoverBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTopologySelectionMechanic, HoverBehavior), Z_Construct_UClass_UMouseHoverBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_HoverBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_HoverBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_ClickOrDragBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_ClickOrDragBehavior = { "ClickOrDragBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTopologySelectionMechanic, ClickOrDragBehavior), Z_Construct_UClass_USingleClickOrDragInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_ClickOrDragBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_ClickOrDragBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_MarqueeMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_MarqueeMechanic = { "MarqueeMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTopologySelectionMechanic, MarqueeMechanic), Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_MarqueeMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_MarqueeMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_PreviewGeometryActor_MetaData[] = {
		{ "Comment", "/** The actor we create internally to own the DrawnTriangleSetComponent */" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
		{ "ToolTip", "The actor we create internally to own the DrawnTriangleSetComponent" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_PreviewGeometryActor = { "PreviewGeometryActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTopologySelectionMechanic, PreviewGeometryActor), Z_Construct_UClass_APreviewGeometryActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_PreviewGeometryActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_PreviewGeometryActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_DrawnTriangleSetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_DrawnTriangleSetComponent = { "DrawnTriangleSetComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTopologySelectionMechanic, DrawnTriangleSetComponent), Z_Construct_UClass_UTriangleSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_DrawnTriangleSetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_DrawnTriangleSetComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_HighlightedFaceMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/MeshTopologySelectionMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_HighlightedFaceMaterial = { "HighlightedFaceMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshTopologySelectionMechanic, HighlightedFaceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_HighlightedFaceMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_HighlightedFaceMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_HoverBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_ClickOrDragBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_MarqueeMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_PreviewGeometryActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_DrawnTriangleSetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::NewProp_HighlightedFaceMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshTopologySelectionMechanic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::ClassParams = {
		&UMeshTopologySelectionMechanic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::PropPointers),
		0,
		0x009000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshTopologySelectionMechanic()
	{
		if (!Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.OuterSingleton, Z_Construct_UClass_UMeshTopologySelectionMechanic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMeshTopologySelectionMechanic>()
	{
		return UMeshTopologySelectionMechanic::StaticClass();
	}
	UMeshTopologySelectionMechanic::UMeshTopologySelectionMechanic() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshTopologySelectionMechanic);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshTopologySelectionMechanicProperties, UMeshTopologySelectionMechanicProperties::StaticClass, TEXT("UMeshTopologySelectionMechanicProperties"), &Z_Registration_Info_UClass_UMeshTopologySelectionMechanicProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshTopologySelectionMechanicProperties), 4152927510U) },
		{ Z_Construct_UClass_UMeshTopologySelectionMechanic, UMeshTopologySelectionMechanic::StaticClass, TEXT("UMeshTopologySelectionMechanic"), &Z_Registration_Info_UClass_UMeshTopologySelectionMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshTopologySelectionMechanic), 2779138047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_840778933(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_MeshTopologySelectionMechanic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
