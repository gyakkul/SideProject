// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_SkeletalControlBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/InputScaleBias.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SkeletalControlBase() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_SkeletalControlBase>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_SkeletalControlBase cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SkeletalControlBase;
class UScriptStruct* FAnimNode_SkeletalControlBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SkeletalControlBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SkeletalControlBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_SkeletalControlBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SkeletalControlBase.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_SkeletalControlBase>()
{
	return FAnimNode_SkeletalControlBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActualAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualAlpha;
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
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidationVisualWarningMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ValidationVisualWarningMessage;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SkeletalControlBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_ComponentPose_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "// Input link\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
		{ "ToolTip", "Input link" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_ComponentPose = { "ComponentPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SkeletalControlBase, ComponentPose), Z_Construct_UScriptStruct_FComponentSpacePoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_ComponentPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_ComponentPose_MetaData)) }; // 4052600424
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/*\n\x09* Max LOD that this node is allowed to run\n\x09* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09* when the component LOD becomes 3, it will stop update/evaluate\n\x09* currently transition would be issue and that has to be re-visited\n\x09*/" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SkeletalControlBase, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_ActualAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_ActualAlpha = { "ActualAlpha", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SkeletalControlBase, ActualAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_ActualAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_ActualAlpha_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaInputType_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SkeletalControlBase, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaInputType_MetaData)) }; // 1572332242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_bAlphaBoolEnabled_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayName", "bEnabled" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_bAlphaBoolEnabled_SetBit(void* Obj)
	{
		((FAnimNode_SkeletalControlBase*)Obj)->bAlphaBoolEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_bAlphaBoolEnabled = { "bAlphaBoolEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SkeletalControlBase), &Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_bAlphaBoolEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_bAlphaBoolEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_bAlphaBoolEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// Current strength of the skeletal control\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Current strength of the skeletal control" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SkeletalControlBase, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SkeletalControlBase, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaScaleBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaScaleBias_MetaData)) }; // 4124520036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaBoolBlend_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayName", "Blend Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaBoolBlend = { "AlphaBoolBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SkeletalControlBase, AlphaBoolBlend), Z_Construct_UScriptStruct_FInputAlphaBoolBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaBoolBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaBoolBlend_MetaData)) }; // 3565619021
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaCurveName_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SkeletalControlBase, AlphaCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaCurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SkeletalControlBase, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaScaleBiasClamp_MetaData)) }; // 1479025939
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_ValidationVisualWarningMessage_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_SkeletalControlBase.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_ValidationVisualWarningMessage = { "ValidationVisualWarningMessage", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SkeletalControlBase, ValidationVisualWarningMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_ValidationVisualWarningMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_ValidationVisualWarningMessage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_ComponentPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_LODThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_ActualAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_bAlphaBoolEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaScaleBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaBoolBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_AlphaScaleBiasClamp,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewProp_ValidationVisualWarningMessage,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_SkeletalControlBase",
		sizeof(FAnimNode_SkeletalControlBase),
		alignof(FAnimNode_SkeletalControlBase),
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_SkeletalControlBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SkeletalControlBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_SkeletalControlBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SkeletalControlBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SkeletalControlBase_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_SkeletalControlBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase_Statics::NewStructOps, TEXT("AnimNode_SkeletalControlBase"), &Z_Registration_Info_UScriptStruct_AnimNode_SkeletalControlBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SkeletalControlBase), 664029670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SkeletalControlBase_h_1321621619(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SkeletalControlBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_SkeletalControlBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
