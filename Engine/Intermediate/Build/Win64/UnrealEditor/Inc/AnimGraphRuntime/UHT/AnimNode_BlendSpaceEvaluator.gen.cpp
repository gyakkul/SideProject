// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_BlendSpaceEvaluator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendSpaceEvaluator() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_BlendSpaceEvaluator>() == std::is_polymorphic<FAnimNode_BlendSpacePlayer>(), "USTRUCT FAnimNode_BlendSpaceEvaluator cannot be polymorphic unless super FAnimNode_BlendSpacePlayer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator;
class UScriptStruct* FAnimNode_BlendSpaceEvaluator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendSpaceEvaluator"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendSpaceEvaluator>()
{
	return FAnimNode_BlendSpaceEvaluator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTeleportToNormalizedTime_MetaData[];
#endif
		static void NewProp_bTeleportToNormalizedTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleportToNormalizedTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Evaluates a point in a blendspace, using a specific time input rather than advancing time internally.\n// Typically the playback position of the animation for this node will represent something other than time, like jump height.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceEvaluator.h" },
		{ "ToolTip", "Evaluates a point in a blendspace, using a specific time input rather than advancing time internally.\nTypically the playback position of the animation for this node will represent something other than time, like jump height." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendSpaceEvaluator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_NormalizedTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Normalized time between [0,1]. The actual length of a blendspace is dynamic based on the coordinate, so it is exposed as a normalized value. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceEvaluator.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Normalized time between [0,1]. The actual length of a blendspace is dynamic based on the coordinate, so it is exposed as a normalized value." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_NormalizedTime = { "NormalizedTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendSpaceEvaluator, NormalizedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_NormalizedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_NormalizedTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_bTeleportToNormalizedTime_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true, teleport to normalized time, does NOT advance time (does not trigger notifies, does not extract Root Motion, etc.)\n\x09If false, will advance time (will trigger notifies, extract root motion if applicable, etc). */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendSpaceEvaluator.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, teleport to normalized time, does NOT advance time (does not trigger notifies, does not extract Root Motion, etc.)\n      If false, will advance time (will trigger notifies, extract root motion if applicable, etc)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_bTeleportToNormalizedTime_SetBit(void* Obj)
	{
		((FAnimNode_BlendSpaceEvaluator*)Obj)->bTeleportToNormalizedTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_bTeleportToNormalizedTime = { "bTeleportToNormalizedTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_BlendSpaceEvaluator), &Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_bTeleportToNormalizedTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_bTeleportToNormalizedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_bTeleportToNormalizedTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_NormalizedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewProp_bTeleportToNormalizedTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,
		&NewStructOps,
		"AnimNode_BlendSpaceEvaluator",
		sizeof(FAnimNode_BlendSpaceEvaluator),
		alignof(FAnimNode_BlendSpaceEvaluator),
		Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceEvaluator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceEvaluator_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_BlendSpaceEvaluator::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendSpaceEvaluator_Statics::NewStructOps, TEXT("AnimNode_BlendSpaceEvaluator"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendSpaceEvaluator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendSpaceEvaluator), 2626815361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceEvaluator_h_3725157135(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceEvaluator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendSpaceEvaluator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
