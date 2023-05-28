// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "../../Source/Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SkinnedAssetCommon.h"
#include "../../Source/Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "../../Source/Runtime/Engine/Public/PerPlatformProperties.h"
#include "../../Source/Runtime/Engine/Public/PerQualityLevelProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMesh() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMorphTarget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshEditorData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedAsset();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EClothLODBiasMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPerQualityLevels();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorExport();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClothingAssetData_Legacy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewAssetAttachContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMaterial();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkinWeightProfileInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties;
	static UEnum* ESkeletalMeshAsyncProperties_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESkeletalMeshAsyncProperties"));
		}
		return Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESkeletalMeshAsyncProperties>()
	{
		return ESkeletalMeshAsyncProperties_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics::Enumerators[] = {
		{ "ESkeletalMeshAsyncProperties::None", (int64)ESkeletalMeshAsyncProperties::None },
		{ "ESkeletalMeshAsyncProperties::Materials", (int64)ESkeletalMeshAsyncProperties::Materials },
		{ "ESkeletalMeshAsyncProperties::Skeleton", (int64)ESkeletalMeshAsyncProperties::Skeleton },
		{ "ESkeletalMeshAsyncProperties::RefSkeleton", (int64)ESkeletalMeshAsyncProperties::RefSkeleton },
		{ "ESkeletalMeshAsyncProperties::RetargetBasePose", (int64)ESkeletalMeshAsyncProperties::RetargetBasePose },
		{ "ESkeletalMeshAsyncProperties::RefBasesInvMatrix", (int64)ESkeletalMeshAsyncProperties::RefBasesInvMatrix },
		{ "ESkeletalMeshAsyncProperties::MeshClothingAssets", (int64)ESkeletalMeshAsyncProperties::MeshClothingAssets },
		{ "ESkeletalMeshAsyncProperties::UseLegacyMeshDerivedDataKey", (int64)ESkeletalMeshAsyncProperties::UseLegacyMeshDerivedDataKey },
		{ "ESkeletalMeshAsyncProperties::HasActiveClothingAssets", (int64)ESkeletalMeshAsyncProperties::HasActiveClothingAssets },
		{ "ESkeletalMeshAsyncProperties::LODSettings", (int64)ESkeletalMeshAsyncProperties::LODSettings },
		{ "ESkeletalMeshAsyncProperties::HasVertexColors", (int64)ESkeletalMeshAsyncProperties::HasVertexColors },
		{ "ESkeletalMeshAsyncProperties::VertexColorGuid", (int64)ESkeletalMeshAsyncProperties::VertexColorGuid },
		{ "ESkeletalMeshAsyncProperties::MorphTargets", (int64)ESkeletalMeshAsyncProperties::MorphTargets },
		{ "ESkeletalMeshAsyncProperties::SkeletalMeshRenderData", (int64)ESkeletalMeshAsyncProperties::SkeletalMeshRenderData },
		{ "ESkeletalMeshAsyncProperties::MeshEditorDataObject", (int64)ESkeletalMeshAsyncProperties::MeshEditorDataObject },
		{ "ESkeletalMeshAsyncProperties::NeverStream", (int64)ESkeletalMeshAsyncProperties::NeverStream },
		{ "ESkeletalMeshAsyncProperties::OverrideLODStreamingSettings", (int64)ESkeletalMeshAsyncProperties::OverrideLODStreamingSettings },
		{ "ESkeletalMeshAsyncProperties::SupportLODStreaming", (int64)ESkeletalMeshAsyncProperties::SupportLODStreaming },
		{ "ESkeletalMeshAsyncProperties::MaxNumStreamedLODs", (int64)ESkeletalMeshAsyncProperties::MaxNumStreamedLODs },
		{ "ESkeletalMeshAsyncProperties::MaxNumOptionalLODs", (int64)ESkeletalMeshAsyncProperties::MaxNumOptionalLODs },
		{ "ESkeletalMeshAsyncProperties::ImportedModel", (int64)ESkeletalMeshAsyncProperties::ImportedModel },
		{ "ESkeletalMeshAsyncProperties::LODInfo", (int64)ESkeletalMeshAsyncProperties::LODInfo },
		{ "ESkeletalMeshAsyncProperties::SkinWeightProfiles", (int64)ESkeletalMeshAsyncProperties::SkinWeightProfiles },
		{ "ESkeletalMeshAsyncProperties::CachedComposedRefPoseMatrices", (int64)ESkeletalMeshAsyncProperties::CachedComposedRefPoseMatrices },
		{ "ESkeletalMeshAsyncProperties::SamplingInfo", (int64)ESkeletalMeshAsyncProperties::SamplingInfo },
		{ "ESkeletalMeshAsyncProperties::NodeMappingData", (int64)ESkeletalMeshAsyncProperties::NodeMappingData },
		{ "ESkeletalMeshAsyncProperties::ShadowPhysicsAsset", (int64)ESkeletalMeshAsyncProperties::ShadowPhysicsAsset },
		{ "ESkeletalMeshAsyncProperties::SkelMirrorTable", (int64)ESkeletalMeshAsyncProperties::SkelMirrorTable },
		{ "ESkeletalMeshAsyncProperties::MinLod", (int64)ESkeletalMeshAsyncProperties::MinLod },
		{ "ESkeletalMeshAsyncProperties::DisableBelowMinLodStripping", (int64)ESkeletalMeshAsyncProperties::DisableBelowMinLodStripping },
		{ "ESkeletalMeshAsyncProperties::SkelMirrorAxis", (int64)ESkeletalMeshAsyncProperties::SkelMirrorAxis },
		{ "ESkeletalMeshAsyncProperties::SkelMirrorFlipAxis", (int64)ESkeletalMeshAsyncProperties::SkelMirrorFlipAxis },
		{ "ESkeletalMeshAsyncProperties::DefaultAnimationRig", (int64)ESkeletalMeshAsyncProperties::DefaultAnimationRig },
		{ "ESkeletalMeshAsyncProperties::NegativeBoundsExtension", (int64)ESkeletalMeshAsyncProperties::NegativeBoundsExtension },
		{ "ESkeletalMeshAsyncProperties::PositiveBoundsExtension", (int64)ESkeletalMeshAsyncProperties::PositiveBoundsExtension },
		{ "ESkeletalMeshAsyncProperties::ExtendedBounds", (int64)ESkeletalMeshAsyncProperties::ExtendedBounds },
		{ "ESkeletalMeshAsyncProperties::HasBeenSimplified", (int64)ESkeletalMeshAsyncProperties::HasBeenSimplified },
		{ "ESkeletalMeshAsyncProperties::EnablePerPolyCollision", (int64)ESkeletalMeshAsyncProperties::EnablePerPolyCollision },
		{ "ESkeletalMeshAsyncProperties::BodySetup", (int64)ESkeletalMeshAsyncProperties::BodySetup },
		{ "ESkeletalMeshAsyncProperties::MorphTargetIndexMap", (int64)ESkeletalMeshAsyncProperties::MorphTargetIndexMap },
		{ "ESkeletalMeshAsyncProperties::FloorOffset", (int64)ESkeletalMeshAsyncProperties::FloorOffset },
		{ "ESkeletalMeshAsyncProperties::ImportedBounds", (int64)ESkeletalMeshAsyncProperties::ImportedBounds },
		{ "ESkeletalMeshAsyncProperties::PhysicsAsset", (int64)ESkeletalMeshAsyncProperties::PhysicsAsset },
		{ "ESkeletalMeshAsyncProperties::AssetImportData", (int64)ESkeletalMeshAsyncProperties::AssetImportData },
		{ "ESkeletalMeshAsyncProperties::ThumbnailInfo", (int64)ESkeletalMeshAsyncProperties::ThumbnailInfo },
		{ "ESkeletalMeshAsyncProperties::HasCustomDefaultEditorCamera", (int64)ESkeletalMeshAsyncProperties::HasCustomDefaultEditorCamera },
		{ "ESkeletalMeshAsyncProperties::DefaultEditorCameraLocation", (int64)ESkeletalMeshAsyncProperties::DefaultEditorCameraLocation },
		{ "ESkeletalMeshAsyncProperties::DefaultEditorCameraRotation", (int64)ESkeletalMeshAsyncProperties::DefaultEditorCameraRotation },
		{ "ESkeletalMeshAsyncProperties::RequiresLODScreenSizeConversion", (int64)ESkeletalMeshAsyncProperties::RequiresLODScreenSizeConversion },
		{ "ESkeletalMeshAsyncProperties::PostProcessAnimBlueprint", (int64)ESkeletalMeshAsyncProperties::PostProcessAnimBlueprint },
		{ "ESkeletalMeshAsyncProperties::DefaultEditorCameraLookAt", (int64)ESkeletalMeshAsyncProperties::DefaultEditorCameraLookAt },
		{ "ESkeletalMeshAsyncProperties::PreviewAttachedAssetContainer", (int64)ESkeletalMeshAsyncProperties::PreviewAttachedAssetContainer },
		{ "ESkeletalMeshAsyncProperties::DefaultEditorCameraOrthoZoom", (int64)ESkeletalMeshAsyncProperties::DefaultEditorCameraOrthoZoom },
		{ "ESkeletalMeshAsyncProperties::RequiresLODHysteresisConversion", (int64)ESkeletalMeshAsyncProperties::RequiresLODHysteresisConversion },
		{ "ESkeletalMeshAsyncProperties::bSupportRayTracing", (int64)ESkeletalMeshAsyncProperties::bSupportRayTracing },
		{ "ESkeletalMeshAsyncProperties::RayTracingMinLOD", (int64)ESkeletalMeshAsyncProperties::RayTracingMinLOD },
		{ "ESkeletalMeshAsyncProperties::ClothLODBiasMode", (int64)ESkeletalMeshAsyncProperties::ClothLODBiasMode },
		{ "ESkeletalMeshAsyncProperties::DefaultMeshDeformer", (int64)ESkeletalMeshAsyncProperties::DefaultMeshDeformer },
		{ "ESkeletalMeshAsyncProperties::All", (int64)ESkeletalMeshAsyncProperties::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "ESkeletalMeshAsyncProperties::All" },
		{ "AssetImportData.Name", "ESkeletalMeshAsyncProperties::AssetImportData" },
		{ "BodySetup.Name", "ESkeletalMeshAsyncProperties::BodySetup" },
		{ "bSupportRayTracing.Name", "ESkeletalMeshAsyncProperties::bSupportRayTracing" },
		{ "CachedComposedRefPoseMatrices.Name", "ESkeletalMeshAsyncProperties::CachedComposedRefPoseMatrices" },
		{ "ClothLODBiasMode.Name", "ESkeletalMeshAsyncProperties::ClothLODBiasMode" },
		{ "Comment", "/*-----------------------------------------------------------------------------\n\x09""Async Skeletal Mesh Compilation\n-----------------------------------------------------------------------------*/" },
		{ "DefaultAnimationRig.Name", "ESkeletalMeshAsyncProperties::DefaultAnimationRig" },
		{ "DefaultEditorCameraLocation.Name", "ESkeletalMeshAsyncProperties::DefaultEditorCameraLocation" },
		{ "DefaultEditorCameraLookAt.Name", "ESkeletalMeshAsyncProperties::DefaultEditorCameraLookAt" },
		{ "DefaultEditorCameraOrthoZoom.Name", "ESkeletalMeshAsyncProperties::DefaultEditorCameraOrthoZoom" },
		{ "DefaultEditorCameraRotation.Name", "ESkeletalMeshAsyncProperties::DefaultEditorCameraRotation" },
		{ "DefaultMeshDeformer.Name", "ESkeletalMeshAsyncProperties::DefaultMeshDeformer" },
		{ "DisableBelowMinLodStripping.Name", "ESkeletalMeshAsyncProperties::DisableBelowMinLodStripping" },
		{ "EnablePerPolyCollision.Name", "ESkeletalMeshAsyncProperties::EnablePerPolyCollision" },
		{ "ExtendedBounds.Name", "ESkeletalMeshAsyncProperties::ExtendedBounds" },
		{ "FloorOffset.Name", "ESkeletalMeshAsyncProperties::FloorOffset" },
		{ "HasActiveClothingAssets.Name", "ESkeletalMeshAsyncProperties::HasActiveClothingAssets" },
		{ "HasBeenSimplified.Name", "ESkeletalMeshAsyncProperties::HasBeenSimplified" },
		{ "HasCustomDefaultEditorCamera.Name", "ESkeletalMeshAsyncProperties::HasCustomDefaultEditorCamera" },
		{ "HasVertexColors.Name", "ESkeletalMeshAsyncProperties::HasVertexColors" },
		{ "ImportedBounds.Name", "ESkeletalMeshAsyncProperties::ImportedBounds" },
		{ "ImportedModel.Name", "ESkeletalMeshAsyncProperties::ImportedModel" },
		{ "LODInfo.Name", "ESkeletalMeshAsyncProperties::LODInfo" },
		{ "LODSettings.Name", "ESkeletalMeshAsyncProperties::LODSettings" },
		{ "Materials.Name", "ESkeletalMeshAsyncProperties::Materials" },
		{ "MaxNumOptionalLODs.Name", "ESkeletalMeshAsyncProperties::MaxNumOptionalLODs" },
		{ "MaxNumStreamedLODs.Name", "ESkeletalMeshAsyncProperties::MaxNumStreamedLODs" },
		{ "MeshClothingAssets.Name", "ESkeletalMeshAsyncProperties::MeshClothingAssets" },
		{ "MeshEditorDataObject.Name", "ESkeletalMeshAsyncProperties::MeshEditorDataObject" },
		{ "MinLod.Name", "ESkeletalMeshAsyncProperties::MinLod" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "MorphTargetIndexMap.Name", "ESkeletalMeshAsyncProperties::MorphTargetIndexMap" },
		{ "MorphTargets.Name", "ESkeletalMeshAsyncProperties::MorphTargets" },
		{ "NegativeBoundsExtension.Name", "ESkeletalMeshAsyncProperties::NegativeBoundsExtension" },
		{ "NeverStream.Name", "ESkeletalMeshAsyncProperties::NeverStream" },
		{ "NodeMappingData.Name", "ESkeletalMeshAsyncProperties::NodeMappingData" },
		{ "None.Name", "ESkeletalMeshAsyncProperties::None" },
		{ "OverrideLODStreamingSettings.Name", "ESkeletalMeshAsyncProperties::OverrideLODStreamingSettings" },
		{ "PhysicsAsset.Name", "ESkeletalMeshAsyncProperties::PhysicsAsset" },
		{ "PositiveBoundsExtension.Name", "ESkeletalMeshAsyncProperties::PositiveBoundsExtension" },
		{ "PostProcessAnimBlueprint.Name", "ESkeletalMeshAsyncProperties::PostProcessAnimBlueprint" },
		{ "PreviewAttachedAssetContainer.Name", "ESkeletalMeshAsyncProperties::PreviewAttachedAssetContainer" },
		{ "RayTracingMinLOD.Name", "ESkeletalMeshAsyncProperties::RayTracingMinLOD" },
		{ "RefBasesInvMatrix.Name", "ESkeletalMeshAsyncProperties::RefBasesInvMatrix" },
		{ "RefSkeleton.Name", "ESkeletalMeshAsyncProperties::RefSkeleton" },
		{ "RequiresLODHysteresisConversion.Name", "ESkeletalMeshAsyncProperties::RequiresLODHysteresisConversion" },
		{ "RequiresLODScreenSizeConversion.Name", "ESkeletalMeshAsyncProperties::RequiresLODScreenSizeConversion" },
		{ "RetargetBasePose.Name", "ESkeletalMeshAsyncProperties::RetargetBasePose" },
		{ "SamplingInfo.Name", "ESkeletalMeshAsyncProperties::SamplingInfo" },
		{ "ShadowPhysicsAsset.Name", "ESkeletalMeshAsyncProperties::ShadowPhysicsAsset" },
		{ "SkeletalMeshRenderData.Name", "ESkeletalMeshAsyncProperties::SkeletalMeshRenderData" },
		{ "Skeleton.Name", "ESkeletalMeshAsyncProperties::Skeleton" },
		{ "SkelMirrorAxis.Name", "ESkeletalMeshAsyncProperties::SkelMirrorAxis" },
		{ "SkelMirrorFlipAxis.Name", "ESkeletalMeshAsyncProperties::SkelMirrorFlipAxis" },
		{ "SkelMirrorTable.Name", "ESkeletalMeshAsyncProperties::SkelMirrorTable" },
		{ "SkinWeightProfiles.Name", "ESkeletalMeshAsyncProperties::SkinWeightProfiles" },
		{ "SupportLODStreaming.Name", "ESkeletalMeshAsyncProperties::SupportLODStreaming" },
		{ "ThumbnailInfo.Name", "ESkeletalMeshAsyncProperties::ThumbnailInfo" },
		{ "ToolTip", "Async Skeletal Mesh Compilation" },
		{ "UseLegacyMeshDerivedDataKey.Name", "ESkeletalMeshAsyncProperties::UseLegacyMeshDerivedDataKey" },
		{ "VertexColorGuid.Name", "ESkeletalMeshAsyncProperties::VertexColorGuid" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESkeletalMeshAsyncProperties",
		"ESkeletalMeshAsyncProperties",
		Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties()
	{
		if (!Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties.InnerSingleton, Z_Construct_UEnum_Engine_ESkeletalMeshAsyncProperties_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneMirrorInfo;
class UScriptStruct* FBoneMirrorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneMirrorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneMirrorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneMirrorInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BoneMirrorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BoneMirrorInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneMirrorInfo>()
{
	return FBoneMirrorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneFlipAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneFlipAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneMirrorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_SourceIndex_MetaData[] = {
		{ "ArrayClamp", "RefSkeleton" },
		{ "Category", "BoneMirrorInfo" },
		{ "Comment", "/** The bone to mirror. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "The bone to mirror." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneMirrorInfo, SourceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_SourceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_SourceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_BoneFlipAxis_MetaData[] = {
		{ "Category", "BoneMirrorInfo" },
		{ "Comment", "/** Axis the bone is mirrored across. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Axis the bone is mirrored across." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_BoneFlipAxis = { "BoneFlipAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneMirrorInfo, BoneFlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_BoneFlipAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_BoneFlipAxis_MetaData)) }; // 2376982772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_SourceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_BoneFlipAxis,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BoneMirrorInfo",
		sizeof(FBoneMirrorInfo),
		alignof(FBoneMirrorInfo),
		Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_BoneMirrorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneMirrorInfo.InnerSingleton, Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoneMirrorInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneMirrorExport;
class UScriptStruct* FBoneMirrorExport::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneMirrorExport.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneMirrorExport.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneMirrorExport, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BoneMirrorExport"));
	}
	return Z_Registration_Info_UScriptStruct_BoneMirrorExport.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneMirrorExport>()
{
	return FBoneMirrorExport::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoneMirrorExport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneFlipAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneFlipAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneMirrorExport>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "BoneMirrorExport" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneMirrorExport, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_SourceBoneName_MetaData[] = {
		{ "Category", "BoneMirrorExport" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_SourceBoneName = { "SourceBoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneMirrorExport, SourceBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_SourceBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_SourceBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneFlipAxis_MetaData[] = {
		{ "Category", "BoneMirrorExport" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneFlipAxis = { "BoneFlipAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneMirrorExport, BoneFlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneFlipAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneFlipAxis_MetaData)) }; // 2376982772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_SourceBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneFlipAxis,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BoneMirrorExport",
		sizeof(FBoneMirrorExport),
		alignof(FBoneMirrorExport),
		Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorExport()
	{
		if (!Z_Registration_Info_UScriptStruct_BoneMirrorExport.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneMirrorExport.InnerSingleton, Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoneMirrorExport.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams;
class UScriptStruct* FSkeletalMeshClothBuildParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshClothBuildParams"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshClothBuildParams>()
{
	return FSkeletalMeshClothBuildParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLod_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetLod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemapParameters_MetaData[];
#endif
		static void NewProp_bRemapParameters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemapParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSection_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveFromMesh_MetaData[];
#endif
		static void NewProp_bRemoveFromMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveFromMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PhysicsAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct holding parameters needed when creating a new clothing asset or sub asset (LOD) */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Struct holding parameters needed when creating a new clothing asset or sub asset (LOD)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshClothBuildParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetAsset_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// Target asset when importing LODs\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Target asset when importing LODs" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetAsset = { "TargetAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, TargetAsset), Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetLod_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// Target LOD to import to when importing LODs\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Target LOD to import to when importing LODs" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetLod = { "TargetLod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, TargetLod), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetLod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// If reimporting, this will map the old LOD parameters to the new LOD mesh.\n// If adding a new LOD this will map the parameters from the preceeding LOD.\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "If reimporting, this will map the old LOD parameters to the new LOD mesh.\nIf adding a new LOD this will map the parameters from the preceeding LOD." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters_SetBit(void* Obj)
	{
		((FSkeletalMeshClothBuildParams*)Obj)->bRemapParameters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters = { "bRemapParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSkeletalMeshClothBuildParams), &Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "// Name of the clothing asset \n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Name of the clothing asset" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_LodIndex_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "// LOD to extract the section from\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "LOD to extract the section from" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, LodIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_LodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_LodIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_SourceSection_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "// Section within the specified LOD to extract\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Section within the specified LOD to extract" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_SourceSection = { "SourceSection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, SourceSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_SourceSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_SourceSection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "// Whether or not to leave this section behind (if driving a mesh with itself). Enable this if driving a high poly mesh with a low poly\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Whether or not to leave this section behind (if driving a mesh with itself). Enable this if driving a high poly mesh with a low poly" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh_SetBit(void* Obj)
	{
		((FSkeletalMeshClothBuildParams*)Obj)->bRemoveFromMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh = { "bRemoveFromMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSkeletalMeshClothBuildParams), &Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// Physics asset to extract collisions from, note this will only extract spheres and Sphyls, as that is what the simulation supports.\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Physics asset to extract collisions from, note this will only extract spheres and Sphyls, as that is what the simulation supports." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_PhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_PhysicsAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetLod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_SourceSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_PhysicsAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshClothBuildParams",
		sizeof(FSkeletalMeshClothBuildParams),
		alignof(FSkeletalMeshClothBuildParams),
		Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy;
class UScriptStruct* FClothPhysicsProperties_Legacy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClothPhysicsProperties_Legacy"));
	}
	return Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClothPhysicsProperties_Legacy>()
{
	return FClothPhysicsProperties_Legacy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalResistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalResistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BendResistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BendResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShearResistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShearResistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetherStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TetherLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Drag_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Drag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StiffnessFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MassScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InertiaBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InertiaBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionSquashScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionSquashScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SolverFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiberCompression_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FiberCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiberExpansion_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FiberExpansion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FiberResistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FiberResistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Legacy object for back-compat loading, no longer used by clothing system\n */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Legacy object for back-compat loading, no longer used by clothing system" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothPhysicsProperties_Legacy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_VerticalResistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_VerticalResistance = { "VerticalResistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, VerticalResistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_VerticalResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_VerticalResistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_HorizontalResistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_HorizontalResistance = { "HorizontalResistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, HorizontalResistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_HorizontalResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_HorizontalResistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_BendResistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_BendResistance = { "BendResistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, BendResistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_BendResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_BendResistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_ShearResistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_ShearResistance = { "ShearResistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, ShearResistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_ShearResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_ShearResistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Friction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, Friction), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Damping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, Damping), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, TetherStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherLimit_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherLimit = { "TetherLimit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, TetherLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Drag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, Drag), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Drag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Drag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_StiffnessFrequency_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_StiffnessFrequency = { "StiffnessFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, StiffnessFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_StiffnessFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_StiffnessFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_GravityScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, GravityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_MassScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_MassScale = { "MassScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, MassScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_MassScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_MassScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_InertiaBlend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_InertiaBlend = { "InertiaBlend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, InertiaBlend), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_InertiaBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_InertiaBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionThickness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionThickness = { "SelfCollisionThickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SelfCollisionThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionSquashScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionSquashScale = { "SelfCollisionSquashScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SelfCollisionSquashScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionSquashScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionSquashScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionStiffness = { "SelfCollisionStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SelfCollisionStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SolverFrequency_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SolverFrequency = { "SolverFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SolverFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SolverFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SolverFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberCompression_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberCompression = { "FiberCompression", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, FiberCompression), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberCompression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberExpansion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberExpansion = { "FiberExpansion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, FiberExpansion), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberExpansion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberExpansion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberResistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberResistance = { "FiberResistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, FiberResistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberResistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_VerticalResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_HorizontalResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_BendResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_ShearResistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Friction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Damping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Drag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_StiffnessFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_GravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_MassScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_InertiaBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionSquashScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SolverFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberExpansion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberResistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ClothPhysicsProperties_Legacy",
		sizeof(FClothPhysicsProperties_Legacy),
		alignof(FClothPhysicsProperties_Legacy),
		Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy()
	{
		if (!Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy.InnerSingleton, Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy;
class UScriptStruct* FClothingAssetData_Legacy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothingAssetData_Legacy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClothingAssetData_Legacy"));
	}
	return Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClothingAssetData_Legacy>()
{
	return FClothingAssetData_Legacy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApexFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApexFileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClothPropertiesChanged_MetaData[];
#endif
		static void NewProp_bClothPropertiesChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClothPropertiesChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Legacy struct for handling back compat serialization\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Legacy struct for handling back compat serialization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothingAssetData_Legacy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_AssetName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothingAssetData_Legacy, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_ApexFileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_ApexFileName = { "ApexFileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothingAssetData_Legacy, ApexFileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_ApexFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_ApexFileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged_SetBit(void* Obj)
	{
		((FClothingAssetData_Legacy*)Obj)->bClothPropertiesChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged = { "bClothPropertiesChanged", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FClothingAssetData_Legacy), &Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_PhysicsProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_PhysicsProperties = { "PhysicsProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothingAssetData_Legacy, PhysicsProperties), Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_PhysicsProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_PhysicsProperties_MetaData)) }; // 2736721798
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_ApexFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_PhysicsProperties,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ClothingAssetData_Legacy",
		sizeof(FClothingAssetData_Legacy),
		alignof(FClothingAssetData_Legacy),
		Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothingAssetData_Legacy()
	{
		if (!Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy.InnerSingleton, Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClothLODBiasMode;
	static UEnum* EClothLODBiasMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClothLODBiasMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClothLODBiasMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EClothLODBiasMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EClothLODBiasMode"));
		}
		return Z_Registration_Info_UEnum_EClothLODBiasMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EClothLODBiasMode>()
	{
		return EClothLODBiasMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics::Enumerators[] = {
		{ "EClothLODBiasMode::MappingsToSameLOD", (int64)EClothLODBiasMode::MappingsToSameLOD },
		{ "EClothLODBiasMode::MappingsToMinLOD", (int64)EClothLODBiasMode::MappingsToMinLOD },
		{ "EClothLODBiasMode::MappingsToAnyLOD", (int64)EClothLODBiasMode::MappingsToAnyLOD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Strategy used for storing additional cloth deformer mappings depending on the\n * desired use of the RaytracingMinLOD value and of the LODBias console variable.\n */" },
		{ "MappingsToAnyLOD.Comment", "// Store all cloth deformer mappings at the expense of memory usage, to allow raytracing of the cloth elements at any higher LOD.\n// Use this mode when the RayTracing LODBias console variable is in use.\n" },
		{ "MappingsToAnyLOD.Name", "EClothLODBiasMode::MappingsToAnyLOD" },
		{ "MappingsToAnyLOD.ToolTip", "Store all cloth deformer mappings at the expense of memory usage, to allow raytracing of the cloth elements at any higher LOD.\nUse this mode when the RayTracing LODBias console variable is in use." },
		{ "MappingsToMinLOD.Comment", "// Store additional cloth deformer mappings to allow raytracing of the cloth elements at RayTracingMinLOD.\n// Raytracing of cloth elements must never be of a different LOD to the one being rendered, or to the one set in RayTracingMinLOD when using this mode.\n" },
		{ "MappingsToMinLOD.Name", "EClothLODBiasMode::MappingsToMinLOD" },
		{ "MappingsToMinLOD.ToolTip", "Store additional cloth deformer mappings to allow raytracing of the cloth elements at RayTracingMinLOD.\nRaytracing of cloth elements must never be of a different LOD to the one being rendered, or to the one set in RayTracingMinLOD when using this mode." },
		{ "MappingsToSameLOD.Comment", "// Only store the strict minimum amount of cloth deformer mappings to save on memory usage.\n// Raytracing of cloth elements must never be of a different LOD to the one being rendered when using this mode.\n" },
		{ "MappingsToSameLOD.Name", "EClothLODBiasMode::MappingsToSameLOD" },
		{ "MappingsToSameLOD.ToolTip", "Only store the strict minimum amount of cloth deformer mappings to save on memory usage.\nRaytracing of cloth elements must never be of a different LOD to the one being rendered when using this mode." },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Strategy used for storing additional cloth deformer mappings depending on the\ndesired use of the RaytracingMinLOD value and of the LODBias console variable." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EClothLODBiasMode",
		"EClothLODBiasMode",
		Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EClothLODBiasMode()
	{
		if (!Z_Registration_Info_UEnum_EClothLODBiasMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClothLODBiasMode.InnerSingleton, Z_Construct_UEnum_Engine_EClothLODBiasMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClothLODBiasMode.InnerSingleton;
	}
	DEFINE_FUNCTION(USkeletalMesh::execIsSectionUsingCloth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSectionIndex);
		P_GET_UBOOL(Z_Param_bCheckCorrespondingSections);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSectionUsingCloth(Z_Param_InSectionIndex,Z_Param_bCheckCorrespondingSections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetSocketByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->GetSocketByIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execNumSockets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->NumSockets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execFindSocketAndIndex)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->FindSocketAndIndex(Z_Param_InSocketName,Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execSetMeshClothingAssets)
	{
		P_GET_TARRAY_REF(UClothingAssetBase*,Z_Param_Out_InMeshClothingAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshClothingAssets(Z_Param_Out_InMeshClothingAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetMeshClothingAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UClothingAssetBase*>*)Z_Param__Result=P_THIS->GetMeshClothingAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execK2_GetAllMorphTargetNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->K2_GetAllMorphTargetNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execSetMorphTargets)
	{
		P_GET_TARRAY_REF(UMorphTarget*,Z_Param_Out_InMorphTargets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMorphTargets(Z_Param_Out_InMorphTargets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetMorphTargetsPtrConv)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMorphTarget*>*)Z_Param__Result=P_THIS->GetMorphTargetsPtrConv();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetNodeMappingContainer)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_SourceAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNodeMappingContainer**)Z_Param__Result=P_THIS->GetNodeMappingContainer(Z_Param_SourceAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetNodeMappingData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UNodeMappingContainer*>*)Z_Param__Result=P_THIS->GetNodeMappingData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetShadowPhysicsAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhysicsAsset**)Z_Param__Result=P_THIS->GetShadowPhysicsAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetPhysicsAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhysicsAsset**)Z_Param__Result=P_THIS->GetPhysicsAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetDefaultAnimatingRig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UObject>*)Z_Param__Result=P_THIS->GetDefaultAnimatingRig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execSetDefaultAnimatingRig)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UObject>,Z_Param_InAnimatingRig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultAnimatingRig(Z_Param_InAnimatingRig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execSetLODSettings)
	{
		P_GET_OBJECT(USkeletalMeshLODSettings,Z_Param_InLODSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLODSettings(Z_Param_InLODSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetLODSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const USkeletalMeshLODSettings**)Z_Param__Result=P_THIS->GetLODSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetMinLODForQualityLevels)
	{
		P_GET_TMAP_REF(EPerQualityLevels,int32,Z_Param_Out_QualityLevelMinimumLODs);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Default);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMinLODForQualityLevels(Z_Param_Out_QualityLevelMinimumLODs,Z_Param_Out_Default);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execSetMinLODForQualityLevels)
	{
		P_GET_TMAP_REF(EPerQualityLevels,int32,Z_Param_Out_QualityLevelMinimumLODs);
		P_GET_PROPERTY(FIntProperty,Z_Param_Default);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinLODForQualityLevels(Z_Param_Out_QualityLevelMinimumLODs,Z_Param_Default);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execSetMaterials)
	{
		P_GET_TARRAY_REF(FSkeletalMaterial,Z_Param_Out_InMaterials);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterials(Z_Param_Out_InMaterials);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSkeletalMaterial>*)Z_Param__Result=P_THIS->GetMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetImportedBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetImportedBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execSetSkeleton)
	{
		P_GET_OBJECT(USkeleton,Z_Param_InSkeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkeleton(Z_Param_InSkeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetSkeleton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const USkeleton**)Z_Param__Result=P_THIS->GetSkeleton();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(USkeletalMesh::execAddSocket)
	{
		P_GET_OBJECT(USkeletalMeshSocket,Z_Param_InSocket);
		P_GET_UBOOL(Z_Param_bAddToSkeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSocket(Z_Param_InSocket,Z_Param_bAddToSkeleton);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void USkeletalMesh::GetThumbnailInfo_WrapperImpl(const void* Object, void* OutValue)
	{
	#if WITH_EDITORONLY_DATA
		const USkeletalMesh* Obj = (const USkeletalMesh*)Object;
		UThumbnailInfo*& Result = *(UThumbnailInfo**)OutValue;
		Result = (UThumbnailInfo*)Obj->GetThumbnailInfo();
	#endif // WITH_EDITORONLY_DATA
	}
	void USkeletalMesh::SetThumbnailInfo_WrapperImpl(void* Object, const void* InValue)
	{
	#if WITH_EDITORONLY_DATA
		USkeletalMesh* Obj = (USkeletalMesh*)Object;
		UThumbnailInfo*& Value = *(UThumbnailInfo**)InValue;
		Obj->SetThumbnailInfo(Value);
	#endif // WITH_EDITORONLY_DATA
	}
	void USkeletalMesh::StaticRegisterNativesUSkeletalMesh()
	{
		UClass* Class = USkeletalMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "AddSocket", &USkeletalMesh::execAddSocket },
#endif // WITH_EDITOR
			{ "FindSocketAndIndex", &USkeletalMesh::execFindSocketAndIndex },
			{ "GetBounds", &USkeletalMesh::execGetBounds },
			{ "GetDefaultAnimatingRig", &USkeletalMesh::execGetDefaultAnimatingRig },
			{ "GetImportedBounds", &USkeletalMesh::execGetImportedBounds },
			{ "GetLODSettings", &USkeletalMesh::execGetLODSettings },
			{ "GetMaterials", &USkeletalMesh::execGetMaterials },
			{ "GetMeshClothingAssets", &USkeletalMesh::execGetMeshClothingAssets },
			{ "GetMinLODForQualityLevels", &USkeletalMesh::execGetMinLODForQualityLevels },
			{ "GetMorphTargetsPtrConv", &USkeletalMesh::execGetMorphTargetsPtrConv },
			{ "GetNodeMappingContainer", &USkeletalMesh::execGetNodeMappingContainer },
			{ "GetNodeMappingData", &USkeletalMesh::execGetNodeMappingData },
			{ "GetPhysicsAsset", &USkeletalMesh::execGetPhysicsAsset },
			{ "GetShadowPhysicsAsset", &USkeletalMesh::execGetShadowPhysicsAsset },
			{ "GetSkeleton", &USkeletalMesh::execGetSkeleton },
			{ "GetSocketByIndex", &USkeletalMesh::execGetSocketByIndex },
			{ "IsSectionUsingCloth", &USkeletalMesh::execIsSectionUsingCloth },
			{ "K2_GetAllMorphTargetNames", &USkeletalMesh::execK2_GetAllMorphTargetNames },
			{ "NumSockets", &USkeletalMesh::execNumSockets },
			{ "SetDefaultAnimatingRig", &USkeletalMesh::execSetDefaultAnimatingRig },
			{ "SetLODSettings", &USkeletalMesh::execSetLODSettings },
			{ "SetMaterials", &USkeletalMesh::execSetMaterials },
			{ "SetMeshClothingAssets", &USkeletalMesh::execSetMeshClothingAssets },
			{ "SetMinLODForQualityLevels", &USkeletalMesh::execSetMinLODForQualityLevels },
			{ "SetMorphTargets", &USkeletalMesh::execSetMorphTargets },
			{ "SetSkeleton", &USkeletalMesh::execSetSkeleton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics
	{
		struct SkeletalMesh_eventAddSocket_Parms
		{
			USkeletalMeshSocket* InSocket;
			bool bAddToSkeleton;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSocket;
		static void NewProp_bAddToSkeleton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToSkeleton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::NewProp_InSocket = { "InSocket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventAddSocket_Parms, InSocket), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::NewProp_bAddToSkeleton_SetBit(void* Obj)
	{
		((SkeletalMesh_eventAddSocket_Parms*)Obj)->bAddToSkeleton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::NewProp_bAddToSkeleton = { "bAddToSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMesh_eventAddSocket_Parms), &Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::NewProp_bAddToSkeleton_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::NewProp_InSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::NewProp_bAddToSkeleton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 *\x09""Add a skeletal socket object to this SkeletalMesh, and optionally promotes it to USkeleton socket.\n\x09 */" },
		{ "CPP_Default_bAddToSkeleton", "false" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Add a skeletal socket object to this SkeletalMesh, and optionally promotes it to USkeleton socket." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "AddSocket", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::SkeletalMesh_eventAddSocket_Parms), Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_AddSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_AddSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics
	{
		struct SkeletalMesh_eventFindSocketAndIndex_Parms
		{
			FName InSocketName;
			int32 OutIndex;
			USkeletalMeshSocket* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventFindSocketAndIndex_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventFindSocketAndIndex_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventFindSocketAndIndex_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_InSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_OutIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09*\x09""Find a socket object in this SkeletalMesh by name.\n\x09*\x09""Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\n\x09*   Also returns the index for the socket allowing for future fast access via GetSocketByIndex()\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Find a socket object in this SkeletalMesh by name.\nEntering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\nAlso returns the index for the socket allowing for future fast access via GetSocketByIndex()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "FindSocketAndIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::SkeletalMesh_eventFindSocketAndIndex_Parms), Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics
	{
		struct SkeletalMesh_eventGetBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Get the extended bounds of this mesh (imported bounds plus bounds extension). USkinnedAsset interface. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Get the extended bounds of this mesh (imported bounds plus bounds extension). USkinnedAsset interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::SkeletalMesh_eventGetBounds_Parms), Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics
	{
		struct SkeletalMesh_eventGetDefaultAnimatingRig_Parms
		{
			TSoftObjectPtr<UObject> ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetDefaultAnimatingRig_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetDefaultAnimatingRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::SkeletalMesh_eventGetDefaultAnimatingRig_Parms), Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics
	{
		struct SkeletalMesh_eventGetImportedBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetImportedBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Get the original imported bounds of the skel mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Get the original imported bounds of the skel mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetImportedBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::SkeletalMesh_eventGetImportedBounds_Parms), Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetImportedBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics
	{
		struct SkeletalMesh_eventGetLODSettings_Parms
		{
			const USkeletalMeshLODSettings* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetLODSettings_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetLODSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::SkeletalMesh_eventGetLODSettings_Parms), Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetLODSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetLODSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics
	{
		struct SkeletalMesh_eventGetMaterials_Parms
		{
			TArray<FSkeletalMaterial> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMaterial, METADATA_PARAMS(nullptr, 0) }; // 3772910854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::NewProp_ReturnValue_MetaData)) }; // 3772910854
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** USkinnedAsset interface. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "USkinnedAsset interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::SkeletalMesh_eventGetMaterials_Parms), Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics
	{
		struct SkeletalMesh_eventGetMeshClothingAssets_Parms
		{
			TArray<UClothingAssetBase*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetMeshClothingAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetMeshClothingAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::SkeletalMesh_eventGetMeshClothingAssets_Parms), Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics
	{
		struct SkeletalMesh_eventGetMinLODForQualityLevels_Parms
		{
			TMap<EPerQualityLevels,int32> QualityLevelMinimumLODs;
			int32 Default;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevelMinimumLODs_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QualityLevelMinimumLODs_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_QualityLevelMinimumLODs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_ValueProp = { "QualityLevelMinimumLODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp = { "QualityLevelMinimumLODs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EPerQualityLevels, METADATA_PARAMS(nullptr, 0) }; // 1281688588
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs = { "QualityLevelMinimumLODs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetMinLODForQualityLevels_Parms, QualityLevelMinimumLODs), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1281688588
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetMinLODForQualityLevels_Parms, Default), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::NewProp_Default,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetMinLODForQualityLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::SkeletalMesh_eventGetMinLODForQualityLevels_Parms), Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics
	{
		struct SkeletalMesh_eventGetMorphTargetsPtrConv_Parms
		{
			TArray<UMorphTarget*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMorphTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetMorphTargetsPtrConv_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "// NOTE: BP compiler doesn't support TObjectPtr as an argument type for UFUNCTION so this converting call is\n// required. For many morphs, this can be expensive, since it needs to resolve _all_ TObjectPtrs and construct a new\n// array for it.\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "NOTE: BP compiler doesn't support TObjectPtr as an argument type for UFUNCTION so this converting call is\nrequired. For many morphs, this can be expensive, since it needs to resolve _all_ TObjectPtrs and construct a new\narray for it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetMorphTargetsPtrConv", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::SkeletalMesh_eventGetMorphTargetsPtrConv_Parms), Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics
	{
		struct SkeletalMesh_eventGetNodeMappingContainer_Parms
		{
			UBlueprint* SourceAsset;
			UNodeMappingContainer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetNodeMappingContainer_Parms, SourceAsset), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetNodeMappingContainer_Parms, ReturnValue), Z_Construct_UClass_UNodeMappingContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::NewProp_SourceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetNodeMappingContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::SkeletalMesh_eventGetNodeMappingContainer_Parms), Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics
	{
		struct SkeletalMesh_eventGetNodeMappingData_Parms
		{
			TArray<UNodeMappingContainer*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNodeMappingContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetNodeMappingData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetNodeMappingData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::SkeletalMesh_eventGetNodeMappingData_Parms), Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics
	{
		struct SkeletalMesh_eventGetPhysicsAsset_Parms
		{
			UPhysicsAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetPhysicsAsset_Parms, ReturnValue), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** USkinnedAsset interface. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "USkinnedAsset interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetPhysicsAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::SkeletalMesh_eventGetPhysicsAsset_Parms), Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics
	{
		struct SkeletalMesh_eventGetShadowPhysicsAsset_Parms
		{
			UPhysicsAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetShadowPhysicsAsset_Parms, ReturnValue), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** USkinnedAsset interface. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "USkinnedAsset interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetShadowPhysicsAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::SkeletalMesh_eventGetShadowPhysicsAsset_Parms), Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics
	{
		struct SkeletalMesh_eventGetSkeleton_Parms
		{
			const USkeleton* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetSkeleton_Parms, ReturnValue), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** USkinnedAsset interface. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "USkinnedAsset interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetSkeleton", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::SkeletalMesh_eventGetSkeleton_Parms), Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics
	{
		struct SkeletalMesh_eventGetSocketByIndex_Parms
		{
			int32 Index;
			USkeletalMeshSocket* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetSocketByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventGetSocketByIndex_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Returns a socket by index. Max index is NumSockets(). The meshes sockets are accessed first, then the skeletons.  */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Returns a socket by index. Max index is NumSockets(). The meshes sockets are accessed first, then the skeletons." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetSocketByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::SkeletalMesh_eventGetSocketByIndex_Parms), Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics
	{
		struct SkeletalMesh_eventIsSectionUsingCloth_Parms
		{
			int32 InSectionIndex;
			bool bCheckCorrespondingSections;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSectionIndex;
		static void NewProp_bCheckCorrespondingSections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckCorrespondingSections;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_InSectionIndex = { "InSectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventIsSectionUsingCloth_Parms, InSectionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_bCheckCorrespondingSections_SetBit(void* Obj)
	{
		((SkeletalMesh_eventIsSectionUsingCloth_Parms*)Obj)->bCheckCorrespondingSections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_bCheckCorrespondingSections = { "bCheckCorrespondingSections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMesh_eventIsSectionUsingCloth_Parms), &Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_bCheckCorrespondingSections_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMesh_eventIsSectionUsingCloth_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMesh_eventIsSectionUsingCloth_Parms), &Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_InSectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_bCheckCorrespondingSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clothing Simulation" },
		{ "Comment", "/** \n\x09 * Checks whether the provided section is using APEX cloth. if bCheckCorrespondingSections is true\n\x09 * disabled sections will defer to correspond sections to see if they use cloth (non-cloth sections\n\x09 * are disabled and another section added when cloth is enabled, using this flag allows for a check\n\x09 * on the original section to succeed)\n\x09 * @param InSectionIndex Index to check\n\x09 * @param bCheckCorrespondingSections Whether to check corresponding sections for disabled sections\n\x09 */" },
		{ "CPP_Default_bCheckCorrespondingSections", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Checks whether the provided section is using APEX cloth. if bCheckCorrespondingSections is true\ndisabled sections will defer to correspond sections to see if they use cloth (non-cloth sections\nare disabled and another section added when cloth is enabled, using this flag allows for a check\non the original section to succeed)\n@param InSectionIndex Index to check\n@param bCheckCorrespondingSections Whether to check corresponding sections for disabled sections" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "IsSectionUsingCloth", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::SkeletalMesh_eventIsSectionUsingCloth_Parms), Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics
	{
		struct SkeletalMesh_eventK2_GetAllMorphTargetNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventK2_GetAllMorphTargetNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**\n\x09 *\x09Returns the list of all morph targets of this skeletal mesh\n\x09 *  @return\x09The list of morph targets\n\x09 */" },
		{ "DisplayName", "Get All Morph Target Names" },
		{ "Keywords", "morph shape" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ScriptName", "GetAllMorphTargetNames" },
		{ "ToolTip", "Returns the list of all morph targets of this skeletal mesh\n@return     The list of morph targets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "K2_GetAllMorphTargetNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::SkeletalMesh_eventK2_GetAllMorphTargetNames_Parms), Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics
	{
		struct SkeletalMesh_eventNumSockets_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventNumSockets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Returns the number of sockets available. Both on this mesh and it's skeleton. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Returns the number of sockets available. Both on this mesh and it's skeleton." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "NumSockets", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::SkeletalMesh_eventNumSockets_Parms), Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_NumSockets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics
	{
		struct SkeletalMesh_eventSetDefaultAnimatingRig_Parms
		{
			TSoftObjectPtr<UObject> InAnimatingRig;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InAnimatingRig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::NewProp_InAnimatingRig = { "InAnimatingRig", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventSetDefaultAnimatingRig_Parms, InAnimatingRig), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::NewProp_InAnimatingRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetDefaultAnimatingRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::SkeletalMesh_eventSetDefaultAnimatingRig_Parms), Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics
	{
		struct SkeletalMesh_eventSetLODSettings_Parms
		{
			USkeletalMeshLODSettings* InLODSettings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLODSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::NewProp_InLODSettings = { "InLODSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventSetLODSettings_Parms, InLODSettings), Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::NewProp_InLODSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetLODSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::SkeletalMesh_eventSetLODSettings_Parms), Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_SetLODSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics
	{
		struct SkeletalMesh_eventSetMaterials_Parms
		{
			TArray<FSkeletalMaterial> InMaterials;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::NewProp_InMaterials_Inner = { "InMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMaterial, METADATA_PARAMS(nullptr, 0) }; // 3772910854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::NewProp_InMaterials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::NewProp_InMaterials = { "InMaterials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventSetMaterials_Parms, InMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::NewProp_InMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::NewProp_InMaterials_MetaData)) }; // 3772910854
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::NewProp_InMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::NewProp_InMaterials,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::SkeletalMesh_eventSetMaterials_Parms), Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_SetMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics
	{
		struct SkeletalMesh_eventSetMeshClothingAssets_Parms
		{
			TArray<UClothingAssetBase*> InMeshClothingAssets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMeshClothingAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMeshClothingAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InMeshClothingAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::NewProp_InMeshClothingAssets_Inner = { "InMeshClothingAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::NewProp_InMeshClothingAssets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::NewProp_InMeshClothingAssets = { "InMeshClothingAssets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventSetMeshClothingAssets_Parms, InMeshClothingAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::NewProp_InMeshClothingAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::NewProp_InMeshClothingAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::NewProp_InMeshClothingAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::NewProp_InMeshClothingAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetMeshClothingAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::SkeletalMesh_eventSetMeshClothingAssets_Parms), Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics
	{
		struct SkeletalMesh_eventSetMinLODForQualityLevels_Parms
		{
			TMap<EPerQualityLevels,int32> QualityLevelMinimumLODs;
			int32 Default;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevelMinimumLODs_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_QualityLevelMinimumLODs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevelMinimumLODs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_QualityLevelMinimumLODs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Default;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_ValueProp = { "QualityLevelMinimumLODs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp = { "QualityLevelMinimumLODs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EPerQualityLevels, METADATA_PARAMS(nullptr, 0) }; // 1281688588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs = { "QualityLevelMinimumLODs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventSetMinLODForQualityLevels_Parms, QualityLevelMinimumLODs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_MetaData)) }; // 1281688588
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_Default = { "Default", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventSetMinLODForQualityLevels_Parms, Default), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_QualityLevelMinimumLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::NewProp_Default,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "StaticMesh" },
		{ "CPP_Default_Default", "-1" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Allow to override min lod quality levels on a skeletalMesh and it Default value (-1 value for Default dont override its value)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetMinLODForQualityLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::SkeletalMesh_eventSetMinLODForQualityLevels_Parms), Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics
	{
		struct SkeletalMesh_eventSetMorphTargets_Parms
		{
			TArray<UMorphTarget*> InMorphTargets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMorphTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMorphTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InMorphTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::NewProp_InMorphTargets_Inner = { "InMorphTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMorphTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::NewProp_InMorphTargets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::NewProp_InMorphTargets = { "InMorphTargets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventSetMorphTargets_Parms, InMorphTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::NewProp_InMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::NewProp_InMorphTargets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::NewProp_InMorphTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::NewProp_InMorphTargets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetMorphTargets", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::SkeletalMesh_eventSetMorphTargets_Parms), Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_SetMorphTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetMorphTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics
	{
		struct SkeletalMesh_eventSetSkeleton_Parms
		{
			USkeleton* InSkeleton;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeleton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::NewProp_InSkeleton = { "InSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMesh_eventSetSkeleton_Parms, InSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::NewProp_InSkeleton,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetSkeleton", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::SkeletalMesh_eventSetSkeleton_Parms), Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_SetSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMesh);
	UClass* Z_Construct_UClass_USkeletalMesh_NoRegister()
	{
		return USkeletalMesh::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshEditorDataObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshEditorDataObject;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtendedBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtendedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositiveBoundsExtension_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositiveBoundsExtension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NegativeBoundsExtension_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NegativeBoundsExtension;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkelMirrorTable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkelMirrorTable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkelMirrorTable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinQualityLevelLOD_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinQualityLevelLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLod_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinLod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableBelowMinLodStripping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisableBelowMinLodStripping;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLODStreamingSettings_MetaData[];
#endif
		static void NewProp_bOverrideLODStreamingSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLODStreamingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportLODStreaming_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_bSupportLODStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumStreamedLODs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxNumStreamedLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumOptionalLODs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxNumOptionalLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LODSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAnimatingRig_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultAnimatingRig;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkelMirrorAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkelMirrorAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkelMirrorFlipAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkelMirrorFlipAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[];
#endif
		static void NewProp_bUseFullPrecisionUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTangentBasis_MetaData[];
#endif
		static void NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTangentBasis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenSimplified_MetaData[];
#endif
		static void NewProp_bHasBeenSimplified_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenSimplified;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasVertexColors_MetaData[];
#endif
		static void NewProp_bHasVertexColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasVertexColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePerPolyCollision_MetaData[];
#endif
		static void NewProp_bEnablePerPolyCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePerPolyCollision;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColorGuid;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BodySetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowPhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShadowPhysicsAsset;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeMappingData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeMappingData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeMappingData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasCustomDefaultEditorCamera_MetaData[];
#endif
		static void NewProp_bHasCustomDefaultEditorCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCustomDefaultEditorCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultEditorCameraLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultEditorCameraRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraLookAt_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultEditorCameraLookAt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraOrthoZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultEditorCameraOrthoZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAttachedAssetContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewAttachedAssetContainer;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportRayTracing_MetaData[];
#endif
		static void NewProp_bSupportRayTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportRayTracing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingMinLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingMinLOD;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClothLODBiasMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothLODBiasMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ClothLODBiasMode;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MorphTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargets;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetBasePose_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetBasePose_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RetargetBasePose;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClothingAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothingAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClothingAssets;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessAnimBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PostProcessAnimBlueprint;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshClothingAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshClothingAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshClothingAssets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sockets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sockets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkinWeightProfiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinWeightProfiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkinWeightProfiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshDeformer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMeshDeformer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkinnedAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkeletalMesh_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_USkeletalMesh_AddSocket, "AddSocket" }, // 3161604847
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex, "FindSocketAndIndex" }, // 1316973182
		{ &Z_Construct_UFunction_USkeletalMesh_GetBounds, "GetBounds" }, // 1670939493
		{ &Z_Construct_UFunction_USkeletalMesh_GetDefaultAnimatingRig, "GetDefaultAnimatingRig" }, // 2658927660
		{ &Z_Construct_UFunction_USkeletalMesh_GetImportedBounds, "GetImportedBounds" }, // 2365821691
		{ &Z_Construct_UFunction_USkeletalMesh_GetLODSettings, "GetLODSettings" }, // 4082045597
		{ &Z_Construct_UFunction_USkeletalMesh_GetMaterials, "GetMaterials" }, // 2890306807
		{ &Z_Construct_UFunction_USkeletalMesh_GetMeshClothingAssets, "GetMeshClothingAssets" }, // 302304374
		{ &Z_Construct_UFunction_USkeletalMesh_GetMinLODForQualityLevels, "GetMinLODForQualityLevels" }, // 2209456976
		{ &Z_Construct_UFunction_USkeletalMesh_GetMorphTargetsPtrConv, "GetMorphTargetsPtrConv" }, // 2408611893
		{ &Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer, "GetNodeMappingContainer" }, // 3871535764
		{ &Z_Construct_UFunction_USkeletalMesh_GetNodeMappingData, "GetNodeMappingData" }, // 2104611248
		{ &Z_Construct_UFunction_USkeletalMesh_GetPhysicsAsset, "GetPhysicsAsset" }, // 3827305783
		{ &Z_Construct_UFunction_USkeletalMesh_GetShadowPhysicsAsset, "GetShadowPhysicsAsset" }, // 1861366064
		{ &Z_Construct_UFunction_USkeletalMesh_GetSkeleton, "GetSkeleton" }, // 1003196307
		{ &Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex, "GetSocketByIndex" }, // 522604645
		{ &Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth, "IsSectionUsingCloth" }, // 4044939325
		{ &Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames, "K2_GetAllMorphTargetNames" }, // 2662806829
		{ &Z_Construct_UFunction_USkeletalMesh_NumSockets, "NumSockets" }, // 2595230232
		{ &Z_Construct_UFunction_USkeletalMesh_SetDefaultAnimatingRig, "SetDefaultAnimatingRig" }, // 3899770085
		{ &Z_Construct_UFunction_USkeletalMesh_SetLODSettings, "SetLODSettings" }, // 1292754437
		{ &Z_Construct_UFunction_USkeletalMesh_SetMaterials, "SetMaterials" }, // 882462732
		{ &Z_Construct_UFunction_USkeletalMesh_SetMeshClothingAssets, "SetMeshClothingAssets" }, // 3046743500
		{ &Z_Construct_UFunction_USkeletalMesh_SetMinLODForQualityLevels, "SetMinLODForQualityLevels" }, // 1038121479
		{ &Z_Construct_UFunction_USkeletalMesh_SetMorphTargets, "SetMorphTargets" }, // 2045629420
		{ &Z_Construct_UFunction_USkeletalMesh_SetSkeleton, "SetSkeleton" }, // 892039862
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * SkeletalMesh is geometry bound to a hierarchical skeleton of bones which can be animated for the purpose of deforming the mesh.\n * Skeletal Meshes are built up of two parts; a set of polygons composed to make up the surface of the mesh, and a hierarchical skeleton which can be used to animate the polygons.\n * The 3D models, rigging, and animations are created in an external modeling and animation application (3DSMax, Maya, Softimage, etc).\n *\n * @see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/SkeletalMeshes/\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Engine/SkeletalMesh.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "SkeletalMesh is geometry bound to a hierarchical skeleton of bones which can be animated for the purpose of deforming the mesh.\nSkeletal Meshes are built up of two parts; a set of polygons composed to make up the surface of the mesh, and a hierarchical skeleton which can be used to animate the polygons.\nThe 3D models, rigging, and animations are created in an external modeling and animation application (3DSMax, Maya, Softimage, etc).\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/SkeletalMeshes/" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshEditorDataObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshEditorDataObject = { "MeshEditorDataObject", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, MeshEditorDataObject), Z_Construct_UClass_USkeletalMeshEditorData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshEditorDataObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshEditorDataObject_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Skeleton_MetaData[] = {
		{ "BlueprintGetter", "GetSkeleton" },
		{ "BlueprintSetter", "SetSkeleton" },
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014010000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ImportedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ImportedBounds = { "ImportedBounds", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, ImportedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ImportedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ImportedBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ExtendedBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ExtendedBounds = { "ExtendedBounds", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, ExtendedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ExtendedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ExtendedBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PositiveBoundsExtension_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PositiveBoundsExtension = { "PositiveBoundsExtension", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, PositiveBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PositiveBoundsExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PositiveBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NegativeBoundsExtension_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NegativeBoundsExtension = { "NegativeBoundsExtension", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, NegativeBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NegativeBoundsExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NegativeBoundsExtension_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMaterial, METADATA_PARAMS(nullptr, 0) }; // 3772910854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials_MetaData[] = {
		{ "BlueprintGetter", "GetMaterials" },
		{ "BlueprintSetter", "SetMaterials" },
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000202005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials_MetaData)) }; // 3772910854
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable_Inner = { "SkelMirrorTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneMirrorInfo, METADATA_PARAMS(nullptr, 0) }; // 3231882798
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable = { "SkelMirrorTable", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, SkelMirrorTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable_MetaData)) }; // 3231882798
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo_Inner = { "LODInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshLODInfo, METADATA_PARAMS(nullptr, 0) }; // 2104056873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo = { "LODInfo", nullptr, (EPropertyFlags)0x0040000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, LODInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo_MetaData)) }; // 2104056873
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinQualityLevelLOD_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "Quality Level Minimum LOD" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinQualityLevelLOD = { "MinQualityLevelLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, MinQualityLevelLOD), Z_Construct_UScriptStruct_FPerQualityLevelInt, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinQualityLevelLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinQualityLevelLOD_MetaData)) }; // 1607049419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinLod_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "Minimum LOD" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinLod = { "MinLod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, MinLod), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinLod_MetaData)) }; // 1463691826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DisableBelowMinLodStripping_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DisableBelowMinLodStripping = { "DisableBelowMinLodStripping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, DisableBelowMinLodStripping), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DisableBelowMinLodStripping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DisableBelowMinLodStripping_MetaData)) }; // 3656766386
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bOverrideLODStreamingSettings_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bOverrideLODStreamingSettings_SetBit(void* Obj)
	{
		((USkeletalMesh*)Obj)->bOverrideLODStreamingSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bOverrideLODStreamingSettings = { "bOverrideLODStreamingSettings", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bOverrideLODStreamingSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bOverrideLODStreamingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bOverrideLODStreamingSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportLODStreaming_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "DisplayName", "Stream LODs" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportLODStreaming = { "bSupportLODStreaming", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, bSupportLODStreaming), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportLODStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportLODStreaming_MetaData)) }; // 3656766386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumStreamedLODs_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumStreamedLODs = { "MaxNumStreamedLODs", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, MaxNumStreamedLODs), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumStreamedLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumStreamedLODs_MetaData)) }; // 1463691826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumOptionalLODs_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumOptionalLODs = { "MaxNumOptionalLODs", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, MaxNumOptionalLODs), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumOptionalLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumOptionalLODs_MetaData)) }; // 1463691826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODSettings_MetaData[] = {
		{ "BlueprintGetter", "GetLODSettings" },
		{ "BlueprintSetter", "SetLODSettings" },
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODSettings = { "LODSettings", nullptr, (EPropertyFlags)0x0014010800000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, LODSettings), Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultAnimatingRig_MetaData[] = {
		{ "AllowedClasses", "/Script/ControlRigDeveloper.ControlRigBlueprint" },
		{ "BlueprintGetter", "GetDefaultAnimatingRig" },
		{ "BlueprintSetter", "SetDefaultAnimatingRig" },
		{ "Category", "AnimationRig" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultAnimatingRig = { "DefaultAnimatingRig", nullptr, (EPropertyFlags)0x0014000800000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, DefaultAnimatingRig), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultAnimatingRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultAnimatingRig_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorAxis_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorAxis = { "SkelMirrorAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, SkelMirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorFlipAxis_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorFlipAxis = { "SkelMirrorFlipAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, SkelMirrorFlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorFlipAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorFlipAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs_MetaData[] = {
		{ "Comment", "/** If true, use 32 bit UVs. If false, use 16 bit UVs to save memory */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "If true, use 32 bit UVs. If false, use 16 bit UVs to save memory" },
	};
#endif
	void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs_SetBit(void* Obj)
	{
		((USkeletalMesh*)Obj)->bUseFullPrecisionUVs_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs = { "bUseFullPrecisionUVs", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData[] = {
		{ "Comment", "/** If true, tangents will be stored at 16 bit vs 8 bit precision */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "If true, tangents will be stored at 16 bit vs 8 bit precision" },
	};
#endif
	void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj)
	{
		((USkeletalMesh*)Obj)->bUseHighPrecisionTangentBasis_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis = { "bUseHighPrecisionTangentBasis", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified_SetBit(void* Obj)
	{
		((USkeletalMesh*)Obj)->bHasBeenSimplified = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified = { "bHasBeenSimplified", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors_SetBit(void* Obj)
	{
		((USkeletalMesh*)Obj)->bHasVertexColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors = { "bHasVertexColors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision_SetBit(void* Obj)
	{
		((USkeletalMesh*)Obj)->bEnablePerPolyCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision = { "bEnablePerPolyCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_VertexColorGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_VertexColorGuid = { "VertexColorGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, VertexColorGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_VertexColorGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_VertexColorGuid_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "BlueprintGetter", "GetPhysicsAsset" },
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0014010000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ShadowPhysicsAsset_MetaData[] = {
		{ "BlueprintGetter", "GetShadowPhysicsAsset" },
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ShadowPhysicsAsset = { "ShadowPhysicsAsset", nullptr, (EPropertyFlags)0x0014010000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, ShadowPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ShadowPhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ShadowPhysicsAsset_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData_Inner = { "NodeMappingData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNodeMappingContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData_MetaData[] = {
		{ "BlueprintGetter", "GetNodeMappingData" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData = { "NodeMappingData", nullptr, (EPropertyFlags)0x0014000000000055, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, NodeMappingData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0016000800080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "Comment", "/** Path to the resource used to construct this skeletal mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Path to the resource used to construct this skeletal mesh" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, SourceFilePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFileTimestamp_MetaData[] = {
		{ "Comment", "/** Date/Time-stamp of the file from the last import */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Date/Time-stamp of the file from the last import" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFileTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00160408000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USkeletalMesh::SetThumbnailInfo_WrapperImpl, &USkeletalMesh::GetThumbnailInfo_WrapperImpl, STRUCT_OFFSET(USkeletalMesh, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ThumbnailInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera_SetBit(void* Obj)
	{
		((USkeletalMesh*)Obj)->bHasCustomDefaultEditorCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera = { "bHasCustomDefaultEditorCamera", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLocation = { "DefaultEditorCameraLocation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraRotation = { "DefaultEditorCameraRotation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLookAt_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLookAt = { "DefaultEditorCameraLookAt", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraLookAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLookAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLookAt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraOrthoZoom_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraOrthoZoom = { "DefaultEditorCameraOrthoZoom", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraOrthoZoom), METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraOrthoZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraOrthoZoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PreviewAttachedAssetContainer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PreviewAttachedAssetContainer = { "PreviewAttachedAssetContainer", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, PreviewAttachedAssetContainer), Z_Construct_UScriptStruct_FPreviewAssetAttachContainer, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PreviewAttachedAssetContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PreviewAttachedAssetContainer_MetaData)) }; // 485243642
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportRayTracing_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportRayTracing_SetBit(void* Obj)
	{
		((USkeletalMesh*)Obj)->bSupportRayTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportRayTracing = { "bSupportRayTracing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportRayTracing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RayTracingMinLOD_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RayTracingMinLOD = { "RayTracingMinLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, RayTracingMinLOD), METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RayTracingMinLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RayTracingMinLOD_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothLODBiasMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothLODBiasMode_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothLODBiasMode = { "ClothLODBiasMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, ClothLODBiasMode), Z_Construct_UEnum_Engine_EClothLODBiasMode, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothLODBiasMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothLODBiasMode_MetaData)) }; // 823726937
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets_Inner = { "MorphTargets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMorphTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets_MetaData[] = {
		{ "BlueprintGetter", "GetMorphTargetsPtrConv" },
		{ "BlueprintSetter", "SetMorphTargets" },
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets = { "MorphTargets", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, MorphTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_FloorOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_FloorOffset = { "FloorOffset", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, FloorOffset), METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_FloorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_FloorOffset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose_Inner = { "RetargetBasePose", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose = { "RetargetBasePose", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, RetargetBasePose), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets_Inner = { "ClothingAssets", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FClothingAssetData_Legacy, METADATA_PARAMS(nullptr, 0) }; // 709732870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets_MetaData[] = {
		{ "Comment", "/** Legacy clothing asset data, will be converted to new assets after loading */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Legacy clothing asset data, will be converted to new assets after loading" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets = { "ClothingAssets", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, ClothingAssets_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets_MetaData)) }; // 709732870
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PostProcessAnimBlueprint_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PostProcessAnimBlueprint = { "PostProcessAnimBlueprint", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, PostProcessAnimBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PostProcessAnimBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PostProcessAnimBlueprint_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets_Inner = { "MeshClothingAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets_MetaData[] = {
		{ "BlueprintGetter", "GetMeshClothingAssets" },
		{ "BlueprintSetter", "SetMeshClothingAssets" },
		{ "Category", "Clothing" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets = { "MeshClothingAssets", nullptr, (EPropertyFlags)0x0014000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, MeshClothingAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SamplingInfo_MetaData[] = {
		{ "Category", "Sampling" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SamplingInfo = { "SamplingInfo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, SamplingInfo), Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SamplingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SamplingInfo_MetaData)) }; // 408201072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x00240c8000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets_Inner = { "Sockets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09""Array of named socket locations, set up in editor and used as a shortcut instead of specifying \n\x09 *\x09""everything explicitly to AttachComponent in the SkeletalMeshComponent. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Array of named socket locations, set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the SkeletalMeshComponent." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets = { "Sockets", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, Sockets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles_Inner = { "SkinWeightProfiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkinWeightProfileInfo, METADATA_PARAMS(nullptr, 0) }; // 408249956
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles_MetaData[] = {
		{ "Category", "SkinWeights" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles = { "SkinWeightProfiles", nullptr, (EPropertyFlags)0x0020080000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, SkinWeightProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles_MetaData)) }; // 408249956
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultMeshDeformer_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Filter", "/Script/Engine.SkinnedMeshComponent" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultMeshDeformer = { "DefaultMeshDeformer", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMesh, DefaultMeshDeformer), Z_Construct_UClass_UMeshDeformer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultMeshDeformer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultMeshDeformer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMesh_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshEditorDataObject,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ImportedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ExtendedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PositiveBoundsExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NegativeBoundsExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinQualityLevelLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinLod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DisableBelowMinLodStripping,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bOverrideLODStreamingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportLODStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumStreamedLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumOptionalLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultAnimatingRig,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorFlipAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_VertexColorGuid,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_BodySetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ShadowPhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFileTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ThumbnailInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLookAt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraOrthoZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PreviewAttachedAssetContainer,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportRayTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RayTracingMinLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothLODBiasMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothLODBiasMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_FloorOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PostProcessAnimBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SamplingInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultMeshDeformer,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkeletalMesh_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(USkeletalMesh, IInterface_CollisionDataProvider), false },  // 1866130202
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(USkeletalMesh, IInterface_AssetUserData), false },  // 1283872964
			{ Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister, (int32)VTABLE_OFFSET(USkeletalMesh, INodeMappingProviderInterface), false },  // 3118747077
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMesh_Statics::ClassParams = {
		&USkeletalMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkeletalMesh_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMesh()
	{
		if (!Z_Registration_Info_UClass_USkeletalMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMesh.OuterSingleton, Z_Construct_UClass_USkeletalMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMesh.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USkeletalMesh>()
	{
		return USkeletalMesh::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMesh)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics::EnumInfo[] = {
		{ ESkeletalMeshAsyncProperties_StaticEnum, TEXT("ESkeletalMeshAsyncProperties"), &Z_Registration_Info_UEnum_ESkeletalMeshAsyncProperties, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3465285402U) },
		{ EClothLODBiasMode_StaticEnum, TEXT("EClothLODBiasMode"), &Z_Registration_Info_UEnum_EClothLODBiasMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 823726937U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics::ScriptStructInfo[] = {
		{ FBoneMirrorInfo::StaticStruct, Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewStructOps, TEXT("BoneMirrorInfo"), &Z_Registration_Info_UScriptStruct_BoneMirrorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneMirrorInfo), 3231882798U) },
		{ FBoneMirrorExport::StaticStruct, Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewStructOps, TEXT("BoneMirrorExport"), &Z_Registration_Info_UScriptStruct_BoneMirrorExport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneMirrorExport), 3556879000U) },
		{ FSkeletalMeshClothBuildParams::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewStructOps, TEXT("SkeletalMeshClothBuildParams"), &Z_Registration_Info_UScriptStruct_SkeletalMeshClothBuildParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshClothBuildParams), 1980833760U) },
		{ FClothPhysicsProperties_Legacy::StaticStruct, Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewStructOps, TEXT("ClothPhysicsProperties_Legacy"), &Z_Registration_Info_UScriptStruct_ClothPhysicsProperties_Legacy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothPhysicsProperties_Legacy), 2736721798U) },
		{ FClothingAssetData_Legacy::StaticStruct, Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewStructOps, TEXT("ClothingAssetData_Legacy"), &Z_Registration_Info_UScriptStruct_ClothingAssetData_Legacy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothingAssetData_Legacy), 709732870U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMesh, USkeletalMesh::StaticClass, TEXT("USkeletalMesh"), &Z_Registration_Info_UClass_USkeletalMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMesh), 3859549300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_1611795882(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMesh_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
