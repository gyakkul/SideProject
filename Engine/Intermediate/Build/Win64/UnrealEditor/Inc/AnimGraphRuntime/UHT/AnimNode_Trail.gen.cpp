// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_Trail.h"
#include "../../Source/Runtime/Engine/Classes/Animation/InputScaleBias.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
#include "BoneControllers/AnimNode_AnimDynamics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Trail() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Trail();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysPlanarLimit();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRotationLimit();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RotationLimit;
class UScriptStruct* FRotationLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RotationLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RotationLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotationLimit, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("RotationLimit"));
	}
	return Z_Registration_Info_UScriptStruct_RotationLimit.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FRotationLimit>()
{
	return FRotationLimit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRotationLimit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimitMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LimitMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationLimit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRotationLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotationLimit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMin_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMin = { "LimitMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRotationLimit, LimitMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMax_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMax = { "LimitMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRotationLimit, LimitMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotationLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationLimit_Statics::NewProp_LimitMax,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotationLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"RotationLimit",
		sizeof(FRotationLimit),
		alignof(FRotationLimit),
		Z_Construct_UScriptStruct_FRotationLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRotationLimit()
	{
		if (!Z_Registration_Info_UScriptStruct_RotationLimit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RotationLimit.InnerSingleton, Z_Construct_UScriptStruct_FRotationLimit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RotationLimit.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_Trail>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_Trail cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Trail;
class UScriptStruct* FAnimNode_Trail::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Trail.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Trail.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Trail, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_Trail"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Trail.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_Trail>()
{
	return FAnimNode_Trail::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_Trail_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrailBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChainLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainBoneAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChainBoneAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertChainBoneAxis_MetaData[];
#endif
		static void NewProp_bInvertChainBoneAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertChainBoneAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitStretch_MetaData[];
#endif
		static void NewProp_bLimitStretch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitStretch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitRotation_MetaData[];
#endif
		static void NewProp_bLimitRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePlanarLimit_MetaData[];
#endif
		static void NewProp_bUsePlanarLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlanarLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActorSpaceFakeVel_MetaData[];
#endif
		static void NewProp_bActorSpaceFakeVel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActorSpaceFakeVel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReorientParentToChild_MetaData[];
#endif
		static void NewProp_bReorientParentToChild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReorientParentToChild;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebug_MetaData[];
#endif
		static void NewProp_bEnableDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBaseMotion_MetaData[];
#endif
		static void NewProp_bShowBaseMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBaseMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTrailLocation_MetaData[];
#endif
		static void NewProp_bShowTrailLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTrailLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowLimit_MetaData[];
#endif
		static void NewProp_bShowLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLifeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLifeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailRelaxation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrailRelaxation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelaxationSpeedScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RelaxationSpeedScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailRelaxationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrailRelaxationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelaxationSpeedScaleInputProcessor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelaxationSpeedScaleInputProcessor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationLimits;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationOffsets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanarLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanarLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FakeVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FakeVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseJoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseJoint;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailBoneRotationBlendAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrailBoneRotationBlendAlpha;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastBoneRotationAnimAlphaBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastBoneRotationAnimAlphaBlend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Trail Controller\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Trail Controller" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Trail>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBone_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** Reference to the active bone in the hierarchy to modify. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Reference to the active bone in the hierarchy to modify." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBone = { "TrailBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, TrailBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainLength_MetaData[] = {
		{ "Category", "Trail" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Number of bones above the active one in the hierarchy to modify. ChainLength should be at least 2. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Number of bones above the active one in the hierarchy to modify. ChainLength should be at least 2." },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainLength = { "ChainLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, ChainLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainBoneAxis_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** Axis of the bones to point along trail. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Axis of the bones to point along trail." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainBoneAxis = { "ChainBoneAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, ChainBoneAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainBoneAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainBoneAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** Invert the direction specified in ChainBoneAxis. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Invert the direction specified in ChainBoneAxis." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bInvertChainBoneAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis = { "bInvertChainBoneAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch_MetaData[] = {
		{ "Category", "Limit" },
		{ "Comment", "/** Limit the amount that a bone can stretch from its ref-pose length. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Limit the amount that a bone can stretch from its ref-pose length." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bLimitStretch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch = { "bLimitStretch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation_MetaData[] = {
		{ "Category", "Limit" },
		{ "Comment", "/** Limit the amount that a bone can stretch from its ref-pose length. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Limit the amount that a bone can stretch from its ref-pose length." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bLimitRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation = { "bLimitRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit_MetaData[] = {
		{ "Category", "Limit" },
		{ "Comment", "/** Whether to evaluate planar limits */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Whether to evaluate planar limits" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bUsePlanarLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit = { "bUsePlanarLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/** Whether 'fake' velocity should be applied in actor or world space. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Whether 'fake' velocity should be applied in actor or world space." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bActorSpaceFakeVel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel = { "bActorSpaceFakeVel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Fix up rotation to face child for the parent*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Fix up rotation to face child for the parent" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bReorientParentToChild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild = { "bReorientParentToChild", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Enable Debug in the PIE. This doesn't work in game*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Enable Debug in the PIE. This doesn't work in game" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bEnableDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Show Base Motion */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Show Base Motion" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bShowBaseMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion = { "bShowBaseMotion", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Show Trail Location **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Show Trail Location *" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bShowTrailLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation = { "bShowTrailLocation", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Show Planar Limits **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Show Planar Limits *" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit_SetBit(void* Obj)
	{
		((FAnimNode_Trail*)Obj)->bShowLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit = { "bShowLimit", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_Trail), &Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_DebugLifeTime_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Debug Life Time */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Debug Life Time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_DebugLifeTime = { "DebugLifeTime", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, DebugLifeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_DebugLifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_DebugLifeTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxation_MetaData[] = {
		{ "Comment", "/** How quickly we 'relax' the bones to their animated positions. Deprecated. Replaced to TrailRelaxationCurve */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "How quickly we 'relax' the bones to their animated positions. Deprecated. Replaced to TrailRelaxationCurve" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxation = { "TrailRelaxation", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, TrailRelaxation_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_MaxDeltaTime_MetaData[] = {
		{ "Category", "Limit" },
		{ "Comment", "/** To avoid hitches causing stretch of trail, you can use MaxDeltaTime to clamp the long delta time. If you want 30 fps to set it to 0.03333f ( = 1/30 ).  */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "To avoid hitches causing stretch of trail, you can use MaxDeltaTime to clamp the long delta time. If you want 30 fps to set it to 0.03333f ( = 1/30 )." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_MaxDeltaTime = { "MaxDeltaTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, MaxDeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_MaxDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_MaxDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScale_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScale = { "RelaxationSpeedScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, RelaxationSpeedScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxationSpeed_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** How quickly we 'relax' the bones to their animated positions. Time 0 will map to top root joint, time 1 will map to the bottom joint. */" },
		{ "CustomizeProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "How quickly we 'relax' the bones to their animated positions. Time 0 will map to top root joint, time 1 will map to the bottom joint." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxationSpeed = { "TrailRelaxationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, TrailRelaxationSpeed), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxationSpeed_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScaleInputProcessor_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScaleInputProcessor = { "RelaxationSpeedScaleInputProcessor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, RelaxationSpeedScaleInputProcessor), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScaleInputProcessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScaleInputProcessor_MetaData)) }; // 1479025939
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits_Inner = { "RotationLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRotationLimit, METADATA_PARAMS(nullptr, 0) }; // 2540512769
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits_MetaData[] = {
		{ "Category", "Limit" },
		{ "EditCondition", "bLimitRotation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits = { "RotationLimits", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, RotationLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits_MetaData)) }; // 2540512769
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets_Inner = { "RotationOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets_MetaData[] = {
		{ "Category", "Limit" },
		{ "EditCondition", "bLimitRotation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets = { "RotationOffsets", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, RotationOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits_Inner = { "PlanarLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimPhysPlanarLimit, METADATA_PARAMS(nullptr, 0) }; // 1312969378
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits_MetaData[] = {
		{ "Category", "Limit" },
		{ "Comment", "/** List of available planar limits for this node */" },
		{ "EditCondition", "bUsePlanarLimit" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "List of available planar limits for this node" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits = { "PlanarLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, PlanarLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits_MetaData)) }; // 1312969378
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_StretchLimit_MetaData[] = {
		{ "Category", "Limit" },
		{ "Comment", "/** If bLimitStretch is true, this indicates how long a bone can stretch beyond its length in the ref-pose. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "If bLimitStretch is true, this indicates how long a bone can stretch beyond its length in the ref-pose." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_StretchLimit = { "StretchLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, StretchLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_StretchLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_StretchLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_FakeVelocity_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/** 'Fake' velocity applied to bones. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "'Fake' velocity applied to bones." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_FakeVelocity = { "FakeVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, FakeVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_FakeVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_FakeVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_BaseJoint_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/** Base Joint to calculate velocity from. If none, it will use Component's World Transform. . */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "Base Joint to calculate velocity from. If none, it will use Component's World Transform. ." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_BaseJoint = { "BaseJoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, BaseJoint), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_BaseJoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_BaseJoint_MetaData)) }; // 2906976723
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBoneRotationBlendAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBoneRotationBlendAlpha = { "TrailBoneRotationBlendAlpha", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, TrailBoneRotationBlendAlpha_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBoneRotationBlendAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBoneRotationBlendAlpha_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_LastBoneRotationAnimAlphaBlend_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/* How to set last bone rotation. It copies from previous joint if alpha is 0.f, or 1.f will use animated pose \n\x09 * This alpha dictates the blend between parent joint and animated pose, and how much you'd like to use animated pose for\n\x09 */" },
		{ "EditCondition", "bReorientParentToChild" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_Trail.h" },
		{ "ToolTip", "How to set last bone rotation. It copies from previous joint if alpha is 0.f, or 1.f will use animated pose\n       * This alpha dictates the blend between parent joint and animated pose, and how much you'd like to use animated pose for" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_LastBoneRotationAnimAlphaBlend = { "LastBoneRotationAnimAlphaBlend", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Trail, LastBoneRotationAnimAlphaBlend), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_LastBoneRotationAnimAlphaBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_LastBoneRotationAnimAlphaBlend_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_ChainBoneAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bInvertChainBoneAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitStretch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bLimitRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bUsePlanarLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bActorSpaceFakeVel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bReorientParentToChild,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bEnableDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowBaseMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowTrailLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_bShowLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_DebugLifeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxation,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_MaxDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailRelaxationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RelaxationSpeedScaleInputProcessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_RotationOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_PlanarLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_StretchLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_FakeVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_BaseJoint,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_TrailBoneRotationBlendAlpha,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewProp_LastBoneRotationAnimAlphaBlend,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_Trail",
		sizeof(FAnimNode_Trail),
		alignof(FAnimNode_Trail),
		Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Trail()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_Trail.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Trail.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_Trail.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Trail_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Trail_h_Statics::ScriptStructInfo[] = {
		{ FRotationLimit::StaticStruct, Z_Construct_UScriptStruct_FRotationLimit_Statics::NewStructOps, TEXT("RotationLimit"), &Z_Registration_Info_UScriptStruct_RotationLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotationLimit), 2540512769U) },
		{ FAnimNode_Trail::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Trail_Statics::NewStructOps, TEXT("AnimNode_Trail"), &Z_Registration_Info_UScriptStruct_AnimNode_Trail, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Trail), 3447108761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Trail_h_1983380566(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Trail_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_Trail_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
