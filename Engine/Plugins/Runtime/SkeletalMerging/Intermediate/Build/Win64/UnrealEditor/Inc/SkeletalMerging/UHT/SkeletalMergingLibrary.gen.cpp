// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkeletalMergingLibrary.h"
#include "../../Source/Runtime/Engine/Public/SkeletalMeshMerge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMergingLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping();
	SKELETALMERGING_API UClass* Z_Construct_UClass_USkeletalMergingLibrary();
	SKELETALMERGING_API UClass* Z_Construct_UClass_USkeletalMergingLibrary_NoRegister();
	SKELETALMERGING_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshMergeParams();
	SKELETALMERGING_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletonMergeParams();
	UPackage* Z_Construct_UPackage__Script_SkeletalMerging();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshMergeParams;
class UScriptStruct* FSkeletalMeshMergeParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshMergeParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshMergeParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams, (UObject*)Z_Construct_UPackage__Script_SkeletalMerging(), TEXT("SkeletalMeshMergeParams"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshMergeParams.OuterSingleton;
}
template<> SKELETALMERGING_API UScriptStruct* StaticStruct<FSkeletalMeshMergeParams>()
{
	return FSkeletalMeshMergeParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshSectionMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSectionMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshSectionMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVTransformsPerMesh_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVTransformsPerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVTransformsPerMesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshesToMerge_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshesToMerge_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshesToMerge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StripTopLODS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StripTopLODS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsCpuAccess_MetaData[];
#endif
		static void NewProp_bNeedsCpuAccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsCpuAccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkeletonBefore_MetaData[];
#endif
		static void NewProp_bSkeletonBefore_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkeletonBefore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Struct containing all parameters used to perform a Skeletal Mesh merge.\n*/" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "Struct containing all parameters used to perform a Skeletal Mesh merge." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshMergeParams>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings_Inner = { "MeshSectionMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping, METADATA_PARAMS(nullptr, 0) }; // 3059674993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings_MetaData[] = {
		{ "Category", "SkeletalMeshMerge" },
		{ "Comment", "// An optional array to map sections from the source meshes to merged section entries\n" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "An optional array to map sections from the source meshes to merged section entries" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings = { "MeshSectionMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshMergeParams, MeshSectionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings_MetaData)) }; // 3059674993
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh_Inner = { "UVTransformsPerMesh", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkelMeshMergeMeshUVTransforms, METADATA_PARAMS(nullptr, 0) }; // 1369651161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh_MetaData[] = {
		{ "Category", "SkeletalMeshMerge" },
		{ "Comment", "// An optional array to transform the UVs in each mesh\n" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "An optional array to transform the UVs in each mesh" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh = { "UVTransformsPerMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshMergeParams, UVTransformsPerMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh_MetaData)) }; // 1369651161
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge_Inner = { "MeshesToMerge", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge_MetaData[] = {
		{ "Category", "SkeletalMeshMerge" },
		{ "Comment", "// The list of skeletal meshes to merge.\n" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "The list of skeletal meshes to merge." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge = { "MeshesToMerge", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshMergeParams, MeshesToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_StripTopLODS_MetaData[] = {
		{ "Category", "SkeletalMeshMerge" },
		{ "Comment", "// The number of high LODs to remove from input meshes\n" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "The number of high LODs to remove from input meshes" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_StripTopLODS = { "StripTopLODS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshMergeParams, StripTopLODS), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_StripTopLODS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_StripTopLODS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_MetaData[] = {
		{ "Category", "SkeletalMeshMerge" },
		{ "Comment", "// Whether or not the resulting mesh needs to be accessed by the CPU for any reason (e.g. for spawning particle effects).\n" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "Whether or not the resulting mesh needs to be accessed by the CPU for any reason (e.g. for spawning particle effects)." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_SetBit(void* Obj)
	{
		((FSkeletalMeshMergeParams*)Obj)->bNeedsCpuAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess = { "bNeedsCpuAccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSkeletalMeshMergeParams), &Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_MetaData[] = {
		{ "Category", "SkeletalMeshMerge" },
		{ "Comment", "// Update skeleton before merge. Otherwise, update after.\n// Skeleton must also be provided.\n" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "Update skeleton before merge. Otherwise, update after.\nSkeleton must also be provided." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_SetBit(void* Obj)
	{
		((FSkeletalMeshMergeParams*)Obj)->bSkeletonBefore = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore = { "bSkeletonBefore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSkeletalMeshMergeParams), &Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "SkeletalMeshMerge" },
		{ "Comment", "// Skeleton that will be used for the merged mesh.\n// Leave empty if the generated skeleton is OK.\n" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "Skeleton that will be used for the merged mesh.\nLeave empty if the generated skeleton is OK." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshMergeParams, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_Skeleton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshSectionMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_UVTransformsPerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_MeshesToMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_StripTopLODS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bNeedsCpuAccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_bSkeletonBefore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewProp_Skeleton,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMerging,
		nullptr,
		&NewStructOps,
		"SkeletalMeshMergeParams",
		sizeof(FSkeletalMeshMergeParams),
		alignof(FSkeletalMeshMergeParams),
		Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshMergeParams()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshMergeParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshMergeParams.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshMergeParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletonMergeParams;
class UScriptStruct* FSkeletonMergeParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletonMergeParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletonMergeParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonMergeParams, (UObject*)Z_Construct_UPackage__Script_SkeletalMerging(), TEXT("SkeletonMergeParams"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletonMergeParams.OuterSingleton;
}
template<> SKELETALMERGING_API UScriptStruct* StaticStruct<FSkeletonMergeParams>()
{
	return FSkeletonMergeParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletonsToMerge_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonsToMerge_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletonsToMerge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeSockets_MetaData[];
#endif
		static void NewProp_bMergeSockets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeSockets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeVirtualBones_MetaData[];
#endif
		static void NewProp_bMergeVirtualBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeVirtualBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeCurveNames_MetaData[];
#endif
		static void NewProp_bMergeCurveNames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeCurveNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeBlendProfiles_MetaData[];
#endif
		static void NewProp_bMergeBlendProfiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeBlendProfiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeAnimSlotGroups_MetaData[];
#endif
		static void NewProp_bMergeAnimSlotGroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeAnimSlotGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckSkeletonsCompatibility_MetaData[];
#endif
		static void NewProp_bCheckSkeletonsCompatibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckSkeletonsCompatibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Struct containing all parameters used to perform a Skeleton merge.\n*/" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "Struct containing all parameters used to perform a Skeleton merge." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletonMergeParams>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_SkeletonsToMerge_Inner = { "SkeletonsToMerge", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_SkeletonsToMerge_MetaData[] = {
		{ "Category", "SkeletonMerge" },
		{ "Comment", "// The list of skeletons to merge.\n" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "The list of skeletons to merge." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_SkeletonsToMerge = { "SkeletonsToMerge", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletonMergeParams, SkeletonsToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_SkeletonsToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_SkeletonsToMerge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeSockets_MetaData[] = {
		{ "Category", "SkeletonMerge" },
		{ "Comment", "// Whether or not to include Sockets when merging the Skeletons\n" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "Whether or not to include Sockets when merging the Skeletons" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeSockets_SetBit(void* Obj)
	{
		((FSkeletonMergeParams*)Obj)->bMergeSockets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeSockets = { "bMergeSockets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSkeletonMergeParams), &Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeSockets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeSockets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeVirtualBones_MetaData[] = {
		{ "Category", "SkeletonMerge" },
		{ "Comment", "// Whether or not to include Virtual Bones when merging the Skeletons\n" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "Whether or not to include Virtual Bones when merging the Skeletons" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeVirtualBones_SetBit(void* Obj)
	{
		((FSkeletonMergeParams*)Obj)->bMergeVirtualBones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeVirtualBones = { "bMergeVirtualBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSkeletonMergeParams), &Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeVirtualBones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeVirtualBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeVirtualBones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeCurveNames_MetaData[] = {
		{ "Category", "SkeletonMerge" },
		{ "Comment", "// Whether or not to include (Animation) Curve names when merging the Skeletons\n" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "Whether or not to include (Animation) Curve names when merging the Skeletons" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeCurveNames_SetBit(void* Obj)
	{
		((FSkeletonMergeParams*)Obj)->bMergeCurveNames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeCurveNames = { "bMergeCurveNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSkeletonMergeParams), &Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeCurveNames_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeCurveNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeCurveNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeBlendProfiles_MetaData[] = {
		{ "Category", "SkeletonMerge" },
		{ "Comment", "// Whether or not to include Blend Profiles when merging the Skeletons\n" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "Whether or not to include Blend Profiles when merging the Skeletons" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeBlendProfiles_SetBit(void* Obj)
	{
		((FSkeletonMergeParams*)Obj)->bMergeBlendProfiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeBlendProfiles = { "bMergeBlendProfiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSkeletonMergeParams), &Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeBlendProfiles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeBlendProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeBlendProfiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeAnimSlotGroups_MetaData[] = {
		{ "Category", "SkeletonMerge" },
		{ "Comment", "// Whether or not to include Animation Slot Group (names) when merging the Skeletons\n" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "Whether or not to include Animation Slot Group (names) when merging the Skeletons" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeAnimSlotGroups_SetBit(void* Obj)
	{
		((FSkeletonMergeParams*)Obj)->bMergeAnimSlotGroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeAnimSlotGroups = { "bMergeAnimSlotGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSkeletonMergeParams), &Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeAnimSlotGroups_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeAnimSlotGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeAnimSlotGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bCheckSkeletonsCompatibility_MetaData[] = {
		{ "Category", "SkeletonMerge" },
		{ "Comment", "// Whether or not to check if there are invalid parent chains or shared bones with different reference transforms\n" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "Whether or not to check if there are invalid parent chains or shared bones with different reference transforms" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bCheckSkeletonsCompatibility_SetBit(void* Obj)
	{
		((FSkeletonMergeParams*)Obj)->bCheckSkeletonsCompatibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bCheckSkeletonsCompatibility = { "bCheckSkeletonsCompatibility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSkeletonMergeParams), &Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bCheckSkeletonsCompatibility_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bCheckSkeletonsCompatibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bCheckSkeletonsCompatibility_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_SkeletonsToMerge_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_SkeletonsToMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeSockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeVirtualBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeCurveNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeBlendProfiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bMergeAnimSlotGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewProp_bCheckSkeletonsCompatibility,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMerging,
		nullptr,
		&NewStructOps,
		"SkeletonMergeParams",
		sizeof(FSkeletonMergeParams),
		alignof(FSkeletonMergeParams),
		Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletonMergeParams()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletonMergeParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletonMergeParams.InnerSingleton, Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletonMergeParams.InnerSingleton;
	}
	DEFINE_FUNCTION(USkeletalMergingLibrary::execMergeSkeletons)
	{
		P_GET_STRUCT_REF(FSkeletonMergeParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeleton**)Z_Param__Result=USkeletalMergingLibrary::MergeSkeletons(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMergingLibrary::execMergeMeshes)
	{
		P_GET_STRUCT_REF(FSkeletalMeshMergeParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=USkeletalMergingLibrary::MergeMeshes(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	void USkeletalMergingLibrary::StaticRegisterNativesUSkeletalMergingLibrary()
	{
		UClass* Class = USkeletalMergingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MergeMeshes", &USkeletalMergingLibrary::execMergeMeshes },
			{ "MergeSkeletons", &USkeletalMergingLibrary::execMergeSkeletons },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics
	{
		struct SkeletalMergingLibrary_eventMergeMeshes_Parms
		{
			FSkeletalMeshMergeParams Params;
			USkeletalMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMergingLibrary_eventMergeMeshes_Parms, Params), Z_Construct_UScriptStruct_FSkeletalMeshMergeParams, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::NewProp_Params_MetaData)) }; // 849953815
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMergingLibrary_eventMergeMeshes_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh Merge" },
		{ "Comment", "/**\n\x09* Merges the given meshes into a single mesh.\n\x09* @return The merged mesh (will be invalid if the merge failed).\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "Merges the given meshes into a single mesh.\n@return The merged mesh (will be invalid if the merge failed)." },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMergingLibrary, nullptr, "MergeMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::SkeletalMergingLibrary_eventMergeMeshes_Parms), Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics
	{
		struct SkeletalMergingLibrary_eventMergeSkeletons_Parms
		{
			FSkeletonMergeParams Params;
			USkeleton* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMergingLibrary_eventMergeSkeletons_Parms, Params), Z_Construct_UScriptStruct_FSkeletonMergeParams, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::NewProp_Params_MetaData)) }; // 1381368947
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMergingLibrary_eventMergeSkeletons_Parms, ReturnValue), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::Function_MetaDataParams[] = {
		{ "Category", "Skeleton Merge" },
		{ "Comment", "/**\n\x09* Merges the skeletons for the provided meshes into a single skeleton.\n\x09* @return The merged Skeleton\n\x09*/" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "Merges the skeletons for the provided meshes into a single skeleton.\n@return The merged Skeleton" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMergingLibrary, nullptr, "MergeSkeletons", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::SkeletalMergingLibrary_eventMergeSkeletons_Parms), Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMergingLibrary);
	UClass* Z_Construct_UClass_USkeletalMergingLibrary_NoRegister()
	{
		return USkeletalMergingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMergingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMergingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMerging,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkeletalMergingLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkeletalMergingLibrary_MergeMeshes, "MergeMeshes" }, // 3148741832
		{ &Z_Construct_UFunction_USkeletalMergingLibrary_MergeSkeletons, "MergeSkeletons" }, // 4252617285
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMergingLibrary_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n* Component that can be used to perform Skeletal Mesh merges from Blueprints.\n*/" },
		{ "IncludePath", "SkeletalMergingLibrary.h" },
		{ "ModuleRelativePath", "Public/SkeletalMergingLibrary.h" },
		{ "ToolTip", "Component that can be used to perform Skeletal Mesh merges from Blueprints." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMergingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMergingLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMergingLibrary_Statics::ClassParams = {
		&USkeletalMergingLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMergingLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMergingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMergingLibrary()
	{
		if (!Z_Registration_Info_UClass_USkeletalMergingLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMergingLibrary.OuterSingleton, Z_Construct_UClass_USkeletalMergingLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMergingLibrary.OuterSingleton;
	}
	template<> SKELETALMERGING_API UClass* StaticClass<USkeletalMergingLibrary>()
	{
		return USkeletalMergingLibrary::StaticClass();
	}
	USkeletalMergingLibrary::USkeletalMergingLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMergingLibrary);
	USkeletalMergingLibrary::~USkeletalMergingLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_Statics::ScriptStructInfo[] = {
		{ FSkeletalMeshMergeParams::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshMergeParams_Statics::NewStructOps, TEXT("SkeletalMeshMergeParams"), &Z_Registration_Info_UScriptStruct_SkeletalMeshMergeParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshMergeParams), 849953815U) },
		{ FSkeletonMergeParams::StaticStruct, Z_Construct_UScriptStruct_FSkeletonMergeParams_Statics::NewStructOps, TEXT("SkeletonMergeParams"), &Z_Registration_Info_UScriptStruct_SkeletonMergeParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletonMergeParams), 1381368947U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMergingLibrary, USkeletalMergingLibrary::StaticClass, TEXT("USkeletalMergingLibrary"), &Z_Registration_Info_UClass_USkeletalMergingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMergingLibrary), 3494240359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_2580903673(TEXT("/Script/SkeletalMerging"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SkeletalMerging_Source_SkeletalMerging_Public_SkeletalMergingLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
