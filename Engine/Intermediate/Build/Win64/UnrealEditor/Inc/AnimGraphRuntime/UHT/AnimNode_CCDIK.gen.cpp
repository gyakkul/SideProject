// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_CCDIK.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneSocketReference.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CCDIK() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CCDIK();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_CCDIK>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_CCDIK cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_CCDIK;
class UScriptStruct* FAnimNode_CCDIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CCDIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_CCDIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CCDIK, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_CCDIK"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CCDIK.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_CCDIK>()
{
	return FAnimNode_CCDIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorLocationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EffectorLocationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TipBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TipBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromTail_MetaData[];
#endif
		static void NewProp_bStartFromTail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFromTail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRotationLimit_MetaData[];
#endif
		static void NewProp_bEnableRotationLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRotationLimit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationLimitPerJoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLimitPerJoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationLimitPerJoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09""Controller which implements the CCDIK IK approximation algorithm\n*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "Controller which implements the CCDIK IK approximation algorithm" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CCDIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocation_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Coordinates for target location of tip bone - if EffectorLocationSpace is bone, this is the offset from Target Bone to use as target location*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Coordinates for target location of tip bone - if EffectorLocationSpace is bone, this is the offset from Target Bone to use as target location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocation = { "EffectorLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CCDIK, EffectorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocationSpace_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Reference frame of Effector Transform. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "Reference frame of Effector Transform." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocationSpace = { "EffectorLocationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CCDIK, EffectorLocationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocationSpace_MetaData)) }; // 793580878
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorTarget_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** If EffectorTransformSpace is a bone, this is the bone to use. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "If EffectorTransformSpace is a bone, this is the bone to use. *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorTarget = { "EffectorTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CCDIK, EffectorTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorTarget_MetaData)) }; // 2128614898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_TipBone_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** Name of tip bone */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "Name of tip bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_TipBone = { "TipBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CCDIK, TipBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_TipBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_TipBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RootBone_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** Name of the root bone*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "Name of the root bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CCDIK, RootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RootBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** Tolerance for final tip location delta from EffectorLocation*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "Tolerance for final tip location delta from EffectorLocation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CCDIK, Precision), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** Maximum number of iterations allowed, to control performance. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "Maximum number of iterations allowed, to control performance." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CCDIK, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bStartFromTail_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** Toggle drawing of axes to debug joint rotation*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "Toggle drawing of axes to debug joint rotation" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bStartFromTail_SetBit(void* Obj)
	{
		((FAnimNode_CCDIK*)Obj)->bStartFromTail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bStartFromTail = { "bStartFromTail", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_CCDIK), &Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bStartFromTail_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bStartFromTail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bStartFromTail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bEnableRotationLimit_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** Tolerance for final tip location delta from EffectorLocation*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "Tolerance for final tip location delta from EffectorLocation" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bEnableRotationLimit_SetBit(void* Obj)
	{
		((FAnimNode_CCDIK*)Obj)->bEnableRotationLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bEnableRotationLimit = { "bEnableRotationLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_CCDIK), &Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bEnableRotationLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bEnableRotationLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bEnableRotationLimit_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RotationLimitPerJoints_Inner = { "RotationLimitPerJoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RotationLimitPerJoints_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** symmetry rotation limit per joint. Index 0 matches with root bone and last index matches with tip bone. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_CCDIK.h" },
		{ "ToolTip", "symmetry rotation limit per joint. Index 0 matches with root bone and last index matches with tip bone." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RotationLimitPerJoints = { "RotationLimitPerJoints", nullptr, (EPropertyFlags)0x0040000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CCDIK, RotationLimitPerJoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RotationLimitPerJoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RotationLimitPerJoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorLocationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_EffectorTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_TipBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_Precision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bStartFromTail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_bEnableRotationLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RotationLimitPerJoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewProp_RotationLimitPerJoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_CCDIK",
		sizeof(FAnimNode_CCDIK),
		alignof(FAnimNode_CCDIK),
		Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CCDIK()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_CCDIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_CCDIK.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_CCDIK.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CCDIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CCDIK_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_CCDIK::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_CCDIK_Statics::NewStructOps, TEXT("AnimNode_CCDIK"), &Z_Registration_Info_UScriptStruct_AnimNode_CCDIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_CCDIK), 32541323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CCDIK_h_1027892(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CCDIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_CCDIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
