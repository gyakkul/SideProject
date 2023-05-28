// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_HandIKRetargeting.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_HandIKRetargeting() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_HandIKRetargeting>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_HandIKRetargeting cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_HandIKRetargeting;
class UScriptStruct* FAnimNode_HandIKRetargeting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_HandIKRetargeting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_HandIKRetargeting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_HandIKRetargeting"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_HandIKRetargeting.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_HandIKRetargeting>()
{
	return FAnimNode_HandIKRetargeting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandFK_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightHandFK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandFK_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandFK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandIK_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightHandIK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandIK_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandIK;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKBonesToMove_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKBonesToMove_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IKBonesToMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandFKWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HandFKWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Node to handle re-targeting of Hand IK bone chain.\n * It looks at position in Mesh Space of Left and Right IK bones, and moves Left and Right IK bones to those.\n * based on HandFKWeight. (0 = favor left hand, 1 = favor right hand, 0.5 = equal weight).\n * This is used so characters of different proportions can handle the same props.\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
		{ "ToolTip", "Node to handle re-targeting of Hand IK bone chain.\nIt looks at position in Mesh Space of Left and Right IK bones, and moves Left and Right IK bones to those.\nbased on HandFKWeight. (0 = favor left hand, 1 = favor right hand, 0.5 = equal weight).\nThis is used so characters of different proportions can handle the same props." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_HandIKRetargeting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandFK_MetaData[] = {
		{ "Category", "HandIKRetargeting" },
		{ "Comment", "/** Bone for Right Hand FK */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
		{ "ToolTip", "Bone for Right Hand FK" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandFK = { "RightHandFK", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, RightHandFK), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandFK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandFK_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandFK_MetaData[] = {
		{ "Category", "HandIKRetargeting" },
		{ "Comment", "/** Bone for Left Hand FK */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
		{ "ToolTip", "Bone for Left Hand FK" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandFK = { "LeftHandFK", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, LeftHandFK), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandFK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandFK_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandIK_MetaData[] = {
		{ "Category", "HandIKRetargeting" },
		{ "Comment", "/** Bone for Right Hand IK */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
		{ "ToolTip", "Bone for Right Hand IK" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandIK = { "RightHandIK", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, RightHandIK), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandIK_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandIK_MetaData[] = {
		{ "Category", "HandIKRetargeting" },
		{ "Comment", "/** Bone for Left Hand IK */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
		{ "ToolTip", "Bone for Left Hand IK" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandIK = { "LeftHandIK", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, LeftHandIK), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandIK_MetaData)) }; // 2906976723
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_IKBonesToMove_Inner = { "IKBonesToMove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_IKBonesToMove_MetaData[] = {
		{ "Category", "HandIKRetargeting" },
		{ "Comment", "/** IK Bones to move. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
		{ "ToolTip", "IK Bones to move." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_IKBonesToMove = { "IKBonesToMove", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, IKBonesToMove), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_IKBonesToMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_IKBonesToMove_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_HandFKWeight_MetaData[] = {
		{ "Category", "HandIKRetargeting" },
		{ "Comment", "/** Which hand to favor. 0.5 is equal weight for both, 1 = right hand, 0 = left hand. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_HandIKRetargeting.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Which hand to favor. 0.5 is equal weight for both, 1 = right hand, 0 = left hand." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_HandFKWeight = { "HandFKWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_HandIKRetargeting, HandFKWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_HandFKWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_HandFKWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandFK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandFK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_RightHandIK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_LeftHandIK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_IKBonesToMove_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_IKBonesToMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewProp_HandFKWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_HandIKRetargeting",
		sizeof(FAnimNode_HandIKRetargeting),
		alignof(FAnimNode_HandIKRetargeting),
		Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_HandIKRetargeting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_HandIKRetargeting.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_HandIKRetargeting.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_HandIKRetargeting_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_HandIKRetargeting_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_HandIKRetargeting::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_HandIKRetargeting_Statics::NewStructOps, TEXT("AnimNode_HandIKRetargeting"), &Z_Registration_Info_UScriptStruct_AnimNode_HandIKRetargeting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_HandIKRetargeting), 3911275275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_HandIKRetargeting_h_108727226(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_HandIKRetargeting_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_HandIKRetargeting_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
