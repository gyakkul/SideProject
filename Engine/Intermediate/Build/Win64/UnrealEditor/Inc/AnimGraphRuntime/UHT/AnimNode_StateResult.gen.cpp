// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_StateResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_StateResult() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Root();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_StateResult>() == std::is_polymorphic<FAnimNode_Root>(), "USTRUCT FAnimNode_StateResult cannot be polymorphic unless super FAnimNode_Root is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_StateResult;
class UScriptStruct* FAnimNode_StateResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_StateResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_StateResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateResult, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_StateResult"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_StateResult.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_StateResult>()
{
	return FAnimNode_StateResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Root node of an state machine state (sink node).\n// We dont use AnimNode_Root to let us distinguish these nodes in the property list at link time.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_StateResult.h" },
		{ "ToolTip", "Root node of an state machine state (sink node).\nWe dont use AnimNode_Root to let us distinguish these nodes in the property list at link time." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_StateResult>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewProp_StateIndex_MetaData[] = {
		{ "Comment", "/** The index of the state this node belongs to. Filled in during the owning state machine's compilation. */" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_StateResult.h" },
		{ "ToolTip", "The index of the state this node belongs to. Filled in during the owning state machine's compilation." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_StateResult, StateIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewProp_StateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewProp_StateIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewProp_StateIndex,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Root,
		&NewStructOps,
		"AnimNode_StateResult",
		sizeof(FAnimNode_StateResult),
		alignof(FAnimNode_StateResult),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_StateResult()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_StateResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_StateResult.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_StateResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_StateResult_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_StateResult_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_StateResult::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_StateResult_Statics::NewStructOps, TEXT("AnimNode_StateResult"), &Z_Registration_Info_UScriptStruct_AnimNode_StateResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_StateResult), 1895931918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_StateResult_h_3626755032(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_StateResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_StateResult_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
