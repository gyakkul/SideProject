// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_MultiWayBlend.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/InputScaleBias.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_MultiWayBlend() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_MultiWayBlend>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_MultiWayBlend cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend;
class UScriptStruct* FAnimNode_MultiWayBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_MultiWayBlend"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_MultiWayBlend>()
{
	return FAnimNode_MultiWayBlend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Poses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Poses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Poses;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredAlphas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredAlphas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DesiredAlphas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdditiveNode_MetaData[];
#endif
		static void NewProp_bAdditiveNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdditiveNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormalizeAlpha_MetaData[];
#endif
		static void NewProp_bNormalizeAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalizeAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This represents a baked transition\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
		{ "ToolTip", "This represents a baked transition" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_MultiWayBlend>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses_Inner = { "Poses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(nullptr, 0) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses = { "Poses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_MultiWayBlend, Poses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses_MetaData)) }; // 2393943538
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas_Inner = { "DesiredAlphas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas = { "DesiredAlphas", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_MultiWayBlend, DesiredAlphas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_MultiWayBlend, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_AlphaScaleBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_AlphaScaleBias_MetaData)) }; // 4124520036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode_SetBit(void* Obj)
	{
		((FAnimNode_MultiWayBlend*)Obj)->bAdditiveNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode = { "bAdditiveNode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_MultiWayBlend), &Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_MultiWayBlend.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha_SetBit(void* Obj)
	{
		((FAnimNode_MultiWayBlend*)Obj)->bNormalizeAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha = { "bNormalizeAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_MultiWayBlend), &Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_Poses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_DesiredAlphas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_AlphaScaleBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bAdditiveNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewProp_bNormalizeAlpha,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_MultiWayBlend",
		sizeof(FAnimNode_MultiWayBlend),
		alignof(FAnimNode_MultiWayBlend),
		Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_MultiWayBlend_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_MultiWayBlend_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_MultiWayBlend::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_MultiWayBlend_Statics::NewStructOps, TEXT("AnimNode_MultiWayBlend"), &Z_Registration_Info_UScriptStruct_AnimNode_MultiWayBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_MultiWayBlend), 2333716490U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_MultiWayBlend_h_4102973191(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_MultiWayBlend_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_MultiWayBlend_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
