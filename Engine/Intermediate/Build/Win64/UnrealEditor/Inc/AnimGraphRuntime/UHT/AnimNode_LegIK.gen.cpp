// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_LegIK.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LegIK() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKData();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKDefinition();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LegIK();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIKChain();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIKChainLink();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IKChainLink;
class UScriptStruct* FIKChainLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IKChainLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IKChainLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKChainLink, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("IKChainLink"));
	}
	return Z_Registration_Info_UScriptStruct_IKChainLink.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FIKChainLink>()
{
	return FIKChainLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIKChainLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKChainLink_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIKChainLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKChainLink>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKChainLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"IKChainLink",
		sizeof(FIKChainLink),
		alignof(FIKChainLink),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIKChainLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKChainLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIKChainLink()
	{
		if (!Z_Registration_Info_UScriptStruct_IKChainLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IKChainLink.InnerSingleton, Z_Construct_UScriptStruct_FIKChainLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IKChainLink.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IKChain;
class UScriptStruct* FIKChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IKChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IKChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKChain, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("IKChain"));
	}
	return Z_Registration_Info_UScriptStruct_IKChain.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FIKChain>()
{
	return FIKChain::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIKChain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKChain_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIKChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKChain>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"IKChain",
		sizeof(FIKChain),
		alignof(FIKChain),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIKChain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIKChain()
	{
		if (!Z_Registration_Info_UScriptStruct_IKChain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IKChain.InnerSingleton, Z_Construct_UScriptStruct_FIKChain_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IKChain.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimLegIKDefinition;
class UScriptStruct* FAnimLegIKDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimLegIKDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimLegIKDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimLegIKDefinition, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimLegIKDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_AnimLegIKDefinition.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimLegIKDefinition>()
{
	return FAnimLegIKDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRotationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRotationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootBoneForwardAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FootBoneForwardAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HingeRotationAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HingeRotationAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRotationLimit_MetaData[];
#endif
		static void NewProp_bEnableRotationLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRotationLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableKneeTwistCorrection_MetaData[];
#endif
		static void NewProp_bEnableKneeTwistCorrection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableKneeTwistCorrection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Per foot definitions */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Per foot definitions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimLegIKDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone = { "IKFootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, IKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone = { "FKFootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, FKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb = { "NumBonesInLimb", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, NumBonesInLimb), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Only used if bEnableRotationLimit is enabled. Prevents the leg from folding onto itself,\n\x09* and forces at least this angle between Parent and Child bone. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Only used if bEnableRotationLimit is enabled. Prevents the leg from folding onto itself,\nand forces at least this angle between Parent and Child bone." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle = { "MinRotationAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, MinRotationAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Forward Axis for Foot bone. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Forward Axis for Foot bone." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis = { "FootBoneForwardAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, FootBoneForwardAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Hinge Bones Rotation Axis. This is essentially the plane normal for (hip - knee - foot). */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Hinge Bones Rotation Axis. This is essentially the plane normal for (hip - knee - foot)." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis = { "HingeRotationAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimLegIKDefinition, HingeRotationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If enabled, we prevent the leg from bending backwards and enforce a min compression angle */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "If enabled, we prevent the leg from bending backwards and enforce a min compression angle" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_SetBit(void* Obj)
	{
		((FAnimLegIKDefinition*)Obj)->bEnableRotationLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit = { "bEnableRotationLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimLegIKDefinition), &Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Enable Knee Twist correction, by comparing Foot FK with Foot IK orientation. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Enable Knee Twist correction, by comparing Foot FK with Foot IK orientation." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_SetBit(void* Obj)
	{
		((FAnimLegIKDefinition*)Obj)->bEnableKneeTwistCorrection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection = { "bEnableKneeTwistCorrection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimLegIKDefinition), &Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_IKFootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FKFootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_NumBonesInLimb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_MinRotationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_FootBoneForwardAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_HingeRotationAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableRotationLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewProp_bEnableKneeTwistCorrection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"AnimLegIKDefinition",
		sizeof(FAnimLegIKDefinition),
		alignof(FAnimLegIKDefinition),
		Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimLegIKDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimLegIKDefinition.InnerSingleton, Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimLegIKDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimLegIKData;
class UScriptStruct* FAnimLegIKData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimLegIKData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimLegIKData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimLegIKData, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimLegIKData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimLegIKData.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimLegIKData>()
{
	return FAnimLegIKData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimLegIKData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLegIKData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Runtime foot data after validation, we guarantee these bones to exist */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Runtime foot data after validation, we guarantee these bones to exist" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimLegIKData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimLegIKData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimLegIKData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"AnimLegIKData",
		sizeof(FAnimLegIKData),
		alignof(FAnimLegIKData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLegIKData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLegIKData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimLegIKData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimLegIKData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimLegIKData.InnerSingleton, Z_Construct_UScriptStruct_FAnimLegIKData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimLegIKData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_LegIK>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_LegIK cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LegIK;
class UScriptStruct* FAnimNode_LegIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LegIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LegIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LegIK, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_LegIK"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LegIK.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_LegIK>()
{
	return FAnimNode_LegIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReachPrecision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReachPrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LegsDefinition_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegsDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LegsDefinition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LegIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Tolerance for reaching IK Target, in unreal units. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Tolerance for reaching IK Target, in unreal units." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision = { "ReachPrecision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LegIK, ReachPrecision), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Max Number of Iterations. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
		{ "ToolTip", "Max Number of Iterations." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LegIK, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_Inner = { "LegsDefinition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimLegIKDefinition, METADATA_PARAMS(nullptr, 0) }; // 3023160326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LegIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition = { "LegsDefinition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LegIK, LegsDefinition), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_MetaData)) }; // 3023160326
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_ReachPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewProp_LegsDefinition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_LegIK",
		sizeof(FAnimNode_LegIK),
		alignof(FAnimNode_LegIK),
		Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LegIK()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_LegIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LegIK.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_LegIK.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LegIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LegIK_h_Statics::ScriptStructInfo[] = {
		{ FIKChainLink::StaticStruct, Z_Construct_UScriptStruct_FIKChainLink_Statics::NewStructOps, TEXT("IKChainLink"), &Z_Registration_Info_UScriptStruct_IKChainLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIKChainLink), 2037415557U) },
		{ FIKChain::StaticStruct, Z_Construct_UScriptStruct_FIKChain_Statics::NewStructOps, TEXT("IKChain"), &Z_Registration_Info_UScriptStruct_IKChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIKChain), 1293572275U) },
		{ FAnimLegIKDefinition::StaticStruct, Z_Construct_UScriptStruct_FAnimLegIKDefinition_Statics::NewStructOps, TEXT("AnimLegIKDefinition"), &Z_Registration_Info_UScriptStruct_AnimLegIKDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimLegIKDefinition), 3023160326U) },
		{ FAnimLegIKData::StaticStruct, Z_Construct_UScriptStruct_FAnimLegIKData_Statics::NewStructOps, TEXT("AnimLegIKData"), &Z_Registration_Info_UScriptStruct_AnimLegIKData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimLegIKData), 889440299U) },
		{ FAnimNode_LegIK::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LegIK_Statics::NewStructOps, TEXT("AnimNode_LegIK"), &Z_Registration_Info_UScriptStruct_AnimNode_LegIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LegIK), 1704068892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LegIK_h_1239085862(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LegIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LegIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
