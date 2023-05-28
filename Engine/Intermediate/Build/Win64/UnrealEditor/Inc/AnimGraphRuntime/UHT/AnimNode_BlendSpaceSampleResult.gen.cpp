// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_BlendSpaceSampleResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendSpaceSampleResult() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceSampleResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Root();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_BlendSpaceSampleResult>() == std::is_polymorphic<FAnimNode_Root>(), "USTRUCT FAnimNode_BlendSpaceSampleResult cannot be polymorphic unless super FAnimNode_Root is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceSampleResult;
class UScriptStruct* FAnimNode_BlendSpaceSampleResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceSampleResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceSampleResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceSampleResult, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendSpaceSampleResult"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceSampleResult.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendSpaceSampleResult>()
{
	return FAnimNode_BlendSpaceSampleResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_BlendSpaceSampleResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpaceSampleResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Root node of a blend space sample (sink node).\n// We dont use AnimNode_Root to let us distinguish these nodes in the property list at link time.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceSampleResult.h" },
		{ "ToolTip", "Root node of a blend space sample (sink node).\nWe dont use AnimNode_Root to let us distinguish these nodes in the property list at link time." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceSampleResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendSpaceSampleResult>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceSampleResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Root,
		&NewStructOps,
		"AnimNode_BlendSpaceSampleResult",
		sizeof(FAnimNode_BlendSpaceSampleResult),
		alignof(FAnimNode_BlendSpaceSampleResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceSampleResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceSampleResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceSampleResult()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceSampleResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceSampleResult.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendSpaceSampleResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceSampleResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceSampleResult_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceSampleResult_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_BlendSpaceSampleResult::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendSpaceSampleResult_Statics::NewStructOps, TEXT("AnimNode_BlendSpaceSampleResult"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceSampleResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendSpaceSampleResult), 2001643597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceSampleResult_h_117701009(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceSampleResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceSampleResult_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
