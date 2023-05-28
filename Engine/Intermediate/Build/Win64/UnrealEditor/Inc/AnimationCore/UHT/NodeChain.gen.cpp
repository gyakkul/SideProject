// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NodeChain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeChain() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeChain();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeChain;
class UScriptStruct* FNodeChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeChain, (UObject*)Z_Construct_UPackage__Script_AnimationCore(), TEXT("NodeChain"));
	}
	return Z_Registration_Info_UScriptStruct_NodeChain.OuterSingleton;
}
template<> ANIMATIONCORE_API UScriptStruct* StaticStruct<FNodeChain>()
{
	return FNodeChain::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeChain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeChain_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A chain of nodes in a hierarchy */" },
		{ "ModuleRelativePath", "Public/NodeChain.h" },
		{ "ToolTip", "A chain of nodes in a hierarchy" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeChain>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNodeChain_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeChain_Statics::NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/NodeChain.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodeChain_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeChain, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeChain_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeChain_Statics::NewProp_Nodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeChain_Statics::NewProp_Nodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeChain_Statics::NewProp_Nodes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
		nullptr,
		&NewStructOps,
		"NodeChain",
		sizeof(FNodeChain),
		alignof(FNodeChain),
		Z_Construct_UScriptStruct_FNodeChain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeChain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeChain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeChain()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeChain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeChain.InnerSingleton, Z_Construct_UScriptStruct_FNodeChain_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeChain.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeChain_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeChain_h_Statics::ScriptStructInfo[] = {
		{ FNodeChain::StaticStruct, Z_Construct_UScriptStruct_FNodeChain_Statics::NewStructOps, TEXT("NodeChain"), &Z_Registration_Info_UScriptStruct_NodeChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeChain), 3045139832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeChain_h_3656790259(TEXT("/Script/AnimationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeChain_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_NodeChain_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
