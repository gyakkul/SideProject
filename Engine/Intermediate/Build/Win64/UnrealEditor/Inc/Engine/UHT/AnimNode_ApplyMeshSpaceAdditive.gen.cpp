// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/InputScaleBias.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ApplyMeshSpaceAdditive() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_ApplyMeshSpaceAdditive>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ApplyMeshSpaceAdditive cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ApplyMeshSpaceAdditive;
class UScriptStruct* FAnimNode_ApplyMeshSpaceAdditive::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ApplyMeshSpaceAdditive.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ApplyMeshSpaceAdditive.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_ApplyMeshSpaceAdditive"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ApplyMeshSpaceAdditive.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_ApplyMeshSpaceAdditive>()
{
	return FAnimNode_ApplyMeshSpaceAdditive::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Additive_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Additive;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaInputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaInputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaBoolEnabled_MetaData[];
#endif
		static void NewProp_bAlphaBoolEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaBoolEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaBoolBlend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaBoolBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AlphaCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBiasClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBiasClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ApplyMeshSpaceAdditive>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Base_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ApplyMeshSpaceAdditive, Base), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Base_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Additive_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Additive = { "Additive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ApplyMeshSpaceAdditive, Additive), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Additive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Additive_MetaData)) }; // 2393943538
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaInputType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The data type used to control the alpha blending of the additive pose.\n\x09\x09Note: Changing this value will disconnect alpha input pins.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
		{ "ToolTip", "The data type used to control the alpha blending of the additive pose.\n              Note: Changing this value will disconnect alpha input pins." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ApplyMeshSpaceAdditive, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaInputType_MetaData)) }; // 1572332242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The float value that controls the alpha blending when the alpha input type is set to 'Float' */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The float value that controls the alpha blending when the alpha input type is set to 'Float'" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ApplyMeshSpaceAdditive, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_bAlphaBoolEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The boolean value that controls the alpha blending when the alpha input type is set to 'Bool' */" },
		{ "DisplayName", "bEnabled" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The boolean value that controls the alpha blending when the alpha input type is set to 'Bool'" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_bAlphaBoolEnabled_SetBit(void* Obj)
	{
		((FAnimNode_ApplyMeshSpaceAdditive*)Obj)->bAlphaBoolEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_bAlphaBoolEnabled = { "bAlphaBoolEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_ApplyMeshSpaceAdditive), &Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_bAlphaBoolEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_bAlphaBoolEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_bAlphaBoolEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaBoolBlend_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Blend Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaBoolBlend = { "AlphaBoolBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ApplyMeshSpaceAdditive, AlphaBoolBlend), Z_Construct_UScriptStruct_FInputAlphaBoolBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaBoolBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaBoolBlend_MetaData)) }; // 3565619021
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaCurveName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ApplyMeshSpaceAdditive, AlphaCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaCurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ApplyMeshSpaceAdditive, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaScaleBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaScaleBias_MetaData)) }; // 4124520036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ApplyMeshSpaceAdditive, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaScaleBiasClamp_MetaData)) }; // 1479025939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/*\n\x09* Max LOD that this node is allowed to run\n\x09* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09* when the component LOD becomes 3, it will stop update/evaluate\n\x09* currently transition would be issue and that has to be re-visited\n\x09*/" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ApplyMeshSpaceAdditive, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_LODThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Base,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Additive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_bAlphaBoolEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaBoolBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaScaleBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_AlphaScaleBiasClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewProp_LODThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_ApplyMeshSpaceAdditive",
		sizeof(FAnimNode_ApplyMeshSpaceAdditive),
		alignof(FAnimNode_ApplyMeshSpaceAdditive),
		Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_ApplyMeshSpaceAdditive.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ApplyMeshSpaceAdditive.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_ApplyMeshSpaceAdditive.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_ApplyMeshSpaceAdditive_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_ApplyMeshSpaceAdditive_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_ApplyMeshSpaceAdditive::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ApplyMeshSpaceAdditive_Statics::NewStructOps, TEXT("AnimNode_ApplyMeshSpaceAdditive"), &Z_Registration_Info_UScriptStruct_AnimNode_ApplyMeshSpaceAdditive, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ApplyMeshSpaceAdditive), 1270410099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_ApplyMeshSpaceAdditive_h_1075380063(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_ApplyMeshSpaceAdditive_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_ApplyMeshSpaceAdditive_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
