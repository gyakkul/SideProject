// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimSubsystem_BlendSpaceGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSubsystem_BlendSpaceGraph() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimSubsystem_BlendSpaceGraph>() == std::is_polymorphic<FAnimSubsystem>(), "USTRUCT FAnimSubsystem_BlendSpaceGraph cannot be polymorphic unless super FAnimSubsystem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph;
class UScriptStruct* FAnimSubsystem_BlendSpaceGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSubsystem_BlendSpaceGraph"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSubsystem_BlendSpaceGraph>()
{
	return FAnimSubsystem_BlendSpaceGraph::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendSpaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendSpaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_BlendSpaceGraph.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSubsystem_BlendSpaceGraph>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::NewProp_BlendSpaces_Inner = { "BlendSpaces", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::NewProp_BlendSpaces_MetaData[] = {
		{ "Comment", "// Any internal blendspaces we host\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimSubsystem_BlendSpaceGraph.h" },
		{ "ToolTip", "Any internal blendspaces we host" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::NewProp_BlendSpaces = { "BlendSpaces", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSubsystem_BlendSpaceGraph, BlendSpaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::NewProp_BlendSpaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::NewProp_BlendSpaces_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::NewProp_BlendSpaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::NewProp_BlendSpaces,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimSubsystem,
		&NewStructOps,
		"AnimSubsystem_BlendSpaceGraph",
		sizeof(FAnimSubsystem_BlendSpaceGraph),
		alignof(FAnimSubsystem_BlendSpaceGraph),
		Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph.InnerSingleton, Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_BlendSpaceGraph_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_BlendSpaceGraph_h_Statics::ScriptStructInfo[] = {
		{ FAnimSubsystem_BlendSpaceGraph::StaticStruct, Z_Construct_UScriptStruct_FAnimSubsystem_BlendSpaceGraph_Statics::NewStructOps, TEXT("AnimSubsystem_BlendSpaceGraph"), &Z_Registration_Info_UScriptStruct_AnimSubsystem_BlendSpaceGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSubsystem_BlendSpaceGraph), 700865743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_BlendSpaceGraph_h_3230580471(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_BlendSpaceGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimSubsystem_BlendSpaceGraph_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
