// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_SlopeWarping.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SpringInterpolator.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SlopeWarping() {}
// Cross Module References
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SlopeWarping();
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSlopeWarpingFootData();
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator();
	UPackage* Z_Construct_UPackage__Script_AnimationWarpingRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlopeWarpingFootDefinition;
class UScriptStruct* FSlopeWarpingFootDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlopeWarpingFootDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlopeWarpingFootDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("SlopeWarpingFootDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_SlopeWarpingFootDefinition.OuterSingleton;
}
template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<FSlopeWarpingFootDefinition>()
{
	return FSlopeWarpingFootDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKFootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FKFootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FKFootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBonesInLimb_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBonesInLimb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Per foot definitions */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
		{ "ToolTip", "Per foot definitions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlopeWarpingFootDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_IKFootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_IKFootBone = { "IKFootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlopeWarpingFootDefinition, IKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_IKFootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_IKFootBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_FKFootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_FKFootBone = { "FKFootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlopeWarpingFootDefinition, FKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_FKFootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_FKFootBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_NumBonesInLimb_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_NumBonesInLimb = { "NumBonesInLimb", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlopeWarpingFootDefinition, NumBonesInLimb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_NumBonesInLimb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_NumBonesInLimb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_FootSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_FootSize = { "FootSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlopeWarpingFootDefinition, FootSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_FootSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_FootSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_IKFootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_FKFootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_NumBonesInLimb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewProp_FootSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		nullptr,
		&NewStructOps,
		"SlopeWarpingFootDefinition",
		sizeof(FSlopeWarpingFootDefinition),
		alignof(FSlopeWarpingFootDefinition),
		Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_SlopeWarpingFootDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlopeWarpingFootDefinition.InnerSingleton, Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlopeWarpingFootDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlopeWarpingFootData;
class UScriptStruct* FSlopeWarpingFootData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlopeWarpingFootData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlopeWarpingFootData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlopeWarpingFootData, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("SlopeWarpingFootData"));
	}
	return Z_Registration_Info_UScriptStruct_SlopeWarpingFootData.OuterSingleton;
}
template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<FSlopeWarpingFootData>()
{
	return FSlopeWarpingFootData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlopeWarpingFootData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlopeWarpingFootData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Runtime foot data after validation, we guarantee these bones to exist */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
		{ "ToolTip", "Runtime foot data after validation, we guarantee these bones to exist" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlopeWarpingFootData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlopeWarpingFootData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlopeWarpingFootData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		nullptr,
		&NewStructOps,
		"SlopeWarpingFootData",
		sizeof(FSlopeWarpingFootData),
		alignof(FSlopeWarpingFootData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlopeWarpingFootData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlopeWarpingFootData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlopeWarpingFootData()
	{
		if (!Z_Registration_Info_UScriptStruct_SlopeWarpingFootData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlopeWarpingFootData.InnerSingleton, Z_Construct_UScriptStruct_FSlopeWarpingFootData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlopeWarpingFootData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_SlopeWarping>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_SlopeWarping cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SlopeWarping;
class UScriptStruct* FAnimNode_SlopeWarping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SlopeWarping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SlopeWarping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("AnimNode_SlopeWarping"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SlopeWarping.OuterSingleton;
}
template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_SlopeWarping>()
{
	return FAnimNode_SlopeWarping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootRootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKFootRootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FeetDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeetDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FeetDefinitions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FeetData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeetData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FeetData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisOffsetInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisOffsetInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GravityDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomFloorOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomFloorOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFloorNormalWorldSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetFloorNormalWorldSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorNormalInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloorNormalInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFloorOffsetLocalSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetFloorOffsetLocalSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorOffsetInterpolator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloorOffsetInterpolator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStepHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStepHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepMeshInsideOfCapsule_MetaData[];
#endif
		static void NewProp_bKeepMeshInsideOfCapsule_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepMeshInsideOfCapsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPullPelvisDown_MetaData[];
#endif
		static void NewProp_bPullPelvisDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPullPelvisDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomFloorOffset_MetaData[];
#endif
		static void NewProp_bUseCustomFloorOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomFloorOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasOnGround_MetaData[];
#endif
		static void NewProp_bWasOnGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasOnGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebug_MetaData[];
#endif
		static void NewProp_bShowDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFloorSmoothingInitialized_MetaData[];
#endif
		static void NewProp_bFloorSmoothingInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFloorSmoothingInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityDirCompSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GravityDirCompSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::Struct_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SlopeWarping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_IKFootRootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** IKFoot Root Bone. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
		{ "ToolTip", "IKFoot Root Bone. *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_IKFootRootBone = { "IKFootRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SlopeWarping, IKFootRootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_IKFootRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_IKFootRootBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_PelvisBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Pelvis Bone. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
		{ "ToolTip", "Pelvis Bone. *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_PelvisBone = { "PelvisBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SlopeWarping, PelvisBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_PelvisBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_PelvisBone_MetaData)) }; // 2906976723
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FeetDefinitions_Inner = { "FeetDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition, METADATA_PARAMS(nullptr, 0) }; // 3148562724
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FeetDefinitions_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FeetDefinitions = { "FeetDefinitions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SlopeWarping, FeetDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FeetDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FeetDefinitions_MetaData)) }; // 3148562724
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FeetData_Inner = { "FeetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSlopeWarpingFootData, METADATA_PARAMS(nullptr, 0) }; // 197620961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FeetData_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FeetData = { "FeetData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SlopeWarping, FeetData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FeetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FeetData_MetaData)) }; // 197620961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_PelvisOffsetInterpolator_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_PelvisOffsetInterpolator = { "PelvisOffsetInterpolator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SlopeWarping, PelvisOffsetInterpolator), Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_PelvisOffsetInterpolator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_PelvisOffsetInterpolator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_GravityDir_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_GravityDir = { "GravityDir", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SlopeWarping, GravityDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_GravityDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_GravityDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_CustomFloorOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_CustomFloorOffset = { "CustomFloorOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SlopeWarping, CustomFloorOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_CustomFloorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_CustomFloorOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_CachedDeltaTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_CachedDeltaTime = { "CachedDeltaTime", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SlopeWarping, CachedDeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_CachedDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_CachedDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_TargetFloorNormalWorldSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_TargetFloorNormalWorldSpace = { "TargetFloorNormalWorldSpace", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SlopeWarping, TargetFloorNormalWorldSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_TargetFloorNormalWorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_TargetFloorNormalWorldSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FloorNormalInterpolator_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FloorNormalInterpolator = { "FloorNormalInterpolator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SlopeWarping, FloorNormalInterpolator), Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FloorNormalInterpolator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FloorNormalInterpolator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_TargetFloorOffsetLocalSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_TargetFloorOffsetLocalSpace = { "TargetFloorOffsetLocalSpace", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SlopeWarping, TargetFloorOffsetLocalSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_TargetFloorOffsetLocalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_TargetFloorOffsetLocalSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FloorOffsetInterpolator_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FloorOffsetInterpolator = { "FloorOffsetInterpolator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SlopeWarping, FloorOffsetInterpolator), Z_Construct_UScriptStruct_FVectorRK4SpringInterpolator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FloorOffsetInterpolator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FloorOffsetInterpolator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_MaxStepHeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_MaxStepHeight = { "MaxStepHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SlopeWarping, MaxStepHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_MaxStepHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_MaxStepHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bKeepMeshInsideOfCapsule_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bKeepMeshInsideOfCapsule_SetBit(void* Obj)
	{
		((FAnimNode_SlopeWarping*)Obj)->bKeepMeshInsideOfCapsule = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bKeepMeshInsideOfCapsule = { "bKeepMeshInsideOfCapsule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_SlopeWarping), &Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bKeepMeshInsideOfCapsule_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bKeepMeshInsideOfCapsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bKeepMeshInsideOfCapsule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bPullPelvisDown_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bPullPelvisDown_SetBit(void* Obj)
	{
		((FAnimNode_SlopeWarping*)Obj)->bPullPelvisDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bPullPelvisDown = { "bPullPelvisDown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_SlopeWarping), &Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bPullPelvisDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bPullPelvisDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bPullPelvisDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bUseCustomFloorOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bUseCustomFloorOffset_SetBit(void* Obj)
	{
		((FAnimNode_SlopeWarping*)Obj)->bUseCustomFloorOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bUseCustomFloorOffset = { "bUseCustomFloorOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_SlopeWarping), &Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bUseCustomFloorOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bUseCustomFloorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bUseCustomFloorOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bWasOnGround_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bWasOnGround_SetBit(void* Obj)
	{
		((FAnimNode_SlopeWarping*)Obj)->bWasOnGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bWasOnGround = { "bWasOnGround", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_SlopeWarping), &Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bWasOnGround_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bWasOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bWasOnGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bShowDebug_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bShowDebug_SetBit(void* Obj)
	{
		((FAnimNode_SlopeWarping*)Obj)->bShowDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bShowDebug = { "bShowDebug", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_SlopeWarping), &Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bShowDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bShowDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bFloorSmoothingInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bFloorSmoothingInitialized_SetBit(void* Obj)
	{
		((FAnimNode_SlopeWarping*)Obj)->bFloorSmoothingInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bFloorSmoothingInitialized = { "bFloorSmoothingInitialized", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_SlopeWarping), &Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bFloorSmoothingInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bFloorSmoothingInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bFloorSmoothingInitialized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_ActorLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_ActorLocation = { "ActorLocation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SlopeWarping, ActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_ActorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_ActorLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_GravityDirCompSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SlopeWarping.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_GravityDirCompSpace = { "GravityDirCompSpace", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SlopeWarping, GravityDirCompSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_GravityDirCompSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_GravityDirCompSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_IKFootRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_PelvisBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FeetDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FeetDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FeetData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FeetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_PelvisOffsetInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_GravityDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_CustomFloorOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_CachedDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_TargetFloorNormalWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FloorNormalInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_TargetFloorOffsetLocalSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_FloorOffsetInterpolator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_MaxStepHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bKeepMeshInsideOfCapsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bPullPelvisDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bUseCustomFloorOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bWasOnGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bShowDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_bFloorSmoothingInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_ActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewProp_GravityDirCompSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_SlopeWarping",
		sizeof(FAnimNode_SlopeWarping),
		alignof(FAnimNode_SlopeWarping),
		Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SlopeWarping()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_SlopeWarping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SlopeWarping.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_SlopeWarping.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_SlopeWarping_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_SlopeWarping_h_Statics::ScriptStructInfo[] = {
		{ FSlopeWarpingFootDefinition::StaticStruct, Z_Construct_UScriptStruct_FSlopeWarpingFootDefinition_Statics::NewStructOps, TEXT("SlopeWarpingFootDefinition"), &Z_Registration_Info_UScriptStruct_SlopeWarpingFootDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlopeWarpingFootDefinition), 3148562724U) },
		{ FSlopeWarpingFootData::StaticStruct, Z_Construct_UScriptStruct_FSlopeWarpingFootData_Statics::NewStructOps, TEXT("SlopeWarpingFootData"), &Z_Registration_Info_UScriptStruct_SlopeWarpingFootData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlopeWarpingFootData), 197620961U) },
		{ FAnimNode_SlopeWarping::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SlopeWarping_Statics::NewStructOps, TEXT("AnimNode_SlopeWarping"), &Z_Registration_Info_UScriptStruct_AnimNode_SlopeWarping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SlopeWarping), 3906354243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_SlopeWarping_h_3082632095(TEXT("/Script/AnimationWarpingRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_SlopeWarping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_SlopeWarping_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
