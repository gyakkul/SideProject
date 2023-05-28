// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_BlendSpaceGraphBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendSpaceGraphBase() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimGroupRole();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_BlendSpaceGraphBase>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_BlendSpaceGraphBase cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase;
class UScriptStruct* FAnimNode_BlendSpaceGraphBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendSpaceGraphBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendSpaceGraphBase>()
{
	return FAnimNode_BlendSpaceGraphBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupRole_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupRole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplePoseLinks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplePoseLinks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplePoseLinks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Allows multiple animations to be blended between based on input parameters\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraphBase.h" },
		{ "ToolTip", "Allows multiple animations to be blended between based on input parameters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendSpaceGraphBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_X_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Coordinates" },
		{ "Comment", "// The X coordinate to sample in the blendspace\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraphBase.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The X coordinate to sample in the blendspace" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpaceGraphBase, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_Y_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Coordinates" },
		{ "Comment", "// The Y coordinate to sample in the blendspace\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraphBase.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The Y coordinate to sample in the blendspace" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpaceGraphBase, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_GroupName_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Sync" },
		{ "Comment", "// The group name that we synchronize with. All nodes employing sync beyond this in the anim graph will implicitly use this sync group.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraphBase.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "The group name that we synchronize with. All nodes employing sync beyond this in the anim graph will implicitly use this sync group." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpaceGraphBase, GroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_GroupRole_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Sync" },
		{ "Comment", "// The role this player can assume within the group\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraphBase.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "The role this player can assume within the group" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_GroupRole = { "GroupRole", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpaceGraphBase, GroupRole), Z_Construct_UEnum_Engine_EAnimGroupRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_GroupRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_GroupRole_MetaData)) }; // 1300806665
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "Comment", "// The internal blendspace asset to play\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraphBase.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The internal blendspace asset to play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpaceGraphBase, BlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpace_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_SamplePoseLinks_Inner = { "SamplePoseLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_SamplePoseLinks_MetaData[] = {
		{ "Comment", "// Pose links for each sample in the blendspace\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceGraphBase.h" },
		{ "ToolTip", "Pose links for each sample in the blendspace" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_SamplePoseLinks = { "SamplePoseLinks", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpaceGraphBase, SamplePoseLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_SamplePoseLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_SamplePoseLinks_MetaData)) }; // 2393943538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_GroupRole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_BlendSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_SamplePoseLinks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewProp_SamplePoseLinks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_BlendSpaceGraphBase",
		sizeof(FAnimNode_BlendSpaceGraphBase),
		alignof(FAnimNode_BlendSpaceGraphBase),
		Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraphBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraphBase_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_BlendSpaceGraphBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase_Statics::NewStructOps, TEXT("AnimNode_BlendSpaceGraphBase"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceGraphBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendSpaceGraphBase), 2326556057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraphBase_h_285878900(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraphBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceGraphBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
