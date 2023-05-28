// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_CorrectPose.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CorrectPose() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	POSECORRECTIVES_API UClass* Z_Construct_UClass_UPoseCorrectivesAsset_NoRegister();
	POSECORRECTIVES_API UClass* Z_Construct_UClass_UPoseCorrectivesProcessor_NoRegister();
	POSECORRECTIVES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CorrectPose();
	UPackage* Z_Construct_UPackage__Script_PoseCorrectives();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_CorrectPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_CorrectPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_CorrectPose;
class UScriptStruct* FAnimNode_CorrectPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CorrectPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_CorrectPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CorrectPose, (UObject*)Z_Construct_UPackage__Script_PoseCorrectives(), TEXT("AnimNode_CorrectPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CorrectPose.OuterSingleton;
}
template<> POSECORRECTIVES_API UScriptStruct* StaticStruct<FAnimNode_CorrectPose>()
{
	return FAnimNode_CorrectPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseCorrectivesAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PoseCorrectivesAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseCorrectivesProcessor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PoseCorrectivesProcessor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_CorrectPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CorrectPose>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewProp_PoseCorrectivesAsset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Pose Correctives asset to use. */" },
		{ "ModuleRelativePath", "Public/AnimNode_CorrectPose.h" },
		{ "ToolTip", "Pose Correctives asset to use." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewProp_PoseCorrectivesAsset = { "PoseCorrectivesAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CorrectPose, PoseCorrectivesAsset), Z_Construct_UClass_UPoseCorrectivesAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewProp_PoseCorrectivesAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewProp_PoseCorrectivesAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "/** Bones to use for driving parameters based on their transform */" },
		{ "ModuleRelativePath", "Public/AnimNode_CorrectPose.h" },
		{ "ToolTip", "Bones to use for driving parameters based on their transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CorrectPose, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewProp_SourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewProp_SourcePose_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewProp_PoseCorrectivesProcessor_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_CorrectPose.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewProp_PoseCorrectivesProcessor = { "PoseCorrectivesProcessor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_CorrectPose, PoseCorrectivesProcessor), Z_Construct_UClass_UPoseCorrectivesProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewProp_PoseCorrectivesProcessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewProp_PoseCorrectivesProcessor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewProp_PoseCorrectivesAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewProp_SourcePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewProp_PoseCorrectivesProcessor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseCorrectives,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_CorrectPose",
		sizeof(FAnimNode_CorrectPose),
		alignof(FAnimNode_CorrectPose),
		Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CorrectPose()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_CorrectPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_CorrectPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_CorrectPose.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_AnimNode_CorrectPose_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_AnimNode_CorrectPose_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_CorrectPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_CorrectPose_Statics::NewStructOps, TEXT("AnimNode_CorrectPose"), &Z_Registration_Info_UScriptStruct_AnimNode_CorrectPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_CorrectPose), 4062265160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_AnimNode_CorrectPose_h_2119174708(TEXT("/Script/PoseCorrectives"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_AnimNode_CorrectPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectives_Public_AnimNode_CorrectPose_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
