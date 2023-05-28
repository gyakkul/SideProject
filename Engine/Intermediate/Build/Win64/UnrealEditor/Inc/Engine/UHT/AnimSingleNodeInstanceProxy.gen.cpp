// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimSingleNodeInstanceProxy.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSingleNodeInstanceProxy() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SingleNode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_SingleNode>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_SingleNode cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SingleNode;
class UScriptStruct* FAnimNode_SingleNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SingleNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SingleNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SingleNode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_SingleNode"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SingleNode.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_SingleNode>()
{
	return FAnimNode_SingleNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Local anim node for extensible processing. \n * Cant be used outside of this context as it has no graph node counterpart \n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimSingleNodeInstanceProxy.h" },
		{ "ToolTip", "Local anim node for extensible processing.\nCant be used outside of this context as it has no graph node counterpart" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SingleNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/Animation/AnimSingleNodeInstanceProxy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SingleNode, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewProp_SourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewProp_SourcePose_MetaData)) }; // 2393943538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewProp_SourcePose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_SingleNode",
		sizeof(FAnimNode_SingleNode),
		alignof(FAnimNode_SingleNode),
		Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SingleNode()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_SingleNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SingleNode.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_SingleNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimSingleNodeInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FAnimSingleNodeInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy;
class UScriptStruct* FAnimSingleNodeInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSingleNodeInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSingleNodeInstanceProxy>()
{
	return FAnimSingleNodeInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/Animation/AnimSingleNodeInstanceProxy.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSingleNodeInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"AnimSingleNodeInstanceProxy",
		sizeof(FAnimSingleNodeInstanceProxy),
		alignof(FAnimSingleNodeInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSingleNodeInstanceProxy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSingleNodeInstanceProxy_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_SingleNode::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SingleNode_Statics::NewStructOps, TEXT("AnimNode_SingleNode"), &Z_Registration_Info_UScriptStruct_AnimNode_SingleNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SingleNode), 2732020667U) },
		{ FAnimSingleNodeInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FAnimSingleNodeInstanceProxy_Statics::NewStructOps, TEXT("AnimSingleNodeInstanceProxy"), &Z_Registration_Info_UScriptStruct_AnimSingleNodeInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSingleNodeInstanceProxy), 1583557429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSingleNodeInstanceProxy_h_1319486175(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSingleNodeInstanceProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSingleNodeInstanceProxy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
