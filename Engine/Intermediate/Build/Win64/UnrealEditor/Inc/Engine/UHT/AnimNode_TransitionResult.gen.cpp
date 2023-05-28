// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_TransitionResult() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TransitionResult();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_TransitionResult>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_TransitionResult cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult;
class UScriptStruct* FAnimNode_TransitionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_TransitionResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_TransitionResult"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_TransitionResult>()
{
	return FAnimNode_TransitionResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanEnterTransition_MetaData[];
#endif
		static void NewProp_bCanEnterTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanEnterTransition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Root node of a state machine transition graph\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionResult.h" },
		{ "ToolTip", "Root node of a state machine transition graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_TransitionResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewProp_bCanEnterTransition_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_TransitionResult.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewProp_bCanEnterTransition_SetBit(void* Obj)
	{
		((FAnimNode_TransitionResult*)Obj)->bCanEnterTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewProp_bCanEnterTransition = { "bCanEnterTransition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_TransitionResult), &Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewProp_bCanEnterTransition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewProp_bCanEnterTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewProp_bCanEnterTransition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewProp_bCanEnterTransition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_TransitionResult",
		sizeof(FAnimNode_TransitionResult),
		alignof(FAnimNode_TransitionResult),
		Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TransitionResult()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionResult_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionResult_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_TransitionResult::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_TransitionResult_Statics::NewStructOps, TEXT("AnimNode_TransitionResult"), &Z_Registration_Info_UScriptStruct_AnimNode_TransitionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_TransitionResult), 2557464409U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionResult_h_1238500878(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_TransitionResult_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
