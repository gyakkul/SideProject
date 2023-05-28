// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeGenericMeshPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGenericMeshPipeline() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
	INTERCHANGEFACTORYNODES_API UEnum* Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericMeshPipeline();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericMeshPipeline_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References
	void UInterchangeGenericMeshPipeline::StaticRegisterNativesUInterchangeGenericMeshPipeline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericMeshPipeline);
	UClass* Z_Construct_UClass_UInterchangeGenericMeshPipeline_NoRegister()
	{
		return UInterchangeGenericMeshPipeline::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonMeshesProperties_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CommonMeshesProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CommonSkeletalMeshesAndAnimationsProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportStaticMeshes_MetaData[];
#endif
		static void NewProp_bImportStaticMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportStaticMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCombineStaticMeshes_MetaData[];
#endif
		static void NewProp_bCombineStaticMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombineStaticMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportCollisionAccordingToMeshName_MetaData[];
#endif
		static void NewProp_bImportCollisionAccordingToMeshName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportCollisionAccordingToMeshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOneConvexHullPerUCX_MetaData[];
#endif
		static void NewProp_bOneConvexHullPerUCX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOneConvexHullPerUCX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildNanite_MetaData[];
#endif
		static void NewProp_bBuildNanite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildNanite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildReversedIndexBuffer_MetaData[];
#endif
		static void NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildReversedIndexBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateLightmapUVs_MetaData[];
#endif
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData[];
#endif
		static void NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateDistanceFieldAsIfTwoSided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportFaceRemap_MetaData[];
#endif
		static void NewProp_bSupportFaceRemap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportFaceRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLightmapResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinLightmapResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcLightmapIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SrcLightmapIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DstLightmapIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DstLightmapIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildScale3D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BuildScale3D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldResolutionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldResolutionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldReplacementMesh_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DistanceFieldReplacementMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLumenMeshCards_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLumenMeshCards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportSkeletalMeshes_MetaData[];
#endif
		static void NewProp_bImportSkeletalMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportSkeletalMeshes;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletalMeshImportContentType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshImportContentType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletalMeshImportContentType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LastSkeletalMeshImportContentType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSkeletalMeshImportContentType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LastSkeletalMeshImportContentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCombineSkeletalMeshes_MetaData[];
#endif
		static void NewProp_bCombineSkeletalMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombineSkeletalMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMorphTargets_MetaData[];
#endif
		static void NewProp_bImportMorphTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMorphTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateSkeletonReferencePose_MetaData[];
#endif
		static void NewProp_bUpdateSkeletonReferencePose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateSkeletonReferencePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreatePhysicsAsset_MetaData[];
#endif
		static void NewProp_bCreatePhysicsAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatePhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionSkinWeights_MetaData[];
#endif
		static void NewProp_bUseHighPrecisionSkinWeights_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionSkinWeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdTangentNormal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdTangentNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdUV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdUV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphThresholdPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphThresholdPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneInfluenceLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneInfluenceLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Hide drop down will make sure the class is not showing in the class picker */" },
		{ "IncludePath", "InterchangeGenericMeshPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "Hide drop down will make sure the class is not showing in the class picker" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_CommonMeshesProperties_MetaData[] = {
		{ "Comment", "//Common Meshes Properties Settings Pointer\n" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "Common Meshes Properties Settings Pointer" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_CommonMeshesProperties = { "CommonMeshesProperties", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, CommonMeshesProperties), Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_CommonMeshesProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_CommonMeshesProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData[] = {
		{ "Comment", "//Common SkeletalMeshes And Animations Properties Settings Pointer\n" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "Common SkeletalMeshes And Animations Properties Settings Pointer" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties = { "CommonSkeletalMeshesAndAnimationsProperties", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, CommonSkeletalMeshesAndAnimationsProperties), Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportStaticMeshes_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** If enabled, import the static mesh asset found in the sources. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If enabled, import the static mesh asset found in the sources." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportStaticMeshes_SetBit(void* Obj)
	{
		((UInterchangeGenericMeshPipeline*)Obj)->bImportStaticMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportStaticMeshes = { "bImportStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportStaticMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportStaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportStaticMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineStaticMeshes_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** If enabled, all translated static mesh nodes will be imported as a single static mesh. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If enabled, all translated static mesh nodes will be imported as a single static mesh." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineStaticMeshes_SetBit(void* Obj)
	{
		((UInterchangeGenericMeshPipeline*)Obj)->bCombineStaticMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineStaticMeshes = { "bCombineStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineStaticMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineStaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineStaticMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollisionAccordingToMeshName_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/**\n\x09 * If enabled, meshes with certain prefixes will be imported as collision primitives for the mesh with the corresponding unprefixed name.\n\x09 * \n\x09 * Supported prefixes are:\n\x09 * UBX_ Box collision\n\x09 * UCP_ Capsule collision\n\x09 * USP_ Sphere collision\n\x09 * UCX_ Convex collision\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If enabled, meshes with certain prefixes will be imported as collision primitives for the mesh with the corresponding unprefixed name.\n\nSupported prefixes are:\nUBX_ Box collision\nUCP_ Capsule collision\nUSP_ Sphere collision\nUCX_ Convex collision" },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollisionAccordingToMeshName_SetBit(void* Obj)
	{
		((UInterchangeGenericMeshPipeline*)Obj)->bImportCollisionAccordingToMeshName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollisionAccordingToMeshName = { "bImportCollisionAccordingToMeshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollisionAccordingToMeshName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollisionAccordingToMeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollisionAccordingToMeshName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bOneConvexHullPerUCX_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** If enabled, each UCX collision mesh will be imported as a single convex hull. If disabled, a UCX mesh will be decomposed into its separate pieces and a convex hull generated for each. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If enabled, each UCX collision mesh will be imported as a single convex hull. If disabled, a UCX mesh will be decomposed into its separate pieces and a convex hull generated for each." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bOneConvexHullPerUCX_SetBit(void* Obj)
	{
		((UInterchangeGenericMeshPipeline*)Obj)->bOneConvexHullPerUCX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bOneConvexHullPerUCX = { "bOneConvexHullPerUCX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bOneConvexHullPerUCX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bOneConvexHullPerUCX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bOneConvexHullPerUCX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildNanite_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** If enabled this option will allow you to use Nanite rendering at runtime. Can only be used with simple opaque materials. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If enabled this option will allow you to use Nanite rendering at runtime. Can only be used with simple opaque materials." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildNanite_SetBit(void* Obj)
	{
		((UInterchangeGenericMeshPipeline*)Obj)->bBuildNanite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildNanite = { "bBuildNanite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildNanite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildNanite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildNanite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildReversedIndexBuffer_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** If enabled this option will make sure the staticmesh build a reverse index buffer. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If enabled this option will make sure the staticmesh build a reverse index buffer." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildReversedIndexBuffer_SetBit(void* Obj)
	{
		((UInterchangeGenericMeshPipeline*)Obj)->bBuildReversedIndexBuffer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildReversedIndexBuffer = { "bBuildReversedIndexBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildReversedIndexBuffer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildReversedIndexBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildReversedIndexBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateLightmapUVs_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** If enabled this option will generate lightmap for this staticmesh. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If enabled this option will generate lightmap for this staticmesh." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((UInterchangeGenericMeshPipeline*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateLightmapUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateLightmapUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** \n\x09 * Whether to generate the distance field treating every triangle hit as a front face.  \n\x09 * When enabled prevents the distance field from being discarded due to the mesh being open, but also lowers Distance Field AO quality.\n\x09 */" },
		{ "DisplayName", "Two-Sided Distance Field Generation" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "Whether to generate the distance field treating every triangle hit as a front face.\nWhen enabled prevents the distance field from being discarded due to the mesh being open, but also lowers Distance Field AO quality." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit(void* Obj)
	{
		((UInterchangeGenericMeshPipeline*)Obj)->bGenerateDistanceFieldAsIfTwoSided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided = { "bGenerateDistanceFieldAsIfTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bSupportFaceRemap_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "DisplayName", "Enable Physical Material Mask" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bSupportFaceRemap_SetBit(void* Obj)
	{
		((UInterchangeGenericMeshPipeline*)Obj)->bSupportFaceRemap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bSupportFaceRemap = { "bSupportFaceRemap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bSupportFaceRemap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bSupportFaceRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bSupportFaceRemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MinLightmapResolution_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MinLightmapResolution = { "MinLightmapResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, MinLightmapResolution), METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MinLightmapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MinLightmapResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SrcLightmapIndex_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "DisplayName", "Source Lightmap Index" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SrcLightmapIndex = { "SrcLightmapIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, SrcLightmapIndex), METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SrcLightmapIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SrcLightmapIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DstLightmapIndex_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "DisplayName", "Destination Lightmap Index" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DstLightmapIndex = { "DstLightmapIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, DstLightmapIndex), METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DstLightmapIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DstLightmapIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_BuildScale3D_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** The local scale applied when building the mesh */" },
		{ "DisplayName", "Build Scale" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "The local scale applied when building the mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_BuildScale3D = { "BuildScale3D", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, BuildScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_BuildScale3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_BuildScale3D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DistanceFieldResolutionScale_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** \n\x09 * Scale to apply to the mesh when allocating the distance field volume texture.\n\x09 * The default scale is 1, which is assuming that the mesh will be placed unscaled in the world.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "Scale to apply to the mesh when allocating the distance field volume texture.\nThe default scale is 1, which is assuming that the mesh will be placed unscaled in the world." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DistanceFieldResolutionScale = { "DistanceFieldResolutionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, DistanceFieldResolutionScale), METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DistanceFieldResolutionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DistanceFieldResolutionScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DistanceFieldReplacementMesh_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DistanceFieldReplacementMesh = { "DistanceFieldReplacementMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, DistanceFieldReplacementMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DistanceFieldReplacementMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DistanceFieldReplacementMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MaxLumenMeshCards_MetaData[] = {
		{ "Category", "Static Meshes" },
		{ "Comment", "/** \n\x09 * Max Lumen mesh cards to generate for this mesh.\n\x09 * More cards means that surface will have better coverage, but will result in increased runtime overhead.\n\x09 * Set to 0 in order to disable mesh card generation for this mesh.\n\x09 * Default is 12.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "Max Lumen mesh cards to generate for this mesh.\nMore cards means that surface will have better coverage, but will result in increased runtime overhead.\nSet to 0 in order to disable mesh card generation for this mesh.\nDefault is 12." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MaxLumenMeshCards = { "MaxLumenMeshCards", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, MaxLumenMeshCards), METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MaxLumenMeshCards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MaxLumenMeshCards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportSkeletalMeshes_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** If enable, import the animation asset find in the sources. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If enable, import the animation asset find in the sources." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportSkeletalMeshes_SetBit(void* Obj)
	{
		((UInterchangeGenericMeshPipeline*)Obj)->bImportSkeletalMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportSkeletalMeshes = { "bImportSkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportSkeletalMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportSkeletalMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportSkeletalMeshes_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SkeletalMeshImportContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SkeletalMeshImportContentType_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** Re-import partially or totally a skeletal mesh. You can choose betwwen geometry, skinning or everything.*/" },
		{ "DisplayName", "Import Content Type" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "Re-import partially or totally a skeletal mesh. You can choose betwwen geometry, skinning or everything." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SkeletalMeshImportContentType = { "SkeletalMeshImportContentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, SkeletalMeshImportContentType), Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SkeletalMeshImportContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SkeletalMeshImportContentType_MetaData)) }; // 3928654180
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LastSkeletalMeshImportContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LastSkeletalMeshImportContentType_MetaData[] = {
		{ "Comment", "/** The value of the content type during the last import. This cannot be edited and is set only on successful import or re-import*/" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "The value of the content type during the last import. This cannot be edited and is set only on successful import or re-import" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LastSkeletalMeshImportContentType = { "LastSkeletalMeshImportContentType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, LastSkeletalMeshImportContentType), Z_Construct_UEnum_InterchangeFactoryNodes_EInterchangeSkeletalMeshContentType, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LastSkeletalMeshImportContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LastSkeletalMeshImportContentType_MetaData)) }; // 3928654180
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineSkeletalMeshes_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** If enable all translated skinned mesh node will be imported has a one skeletal mesh, note that it can still create several skeletal mesh for each different skeleton root joint. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If enable all translated skinned mesh node will be imported has a one skeletal mesh, note that it can still create several skeletal mesh for each different skeleton root joint." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineSkeletalMeshes_SetBit(void* Obj)
	{
		((UInterchangeGenericMeshPipeline*)Obj)->bCombineSkeletalMeshes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineSkeletalMeshes = { "bCombineSkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineSkeletalMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineSkeletalMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineSkeletalMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportMorphTargets_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** If enable any morph target shape will be imported. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If enable any morph target shape will be imported." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportMorphTargets_SetBit(void* Obj)
	{
		((UInterchangeGenericMeshPipeline*)Obj)->bImportMorphTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportMorphTargets = { "bImportMorphTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportMorphTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUpdateSkeletonReferencePose_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** Enable this option to update Skeleton (of the mesh)'s reference pose. Mesh's reference pose is always updated.  */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "Enable this option to update Skeleton (of the mesh)'s reference pose. Mesh's reference pose is always updated." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUpdateSkeletonReferencePose_SetBit(void* Obj)
	{
		((UInterchangeGenericMeshPipeline*)Obj)->bUpdateSkeletonReferencePose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUpdateSkeletonReferencePose = { "bUpdateSkeletonReferencePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUpdateSkeletonReferencePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUpdateSkeletonReferencePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUpdateSkeletonReferencePose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCreatePhysicsAsset_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** If checked, create new PhysicsAsset if it doesn't have it */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If checked, create new PhysicsAsset if it doesn't have it" },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCreatePhysicsAsset_SetBit(void* Obj)
	{
		((UInterchangeGenericMeshPipeline*)Obj)->bCreatePhysicsAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCreatePhysicsAsset = { "bCreatePhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCreatePhysicsAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCreatePhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCreatePhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** If this is set, use this specified PhysicsAsset. If its not set and bCreatePhysicsAsset is false, the importer will not generate or set any physic asset. */" },
		{ "editcondition", "!bCreatePhysicsAsset" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "ToolTip", "If this is set, use this specified PhysicsAsset. If its not set and bCreatePhysicsAsset is false, the importer will not generate or set any physic asset." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_PhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_PhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUseHighPrecisionSkinWeights_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** If Checked, use 16 bits for skin weights instead of 8 bits. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "If Checked, use 16 bits for skin weights instead of 8 bits." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUseHighPrecisionSkinWeights_SetBit(void* Obj)
	{
		((UInterchangeGenericMeshPipeline*)Obj)->bUseHighPrecisionSkinWeights = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUseHighPrecisionSkinWeights = { "bUseHighPrecisionSkinWeights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericMeshPipeline), &Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUseHighPrecisionSkinWeights_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUseHighPrecisionSkinWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUseHighPrecisionSkinWeights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdPosition_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** Threshold use to decide if two vertex position are equal. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "Threshold use to decide if two vertex position are equal." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdPosition = { "ThresholdPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, ThresholdPosition), METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdTangentNormal_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** Threshold use to decide if two normal, tangents or bi-normals are equal. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "Threshold use to decide if two normal, tangents or bi-normals are equal." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdTangentNormal = { "ThresholdTangentNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, ThresholdTangentNormal), METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdTangentNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdTangentNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdUV_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** Threshold use to decide if two UVs are equal. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "Threshold use to decide if two UVs are equal." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdUV = { "ThresholdUV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, ThresholdUV), METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdUV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MorphThresholdPosition_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/** Threshold to compare vertex position equality when computing morph target deltas. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "Threshold to compare vertex position equality when computing morph target deltas." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MorphThresholdPosition = { "MorphThresholdPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, MorphThresholdPosition), METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MorphThresholdPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MorphThresholdPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_BoneInfluenceLimit_MetaData[] = {
		{ "Category", "Skeletal Meshes" },
		{ "Comment", "/**\n\x09 * The maximum number of bone influences to allow each vertex in this mesh to use.\n\x09 * If set higher than the limit determined by the project settings, it has no effect.\n\x09 * If set to 0, the value is taken from the DefaultBoneInfluenceLimit project setting.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericMeshPipeline.h" },
		{ "SubCategory", "Build" },
		{ "ToolTip", "The maximum number of bone influences to allow each vertex in this mesh to use.\nIf set higher than the limit determined by the project settings, it has no effect.\nIf set to 0, the value is taken from the DefaultBoneInfluenceLimit project setting." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_BoneInfluenceLimit = { "BoneInfluenceLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericMeshPipeline, BoneInfluenceLimit), METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_BoneInfluenceLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_BoneInfluenceLimit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_CommonMeshesProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportStaticMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineStaticMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportCollisionAccordingToMeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bOneConvexHullPerUCX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildNanite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bBuildReversedIndexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bGenerateDistanceFieldAsIfTwoSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bSupportFaceRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MinLightmapResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SrcLightmapIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DstLightmapIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_BuildScale3D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DistanceFieldResolutionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_DistanceFieldReplacementMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MaxLumenMeshCards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportSkeletalMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SkeletalMeshImportContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_SkeletalMeshImportContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LastSkeletalMeshImportContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_LastSkeletalMeshImportContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCombineSkeletalMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bImportMorphTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUpdateSkeletonReferencePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bCreatePhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_PhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_bUseHighPrecisionSkinWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdTangentNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_ThresholdUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_MorphThresholdPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::NewProp_BoneInfluenceLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericMeshPipeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::ClassParams = {
		&UInterchangeGenericMeshPipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::PropPointers),
		0,
		0x041010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeGenericMeshPipeline()
	{
		if (!Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeGenericMeshPipeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericMeshPipeline>()
	{
		return UInterchangeGenericMeshPipeline::StaticClass();
	}
	UInterchangeGenericMeshPipeline::UInterchangeGenericMeshPipeline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericMeshPipeline);
	UInterchangeGenericMeshPipeline::~UInterchangeGenericMeshPipeline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGenericMeshPipeline, UInterchangeGenericMeshPipeline::StaticClass, TEXT("UInterchangeGenericMeshPipeline"), &Z_Registration_Info_UClass_UInterchangeGenericMeshPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericMeshPipeline), 3408126505U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_2399734762(TEXT("/Script/InterchangePipelines"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericMeshPipeline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
