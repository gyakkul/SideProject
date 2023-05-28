// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinnedMeshComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ULODSyncInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerInstanceSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneSpaces();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneVisibilityStatus();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysBodyOp();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkinCacheUsage();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVertexOffsetUsage();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneVisibilityStatus;
	static UEnum* EBoneVisibilityStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoneVisibilityStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoneVisibilityStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneVisibilityStatus, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBoneVisibilityStatus"));
		}
		return Z_Registration_Info_UEnum_EBoneVisibilityStatus.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBoneVisibilityStatus>()
	{
		return EBoneVisibilityStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics::Enumerators[] = {
		{ "BVS_HiddenByParent", (int64)BVS_HiddenByParent },
		{ "BVS_Visible", (int64)BVS_Visible },
		{ "BVS_ExplicitlyHidden", (int64)BVS_ExplicitlyHidden },
		{ "BVS_MAX", (int64)BVS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics::Enum_MetaDataParams[] = {
		{ "BVS_ExplicitlyHidden.Comment", "/** Bone is hidden directly. */" },
		{ "BVS_ExplicitlyHidden.Name", "BVS_ExplicitlyHidden" },
		{ "BVS_ExplicitlyHidden.ToolTip", "Bone is hidden directly." },
		{ "BVS_HiddenByParent.Comment", "/** Bone is hidden because it's parent is hidden. */" },
		{ "BVS_HiddenByParent.Name", "BVS_HiddenByParent" },
		{ "BVS_HiddenByParent.ToolTip", "Bone is hidden because it's parent is hidden." },
		{ "BVS_MAX.Name", "BVS_MAX" },
		{ "BVS_Visible.Comment", "/** Bone is visible. */" },
		{ "BVS_Visible.Name", "BVS_Visible" },
		{ "BVS_Visible.ToolTip", "Bone is visible." },
		{ "Comment", "/** The valid BoneVisibilityStates values; A bone is only visible if it is *exactly* 1 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "The valid BoneVisibilityStates values; A bone is only visible if it is *exactly* 1" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EBoneVisibilityStatus",
		"EBoneVisibilityStatus",
		Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EBoneVisibilityStatus()
	{
		if (!Z_Registration_Info_UEnum_EBoneVisibilityStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneVisibilityStatus.InnerSingleton, Z_Construct_UEnum_Engine_EBoneVisibilityStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoneVisibilityStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysBodyOp;
	static UEnum* EPhysBodyOp_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysBodyOp.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysBodyOp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPhysBodyOp, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPhysBodyOp"));
		}
		return Z_Registration_Info_UEnum_EPhysBodyOp.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPhysBodyOp>()
	{
		return EPhysBodyOp_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPhysBodyOp_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPhysBodyOp_Statics::Enumerators[] = {
		{ "PBO_None", (int64)PBO_None },
		{ "PBO_Term", (int64)PBO_Term },
		{ "PBO_MAX", (int64)PBO_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPhysBodyOp_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** PhysicsBody options when bone is hidden */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "PBO_MAX.Name", "PBO_MAX" },
		{ "PBO_None.Comment", "/** Don't do anything. */" },
		{ "PBO_None.Name", "PBO_None" },
		{ "PBO_None.ToolTip", "Don't do anything." },
		{ "PBO_Term.Comment", "/** Terminate - if you terminate, you won't be able to re-init when unhidden. */" },
		{ "PBO_Term.Name", "PBO_Term" },
		{ "PBO_Term.ToolTip", "Terminate - if you terminate, you won't be able to re-init when unhidden." },
		{ "ToolTip", "PhysicsBody options when bone is hidden" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPhysBodyOp_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPhysBodyOp",
		"EPhysBodyOp",
		Z_Construct_UEnum_Engine_EPhysBodyOp_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPhysBodyOp_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPhysBodyOp_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPhysBodyOp_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPhysBodyOp()
	{
		if (!Z_Registration_Info_UEnum_EPhysBodyOp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysBodyOp.InnerSingleton, Z_Construct_UEnum_Engine_EPhysBodyOp_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysBodyOp.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption;
	static UEnum* EVisibilityBasedAnimTickOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVisibilityBasedAnimTickOption"));
		}
		return Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVisibilityBasedAnimTickOption>()
	{
		return EVisibilityBasedAnimTickOption_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics::Enumerators[] = {
		{ "EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones", (int64)EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones },
		{ "EVisibilityBasedAnimTickOption::AlwaysTickPose", (int64)EVisibilityBasedAnimTickOption::AlwaysTickPose },
		{ "EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered", (int64)EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered },
		{ "EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered", (int64)EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysTickPose.Comment", "/** Always Tick, but Refresh BoneTransforms only when rendered. */" },
		{ "AlwaysTickPose.Name", "EVisibilityBasedAnimTickOption::AlwaysTickPose" },
		{ "AlwaysTickPose.ToolTip", "Always Tick, but Refresh BoneTransforms only when rendered." },
		{ "AlwaysTickPoseAndRefreshBones.Comment", "/** Always Tick and Refresh BoneTransforms whether rendered or not. */" },
		{ "AlwaysTickPoseAndRefreshBones.Name", "EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones" },
		{ "AlwaysTickPoseAndRefreshBones.ToolTip", "Always Tick and Refresh BoneTransforms whether rendered or not." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Skinned Mesh Animation Tick option based on rendered or not. This dictates \"TickPose and RefreshBoneTransforms\" */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "OnlyTickMontagesWhenNotRendered.Comment", "/**\n\x09\x09When rendered Tick Pose and Refresh Bone Transforms,\n\x09\x09otherwise, just update montages and skip everything else.\n\x09\x09(AnimBP graph will not be updated).\n\x09*/" },
		{ "OnlyTickMontagesWhenNotRendered.Name", "EVisibilityBasedAnimTickOption::OnlyTickMontagesWhenNotRendered" },
		{ "OnlyTickMontagesWhenNotRendered.ToolTip", "When rendered Tick Pose and Refresh Bone Transforms,\notherwise, just update montages and skip everything else.\n(AnimBP graph will not be updated)." },
		{ "OnlyTickPoseWhenRendered.Comment", "/** Tick only when rendered, and it will only RefreshBoneTransforms when rendered. */" },
		{ "OnlyTickPoseWhenRendered.Name", "EVisibilityBasedAnimTickOption::OnlyTickPoseWhenRendered" },
		{ "OnlyTickPoseWhenRendered.ToolTip", "Tick only when rendered, and it will only RefreshBoneTransforms when rendered." },
		{ "ToolTip", "Skinned Mesh Animation Tick option based on rendered or not. This dictates \"TickPose and RefreshBoneTransforms\"" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVisibilityBasedAnimTickOption",
		"EVisibilityBasedAnimTickOption",
		Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption()
	{
		if (!Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption.InnerSingleton, Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneSpaces;
	static UEnum* EBoneSpaces_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoneSpaces.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoneSpaces.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneSpaces, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBoneSpaces"));
		}
		return Z_Registration_Info_UEnum_EBoneSpaces.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBoneSpaces::Type>()
	{
		return EBoneSpaces_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EBoneSpaces_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EBoneSpaces_Statics::Enumerators[] = {
		{ "EBoneSpaces::WorldSpace", (int64)EBoneSpaces::WorldSpace },
		{ "EBoneSpaces::ComponentSpace", (int64)EBoneSpaces::ComponentSpace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EBoneSpaces_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Values for specifying bone space. */" },
		{ "ComponentSpace.Comment", "/** Set position of bone in components reference frame. */" },
		{ "ComponentSpace.DisplayName", "Component Space" },
		{ "ComponentSpace.Name", "EBoneSpaces::ComponentSpace" },
		{ "ComponentSpace.ToolTip", "Set position of bone in components reference frame." },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Values for specifying bone space." },
		{ "WorldSpace.Comment", "/** Set absolute position of bone in world space. */" },
		{ "WorldSpace.DisplayName", "World Space" },
		{ "WorldSpace.Name", "EBoneSpaces::WorldSpace" },
		{ "WorldSpace.ToolTip", "Set absolute position of bone in world space." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBoneSpaces_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EBoneSpaces",
		"EBoneSpaces::Type",
		Z_Construct_UEnum_Engine_EBoneSpaces_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneSpaces_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EBoneSpaces_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneSpaces_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EBoneSpaces()
	{
		if (!Z_Registration_Info_UEnum_EBoneSpaces.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneSpaces.InnerSingleton, Z_Construct_UEnum_Engine_EBoneSpaces_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoneSpaces.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo;
class UScriptStruct* FSkelMeshSkinWeightInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkelMeshSkinWeightInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkelMeshSkinWeightInfo>()
{
	return FSkelMeshSkinWeightInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weights_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Weights;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Vertex skin weight info supplied for a component override. */" },
		{ "HasNativeBreak", "/Script/Engine.KismetRenderingLibrary.BreakSkinWeightInfo" },
		{ "HasNativeMake", "/Script/Engine.KismetRenderingLibrary.MakeSkinWeightInfo" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Vertex skin weight info supplied for a component override." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshSkinWeightInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones_MetaData[] = {
		{ "Comment", "/** Index of bones that influence this vertex */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Index of bones that influence this vertex" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Bones, FSkelMeshSkinWeightInfo), nullptr, nullptr, STRUCT_OFFSET(FSkelMeshSkinWeightInfo, Bones), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights_MetaData[] = {
		{ "Comment", "/** Influence of each bone on this vertex */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Influence of each bone on this vertex" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights = { "Weights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Weights, FSkelMeshSkinWeightInfo), nullptr, nullptr, STRUCT_OFFSET(FSkelMeshSkinWeightInfo, Weights), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Bones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewProp_Weights,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkelMeshSkinWeightInfo",
		sizeof(FSkelMeshSkinWeightInfo),
		alignof(FSkelMeshSkinWeightInfo),
		Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo.InnerSingleton, Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo;
class UScriptStruct* FSkelMeshComponentLODInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkelMeshComponentLODInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkelMeshComponentLODInfo>()
{
	return FSkelMeshComponentLODInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HiddenMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** LOD specific setup for the skeletal mesh component. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "LOD specific setup for the skeletal mesh component." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkelMeshComponentLODInfo>();
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_Inner = { "HiddenMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_MetaData[] = {
		{ "Comment", "/** Material corresponds to section. To show/hide each section, use this. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Material corresponds to section. To show/hide each section, use this." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials = { "HiddenMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkelMeshComponentLODInfo, HiddenMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewProp_HiddenMaterials,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkelMeshComponentLODInfo",
		sizeof(FSkelMeshComponentLODInfo),
		alignof(FSkelMeshComponentLODInfo),
		Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo.InnerSingleton, Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexOffsetUsage;
class UScriptStruct* FVertexOffsetUsage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexOffsetUsage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexOffsetUsage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexOffsetUsage, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("VertexOffsetUsage"));
	}
	return Z_Registration_Info_UScriptStruct_VertexOffsetUsage.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVertexOffsetUsage>()
{
	return FVertexOffsetUsage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Usage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Usage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexOffsetUsage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::NewProp_Usage_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Engine.EVertexOffsetUsageType" },
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVertexOffsetUsage, Usage), METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::NewProp_Usage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::NewProp_Usage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::NewProp_Usage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"VertexOffsetUsage",
		sizeof(FVertexOffsetUsage),
		alignof(FVertexOffsetUsage),
		Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexOffsetUsage()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexOffsetUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexOffsetUsage.InnerSingleton, Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexOffsetUsage.InnerSingleton;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetRenderStatic)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderStatic(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execIsMaterialSectionShown)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialID);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMaterialSectionShown(Z_Param_MaterialID,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execShowAllMaterialSections)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowAllMaterialSections(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execShowMaterialSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialID);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_UBOOL(Z_Param_bShow);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMaterialSection(Z_Param_MaterialID,Z_Param_SectionIndex,Z_Param_bShow,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execIsBoneHiddenByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBoneHiddenByName(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execUnHideBoneByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnHideBoneByName(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execHideBoneByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FByteProperty,Z_Param_PhysBodyOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideBoneByName(Z_Param_BoneName,EPhysBodyOp(Z_Param_PhysBodyOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execFindClosestBone_K2)
	{
		P_GET_STRUCT(FVector,Z_Param_TestLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoneLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_IgnoreScale);
		P_GET_UBOOL(Z_Param_bRequirePhysicsAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->FindClosestBone_K2(Z_Param_TestLocation,Z_Param_Out_BoneLocation,Z_Param_IgnoreScale,Z_Param_bRequirePhysicsAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execTransformFromBoneSpace)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_InPosition);
		P_GET_STRUCT(FRotator,Z_Param_InRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransformFromBoneSpace(Z_Param_BoneName,Z_Param_InPosition,Z_Param_InRotation,Z_Param_Out_OutPosition,Z_Param_Out_OutRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execTransformToBoneSpace)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FVector,Z_Param_InPosition);
		P_GET_STRUCT(FRotator,Z_Param_InRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosition);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransformToBoneSpace(Z_Param_BoneName,Z_Param_InPosition,Z_Param_InRotation,Z_Param_Out_OutPosition,Z_Param_Out_OutRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetRefPoseTransform)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BoneIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetRefPoseTransform(Z_Param_BoneIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetRefPosePosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BoneIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRefPosePosition(Z_Param_BoneIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execBoneIsChildOf)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParentBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BoneIsChildOf(Z_Param_BoneName,Z_Param_ParentBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetLeaderPoseComponent)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_NewLeaderBoneComponent);
		P_GET_UBOOL(Z_Param_bForceUpdate);
		P_GET_UBOOL(Z_Param_bInFollowerShouldTickPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeaderPoseComponent(Z_Param_NewLeaderBoneComponent,Z_Param_bForceUpdate,Z_Param_bInFollowerShouldTickPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetPredictedLODLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPredictedLODLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetPostSkinningOffsets)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_TARRAY(FVector,Z_Param_Offsets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPostSkinningOffsets(Z_Param_LODIndex,Z_Param_Offsets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetPreSkinningOffsets)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_TARRAY(FVector,Z_Param_Offsets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreSkinningOffsets(Z_Param_LODIndex,Z_Param_Offsets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetVertexOffsetUsage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_Usage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVertexOffsetUsage(Z_Param_LODIndex,Z_Param_Usage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetVertexOffsetUsage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetVertexOffsetUsage(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execIsUsingSkinWeightProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingSkinWeightProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetCurrentSkinWeightProfileName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCurrentSkinWeightProfileName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execUnloadSkinWeightProfile)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InProfileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnloadSkinWeightProfile(Z_Param_InProfileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execClearSkinWeightProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSkinWeightProfile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetSkinWeightProfile)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InProfileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSkinWeightProfile(Z_Param_InProfileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execClearSkinWeightOverride)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSkinWeightOverride(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetSkinWeightOverride)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_TARRAY_REF(FSkelMeshSkinWeightInfo,Z_Param_Out_SkinWeights);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkinWeightOverride(Z_Param_LODIndex,Z_Param_Out_SkinWeights);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execClearVertexColorOverride)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearVertexColorOverride(Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetVertexColorOverride_LinearColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVertexColorOverride_LinearColor(Z_Param_LODIndex,Z_Param_Out_VertexColors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetTwistAndSwingAngleOfDeltaRotationFromRefPose)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutTwistAngle);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutSwingAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTwistAndSwingAngleOfDeltaRotationFromRefPose(Z_Param_BoneName,Z_Param_Out_OutTwistAngle,Z_Param_Out_OutSwingAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetDeltaTransformFromRefPose)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FNameProperty,Z_Param_BaseName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetDeltaTransformFromRefPose(Z_Param_BoneName,Z_Param_BaseName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetParentBone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetParentBone(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execUnsetMeshDeformer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnsetMeshDeformer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetMeshDeformer)
	{
		P_GET_OBJECT(UMeshDeformer,Z_Param_InMeshDeformer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshDeformer(Z_Param_InMeshDeformer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetSkinnedAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkinnedAsset**)Z_Param__Result=P_THIS->GetSkinnedAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetSkinnedAssetAndUpdate)
	{
		P_GET_OBJECT(USkinnedAsset,Z_Param_NewMesh);
		P_GET_UBOOL(Z_Param_bReinitPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkinnedAssetAndUpdate(Z_Param_NewMesh,Z_Param_bReinitPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetSkeletalMesh_DEPRECATED)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetSkeletalMesh_DEPRECATED();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetSocketBoneName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSocketBoneName(Z_Param_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetBoneName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BoneIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetBoneName(Z_Param_BoneIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetBoneIndex)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBoneIndex(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetNumBones)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumBones();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetCapsuleIndirectShadowMinVisibility)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCapsuleIndirectShadowMinVisibility(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetCastCapsuleIndirectShadow)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCastCapsuleIndirectShadow(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetCastCapsuleDirectShadow)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCastCapsuleDirectShadow(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetForcedLOD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetForcedLOD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetForcedLOD)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNewForcedLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForcedLOD(Z_Param_InNewForcedLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetMinLOD)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InNewMinLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinLOD(Z_Param_InNewMinLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetNumLODs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumLODs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execSetPhysicsAsset)
	{
		P_GET_OBJECT(UPhysicsAsset,Z_Param_NewPhysicsAsset);
		P_GET_UBOOL(Z_Param_bForceReInit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPhysicsAsset(Z_Param_NewPhysicsAsset,Z_Param_bForceReInit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedMeshComponent::execGetMeshDeformerInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMeshDeformerInstance**)Z_Param__Result=P_THIS->GetMeshDeformerInstance();
		P_NATIVE_END;
	}
	void USkinnedMeshComponent::SetSkeletalMesh_WrapperImpl(void* Object, const void* InValue)
	{
		USkinnedMeshComponent* Obj = (USkinnedMeshComponent*)Object;
		USkeletalMesh*& Value = *(USkeletalMesh**)InValue;
		Obj->SetSkeletalMesh_DEPRECATED(Value);
	}
	void USkinnedMeshComponent::StaticRegisterNativesUSkinnedMeshComponent()
	{
		UClass* Class = USkinnedMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoneIsChildOf", &USkinnedMeshComponent::execBoneIsChildOf },
			{ "ClearSkinWeightOverride", &USkinnedMeshComponent::execClearSkinWeightOverride },
			{ "ClearSkinWeightProfile", &USkinnedMeshComponent::execClearSkinWeightProfile },
			{ "ClearVertexColorOverride", &USkinnedMeshComponent::execClearVertexColorOverride },
			{ "FindClosestBone_K2", &USkinnedMeshComponent::execFindClosestBone_K2 },
			{ "GetBoneIndex", &USkinnedMeshComponent::execGetBoneIndex },
			{ "GetBoneName", &USkinnedMeshComponent::execGetBoneName },
			{ "GetCurrentSkinWeightProfileName", &USkinnedMeshComponent::execGetCurrentSkinWeightProfileName },
			{ "GetDeltaTransformFromRefPose", &USkinnedMeshComponent::execGetDeltaTransformFromRefPose },
			{ "GetForcedLOD", &USkinnedMeshComponent::execGetForcedLOD },
			{ "GetMeshDeformerInstance", &USkinnedMeshComponent::execGetMeshDeformerInstance },
			{ "GetNumBones", &USkinnedMeshComponent::execGetNumBones },
			{ "GetNumLODs", &USkinnedMeshComponent::execGetNumLODs },
			{ "GetParentBone", &USkinnedMeshComponent::execGetParentBone },
			{ "GetPredictedLODLevel", &USkinnedMeshComponent::execGetPredictedLODLevel },
			{ "GetRefPosePosition", &USkinnedMeshComponent::execGetRefPosePosition },
			{ "GetRefPoseTransform", &USkinnedMeshComponent::execGetRefPoseTransform },
			{ "GetSkeletalMesh_DEPRECATED", &USkinnedMeshComponent::execGetSkeletalMesh_DEPRECATED },
			{ "GetSkinnedAsset", &USkinnedMeshComponent::execGetSkinnedAsset },
			{ "GetSocketBoneName", &USkinnedMeshComponent::execGetSocketBoneName },
			{ "GetTwistAndSwingAngleOfDeltaRotationFromRefPose", &USkinnedMeshComponent::execGetTwistAndSwingAngleOfDeltaRotationFromRefPose },
			{ "GetVertexOffsetUsage", &USkinnedMeshComponent::execGetVertexOffsetUsage },
			{ "HideBoneByName", &USkinnedMeshComponent::execHideBoneByName },
			{ "IsBoneHiddenByName", &USkinnedMeshComponent::execIsBoneHiddenByName },
			{ "IsMaterialSectionShown", &USkinnedMeshComponent::execIsMaterialSectionShown },
			{ "IsUsingSkinWeightProfile", &USkinnedMeshComponent::execIsUsingSkinWeightProfile },
			{ "SetCapsuleIndirectShadowMinVisibility", &USkinnedMeshComponent::execSetCapsuleIndirectShadowMinVisibility },
			{ "SetCastCapsuleDirectShadow", &USkinnedMeshComponent::execSetCastCapsuleDirectShadow },
			{ "SetCastCapsuleIndirectShadow", &USkinnedMeshComponent::execSetCastCapsuleIndirectShadow },
			{ "SetForcedLOD", &USkinnedMeshComponent::execSetForcedLOD },
			{ "SetLeaderPoseComponent", &USkinnedMeshComponent::execSetLeaderPoseComponent },
			{ "SetMeshDeformer", &USkinnedMeshComponent::execSetMeshDeformer },
			{ "SetMinLOD", &USkinnedMeshComponent::execSetMinLOD },
			{ "SetPhysicsAsset", &USkinnedMeshComponent::execSetPhysicsAsset },
			{ "SetPostSkinningOffsets", &USkinnedMeshComponent::execSetPostSkinningOffsets },
			{ "SetPreSkinningOffsets", &USkinnedMeshComponent::execSetPreSkinningOffsets },
			{ "SetRenderStatic", &USkinnedMeshComponent::execSetRenderStatic },
			{ "SetSkinnedAssetAndUpdate", &USkinnedMeshComponent::execSetSkinnedAssetAndUpdate },
			{ "SetSkinWeightOverride", &USkinnedMeshComponent::execSetSkinWeightOverride },
			{ "SetSkinWeightProfile", &USkinnedMeshComponent::execSetSkinWeightProfile },
			{ "SetVertexColorOverride_LinearColor", &USkinnedMeshComponent::execSetVertexColorOverride_LinearColor },
			{ "SetVertexOffsetUsage", &USkinnedMeshComponent::execSetVertexOffsetUsage },
			{ "ShowAllMaterialSections", &USkinnedMeshComponent::execShowAllMaterialSections },
			{ "ShowMaterialSection", &USkinnedMeshComponent::execShowMaterialSection },
			{ "TransformFromBoneSpace", &USkinnedMeshComponent::execTransformFromBoneSpace },
			{ "TransformToBoneSpace", &USkinnedMeshComponent::execTransformToBoneSpace },
			{ "UnHideBoneByName", &USkinnedMeshComponent::execUnHideBoneByName },
			{ "UnloadSkinWeightProfile", &USkinnedMeshComponent::execUnloadSkinWeightProfile },
			{ "UnsetMeshDeformer", &USkinnedMeshComponent::execUnsetMeshDeformer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics
	{
		struct SkinnedMeshComponent_eventBoneIsChildOf_Parms
		{
			FName BoneName;
			FName ParentBoneName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentBoneName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventBoneIsChildOf_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ParentBoneName = { "ParentBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventBoneIsChildOf_Parms, ParentBoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventBoneIsChildOf_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkinnedMeshComponent_eventBoneIsChildOf_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ParentBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Tests if BoneName is child of (or equal to) ParentBoneName.\n\x09 *\n\x09 * @param BoneName Name of the bone\n\x09 * @param ParentBone Name to check\n\x09 *\n\x09 * @return true if child (strictly, not same). false otherwise\n\x09 * Note - will return false if ChildBoneIndex is the same as ParentBoneIndex ie. must be strictly a child.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Tests if BoneName is child of (or equal to) ParentBoneName.\n\n@param BoneName Name of the bone\n@param ParentBone Name to check\n\n@return true if child (strictly, not same). false otherwise\nNote - will return false if ChildBoneIndex is the same as ParentBoneIndex ie. must be strictly a child." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "BoneIsChildOf", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::SkinnedMeshComponent_eventBoneIsChildOf_Parms), Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics
	{
		struct SkinnedMeshComponent_eventClearSkinWeightOverride_Parms
		{
			int32 LODIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventClearSkinWeightOverride_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Clear any applied skin weight override */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Clear any applied skin weight override" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ClearSkinWeightOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::SkinnedMeshComponent_eventClearSkinWeightOverride_Parms), Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Clear the Skin Weight Profile from this component, in case it is set */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Clear the Skin Weight Profile from this component, in case it is set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ClearSkinWeightProfile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics
	{
		struct SkinnedMeshComponent_eventClearVertexColorOverride_Parms
		{
			int32 LODIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventClearVertexColorOverride_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Clear any applied vertex color override */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Clear any applied vertex color override" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ClearVertexColorOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::SkinnedMeshComponent_eventClearVertexColorOverride_Parms), Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics
	{
		struct SkinnedMeshComponent_eventFindClosestBone_K2_Parms
		{
			FVector TestLocation;
			FVector BoneLocation;
			float IgnoreScale;
			bool bRequirePhysicsAsset;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TestLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneLocation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IgnoreScale;
		static void NewProp_bRequirePhysicsAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequirePhysicsAsset;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_TestLocation = { "TestLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, TestLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_BoneLocation = { "BoneLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, BoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_IgnoreScale = { "IgnoreScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, IgnoreScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventFindClosestBone_K2_Parms*)Obj)->bRequirePhysicsAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset = { "bRequirePhysicsAsset", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkinnedMeshComponent_eventFindClosestBone_K2_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventFindClosestBone_K2_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_TestLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_BoneLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_IgnoreScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_bRequirePhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bRequirePhysicsAsset" },
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** finds the closest bone to the given location\n\x09*\n\x09* @param TestLocation the location to test against\n\x09* @param BoneLocation (optional, out) if specified, set to the world space location of the bone that was found, or (0,0,0) if no bone was found\n\x09* @param IgnoreScale (optional) if specified, only bones with scaling larger than the specified factor are considered\n\x09* @param bRequirePhysicsAsset (optional) if true, only bones with physics will be considered\n\x09*\n\x09* @return the name of the bone that was found, or 'None' if no bone was found\n\x09*/" },
		{ "CPP_Default_bRequirePhysicsAsset", "false" },
		{ "CPP_Default_IgnoreScale", "0.000000" },
		{ "DisplayName", "Find Closest Bone" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "finds the closest bone to the given location\n\n@param TestLocation the location to test against\n@param BoneLocation (optional, out) if specified, set to the world space location of the bone that was found, or (0,0,0) if no bone was found\n@param IgnoreScale (optional) if specified, only bones with scaling larger than the specified factor are considered\n@param bRequirePhysicsAsset (optional) if true, only bones with physics will be considered\n\n@return the name of the bone that was found, or 'None' if no bone was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "FindClosestBone_K2", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::SkinnedMeshComponent_eventFindClosestBone_K2_Parms), Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics
	{
		struct SkinnedMeshComponent_eventGetBoneIndex_Parms
		{
			FName BoneName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneIndex_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Find the index of bone by name. Looks in the current SkeletalMesh being used by this SkeletalMeshComponent.\n\x09 * \n\x09 * @param BoneName Name of bone to look up\n\x09 * \n\x09 * @return Index of the named bone in the current SkeletalMesh. Will return INDEX_NONE if bone not found.\n\x09 *\n\x09 * @see USkeletalMesh::GetBoneIndex.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Find the index of bone by name. Looks in the current SkeletalMesh being used by this SkeletalMeshComponent.\n\n@param BoneName Name of bone to look up\n\n@return Index of the named bone in the current SkeletalMesh. Will return INDEX_NONE if bone not found.\n\n@see USkeletalMesh::GetBoneIndex." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetBoneIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::SkinnedMeshComponent_eventGetBoneIndex_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics
	{
		struct SkinnedMeshComponent_eventGetBoneName_Parms
		{
			int32 BoneIndex;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneName_Parms, BoneIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_BoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Get Bone Name from index\n\x09 * @param BoneIndex Index of the bone\n\x09 *\n\x09 * @return the name of the bone at the specified index \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get Bone Name from index\n@param BoneIndex Index of the bone\n\n@return the name of the bone at the specified index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetBoneName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::SkinnedMeshComponent_eventGetBoneName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics
	{
		struct SkinnedMeshComponent_eventGetCurrentSkinWeightProfileName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetCurrentSkinWeightProfileName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Return the name of the Skin Weight Profile that is currently set otherwise returns 'None' */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Return the name of the Skin Weight Profile that is currently set otherwise returns 'None'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetCurrentSkinWeightProfileName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::SkinnedMeshComponent_eventGetCurrentSkinWeightProfileName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics
	{
		struct SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms
		{
			FName BoneName;
			FName BaseName;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BaseName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms, BaseName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_BaseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09* Get delta transform from reference pose based on BaseNode.\n\x09* This uses last frame up-to-date transform, so it will have a frame delay if you use this info in the AnimGraph\n\x09*\n\x09* @param BoneName Name of the bone\n\x09* @param BaseName Name of the base bone - if none, it will use parent as a base\n\x09* \n\x09* @return the delta transform from refpose in that given space (BaseName)\n\x09*/" },
		{ "CPP_Default_BaseName", "None" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get delta transform from reference pose based on BaseNode.\nThis uses last frame up-to-date transform, so it will have a frame delay if you use this info in the AnimGraph\n\n@param BoneName Name of the bone\n@param BaseName Name of the base bone - if none, it will use parent as a base\n\n@return the delta transform from refpose in that given space (BaseName)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetDeltaTransformFromRefPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::SkinnedMeshComponent_eventGetDeltaTransformFromRefPose_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics
	{
		struct SkinnedMeshComponent_eventGetForcedLOD_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetForcedLOD_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Get ForcedLodModel of the mesh component. Note that the actual forced LOD level is the return value minus one and zero means no forced LOD */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get ForcedLodModel of the mesh component. Note that the actual forced LOD level is the return value minus one and zero means no forced LOD" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetForcedLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::SkinnedMeshComponent_eventGetForcedLOD_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics
	{
		struct SkinnedMeshComponent_eventGetMeshDeformerInstance_Parms
		{
			UMeshDeformerInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetMeshDeformerInstance_Parms, ReturnValue), Z_Construct_UClass_UMeshDeformerInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetMeshDeformerInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::SkinnedMeshComponent_eventGetMeshDeformerInstance_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics
	{
		struct SkinnedMeshComponent_eventGetNumBones_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetNumBones_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09*  Returns the number of bones in the skeleton.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Returns the number of bones in the skeleton." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetNumBones", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::SkinnedMeshComponent_eventGetNumBones_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics
	{
		struct SkinnedMeshComponent_eventGetNumLODs_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetNumLODs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Get the number of LODs on this component */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get the number of LODs on this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetNumLODs", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::SkinnedMeshComponent_eventGetNumLODs_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics
	{
		struct SkinnedMeshComponent_eventGetParentBone_Parms
		{
			FName BoneName;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetParentBone_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetParentBone_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Get Parent Bone of the input bone\n\x09 * \n\x09 * @param BoneName Name of the bone\n\x09 *\n\x09 * @return the name of the parent bone for the specified bone. Returns 'None' if the bone does not exist or it is the root bone \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get Parent Bone of the input bone\n\n@param BoneName Name of the bone\n\n@return the name of the parent bone for the specified bone. Returns 'None' if the bone does not exist or it is the root bone" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetParentBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::SkinnedMeshComponent_eventGetParentBone_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics
	{
		struct SkinnedMeshComponent_eventGetPredictedLODLevel_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetPredictedLODLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Get predicted LOD level. This value is usually calculated in UpdateLODStatus, but can be modified by skeletal mesh streaming. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get predicted LOD level. This value is usually calculated in UpdateLODStatus, but can be modified by skeletal mesh streaming." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetPredictedLODLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::SkinnedMeshComponent_eventGetPredictedLODLevel_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics
	{
		struct SkinnedMeshComponent_eventGetRefPosePosition_Parms
		{
			int32 BoneIndex;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetRefPosePosition_Parms, BoneIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetRefPosePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_BoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Gets the local-space position of a bone in the reference pose. \n\x09 *\n\x09 * @param BoneIndex Index of the bone\n\x09 *\n\x09 * @return Local space reference position \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Gets the local-space position of a bone in the reference pose.\n\n@param BoneIndex Index of the bone\n\n@return Local space reference position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetRefPosePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::SkinnedMeshComponent_eventGetRefPosePosition_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics
	{
		struct SkinnedMeshComponent_eventGetRefPoseTransform_Parms
		{
			int32 BoneIndex;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetRefPoseTransform_Parms, BoneIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetRefPoseTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::NewProp_BoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Gets the local-space transform of a bone in the reference pose. \n\x09 *\n\x09 * @param BoneIndex Index of the bone\n\x09 *\n\x09 * @return Local space reference transform \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Gets the local-space transform of a bone in the reference pose.\n\n@param BoneIndex Index of the bone\n\n@return Local space reference transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetRefPoseTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::SkinnedMeshComponent_eventGetRefPoseTransform_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics
	{
		struct SkinnedMeshComponent_eventGetSkeletalMesh_DEPRECATED_Parms
		{
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetSkeletalMesh_DEPRECATED_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use USkeletalMeshComponent::GetSkeletalMeshAsset() or GetSkinnedAsset() instead." },
		{ "DisplayName", "Get Skeletal Mesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetSkeletalMesh_DEPRECATED", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::SkinnedMeshComponent_eventGetSkeletalMesh_DEPRECATED_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics
	{
		struct SkinnedMeshComponent_eventGetSkinnedAsset_Parms
		{
			USkinnedAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetSkinnedAsset_Parms, ReturnValue), Z_Construct_UClass_USkinnedAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Get the SkinnedAsset rendered for this mesh.\n\x09 *\n\x09 * @return the SkinnedAsset set to this mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get the SkinnedAsset rendered for this mesh.\n\n@return the SkinnedAsset set to this mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetSkinnedAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::SkinnedMeshComponent_eventGetSkinnedAsset_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics
	{
		struct SkinnedMeshComponent_eventGetSocketBoneName_Parms
		{
			FName InSocketName;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetSocketBoneName_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetSocketBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_InSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Returns bone name linked to a given named socket on the skeletal mesh component.\n\x09 * If you're unsure to deal with sockets or bones names, you can use this function to filter through, and always return the bone name.\n\x09 *\n\x09 * @param\x09""bone name or socket name\n\x09 *\n\x09 * @return\x09""bone name\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Returns bone name linked to a given named socket on the skeletal mesh component.\nIf you're unsure to deal with sockets or bones names, you can use this function to filter through, and always return the bone name.\n\n@param       bone name or socket name\n\n@return      bone name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetSocketBoneName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::SkinnedMeshComponent_eventGetSocketBoneName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics
	{
		struct SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms
		{
			FName BoneName;
			float OutTwistAngle;
			float OutSwingAngle;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutTwistAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutSwingAngle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_OutTwistAngle = { "OutTwistAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms, OutTwistAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_OutSwingAngle = { "OutSwingAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms, OutSwingAngle), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_OutTwistAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_OutSwingAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Get Twist and Swing Angle in Degree of Delta Rotation from Reference Pose in Local space \n\x09 *\n\x09 * First this function gets rotation of current, and rotation of ref pose in local space, and \n\x09 * And gets twist/swing angle value from refpose aligned. \n\x09 * \n\x09 * @param BoneName Name of the bone\n\x09 * @param OutTwistAngle TwistAngle in degree\n\x09 * @param OutSwingAngle SwingAngle in degree\n\x09 *\n\x09 * @return true if succeed. False otherwise. Often due to incorrect bone name. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Get Twist and Swing Angle in Degree of Delta Rotation from Reference Pose in Local space\n\nFirst this function gets rotation of current, and rotation of ref pose in local space, and\nAnd gets twist/swing angle value from refpose aligned.\n\n@param BoneName Name of the bone\n@param OutTwistAngle TwistAngle in degree\n@param OutSwingAngle SwingAngle in degree\n\n@return true if succeed. False otherwise. Often due to incorrect bone name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetTwistAndSwingAngleOfDeltaRotationFromRefPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::SkinnedMeshComponent_eventGetTwistAndSwingAngleOfDeltaRotationFromRefPose_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics
	{
		struct SkinnedMeshComponent_eventGetVertexOffsetUsage_Parms
		{
			int32 LODIndex;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetVertexOffsetUsage_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventGetVertexOffsetUsage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "GetVertexOffsetUsage", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::SkinnedMeshComponent_eventGetVertexOffsetUsage_Parms), Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics
	{
		struct SkinnedMeshComponent_eventHideBoneByName_Parms
		{
			FName BoneName;
			TEnumAsByte<EPhysBodyOp> PhysBodyOption;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PhysBodyOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventHideBoneByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_PhysBodyOption = { "PhysBodyOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventHideBoneByName_Parms, PhysBodyOption), Z_Construct_UEnum_Engine_EPhysBodyOp, METADATA_PARAMS(nullptr, 0) }; // 139196241
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::NewProp_PhysBodyOption,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 *\x09Hides the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\n\x09 *\x09""Compared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n\x09 *\n\x09 *\x09@param  BoneName            Name of bone to hide\n\x09 *\x09@param\x09PhysBodyOption\x09\x09Option for physics bodies that attach to the bones to be hidden\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Hides the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\nCompared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n\n@param  BoneName            Name of bone to hide\n@param  PhysBodyOption          Option for physics bodies that attach to the bones to be hidden" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "HideBoneByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::SkinnedMeshComponent_eventHideBoneByName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics
	{
		struct SkinnedMeshComponent_eventIsBoneHiddenByName_Parms
		{
			FName BoneName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventIsBoneHiddenByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventIsBoneHiddenByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkinnedMeshComponent_eventIsBoneHiddenByName_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 *\x09""Determines if the specified bone is hidden. \n\x09 *\n\x09 *\x09@param  BoneName            Name of bone to check\n\x09 *\n\x09 *\x09@return true if hidden\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Determines if the specified bone is hidden.\n\n@param  BoneName            Name of bone to check\n\n@return true if hidden" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "IsBoneHiddenByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::SkinnedMeshComponent_eventIsBoneHiddenByName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics
	{
		struct SkinnedMeshComponent_eventIsMaterialSectionShown_Parms
		{
			int32 MaterialID;
			int32 LODIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_MaterialID = { "MaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventIsMaterialSectionShown_Parms, MaterialID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventIsMaterialSectionShown_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventIsMaterialSectionShown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkinnedMeshComponent_eventIsMaterialSectionShown_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_MaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Returns whether a specific material section is currently hidden on this component (by using ShowMaterialSection) */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Returns whether a specific material section is currently hidden on this component (by using ShowMaterialSection)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "IsMaterialSectionShown", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::SkinnedMeshComponent_eventIsMaterialSectionShown_Parms), Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics
	{
		struct SkinnedMeshComponent_eventIsUsingSkinWeightProfile_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventIsUsingSkinWeightProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkinnedMeshComponent_eventIsUsingSkinWeightProfile_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Check whether or not a Skin Weight Profile is currently set */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Check whether or not a Skin Weight Profile is currently set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "IsUsingSkinWeightProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::SkinnedMeshComponent_eventIsUsingSkinWeightProfile_Parms), Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics
	{
		struct SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetCapsuleIndirectShadowMinVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::SkinnedMeshComponent_eventSetCapsuleIndirectShadowMinVisibility_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics
	{
		struct SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetCastCapsuleDirectShadow", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::SkinnedMeshComponent_eventSetCastCapsuleDirectShadow_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics
	{
		struct SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lighting" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetCastCapsuleIndirectShadow", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::SkinnedMeshComponent_eventSetCastCapsuleIndirectShadow_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics
	{
		struct SkinnedMeshComponent_eventSetForcedLOD_Parms
		{
			int32 InNewForcedLOD;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNewForcedLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::NewProp_InNewForcedLOD = { "InNewForcedLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetForcedLOD_Parms, InNewForcedLOD), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::NewProp_InNewForcedLOD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Set ForcedLodModel of the mesh component\n\x09 *\n\x09 * @param\x09InNewForcedLOD\x09Set new ForcedLODModel that forces to set the incoming LOD. Range from [1, Max Number of LOD]. This will affect in the next tick update. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Set ForcedLodModel of the mesh component\n\n@param       InNewForcedLOD  Set new ForcedLODModel that forces to set the incoming LOD. Range from [1, Max Number of LOD]. This will affect in the next tick update." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetForcedLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::SkinnedMeshComponent_eventSetForcedLOD_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics
	{
		struct SkinnedMeshComponent_eventSetLeaderPoseComponent_Parms
		{
			USkinnedMeshComponent* NewLeaderBoneComponent;
			bool bForceUpdate;
			bool bInFollowerShouldTickPose;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLeaderBoneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewLeaderBoneComponent;
		static void NewProp_bForceUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUpdate;
		static void NewProp_bInFollowerShouldTickPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInFollowerShouldTickPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_NewLeaderBoneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_NewLeaderBoneComponent = { "NewLeaderBoneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetLeaderPoseComponent_Parms, NewLeaderBoneComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_NewLeaderBoneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_NewLeaderBoneComponent_MetaData)) };
	void Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bForceUpdate_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetLeaderPoseComponent_Parms*)Obj)->bForceUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bForceUpdate = { "bForceUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetLeaderPoseComponent_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bForceUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bInFollowerShouldTickPose_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetLeaderPoseComponent_Parms*)Obj)->bInFollowerShouldTickPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bInFollowerShouldTickPose = { "bInFollowerShouldTickPose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetLeaderPoseComponent_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bInFollowerShouldTickPose_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_NewLeaderBoneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bForceUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::NewProp_bInFollowerShouldTickPose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Set LeaderPoseComponent for this component\n\x09 *\n\x09 * @param NewLeaderBoneComponent New LeaderPoseComponent\n\x09 * @param bForceUpdate If false, the function will be skipped if NewLeaderBoneComponent is the same as currently setup (default)\n\x09 * @param bInFollowerShouldTickPose If false, Follower components will not execute TickPose (default)\n\x09 */" },
		{ "CPP_Default_bForceUpdate", "false" },
		{ "CPP_Default_bInFollowerShouldTickPose", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Set LeaderPoseComponent for this component\n\n@param NewLeaderBoneComponent New LeaderPoseComponent\n@param bForceUpdate If false, the function will be skipped if NewLeaderBoneComponent is the same as currently setup (default)\n@param bInFollowerShouldTickPose If false, Follower components will not execute TickPose (default)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetLeaderPoseComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::SkinnedMeshComponent_eventSetLeaderPoseComponent_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics
	{
		struct SkinnedMeshComponent_eventSetMeshDeformer_Parms
		{
			UMeshDeformer* InMeshDeformer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMeshDeformer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::NewProp_InMeshDeformer = { "InMeshDeformer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetMeshDeformer_Parms, InMeshDeformer), Z_Construct_UClass_UMeshDeformer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::NewProp_InMeshDeformer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Change the MeshDeformer that is used for this Component.\n\x09 *\n\x09 * @param InMeshDeformer New mesh deformer to set for this component\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Change the MeshDeformer that is used for this Component.\n\n@param InMeshDeformer New mesh deformer to set for this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetMeshDeformer", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::SkinnedMeshComponent_eventSetMeshDeformer_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics
	{
		struct SkinnedMeshComponent_eventSetMinLOD_Parms
		{
			int32 InNewMinLOD;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNewMinLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::NewProp_InNewMinLOD = { "InNewMinLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetMinLOD_Parms, InNewMinLOD), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::NewProp_InNewMinLOD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Set MinLodModel of the mesh component\n\x09 *\n\x09 * @param\x09InNewMinLOD\x09Set new MinLodModel that make sure the LOD does not go below of this value. Range from [0, Max Number of LOD - 1]. This will affect in the next tick update. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Set MinLodModel of the mesh component\n\n@param       InNewMinLOD     Set new MinLodModel that make sure the LOD does not go below of this value. Range from [0, Max Number of LOD - 1]. This will affect in the next tick update." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetMinLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::SkinnedMeshComponent_eventSetMinLOD_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics
	{
		struct SkinnedMeshComponent_eventSetPhysicsAsset_Parms
		{
			UPhysicsAsset* NewPhysicsAsset;
			bool bForceReInit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPhysicsAsset;
		static void NewProp_bForceReInit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReInit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_NewPhysicsAsset = { "NewPhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetPhysicsAsset_Parms, NewPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetPhysicsAsset_Parms*)Obj)->bForceReInit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit = { "bForceReInit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetPhysicsAsset_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_NewPhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::NewProp_bForceReInit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** \n\x09 * Override the Physics Asset of the mesh. It uses SkeletalMesh.PhysicsAsset, but if you'd like to override use this function\n\x09 * \n\x09 * @param\x09NewPhysicsAsset\x09New PhysicsAsset\n\x09 * @param\x09""bForceReInit\x09""Force reinitialize\n\x09 */" },
		{ "CPP_Default_bForceReInit", "false" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Override the Physics Asset of the mesh. It uses SkeletalMesh.PhysicsAsset, but if you'd like to override use this function\n\n@param       NewPhysicsAsset New PhysicsAsset\n@param       bForceReInit    Force reinitialize" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetPhysicsAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::SkinnedMeshComponent_eventSetPhysicsAsset_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics
	{
		struct SkinnedMeshComponent_eventSetPostSkinningOffsets_Parms
		{
			int32 LODIndex;
			TArray<FVector> Offsets;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offsets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Offsets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetPostSkinningOffsets_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::NewProp_Offsets_Inner = { "Offsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::NewProp_Offsets = { "Offsets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetPostSkinningOffsets_Parms, Offsets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::NewProp_Offsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::NewProp_Offsets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetPostSkinningOffsets", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::SkinnedMeshComponent_eventSetPostSkinningOffsets_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics
	{
		struct SkinnedMeshComponent_eventSetPreSkinningOffsets_Parms
		{
			int32 LODIndex;
			TArray<FVector> Offsets;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offsets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Offsets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetPreSkinningOffsets_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::NewProp_Offsets_Inner = { "Offsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::NewProp_Offsets = { "Offsets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetPreSkinningOffsets_Parms, Offsets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::NewProp_Offsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::NewProp_Offsets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetPreSkinningOffsets", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::SkinnedMeshComponent_eventSetPreSkinningOffsets_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics
	{
		struct SkinnedMeshComponent_eventSetRenderStatic_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetRenderStatic_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetRenderStatic_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Set whether this skinned mesh should be rendered as static mesh in a reference pose\n\x09 *\n\x09 * @param\x09whether this skinned mesh should be rendered as static\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Set whether this skinned mesh should be rendered as static mesh in a reference pose\n\n@param       whether this skinned mesh should be rendered as static" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetRenderStatic", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::SkinnedMeshComponent_eventSetRenderStatic_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics
	{
		struct SkinnedMeshComponent_eventSetSkinnedAssetAndUpdate_Parms
		{
			USkinnedAsset* NewMesh;
			bool bReinitPose;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMesh;
		static void NewProp_bReinitPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::NewProp_NewMesh = { "NewMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkinnedAssetAndUpdate_Parms, NewMesh), Z_Construct_UClass_USkinnedAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::NewProp_bReinitPose_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetSkinnedAssetAndUpdate_Parms*)Obj)->bReinitPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::NewProp_bReinitPose = { "bReinitPose", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetSkinnedAssetAndUpdate_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::NewProp_bReinitPose_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::NewProp_NewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::NewProp_bReinitPose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Change the SkinnedAsset that is rendered for this Component. Will re-initialize the animation tree etc.\n\x09 *\n\x09 * @param NewMesh New mesh to set for this component\n\x09 * @param bReinitPose Whether we should keep current pose or reinitialize.\n\x09 */" },
		{ "CPP_Default_bReinitPose", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Change the SkinnedAsset that is rendered for this Component. Will re-initialize the animation tree etc.\n\n@param NewMesh New mesh to set for this component\n@param bReinitPose Whether we should keep current pose or reinitialize." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetSkinnedAssetAndUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::SkinnedMeshComponent_eventSetSkinnedAssetAndUpdate_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics
	{
		struct SkinnedMeshComponent_eventSetSkinWeightOverride_Parms
		{
			int32 LODIndex;
			TArray<FSkelMeshSkinWeightInfo> SkinWeights;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkinWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkinWeights;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkinWeightOverride_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_Inner = { "SkinWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, METADATA_PARAMS(nullptr, 0) }; // 1814556409
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights = { "SkinWeights", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkinWeightOverride_Parms, SkinWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_MetaData)) }; // 1814556409
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::NewProp_SkinWeights,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Allow override of skin weights on a per-component basis. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allow override of skin weights on a per-component basis." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetSkinWeightOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::SkinnedMeshComponent_eventSetSkinWeightOverride_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics
	{
		struct SkinnedMeshComponent_eventSetSkinWeightProfile_Parms
		{
			FName InProfileName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InProfileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_InProfileName = { "InProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetSkinWeightProfile_Parms, InProfileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventSetSkinWeightProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkinnedMeshComponent_eventSetSkinWeightProfile_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_InProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Setup an override Skin Weight Profile for this component */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Setup an override Skin Weight Profile for this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetSkinWeightProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::SkinnedMeshComponent_eventSetSkinWeightProfile_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics
	{
		struct SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms
		{
			int32 LODIndex;
			TArray<FLinearColor> VertexColors;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::NewProp_VertexColors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Allow override of vertex colors on a per-component basis, taking array of Blueprint-friendly LinearColors. */" },
		{ "DisplayName", "Set Vertex Color Override" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allow override of vertex colors on a per-component basis, taking array of Blueprint-friendly LinearColors." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetVertexColorOverride_LinearColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::SkinnedMeshComponent_eventSetVertexColorOverride_LinearColor_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics
	{
		struct SkinnedMeshComponent_eventSetVertexOffsetUsage_Parms
		{
			int32 LODIndex;
			int32 Usage;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Usage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetVertexOffsetUsage_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventSetVertexOffsetUsage_Parms, Usage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::NewProp_Usage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "SetVertexOffsetUsage", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::SkinnedMeshComponent_eventSetVertexOffsetUsage_Parms), Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics
	{
		struct SkinnedMeshComponent_eventShowAllMaterialSections_Parms
		{
			int32 LODIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventShowAllMaterialSections_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Clear any material visibility modifications made by ShowMaterialSection */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Clear any material visibility modifications made by ShowMaterialSection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ShowAllMaterialSections", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::SkinnedMeshComponent_eventShowAllMaterialSections_Parms), Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics
	{
		struct SkinnedMeshComponent_eventShowMaterialSection_Parms
		{
			int32 MaterialID;
			int32 SectionIndex;
			bool bShow;
			int32 LODIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_bShow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_MaterialID = { "MaterialID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventShowMaterialSection_Parms, MaterialID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventShowMaterialSection_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((SkinnedMeshComponent_eventShowMaterialSection_Parms*)Obj)->bShow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkinnedMeshComponent_eventShowMaterialSection_Parms), &Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventShowMaterialSection_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_MaterialID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_bShow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::NewProp_LODIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 *\x09""Allows hiding of a particular material (by ID) on this instance of a SkeletalMesh.\n\x09 *\n\x09 * @param MaterialID - Index of the material show/hide\n\x09 * @param bShow - True to show the material, false to hide it\n\x09 * @param LODIndex - Index of the LOD to modify material visibility within\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allows hiding of a particular material (by ID) on this instance of a SkeletalMesh.\n\n@param MaterialID - Index of the material show/hide\n@param bShow - True to show the material, false to hide it\n@param LODIndex - Index of the LOD to modify material visibility within" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "ShowMaterialSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::SkinnedMeshComponent_eventShowMaterialSection_Parms), Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics
	{
		struct SkinnedMeshComponent_eventTransformFromBoneSpace_Parms
		{
			FName BoneName;
			FVector InPosition;
			FRotator InRotation;
			FVector OutPosition;
			FRotator OutRotation;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformFromBoneSpace_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_InRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::NewProp_OutRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 *\x09Transform a location/rotation in bone relative space to world space.\n\x09 *\n\x09 * @param BoneName Name of bone\n\x09 * @param InPosition Input position\n\x09 * @param InRotation Input rotation\n\x09 * @param OutPosition (out) Transformed position\n\x09 * @param OutRotation (out) Transformed rotation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Transform a location/rotation in bone relative space to world space.\n\n@param BoneName Name of bone\n@param InPosition Input position\n@param InRotation Input rotation\n@param OutPosition (out) Transformed position\n@param OutRotation (out) Transformed rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "TransformFromBoneSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::SkinnedMeshComponent_eventTransformFromBoneSpace_Parms), Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics
	{
		struct SkinnedMeshComponent_eventTransformToBoneSpace_Parms
		{
			FName BoneName;
			FVector InPosition;
			FRotator InRotation;
			FVector OutPosition;
			FRotator OutRotation;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, InPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InRotation = { "InRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, InRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutPosition = { "OutPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, OutPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventTransformToBoneSpace_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_InRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::NewProp_OutRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 *\x09Transform a location/rotation from world space to bone relative space.\n\x09 *\x09This is handy if you know the location in world space for a bone attachment, as AttachComponent takes location/rotation in bone-relative space.\n\x09 *\n\x09 * @param BoneName Name of bone\n\x09 * @param InPosition Input position\n\x09 * @param InRotation Input rotation\n\x09 * @param OutPosition (out) Transformed position\n\x09 * @param OutRotation (out) Transformed rotation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Transform a location/rotation from world space to bone relative space.\nThis is handy if you know the location in world space for a bone attachment, as AttachComponent takes location/rotation in bone-relative space.\n\n@param BoneName Name of bone\n@param InPosition Input position\n@param InRotation Input rotation\n@param OutPosition (out) Transformed position\n@param OutRotation (out) Transformed rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "TransformToBoneSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::SkinnedMeshComponent_eventTransformToBoneSpace_Parms), Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics
	{
		struct SkinnedMeshComponent_eventUnHideBoneByName_Parms
		{
			FName BoneName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventUnHideBoneByName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 *\x09UnHide the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\n\x09 *\x09""Compared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n\x09 *\x09@param  BoneName            Name of bone to unhide\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "UnHide the specified bone with name.  Currently this just enforces a scale of 0 for the hidden bones.\nCompared to HideBone By Index - This keeps track of list of bones and update when LOD changes\n@param  BoneName            Name of bone to unhide" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "UnHideBoneByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::SkinnedMeshComponent_eventUnHideBoneByName_Parms), Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics
	{
		struct SkinnedMeshComponent_eventUnloadSkinWeightProfile_Parms
		{
			FName InProfileName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InProfileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::NewProp_InProfileName = { "InProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedMeshComponent_eventUnloadSkinWeightProfile_Parms, InProfileName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::NewProp_InProfileName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/** Unload a Skin Weight Profile's skin weight buffer (if created) */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Unload a Skin Weight Profile's skin weight buffer (if created)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "UnloadSkinWeightProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::SkinnedMeshComponent_eventUnloadSkinWeightProfile_Parms), Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedMeshComponent_UnsetMeshDeformer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedMeshComponent_UnsetMeshDeformer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkinnedMesh" },
		{ "Comment", "/**\n\x09 * Unset any MeshDeformer applied to this Component.\n\x09 *\n\x09 * @param InMeshDeformer New mesh deformer to set for this component\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Unset any MeshDeformer applied to this Component.\n\n@param InMeshDeformer New mesh deformer to set for this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedMeshComponent_UnsetMeshDeformer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedMeshComponent, nullptr, "UnsetMeshDeformer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedMeshComponent_UnsetMeshDeformer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedMeshComponent_UnsetMeshDeformer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedMeshComponent_UnsetMeshDeformer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedMeshComponent_UnsetMeshDeformer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkinnedMeshComponent);
	UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister()
	{
		return USkinnedMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_USkinnedMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkinnedAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaderPoseComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LeaderPoseComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkinCacheUsage_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkinCacheUsage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinCacheUsage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkinCacheUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetMeshDeformer_MetaData[];
#endif
		static void NewProp_bSetMeshDeformer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetMeshDeformer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshDeformer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshDeformer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshDeformerInstanceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshDeformerInstanceSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshDeformerInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshDeformerInstance;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireframeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WireframeColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAssetOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicsAssetOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForcedLodModel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ForcedLodModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLodModel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinLodModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingDistanceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StreamingDistanceMultiplier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VisibilityBasedAnimTickOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityBasedAnimTickOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VisibilityBasedAnimTickOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMinLod_MetaData[];
#endif
		static void NewProp_bOverrideMinLod_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMinLod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBoundsFromLeaderPoseComponent_MetaData[];
#endif
		static void NewProp_bUseBoundsFromLeaderPoseComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBoundsFromLeaderPoseComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceWireframe_MetaData[];
#endif
		static void NewProp_bForceWireframe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceWireframe;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayBones_MetaData[];
#endif
		static void NewProp_bDisplayBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayBones;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableMorphTarget_MetaData[];
#endif
		static void NewProp_bDisableMorphTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableMorphTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideSkin_MetaData[];
#endif
		static void NewProp_bHideSkin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideSkin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPerBoneMotionBlur_MetaData[];
#endif
		static void NewProp_bPerBoneMotionBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerBoneMotionBlur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComponentUseFixedSkelBounds_MetaData[];
#endif
		static void NewProp_bComponentUseFixedSkelBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComponentUseFixedSkelBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsiderAllBodiesForBounds_MetaData[];
#endif
		static void NewProp_bConsiderAllBodiesForBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsiderAllBodiesForBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSyncAttachParentLOD_MetaData[];
#endif
		static void NewProp_bSyncAttachParentLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncAttachParentLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanHighlightSelectedSections_MetaData[];
#endif
		static void NewProp_bCanHighlightSelectedSections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanHighlightSelectedSections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecentlyRendered_MetaData[];
#endif
		static void NewProp_bRecentlyRendered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecentlyRendered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastCapsuleDirectShadow_MetaData[];
#endif
		static void NewProp_bCastCapsuleDirectShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastCapsuleDirectShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastCapsuleIndirectShadow_MetaData[];
#endif
		static void NewProp_bCastCapsuleIndirectShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastCapsuleIndirectShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCPUSkinning_MetaData[];
#endif
		static void NewProp_bCPUSkinning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCPUSkinning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUpdateRateOptimizations_MetaData[];
#endif
		static void NewProp_bEnableUpdateRateOptimizations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUpdateRateOptimizations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayDebugUpdateRateOptimizations_MetaData[];
#endif
		static void NewProp_bDisplayDebugUpdateRateOptimizations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayDebugUpdateRateOptimizations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderStatic_MetaData[];
#endif
		static void NewProp_bRenderStatic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderStatic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreLeaderPoseComponentLOD_MetaData[];
#endif
		static void NewProp_bIgnoreLeaderPoseComponentLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreLeaderPoseComponentLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCachedLocalBoundsUpToDate_MetaData[];
#endif
		static void NewProp_bCachedLocalBoundsUpToDate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedLocalBoundsUpToDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCachedWorldSpaceBoundsUpToDate_MetaData[];
#endif
		static void NewProp_bCachedWorldSpaceBoundsUpToDate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedWorldSpaceBoundsUpToDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceMeshObjectUpdate_MetaData[];
#endif
		static void NewProp_bForceMeshObjectUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceMeshObjectUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceUpdateDynamicDataImmediately_MetaData[];
#endif
		static void NewProp_bForceUpdateDynamicDataImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUpdateDynamicDataImmediately;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowerShouldTickPose_MetaData[];
#endif
		static void NewProp_bFollowerShouldTickPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowerShouldTickPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleIndirectShadowMinVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleIndirectShadowMinVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedWorldOrLocalSpaceBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedWorldOrLocalSpaceBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedWorldToLocalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedWorldToLocalTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkinnedMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkinnedMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkinnedMeshComponent_BoneIsChildOf, "BoneIsChildOf" }, // 10915865
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightOverride, "ClearSkinWeightOverride" }, // 2631261084
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ClearSkinWeightProfile, "ClearSkinWeightProfile" }, // 1190661981
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ClearVertexColorOverride, "ClearVertexColorOverride" }, // 3040764974
		{ &Z_Construct_UFunction_USkinnedMeshComponent_FindClosestBone_K2, "FindClosestBone_K2" }, // 809442740
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetBoneIndex, "GetBoneIndex" }, // 3413278580
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetBoneName, "GetBoneName" }, // 1360014383
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetCurrentSkinWeightProfileName, "GetCurrentSkinWeightProfileName" }, // 2567520145
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetDeltaTransformFromRefPose, "GetDeltaTransformFromRefPose" }, // 4018504465
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetForcedLOD, "GetForcedLOD" }, // 3339386367
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetMeshDeformerInstance, "GetMeshDeformerInstance" }, // 1969579038
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetNumBones, "GetNumBones" }, // 1917879097
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetNumLODs, "GetNumLODs" }, // 1749422315
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetParentBone, "GetParentBone" }, // 1661917262
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetPredictedLODLevel, "GetPredictedLODLevel" }, // 928236916
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetRefPosePosition, "GetRefPosePosition" }, // 182541204
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetRefPoseTransform, "GetRefPoseTransform" }, // 595259096
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetSkeletalMesh_DEPRECATED, "GetSkeletalMesh_DEPRECATED" }, // 1754725373
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetSkinnedAsset, "GetSkinnedAsset" }, // 4209479861
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetSocketBoneName, "GetSocketBoneName" }, // 215601505
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetTwistAndSwingAngleOfDeltaRotationFromRefPose, "GetTwistAndSwingAngleOfDeltaRotationFromRefPose" }, // 365764685
		{ &Z_Construct_UFunction_USkinnedMeshComponent_GetVertexOffsetUsage, "GetVertexOffsetUsage" }, // 846669644
		{ &Z_Construct_UFunction_USkinnedMeshComponent_HideBoneByName, "HideBoneByName" }, // 2280338259
		{ &Z_Construct_UFunction_USkinnedMeshComponent_IsBoneHiddenByName, "IsBoneHiddenByName" }, // 2357388155
		{ &Z_Construct_UFunction_USkinnedMeshComponent_IsMaterialSectionShown, "IsMaterialSectionShown" }, // 70028437
		{ &Z_Construct_UFunction_USkinnedMeshComponent_IsUsingSkinWeightProfile, "IsUsingSkinWeightProfile" }, // 3876481534
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetCapsuleIndirectShadowMinVisibility, "SetCapsuleIndirectShadowMinVisibility" }, // 430845913
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleDirectShadow, "SetCastCapsuleDirectShadow" }, // 3502493562
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetCastCapsuleIndirectShadow, "SetCastCapsuleIndirectShadow" }, // 2938582816
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetForcedLOD, "SetForcedLOD" }, // 3006928755
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetLeaderPoseComponent, "SetLeaderPoseComponent" }, // 3619635492
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetMeshDeformer, "SetMeshDeformer" }, // 2861366106
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetMinLOD, "SetMinLOD" }, // 3953141868
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetPhysicsAsset, "SetPhysicsAsset" }, // 3495338460
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetPostSkinningOffsets, "SetPostSkinningOffsets" }, // 536994632
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetPreSkinningOffsets, "SetPreSkinningOffsets" }, // 2298028774
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetRenderStatic, "SetRenderStatic" }, // 2530558355
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetSkinnedAssetAndUpdate, "SetSkinnedAssetAndUpdate" }, // 1127757144
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightOverride, "SetSkinWeightOverride" }, // 2920547111
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetSkinWeightProfile, "SetSkinWeightProfile" }, // 3015611011
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetVertexColorOverride_LinearColor, "SetVertexColorOverride_LinearColor" }, // 1294420861
		{ &Z_Construct_UFunction_USkinnedMeshComponent_SetVertexOffsetUsage, "SetVertexOffsetUsage" }, // 1724373139
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ShowAllMaterialSections, "ShowAllMaterialSections" }, // 1187263432
		{ &Z_Construct_UFunction_USkinnedMeshComponent_ShowMaterialSection, "ShowMaterialSection" }, // 579257447
		{ &Z_Construct_UFunction_USkinnedMeshComponent_TransformFromBoneSpace, "TransformFromBoneSpace" }, // 349803702
		{ &Z_Construct_UFunction_USkinnedMeshComponent_TransformToBoneSpace, "TransformToBoneSpace" }, // 3043791405
		{ &Z_Construct_UFunction_USkinnedMeshComponent_UnHideBoneByName, "UnHideBoneByName" }, // 421697359
		{ &Z_Construct_UFunction_USkinnedMeshComponent_UnloadSkinWeightProfile, "UnloadSkinWeightProfile" }, // 2090809363
		{ &Z_Construct_UFunction_USkinnedMeshComponent_UnsetMeshDeformer, "UnsetMeshDeformer" }, // 811538754
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Skinned mesh component that supports bone skinned mesh rendering.\n * This class does not support animation.\n *\n * @see USkeletalMeshComponent\n*/" },
		{ "HideCategories", "Object Mobility Trigger" },
		{ "IncludePath", "Components/SkinnedMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Skinned mesh component that supports bone skinned mesh rendering.\nThis class does not support animation.\n\n@see USkeletalMeshComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "BlueprintGetter", "GetSkeletalMesh_DEPRECATED" },
		{ "Category", "Mesh|SkeletalAsset" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use USkeletalMeshComponent::GetSkeletalMeshAsset() or GetSkinnedAsset() instead." },
		{ "DisallowedClasses", "/Script/ApexDestruction.DestructibleMesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USkinnedMeshComponent::SetSkeletalMesh_WrapperImpl, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinnedAsset_MetaData[] = {
		{ "BlueprintGetter", "GetSkinnedAsset" },
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinnedAsset = { "SkinnedAsset", nullptr, (EPropertyFlags)0x0044000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, SkinnedAsset), Z_Construct_UClass_USkinnedAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinnedAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinnedAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LeaderPoseComponent_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**\n\x09 *\x09If set, this SkeletalMeshComponent will not use its SpaceBase for bone transform, but will\n\x09 *\x09use the component space transforms from the LeaderPoseComponent. This is used when constructing a character using multiple skeletal meshes sharing the same\n\x09 *\x09skeleton within the same Actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If set, this SkeletalMeshComponent will not use its SpaceBase for bone transform, but will\nuse the component space transforms from the LeaderPoseComponent. This is used when constructing a character using multiple skeletal meshes sharing the same\nskeleton within the same Actor." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LeaderPoseComponent = { "LeaderPoseComponent", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, LeaderPoseComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LeaderPoseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LeaderPoseComponent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_Inner = { "SkinCacheUsage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_ESkinCacheUsage, METADATA_PARAMS(nullptr, 0) }; // 2968129465
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**\n\x09 * How this Component's LOD uses the skin cache feature. Auto will defer to the asset's (SkeletalMesh) option. If Ray Tracing is enabled, will imply Enabled\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "How this Component's LOD uses the skin cache feature. Auto will defer to the asset's (SkeletalMesh) option. If Ray Tracing is enabled, will imply Enabled" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage = { "SkinCacheUsage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, SkinCacheUsage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_MetaData)) }; // 2968129465
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSetMeshDeformer_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** If true, MeshDeformer will be used. If false, use the default mesh deformer on the SkeletalMesh. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, MeshDeformer will be used. If false, use the default mesh deformer on the SkeletalMesh." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSetMeshDeformer_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bSetMeshDeformer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSetMeshDeformer = { "bSetMeshDeformer", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSetMeshDeformer_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSetMeshDeformer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSetMeshDeformer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformer_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** The mesh deformer to use. If no mesh deformer is set from here or the SkeletalMesh, then we fall back to the fixed function deformation. */" },
		{ "editcondition", "bSetMeshDeformer" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "The mesh deformer to use. If no mesh deformer is set from here or the SkeletalMesh, then we fall back to the fixed function deformation." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformer = { "MeshDeformer", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, MeshDeformer), Z_Construct_UClass_UMeshDeformer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstanceSettings_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Object containing instance settings for the bound MeshDeformer. */" },
		{ "DisplayName", "Deformer Settings" },
		{ "EditCondition", "MeshDeformerInstanceSettings!=nullptr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Object containing instance settings for the bound MeshDeformer." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstanceSettings = { "MeshDeformerInstanceSettings", nullptr, (EPropertyFlags)0x00260800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, MeshDeformerInstanceSettings), Z_Construct_UClass_UMeshDeformerInstanceSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstanceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstanceSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstance_MetaData[] = {
		{ "BlueprintGetter", "GetMeshDeformerInstance" },
		{ "Category", "Deformer" },
		{ "Comment", "/** Object containing state for the bound MeshDeformer. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Object containing state for the bound MeshDeformer." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstance = { "MeshDeformerInstance", nullptr, (EPropertyFlags)0x0024080000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, MeshDeformerInstance), Z_Construct_UClass_UMeshDeformerInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstance_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Wireframe color\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Wireframe color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor = { "WireframeColor", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, WireframeColor_DEPRECATED), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09 *\x09PhysicsAsset is set in SkeletalMesh by default, but you can override with this value\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "PhysicsAsset is set in SkeletalMesh by default, but you can override with this value" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride = { "PhysicsAssetOverride", nullptr, (EPropertyFlags)0x0014040000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, PhysicsAssetOverride), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel_MetaData[] = {
		{ "Category", "LOD" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel = { "ForcedLodModel", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, ForcedLodModel), METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/**\n\x09 * This is the min LOD that this component will use.  (e.g. if set to 2 then only 2+ LOD Models will be used.) This is useful to set on\n\x09 * meshes which are known to be a certain distance away and still want to have better LODs when zoomed in on them.\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "This is the min LOD that this component will use.  (e.g. if set to 2 then only 2+ LOD Models will be used.) This is useful to set on\nmeshes which are known to be a certain distance away and still want to have better LODs when zoomed in on them." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel = { "MinLodModel", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, MinLodModel), METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/**\n\x09 * Allows adjusting the desired streaming distance of streaming textures that uses UV 0.\n\x09 * 1.0 is the default, whereas a higher value makes the textures stream in sooner from far away.\n\x09 * A lower value (0.0-1.0) makes the textures stream in later (you have to be closer).\n\x09 * Value can be < 0 (from legcay content, or code changes)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Allows adjusting the desired streaming distance of streaming textures that uses UV 0.\n1.0 is the default, whereas a higher value makes the textures stream in sooner from far away.\nA lower value (0.0-1.0) makes the textures stream in later (you have to be closer).\nValue can be < 0 (from legcay content, or code changes)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier = { "StreamingDistanceMultiplier", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, StreamingDistanceMultiplier), METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_Inner = { "LODInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo, METADATA_PARAMS(nullptr, 0) }; // 4165515543
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_MetaData[] = {
		{ "Comment", "/** LOD array info. Each index will correspond to the LOD index **/" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "LOD array info. Each index will correspond to the LOD index *" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo = { "LODInfo", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, LODInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_MetaData)) }; // 4165515543
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/*\n\x09 * This is tick animation frequency option based on this component rendered or not or using montage\n\x09 *  You can change this default value in the INI file \n\x09 * Mostly related with performance\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "* This is tick animation frequency option based on this component rendered or not or using montage\n*  You can change this default value in the INI file\n* Mostly related with performance" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption = { "VisibilityBasedAnimTickOption", nullptr, (EPropertyFlags)0x0010040200004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, VisibilityBasedAnimTickOption), Z_Construct_UEnum_Engine_EVisibilityBasedAnimTickOption, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_MetaData)) }; // 2994354799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Whether we should use the min lod specified in MinLodModel for this component instead of the min lod in the mesh */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether we should use the min lod specified in MinLodModel for this component instead of the min lod in the mesh" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bOverrideMinLod = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod = { "bOverrideMinLod", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromLeaderPoseComponent_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** \n\x09 * When true, we will just using the bounds from our LeaderPoseComponent.  This is useful for when we have a Mesh Parented\n\x09 * to the main SkelMesh (e.g. outline mesh or a full body overdraw effect that is toggled) that is always going to be the same\n\x09 * bounds as parent.  We want to do no calculations in that case.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "When true, we will just using the bounds from our LeaderPoseComponent.  This is useful for when we have a Mesh Parented\nto the main SkelMesh (e.g. outline mesh or a full body overdraw effect that is toggled) that is always going to be the same\nbounds as parent.  We want to do no calculations in that case." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromLeaderPoseComponent_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bUseBoundsFromLeaderPoseComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromLeaderPoseComponent = { "bUseBoundsFromLeaderPoseComponent", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromLeaderPoseComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromLeaderPoseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromLeaderPoseComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_MetaData[] = {
		{ "Comment", "/** Forces the mesh to draw in wireframe mode. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Forces the mesh to draw in wireframe mode." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bForceWireframe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe = { "bForceWireframe", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_MetaData[] = {
		{ "Comment", "/** Draw the skeleton hierarchy for this skel mesh. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Draw the skeleton hierarchy for this skel mesh." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bDisplayBones_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones = { "bDisplayBones", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Disable Morphtarget for this component. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Disable Morphtarget for this component." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bDisableMorphTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget = { "bDisableMorphTarget", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_MetaData[] = {
		{ "Comment", "/** Don't bother rendering the skin. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Don't bother rendering the skin." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bHideSkin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin = { "bHideSkin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/**\n\x09 *\x09If true, use per-bone motion blur on this skeletal mesh (requires additional rendering, can be disabled to save performance).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, use per-bone motion blur on this skeletal mesh (requires additional rendering, can be disabled to save performance)." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bPerBoneMotionBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur = { "bPerBoneMotionBlur", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** When true, skip using the physics asset etc. and always use the fixed bounds defined in the SkeletalMesh. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "When true, skip using the physics asset etc. and always use the fixed bounds defined in the SkeletalMesh." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bComponentUseFixedSkelBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds = { "bComponentUseFixedSkelBounds", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** If true, when updating bounds from a PhysicsAsset, consider _all_ BodySetups, not just those flagged with bConsiderForBounds. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, when updating bounds from a PhysicsAsset, consider _all_ BodySetups, not just those flagged with bConsiderForBounds." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bConsiderAllBodiesForBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds = { "bConsiderAllBodiesForBounds", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, this component uses its parents LOD when attached if available\n\x09* ForcedLOD can override this change. By default, it will use parent LOD.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, this component uses its parents LOD when attached if available\nForcedLOD can override this change. By default, it will use parent LOD." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bSyncAttachParentLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD = { "bSyncAttachParentLOD", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_MetaData[] = {
		{ "Comment", "/** Whether or not we can highlight selected sections - this should really only be done in the editor */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether or not we can highlight selected sections - this should really only be done in the editor" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCanHighlightSelectedSections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections = { "bCanHighlightSelectedSections", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_MetaData[] = {
		{ "Comment", "/** true if mesh has been recently rendered, false otherwise */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "true if mesh has been recently rendered, false otherwise" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bRecentlyRendered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered = { "bRecentlyRendered", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for direct shadowing from lights.\n\x09 * This type of shadowing is approximate but handles extremely wide area shadowing well.  The softness of the shadow depends on the light's LightSourceAngle / SourceRadius.\n\x09 * This flag will force bCastInsetShadow to be enabled.\n\x09 */" },
		{ "DisplayName", "Capsule Direct Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for direct shadowing from lights.\nThis type of shadowing is approximate but handles extremely wide area shadowing well.  The softness of the shadow depends on the light's LightSourceAngle / SourceRadius.\nThis flag will force bCastInsetShadow to be enabled." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCastCapsuleDirectShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow = { "bCastCapsuleDirectShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for shadowing indirect lighting (from lightmaps or skylight).\n\x09 */" },
		{ "DisplayName", "Capsule Indirect Shadow" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether to use the capsule representation (when present) from a skeletal mesh's ShadowPhysicsAsset for shadowing indirect lighting (from lightmaps or skylight)." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCastCapsuleIndirectShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow = { "bCastCapsuleIndirectShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCPUSkinning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning = { "bCPUSkinning", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** if TRUE, Owner will determine how often animation will be updated and evaluated. See AnimUpdateRateTick() \n\x09 * This allows to skip frames for performance. (For example based on visibility and size on screen). */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "if TRUE, Owner will determine how often animation will be updated and evaluated. See AnimUpdateRateTick()\nThis allows to skip frames for performance. (For example based on visibility and size on screen)." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bEnableUpdateRateOptimizations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations = { "bEnableUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/** Enable on screen debugging of update rate optimization. \n\x09 * Red = Skipping 0 frames, Green = skipping 1 frame, Blue = skipping 2 frames, black = skipping more than 2 frames. \n\x09 * @todo: turn this into a console command. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Enable on screen debugging of update rate optimization.\nRed = Skipping 0 frames, Green = skipping 1 frame, Blue = skipping 2 frames, black = skipping more than 2 frames.\n@todo: turn this into a console command." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bDisplayDebugUpdateRateOptimizations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations = { "bDisplayDebugUpdateRateOptimizations", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_MetaData[] = {
		{ "Category", "Optimization" },
		{ "Comment", "/**\n\x09 *\x09If true, render as static in reference pose.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, render as static in reference pose." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bRenderStatic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic = { "bRenderStatic", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreLeaderPoseComponentLOD_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Flag that when set will ensure UpdateLODStatus will not take the LeaderPoseComponent's current LOD in consideration when determining the correct LOD level (this requires LeaderPoseComponent's LOD to always be >= determined LOD otherwise bone transforms could be missing */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Flag that when set will ensure UpdateLODStatus will not take the LeaderPoseComponent's current LOD in consideration when determining the correct LOD level (this requires LeaderPoseComponent's LOD to always be >= determined LOD otherwise bone transforms could be missing" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreLeaderPoseComponentLOD_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bIgnoreLeaderPoseComponentLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreLeaderPoseComponentLOD = { "bIgnoreLeaderPoseComponentLOD", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreLeaderPoseComponentLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreLeaderPoseComponentLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreLeaderPoseComponentLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_MetaData[] = {
		{ "Comment", "/** true when CachedLocalBounds is up to date. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "true when CachedLocalBounds is up to date." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCachedLocalBoundsUpToDate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate = { "bCachedLocalBoundsUpToDate", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedWorldSpaceBoundsUpToDate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedWorldSpaceBoundsUpToDate_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bCachedWorldSpaceBoundsUpToDate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedWorldSpaceBoundsUpToDate = { "bCachedWorldSpaceBoundsUpToDate", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedWorldSpaceBoundsUpToDate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedWorldSpaceBoundsUpToDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedWorldSpaceBoundsUpToDate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_MetaData[] = {
		{ "Comment", "/** If true, UpdateTransform will always result in a call to MeshObject->Update. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If true, UpdateTransform will always result in a call to MeshObject->Update." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bForceMeshObjectUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate = { "bForceMeshObjectUpdate", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceUpdateDynamicDataImmediately_MetaData[] = {
		{ "Comment", "/**\n\x09   Whether to update dynamic bone & cloth sim data immediately, not to wait until GDME or defer update to RHIThread.\n\x09   When set to true, it is the equivalent of r.DeferSkeletalDynamicDataUpdateUntilGDME=0 and r.RHICmdDeferSkeletalLockAndFillToRHIThread=0.\n\x09   When set to false, r.DeferSkeletalDynamicDataUpdateUntilGDME and r.RHICmdDeferSkeletalLockAndFillToRHIThread values are respected.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Whether to update dynamic bone & cloth sim data immediately, not to wait until GDME or defer update to RHIThread.\nWhen set to true, it is the equivalent of r.DeferSkeletalDynamicDataUpdateUntilGDME=0 and r.RHICmdDeferSkeletalLockAndFillToRHIThread=0.\nWhen set to false, r.DeferSkeletalDynamicDataUpdateUntilGDME and r.RHICmdDeferSkeletalLockAndFillToRHIThread values are respected." },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceUpdateDynamicDataImmediately_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bForceUpdateDynamicDataImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceUpdateDynamicDataImmediately = { "bForceUpdateDynamicDataImmediately", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceUpdateDynamicDataImmediately_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceUpdateDynamicDataImmediately_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceUpdateDynamicDataImmediately_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bFollowerShouldTickPose_MetaData[] = {
		{ "Comment", "/** If false, Follower components ShouldTickPose function will return false (default) */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "If false, Follower components ShouldTickPose function will return false (default)" },
	};
#endif
	void Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bFollowerShouldTickPose_SetBit(void* Obj)
	{
		((USkinnedMeshComponent*)Obj)->bFollowerShouldTickPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bFollowerShouldTickPose = { "bFollowerShouldTickPose", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkinnedMeshComponent), &Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bFollowerShouldTickPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bFollowerShouldTickPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bFollowerShouldTickPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/** \n\x09 * Controls how dark the capsule indirect shadow can be.\n\x09 */" },
		{ "DisplayName", "Capsule Indirect Shadow Min Visibility" },
		{ "EditCondition", "bCastCapsuleIndirectShadow" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Controls how dark the capsule indirect shadow can be." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility = { "CapsuleIndirectShadowMinVisibility", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, CapsuleIndirectShadowMinVisibility), METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldOrLocalSpaceBounds_MetaData[] = {
		{ "Comment", "/** Bounds cached, so they're computed just once, either in local or worldspace depending on cvar 'a.CacheLocalSpaceBounds'. */" },
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
		{ "ToolTip", "Bounds cached, so they're computed just once, either in local or worldspace depending on cvar 'a.CacheLocalSpaceBounds'." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldOrLocalSpaceBounds = { "CachedWorldOrLocalSpaceBounds", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, CachedWorldOrLocalSpaceBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldOrLocalSpaceBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldOrLocalSpaceBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldToLocalTransform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/SkinnedMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldToLocalTransform = { "CachedWorldToLocalTransform", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkinnedMeshComponent, CachedWorldToLocalTransform), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldToLocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldToLocalTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkinnedMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinnedAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LeaderPoseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_SkinCacheUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSetMeshDeformer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstanceSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MeshDeformerInstance,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_WireframeColor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_PhysicsAssetOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_ForcedLodModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_MinLodModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_StreamingDistanceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_LODInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_VisibilityBasedAnimTickOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bOverrideMinLod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bUseBoundsFromLeaderPoseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceWireframe,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayBones,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisableMorphTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bHideSkin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bPerBoneMotionBlur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bComponentUseFixedSkelBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bConsiderAllBodiesForBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bSyncAttachParentLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCanHighlightSelectedSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRecentlyRendered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleDirectShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCastCapsuleIndirectShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCPUSkinning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bEnableUpdateRateOptimizations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bDisplayDebugUpdateRateOptimizations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bRenderStatic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bIgnoreLeaderPoseComponentLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedLocalBoundsUpToDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bCachedWorldSpaceBoundsUpToDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceMeshObjectUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bForceUpdateDynamicDataImmediately,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_bFollowerShouldTickPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CapsuleIndirectShadowMinVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldOrLocalSpaceBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkinnedMeshComponent_Statics::NewProp_CachedWorldToLocalTransform,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkinnedMeshComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULODSyncInterface_NoRegister, (int32)VTABLE_OFFSET(USkinnedMeshComponent, ILODSyncInterface), false },  // 2871425250
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkinnedMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkinnedMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkinnedMeshComponent_Statics::ClassParams = {
		&USkinnedMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkinnedMeshComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_USkinnedMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkinnedMeshComponent()
	{
		if (!Z_Registration_Info_UClass_USkinnedMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkinnedMeshComponent.OuterSingleton, Z_Construct_UClass_USkinnedMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkinnedMeshComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USkinnedMeshComponent>()
	{
		return USkinnedMeshComponent::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkinnedMeshComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics::EnumInfo[] = {
		{ EBoneVisibilityStatus_StaticEnum, TEXT("EBoneVisibilityStatus"), &Z_Registration_Info_UEnum_EBoneVisibilityStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 882369785U) },
		{ EPhysBodyOp_StaticEnum, TEXT("EPhysBodyOp"), &Z_Registration_Info_UEnum_EPhysBodyOp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 139196241U) },
		{ EVisibilityBasedAnimTickOption_StaticEnum, TEXT("EVisibilityBasedAnimTickOption"), &Z_Registration_Info_UEnum_EVisibilityBasedAnimTickOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2994354799U) },
		{ EBoneSpaces_StaticEnum, TEXT("EBoneSpaces"), &Z_Registration_Info_UEnum_EBoneSpaces, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3606782993U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics::ScriptStructInfo[] = {
		{ FSkelMeshSkinWeightInfo::StaticStruct, Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo_Statics::NewStructOps, TEXT("SkelMeshSkinWeightInfo"), &Z_Registration_Info_UScriptStruct_SkelMeshSkinWeightInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkelMeshSkinWeightInfo), 1814556409U) },
		{ FSkelMeshComponentLODInfo::StaticStruct, Z_Construct_UScriptStruct_FSkelMeshComponentLODInfo_Statics::NewStructOps, TEXT("SkelMeshComponentLODInfo"), &Z_Registration_Info_UScriptStruct_SkelMeshComponentLODInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkelMeshComponentLODInfo), 4165515543U) },
		{ FVertexOffsetUsage::StaticStruct, Z_Construct_UScriptStruct_FVertexOffsetUsage_Statics::NewStructOps, TEXT("VertexOffsetUsage"), &Z_Registration_Info_UScriptStruct_VertexOffsetUsage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexOffsetUsage), 2644893061U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkinnedMeshComponent, USkinnedMeshComponent::StaticClass, TEXT("USkinnedMeshComponent"), &Z_Registration_Info_UClass_USkinnedMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkinnedMeshComponent), 2145536649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_1957486334(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SkinnedMeshComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
