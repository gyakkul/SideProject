// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangePipelineMeshesUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangePipelineMeshesUtilities() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangePipelineMeshesUtilities();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangePipelineMeshesUtilities_NoRegister();
	INTERCHANGEPIPELINES_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer();
	INTERCHANGEPIPELINES_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeMeshGeometry();
	INTERCHANGEPIPELINES_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeMeshInstance();
	UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer;
class UScriptStruct* FInterchangeLodSceneNodeContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("InterchangeLodSceneNodeContainer"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<FInterchangeLodSceneNodeContainer>()
{
	return FInterchangeLodSceneNodeContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SceneNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* This container exist only because UPROPERTY cannot support nested container. See FInterchangeMeshInstance\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "* This container exist only because UPROPERTY cannot support nested container. See FInterchangeMeshInstance" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeLodSceneNodeContainer>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes_Inner = { "SceneNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInterchangeSceneNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "Comment", "/**\n\x09 * Each scene node here represent a mesh scene node. Only if we represent a lod group we can have more then 1 mesh scene node for a specific lod index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Each scene node here represent a mesh scene node. Only if we represent a lod group we can have more then 1 mesh scene node for a specific lod index." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes = { "SceneNodes", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeLodSceneNodeContainer, SceneNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewProp_SceneNodes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
		nullptr,
		&NewStructOps,
		"InterchangeLodSceneNodeContainer",
		sizeof(FInterchangeLodSceneNodeContainer),
		alignof(FInterchangeLodSceneNodeContainer),
		Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeMeshInstance;
class UScriptStruct* FInterchangeMeshInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeMeshInstance, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("InterchangeMeshInstance"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<FInterchangeMeshInstance>()
{
	return FInterchangeMeshInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshInstanceUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodGroupNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LodGroupNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReferenceSkinnedMesh_MetaData[];
#endif
		static void NewProp_bReferenceSkinnedMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReferenceSkinnedMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReferenceMorphTarget_MetaData[];
#endif
		static void NewProp_bReferenceMorphTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReferenceMorphTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SceneNodePerLodIndex_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SceneNodePerLodIndex_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneNodePerLodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SceneNodePerLodIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencingMeshGeometryUids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencingMeshGeometryUids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencingMeshGeometryUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* A mesh instance is a description of a translated scene node that point on a translated mesh asset.\n* A mesh instance pointing on a lod group can have many lods and many scene mesh nodes per lod index.\n* A mesh instance pointing on a mesh node will have only the lod 0 and will point on one scene mesh node.\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "* A mesh instance is a description of a translated scene node that point on a translated mesh asset.\n* A mesh instance pointing on a lod group can have many lods and many scene mesh nodes per lod index.\n* A mesh instance pointing on a mesh node will have only the lod 0 and will point on one scene mesh node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeMeshInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_MeshInstanceUid_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "Comment", "/**\n\x09 * This ID represent either 1: a lod group scene node uid or 2: a mesh scene node uid.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "This ID represent either 1: a lod group scene node uid or 2: a mesh scene node uid." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_MeshInstanceUid = { "MeshInstanceUid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeMeshInstance, MeshInstanceUid), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_MeshInstanceUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_MeshInstanceUid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_LodGroupNode_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "Comment", "/**\n\x09 * If this mesh instance represent a LodGroup this member will not be null, but will be null if the mesh instance do not represent a lod group\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "If this mesh instance represent a LodGroup this member will not be null, but will be null if the mesh instance do not represent a lod group" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_LodGroupNode = { "LodGroupNode", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeMeshInstance, LodGroupNode), Z_Construct_UClass_UInterchangeSceneNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_LodGroupNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_LodGroupNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh_SetBit(void* Obj)
	{
		((FInterchangeMeshInstance*)Obj)->bReferenceSkinnedMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh = { "bReferenceSkinnedMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInterchangeMeshInstance), &Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget_SetBit(void* Obj)
	{
		((FInterchangeMeshInstance*)Obj)->bReferenceMorphTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget = { "bReferenceMorphTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInterchangeMeshInstance), &Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_ValueProp = { "SceneNodePerLodIndex", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer, METADATA_PARAMS(nullptr, 0) }; // 2238116385
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_Key_KeyProp = { "SceneNodePerLodIndex_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesInstance" },
		{ "Comment", "/**\n\x09 * Each scene node here represent a mesh scene node. Only if we represent a lod group we can have more then 1 mesh scene node for a specific lod index.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Each scene node here represent a mesh scene node. Only if we represent a lod group we can have more then 1 mesh scene node for a specific lod index." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex = { "SceneNodePerLodIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeMeshInstance, SceneNodePerLodIndex), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_MetaData)) }; // 2238116385
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids_Inner = { "ReferencingMeshGeometryUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesGeometry" },
		{ "Comment", "/**\n\x09 * All mesh geometry referenced by this MeshInstance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "All mesh geometry referenced by this MeshInstance." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids = { "ReferencingMeshGeometryUids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeMeshInstance, ReferencingMeshGeometryUids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_MeshInstanceUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_LodGroupNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceSkinnedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_bReferenceMorphTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_SceneNodePerLodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewProp_ReferencingMeshGeometryUids,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
		nullptr,
		&NewStructOps,
		"InterchangeMeshInstance",
		sizeof(FInterchangeMeshInstance),
		alignof(FInterchangeMeshInstance),
		Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangeMeshInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangeMeshInstance.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry;
class UScriptStruct* FInterchangeMeshGeometry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeMeshGeometry, (UObject*)Z_Construct_UPackage__Script_InterchangePipelines(), TEXT("InterchangeMeshGeometry"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.OuterSingleton;
}
template<> INTERCHANGEPIPELINES_API UScriptStruct* StaticStruct<FInterchangeMeshGeometry>()
{
	return FInterchangeMeshGeometry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshUid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshNode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencingMeshInstanceUids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencingMeshInstanceUids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencingMeshInstanceUids;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttachedSocketUids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedSocketUids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachedSocketUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* A mesh geometry is a description of a translated mesh asset node that define a geometry.\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "* A mesh geometry is a description of a translated mesh asset node that define a geometry." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeMeshGeometry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshUid_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesGeometry" },
		{ "Comment", "/**\n\x09 * Represent the unique id of the UInterchangeMeshNode represent by this structure.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Represent the unique id of the UInterchangeMeshNode represent by this structure." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshUid = { "MeshUid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeMeshGeometry, MeshUid), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshUid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshNode_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesGeometry" },
		{ "Comment", "/**\n\x09 * The UInterchangeMeshNode pointer represent by this structure.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The UInterchangeMeshNode pointer represent by this structure." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshNode = { "MeshNode", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeMeshGeometry, MeshNode), Z_Construct_UClass_UInterchangeMeshNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshNode_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids_Inner = { "ReferencingMeshInstanceUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesGeometry" },
		{ "Comment", "/**\n\x09 * All mesh instance referencing this UInterchangeMeshNode pointer.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "All mesh instance referencing this UInterchangeMeshNode pointer." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids = { "ReferencingMeshInstanceUids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeMeshGeometry, ReferencingMeshInstanceUids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids_Inner = { "AttachedSocketUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids_MetaData[] = {
		{ "Category", "Interchange | Pipeline | MeshesGeometry" },
		{ "Comment", "/**\n\x09 * A list of all scene nodes representing sockets attached to this mesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "A list of all scene nodes representing sockets attached to this mesh" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids = { "AttachedSocketUids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeMeshGeometry, AttachedSocketUids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_MeshNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_ReferencingMeshInstanceUids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewProp_AttachedSocketUids,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
		nullptr,
		&NewStructOps,
		"InterchangeMeshGeometry",
		sizeof(FInterchangeMeshGeometry),
		alignof(FInterchangeMeshGeometry),
		Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangeMeshGeometry()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry.InnerSingleton;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetMeshGeometrySkeletonRootUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshGeometryUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMeshGeometrySkeletonRootUid(Z_Param_MeshGeometryUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetMeshInstanceSkeletonRootUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshInstanceUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMeshInstanceSkeletonRootUid(Z_Param_MeshInstanceUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllMeshInstanceUidsUsingMeshGeometryUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshGeometryUid);
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshInstanceUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllMeshInstanceUidsUsingMeshGeometryUid(Z_Param_MeshGeometryUid,Z_Param_Out_MeshInstanceUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetMeshGeometryByUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshGeometryUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeMeshGeometry*)Z_Param__Result=P_THIS->GetMeshGeometryByUid(Z_Param_MeshGeometryUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execIsValidMeshGeometryUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshGeometryUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidMeshGeometryUid(Z_Param_MeshGeometryUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetMeshInstanceByUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshInstanceUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeMeshInstance*)Z_Param__Result=P_THIS->GetMeshInstanceByUid(Z_Param_MeshInstanceUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execIsValidMeshInstanceUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshInstanceUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidMeshInstanceUid(Z_Param_MeshInstanceUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllMeshGeometryNotInstanced)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshGeometryUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllMeshGeometryNotInstanced(Z_Param_Out_MeshGeometryUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllStaticMeshGeometry)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshGeometryUids);
		P_GET_UBOOL(Z_Param_bConvertSkeletalMeshToStaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllStaticMeshGeometry(Z_Param_Out_MeshGeometryUids,Z_Param_bConvertSkeletalMeshToStaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllSkinnedMeshGeometry)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshGeometryUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllSkinnedMeshGeometry(Z_Param_Out_MeshGeometryUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllMeshGeometry)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshGeometryUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllMeshGeometry(Z_Param_Out_MeshGeometryUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllStaticMeshInstance)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshInstanceUids);
		P_GET_UBOOL(Z_Param_bConvertSkeletalMeshToStaticMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllStaticMeshInstance(Z_Param_Out_MeshInstanceUids,Z_Param_bConvertSkeletalMeshToStaticMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllSkinnedMeshInstance)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshInstanceUids);
		P_GET_UBOOL(Z_Param_bConvertStaticMeshToSkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllSkinnedMeshInstance(Z_Param_Out_MeshInstanceUids,Z_Param_bConvertStaticMeshToSkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execGetAllMeshInstanceUids)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_MeshInstanceUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllMeshInstanceUids(Z_Param_Out_MeshInstanceUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineMeshesUtilities::execCreateInterchangePipelineMeshesUtilities)
	{
		P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInterchangePipelineMeshesUtilities**)Z_Param__Result=UInterchangePipelineMeshesUtilities::CreateInterchangePipelineMeshesUtilities(Z_Param_BaseNodeContainer);
		P_NATIVE_END;
	}
	void UInterchangePipelineMeshesUtilities::StaticRegisterNativesUInterchangePipelineMeshesUtilities()
	{
		UClass* Class = UInterchangePipelineMeshesUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateInterchangePipelineMeshesUtilities", &UInterchangePipelineMeshesUtilities::execCreateInterchangePipelineMeshesUtilities },
			{ "GetAllMeshGeometry", &UInterchangePipelineMeshesUtilities::execGetAllMeshGeometry },
			{ "GetAllMeshGeometryNotInstanced", &UInterchangePipelineMeshesUtilities::execGetAllMeshGeometryNotInstanced },
			{ "GetAllMeshInstanceUids", &UInterchangePipelineMeshesUtilities::execGetAllMeshInstanceUids },
			{ "GetAllMeshInstanceUidsUsingMeshGeometryUid", &UInterchangePipelineMeshesUtilities::execGetAllMeshInstanceUidsUsingMeshGeometryUid },
			{ "GetAllSkinnedMeshGeometry", &UInterchangePipelineMeshesUtilities::execGetAllSkinnedMeshGeometry },
			{ "GetAllSkinnedMeshInstance", &UInterchangePipelineMeshesUtilities::execGetAllSkinnedMeshInstance },
			{ "GetAllStaticMeshGeometry", &UInterchangePipelineMeshesUtilities::execGetAllStaticMeshGeometry },
			{ "GetAllStaticMeshInstance", &UInterchangePipelineMeshesUtilities::execGetAllStaticMeshInstance },
			{ "GetMeshGeometryByUid", &UInterchangePipelineMeshesUtilities::execGetMeshGeometryByUid },
			{ "GetMeshGeometrySkeletonRootUid", &UInterchangePipelineMeshesUtilities::execGetMeshGeometrySkeletonRootUid },
			{ "GetMeshInstanceByUid", &UInterchangePipelineMeshesUtilities::execGetMeshInstanceByUid },
			{ "GetMeshInstanceSkeletonRootUid", &UInterchangePipelineMeshesUtilities::execGetMeshInstanceSkeletonRootUid },
			{ "IsValidMeshGeometryUid", &UInterchangePipelineMeshesUtilities::execIsValidMeshGeometryUid },
			{ "IsValidMeshInstanceUid", &UInterchangePipelineMeshesUtilities::execIsValidMeshInstanceUid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventCreateInterchangePipelineMeshesUtilities_Parms
		{
			UInterchangeBaseNodeContainer* BaseNodeContainer;
			UInterchangePipelineMeshesUtilities* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventCreateInterchangePipelineMeshesUtilities_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventCreateInterchangePipelineMeshesUtilities_Parms, ReturnValue), Z_Construct_UClass_UInterchangePipelineMeshesUtilities_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::NewProp_BaseNodeContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Create an instance of UInterchangePipelineMeshesUtilities.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Create an instance of UInterchangePipelineMeshesUtilities." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "CreateInterchangePipelineMeshesUtilities", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::InterchangePipelineMeshesUtilities_eventCreateInterchangePipelineMeshesUtilities_Parms), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllMeshGeometry_Parms
		{
			TArray<FString> MeshGeometryUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshGeometryUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::NewProp_MeshGeometryUids = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllMeshGeometry_Parms, MeshGeometryUids), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::NewProp_MeshGeometryUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all mesh geometry unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all mesh geometry unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllMeshGeometry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshGeometry_Parms), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllMeshGeometryNotInstanced_Parms
		{
			TArray<FString> MeshGeometryUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshGeometryUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::NewProp_MeshGeometryUids_Inner = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::NewProp_MeshGeometryUids = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllMeshGeometryNotInstanced_Parms, MeshGeometryUids), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::NewProp_MeshGeometryUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::NewProp_MeshGeometryUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all not instanced mesh geometry unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all not instanced mesh geometry unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllMeshGeometryNotInstanced", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshGeometryNotInstanced_Parms), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUids_Parms
		{
			TArray<FString> MeshInstanceUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshInstanceUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::NewProp_MeshInstanceUids_Inner = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::NewProp_MeshInstanceUids = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUids_Parms, MeshInstanceUids), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::NewProp_MeshInstanceUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::NewProp_MeshInstanceUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all mesh instance unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all mesh instance unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllMeshInstanceUids", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUids_Parms), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUidsUsingMeshGeometryUid_Parms
		{
			FString MeshGeometryUid;
			TArray<FString> MeshInstanceUids;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGeometryUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUid;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshInstanceUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshGeometryUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshGeometryUid = { "MeshGeometryUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUidsUsingMeshGeometryUid_Parms, MeshGeometryUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshGeometryUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshGeometryUid_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshInstanceUids_Inner = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshInstanceUids = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUidsUsingMeshGeometryUid_Parms, MeshInstanceUids), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshGeometryUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshInstanceUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::NewProp_MeshInstanceUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all instanced mesh uids using the mesh geometry unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all instanced mesh uids using the mesh geometry unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllMeshInstanceUidsUsingMeshGeometryUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::InterchangePipelineMeshesUtilities_eventGetAllMeshInstanceUidsUsingMeshGeometryUid_Parms), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshGeometry_Parms
		{
			TArray<FString> MeshGeometryUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshGeometryUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::NewProp_MeshGeometryUids = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshGeometry_Parms, MeshGeometryUids), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::NewProp_MeshGeometryUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all skinned mesh geometry unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all skinned mesh geometry unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllSkinnedMeshGeometry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshGeometry_Parms), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshInstance_Parms
		{
			TArray<FString> MeshInstanceUids;
			bool bConvertStaticMeshToSkeletalMesh;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshInstanceUids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertStaticMeshToSkeletalMesh_MetaData[];
#endif
		static void NewProp_bConvertStaticMeshToSkeletalMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertStaticMeshToSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_MeshInstanceUids_Inner = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_MeshInstanceUids = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshInstance_Parms, MeshInstanceUids), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_bConvertStaticMeshToSkeletalMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_bConvertStaticMeshToSkeletalMesh_SetBit(void* Obj)
	{
		((InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshInstance_Parms*)Obj)->bConvertStaticMeshToSkeletalMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_bConvertStaticMeshToSkeletalMesh = { "bConvertStaticMeshToSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshInstance_Parms), &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_bConvertStaticMeshToSkeletalMesh_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_bConvertStaticMeshToSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_bConvertStaticMeshToSkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_MeshInstanceUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_MeshInstanceUids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::NewProp_bConvertStaticMeshToSkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all skinned mesh instance unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all skinned mesh instance unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllSkinnedMeshInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::InterchangePipelineMeshesUtilities_eventGetAllSkinnedMeshInstance_Parms), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllStaticMeshGeometry_Parms
		{
			TArray<FString> MeshGeometryUids;
			bool bConvertSkeletalMeshToStaticMesh;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshGeometryUids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertSkeletalMeshToStaticMesh_MetaData[];
#endif
		static void NewProp_bConvertSkeletalMeshToStaticMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertSkeletalMeshToStaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_MeshGeometryUids = { "MeshGeometryUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllStaticMeshGeometry_Parms, MeshGeometryUids), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_SetBit(void* Obj)
	{
		((InterchangePipelineMeshesUtilities_eventGetAllStaticMeshGeometry_Parms*)Obj)->bConvertSkeletalMeshToStaticMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_bConvertSkeletalMeshToStaticMesh = { "bConvertSkeletalMeshToStaticMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePipelineMeshesUtilities_eventGetAllStaticMeshGeometry_Parms), &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_MeshGeometryUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_MeshGeometryUids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::NewProp_bConvertSkeletalMeshToStaticMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all static mesh geometry unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all static mesh geometry unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllStaticMeshGeometry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::InterchangePipelineMeshesUtilities_eventGetAllStaticMeshGeometry_Parms), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetAllStaticMeshInstance_Parms
		{
			TArray<FString> MeshInstanceUids;
			bool bConvertSkeletalMeshToStaticMesh;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshInstanceUids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertSkeletalMeshToStaticMesh_MetaData[];
#endif
		static void NewProp_bConvertSkeletalMeshToStaticMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertSkeletalMeshToStaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_MeshInstanceUids_Inner = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_MeshInstanceUids = { "MeshInstanceUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetAllStaticMeshInstance_Parms, MeshInstanceUids), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_SetBit(void* Obj)
	{
		((InterchangePipelineMeshesUtilities_eventGetAllStaticMeshInstance_Parms*)Obj)->bConvertSkeletalMeshToStaticMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_bConvertSkeletalMeshToStaticMesh = { "bConvertSkeletalMeshToStaticMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePipelineMeshesUtilities_eventGetAllStaticMeshInstance_Parms), &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_bConvertSkeletalMeshToStaticMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_MeshInstanceUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_MeshInstanceUids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::NewProp_bConvertSkeletalMeshToStaticMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get all static mesh instance unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get all static mesh instance unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetAllStaticMeshInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::InterchangePipelineMeshesUtilities_eventGetAllStaticMeshInstance_Parms), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetMeshGeometryByUid_Parms
		{
			FString MeshGeometryUid;
			FInterchangeMeshGeometry ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGeometryUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_MeshGeometryUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_MeshGeometryUid = { "MeshGeometryUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshGeometryByUid_Parms, MeshGeometryUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_MeshGeometryUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_MeshGeometryUid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshGeometryByUid_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeMeshGeometry, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_ReturnValue_MetaData)) }; // 958676536
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_MeshGeometryUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get the geometry mesh from the unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get the geometry mesh from the unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetMeshGeometryByUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshGeometryByUid_Parms), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetMeshGeometrySkeletonRootUid_Parms
		{
			FString MeshGeometryUid;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGeometryUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUid;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_MeshGeometryUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_MeshGeometryUid = { "MeshGeometryUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshGeometrySkeletonRootUid_Parms, MeshGeometryUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_MeshGeometryUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_MeshGeometryUid_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshGeometrySkeletonRootUid_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_MeshGeometryUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Return the skeleton root node Uid, this is the uid for a UInterchangeSceneNode that has a \"Joint\" specialized type.\n\x09* Return an empty string if the MeshGeometryUid parameter point on nothing.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Return the skeleton root node Uid, this is the uid for a UInterchangeSceneNode that has a \"Joint\" specialized type.\nReturn an empty string if the MeshGeometryUid parameter point on nothing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetMeshGeometrySkeletonRootUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshGeometrySkeletonRootUid_Parms), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetMeshInstanceByUid_Parms
		{
			FString MeshInstanceUid;
			FInterchangeMeshInstance ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshInstanceUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_MeshInstanceUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_MeshInstanceUid = { "MeshInstanceUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshInstanceByUid_Parms, MeshInstanceUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_MeshInstanceUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_MeshInstanceUid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshInstanceByUid_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeMeshInstance, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_ReturnValue_MetaData)) }; // 2336047686
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_MeshInstanceUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Get the instanced mesh from the unique ids.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Get the instanced mesh from the unique ids." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetMeshInstanceByUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshInstanceByUid_Parms), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventGetMeshInstanceSkeletonRootUid_Parms
		{
			FString MeshInstanceUid;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshInstanceUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUid;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_MeshInstanceUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_MeshInstanceUid = { "MeshInstanceUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshInstanceSkeletonRootUid_Parms, MeshInstanceUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_MeshInstanceUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_MeshInstanceUid_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventGetMeshInstanceSkeletonRootUid_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_MeshInstanceUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Return the skeleton root node Uid, this is the uid for a UInterchangeSceneNode that has a \"Joint\" specialized type.\n\x09* Return an empty string if the MeshInstanceUid parameter point on nothing.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Return the skeleton root node Uid, this is the uid for a UInterchangeSceneNode that has a \"Joint\" specialized type.\nReturn an empty string if the MeshInstanceUid parameter point on nothing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "GetMeshInstanceSkeletonRootUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::InterchangePipelineMeshesUtilities_eventGetMeshInstanceSkeletonRootUid_Parms), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms
		{
			FString MeshGeometryUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGeometryUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshGeometryUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_MeshGeometryUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_MeshGeometryUid = { "MeshGeometryUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms, MeshGeometryUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_MeshGeometryUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_MeshGeometryUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms), &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_MeshGeometryUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Return true if there is an existing FInterchangeMeshGeometry matching the MeshInstanceUid key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Return true if there is an existing FInterchangeMeshGeometry matching the MeshInstanceUid key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "IsValidMeshGeometryUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::InterchangePipelineMeshesUtilities_eventIsValidMeshGeometryUid_Parms), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics
	{
		struct InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms
		{
			FString MeshInstanceUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshInstanceUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshInstanceUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_MeshInstanceUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_MeshInstanceUid = { "MeshInstanceUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms, MeshInstanceUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_MeshInstanceUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_MeshInstanceUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms), &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_MeshInstanceUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Pipeline | Meshes" },
		{ "Comment", "/**\n\x09* Return true if there is an existing FInterchangeMeshInstance matching the MeshInstanceUid key.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
		{ "ToolTip", "Return true if there is an existing FInterchangeMeshInstance matching the MeshInstanceUid key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineMeshesUtilities, nullptr, "IsValidMeshInstanceUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::InterchangePipelineMeshesUtilities_eventIsValidMeshInstanceUid_Parms), Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePipelineMeshesUtilities);
	UClass* Z_Construct_UClass_UInterchangePipelineMeshesUtilities_NoRegister()
	{
		return UInterchangePipelineMeshesUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_CreateInterchangePipelineMeshesUtilities, "CreateInterchangePipelineMeshesUtilities" }, // 3107656472
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometry, "GetAllMeshGeometry" }, // 1595399429
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshGeometryNotInstanced, "GetAllMeshGeometryNotInstanced" }, // 2930830525
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUids, "GetAllMeshInstanceUids" }, // 2562353410
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllMeshInstanceUidsUsingMeshGeometryUid, "GetAllMeshInstanceUidsUsingMeshGeometryUid" }, // 589587683
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshGeometry, "GetAllSkinnedMeshGeometry" }, // 2565598507
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllSkinnedMeshInstance, "GetAllSkinnedMeshInstance" }, // 1879612990
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshGeometry, "GetAllStaticMeshGeometry" }, // 2780778375
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetAllStaticMeshInstance, "GetAllStaticMeshInstance" }, // 367824027
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometryByUid, "GetMeshGeometryByUid" }, // 3540700842
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshGeometrySkeletonRootUid, "GetMeshGeometrySkeletonRootUid" }, // 444534730
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceByUid, "GetMeshInstanceByUid" }, // 2797259923
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_GetMeshInstanceSkeletonRootUid, "GetMeshInstanceSkeletonRootUid" }, // 884077607
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshGeometryUid, "IsValidMeshGeometryUid" }, // 3595061604
		{ &Z_Construct_UFunction_UInterchangePipelineMeshesUtilities_IsValidMeshInstanceUid, "IsValidMeshInstanceUid" }, // 979071252
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangePipelineMeshesUtilities.h" },
		{ "ModuleRelativePath", "Public/InterchangePipelineMeshesUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePipelineMeshesUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::ClassParams = {
		&UInterchangePipelineMeshesUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangePipelineMeshesUtilities()
	{
		if (!Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.OuterSingleton, Z_Construct_UClass_UInterchangePipelineMeshesUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangePipelineMeshesUtilities>()
	{
		return UInterchangePipelineMeshesUtilities::StaticClass();
	}
	UInterchangePipelineMeshesUtilities::UInterchangePipelineMeshesUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePipelineMeshesUtilities);
	UInterchangePipelineMeshesUtilities::~UInterchangePipelineMeshesUtilities() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ScriptStructInfo[] = {
		{ FInterchangeLodSceneNodeContainer::StaticStruct, Z_Construct_UScriptStruct_FInterchangeLodSceneNodeContainer_Statics::NewStructOps, TEXT("InterchangeLodSceneNodeContainer"), &Z_Registration_Info_UScriptStruct_InterchangeLodSceneNodeContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeLodSceneNodeContainer), 2238116385U) },
		{ FInterchangeMeshInstance::StaticStruct, Z_Construct_UScriptStruct_FInterchangeMeshInstance_Statics::NewStructOps, TEXT("InterchangeMeshInstance"), &Z_Registration_Info_UScriptStruct_InterchangeMeshInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeMeshInstance), 2336047686U) },
		{ FInterchangeMeshGeometry::StaticStruct, Z_Construct_UScriptStruct_FInterchangeMeshGeometry_Statics::NewStructOps, TEXT("InterchangeMeshGeometry"), &Z_Registration_Info_UScriptStruct_InterchangeMeshGeometry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeMeshGeometry), 958676536U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePipelineMeshesUtilities, UInterchangePipelineMeshesUtilities::StaticClass, TEXT("UInterchangePipelineMeshesUtilities"), &Z_Registration_Info_UClass_UInterchangePipelineMeshesUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePipelineMeshesUtilities), 2292179260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_4082700022(TEXT("/Script/InterchangePipelines"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangePipelineMeshesUtilities_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
