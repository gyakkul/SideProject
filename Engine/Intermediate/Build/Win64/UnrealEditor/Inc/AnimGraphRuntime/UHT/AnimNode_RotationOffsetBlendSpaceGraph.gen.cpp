// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_RotationOffsetBlendSpaceGraph.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/InputScaleBias.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RotationOffsetBlendSpaceGraph() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_RotationOffsetBlendSpaceGraph>() == std::is_polymorphic<FAnimNode_BlendSpaceGraphBase>(), "USTRUCT FAnimNode_RotationOffsetBlendSpaceGraph cannot be polymorphic unless super FAnimNode_BlendSpaceGraphBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpaceGraph;
class UScriptStruct* FAnimNode_RotationOffsetBlendSpaceGraph::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpaceGraph.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpaceGraph.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_RotationOffsetBlendSpaceGraph"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpaceGraph.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_RotationOffsetBlendSpaceGraph>()
{
	return FAnimNode_RotationOffsetBlendSpaceGraph::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaBoolBlend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaBoolBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AlphaCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBiasClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBiasClamp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaInputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaInputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaBoolEnabled_MetaData[];
#endif
		static void NewProp_bAlphaBoolEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaBoolEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Allows multiple animations to be blended between based on input parameters\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpaceGraph.h" },
		{ "ToolTip", "Allows multiple animations to be blended between based on input parameters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RotationOffsetBlendSpaceGraph>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_BasePose_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpaceGraph, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_BasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_BasePose_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Performance" },
		{ "Comment", "/*\n\x09* Max LOD that this node is allowed to run\n\x09* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09* when the component LOD becomes 3, it will stop update/evaluate\n\x09* currently transition would be issue and that has to be re-visited\n\x09*/" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpaceGraph.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpaceGraph, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Alpha" },
		{ "Comment", "// Current strength of the AimOffset\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpaceGraph.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Current strength of the AimOffset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpaceGraph, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpaceGraph, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaScaleBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaScaleBias_MetaData)) }; // 4124520036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaBoolBlend_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Alpha" },
		{ "DisplayName", "Blend Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaBoolBlend = { "AlphaBoolBlend", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpaceGraph, AlphaBoolBlend), Z_Construct_UScriptStruct_FInputAlphaBoolBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaBoolBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaBoolBlend_MetaData)) }; // 3565619021
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaCurveName_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpaceGraph.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpaceGraph, AlphaCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaCurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpaceGraph, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaScaleBiasClamp_MetaData)) }; // 1479025939
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaInputType_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RotationOffsetBlendSpaceGraph, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaInputType_MetaData)) }; // 1572332242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_bAlphaBoolEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Alpha" },
		{ "DisplayAfter", "AlphaScaleBias" },
		{ "DisplayName", "bEnabled" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_RotationOffsetBlendSpaceGraph.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_bAlphaBoolEnabled_SetBit(void* Obj)
	{
		((FAnimNode_RotationOffsetBlendSpaceGraph*)Obj)->bAlphaBoolEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_bAlphaBoolEnabled = { "bAlphaBoolEnabled", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_RotationOffsetBlendSpaceGraph), &Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_bAlphaBoolEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_bAlphaBoolEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_bAlphaBoolEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_BasePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_LODThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaScaleBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaBoolBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaScaleBiasClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_AlphaInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewProp_bAlphaBoolEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraphBase,
		&NewStructOps,
		"AnimNode_RotationOffsetBlendSpaceGraph",
		sizeof(FAnimNode_RotationOffsetBlendSpaceGraph),
		alignof(FAnimNode_RotationOffsetBlendSpaceGraph),
		Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpaceGraph.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpaceGraph.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpaceGraph.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RotationOffsetBlendSpaceGraph_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RotationOffsetBlendSpaceGraph_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_RotationOffsetBlendSpaceGraph::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph_Statics::NewStructOps, TEXT("AnimNode_RotationOffsetBlendSpaceGraph"), &Z_Registration_Info_UScriptStruct_AnimNode_RotationOffsetBlendSpaceGraph, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RotationOffsetBlendSpaceGraph), 2070483750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RotationOffsetBlendSpaceGraph_h_3037054048(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RotationOffsetBlendSpaceGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_RotationOffsetBlendSpaceGraph_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
