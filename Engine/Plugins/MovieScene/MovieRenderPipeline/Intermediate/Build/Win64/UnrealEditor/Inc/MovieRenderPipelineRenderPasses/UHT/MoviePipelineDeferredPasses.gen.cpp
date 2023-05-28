// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineDeferredPasses.h"
#include "ActorLayerUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineDeferredPasses() {}
// Cross Module References
	ACTORLAYERUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActorLayer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting_NoRegister();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly_NoRegister();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_NoRegister();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly_NoRegister();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit_NoRegister();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPassBase();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineDeferredPassBase_NoRegister();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineImagePassBase();
	MOVIERENDERPIPELINERENDERPASSES_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoviePipelinePostProcessPass;
class UScriptStruct* FMoviePipelinePostProcessPass::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoviePipelinePostProcessPass.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoviePipelinePostProcessPass.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses(), TEXT("MoviePipelinePostProcessPass"));
	}
	return Z_Registration_Info_UScriptStruct_MoviePipelinePostProcessPass.OuterSingleton;
}
template<> MOVIERENDERPIPELINERENDERPASSES_API UScriptStruct* StaticStruct<FMoviePipelinePostProcessPass>()
{
	return FMoviePipelinePostProcessPass::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoviePipelinePostProcessPass>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Additional passes add a significant amount of render time. May produce multiple output files if using Screen Percentage. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
		{ "ToolTip", "Additional passes add a significant amount of render time. May produce multiple output files if using Screen Percentage." },
	};
#endif
	void Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FMoviePipelinePostProcessPass*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMoviePipelinePostProcessPass), &Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** \n\x09* Material should be set to Post Process domain, and Blendable Location = After Tonemapping. \n\x09* This will need bDisableMultisampleEffects enabled for pixels to line up(ie : no DoF, MotionBlur, TAA)\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
		{ "ToolTip", "Material should be set to Post Process domain, and Blendable Location = After Tonemapping.\nThis will need bDisableMultisampleEffects enabled for pixels to line up(ie : no DoF, MotionBlur, TAA)" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelinePostProcessPass, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses,
		nullptr,
		&NewStructOps,
		"MoviePipelinePostProcessPass",
		sizeof(FMoviePipelinePostProcessPass),
		alignof(FMoviePipelinePostProcessPass),
		Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass()
	{
		if (!Z_Registration_Info_UScriptStruct_MoviePipelinePostProcessPass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoviePipelinePostProcessPass.InnerSingleton, Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MoviePipelinePostProcessPass.InnerSingleton;
	}
	void UMoviePipelineDeferredPassBase::StaticRegisterNativesUMoviePipelineDeferredPassBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineDeferredPassBase);
	UClass* Z_Construct_UClass_UMoviePipelineDeferredPassBase_NoRegister()
	{
		return UMoviePipelineDeferredPassBase::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAccumulatorIncludesAlpha_MetaData[];
#endif
		static void NewProp_bAccumulatorIncludesAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccumulatorIncludesAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableMultisampleEffects_MetaData[];
#endif
		static void NewProp_bDisableMultisampleEffects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableMultisampleEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUse32BitPostProcessMaterials_MetaData[];
#endif
		static void NewProp_bUse32BitPostProcessMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse32BitPostProcessMaterials;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalPostProcessMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalPostProcessMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalPostProcessMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderMainPass_MetaData[];
#endif
		static void NewProp_bRenderMainPass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderMainPass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddDefaultLayer_MetaData[];
#endif
		static void NewProp_bAddDefaultLayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddDefaultLayer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorLayers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActivePostProcessMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePostProcessMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivePostProcessMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StencilLayerMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StencilLayerMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineImagePassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineDeferredPasses.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bAccumulatorIncludesAlpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09* Should multiple temporal/spatial samples accumulate the alpha channel? This requires r.PostProcessing.PropagateAlpha\n\x09* to be set to 1 or 2 (see \"Enable Alpha Channel Support in Post Processing\" under Project Settings > Rendering). This adds\n\x09* ~30% cost to the accumulation so you should not enable it unless necessary. You must delete both the sky and fog to ensure\n\x09* that they do not make all pixels opaque.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
		{ "ToolTip", "Should multiple temporal/spatial samples accumulate the alpha channel? This requires r.PostProcessing.PropagateAlpha\nto be set to 1 or 2 (see \"Enable Alpha Channel Support in Post Processing\" under Project Settings > Rendering). This adds\n~30% cost to the accumulation so you should not enable it unless necessary. You must delete both the sky and fog to ensure\nthat they do not make all pixels opaque." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bAccumulatorIncludesAlpha_SetBit(void* Obj)
	{
		((UMoviePipelineDeferredPassBase*)Obj)->bAccumulatorIncludesAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bAccumulatorIncludesAlpha = { "bAccumulatorIncludesAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineDeferredPassBase), &Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bAccumulatorIncludesAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bAccumulatorIncludesAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bAccumulatorIncludesAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bDisableMultisampleEffects_MetaData[] = {
		{ "Category", "Post Processing" },
		{ "Comment", "/**\n\x09* Certain passes don't support post-processing effects that blend pixels together. These include effects like\n\x09* Depth of Field, Temporal Anti-Aliasing, Motion Blur and chromattic abberation. When these post processing\n\x09* effects are used then each final output pixel is composed of the influence of many other pixels which is\n\x09* undesirable when rendering out an object id pass (which does not support post processing). This checkbox lets\n\x09* you disable them on a per-render basis instead of having to disable them in the editor as well.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
		{ "ToolTip", "Certain passes don't support post-processing effects that blend pixels together. These include effects like\nDepth of Field, Temporal Anti-Aliasing, Motion Blur and chromattic abberation. When these post processing\neffects are used then each final output pixel is composed of the influence of many other pixels which is\nundesirable when rendering out an object id pass (which does not support post processing). This checkbox lets\nyou disable them on a per-render basis instead of having to disable them in the editor as well." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bDisableMultisampleEffects_SetBit(void* Obj)
	{
		((UMoviePipelineDeferredPassBase*)Obj)->bDisableMultisampleEffects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bDisableMultisampleEffects = { "bDisableMultisampleEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineDeferredPassBase), &Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bDisableMultisampleEffects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bDisableMultisampleEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bDisableMultisampleEffects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bUse32BitPostProcessMaterials_MetaData[] = {
		{ "Category", "Deferred Renderer Data" },
		{ "Comment", "/**\n\x09* Should the additional post-process materials write out to a 32-bit render target instead of 16-bit?\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
		{ "ToolTip", "Should the additional post-process materials write out to a 32-bit render target instead of 16-bit?" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bUse32BitPostProcessMaterials_SetBit(void* Obj)
	{
		((UMoviePipelineDeferredPassBase*)Obj)->bUse32BitPostProcessMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bUse32BitPostProcessMaterials = { "bUse32BitPostProcessMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineDeferredPassBase), &Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bUse32BitPostProcessMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bUse32BitPostProcessMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bUse32BitPostProcessMaterials_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_AdditionalPostProcessMaterials_Inner = { "AdditionalPostProcessMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass, METADATA_PARAMS(nullptr, 0) }; // 3590522002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_AdditionalPostProcessMaterials_MetaData[] = {
		{ "Category", "Deferred Renderer Data" },
		{ "Comment", "/**\n\x09* An array of additional post-processing materials to run after the frame is rendered. Using this feature may add a notable amount of render time.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
		{ "ToolTip", "An array of additional post-processing materials to run after the frame is rendered. Using this feature may add a notable amount of render time." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_AdditionalPostProcessMaterials = { "AdditionalPostProcessMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineDeferredPassBase, AdditionalPostProcessMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_AdditionalPostProcessMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_AdditionalPostProcessMaterials_MetaData)) }; // 3590522002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bRenderMainPass_MetaData[] = {
		{ "Category", "Stencil Clip Layers" },
		{ "Comment", "/**\n\x09* This can be turned off if you're only doing a stencil-layer based render and don't need the main non-stencil approach.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
		{ "ToolTip", "This can be turned off if you're only doing a stencil-layer based render and don't need the main non-stencil approach." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bRenderMainPass_SetBit(void* Obj)
	{
		((UMoviePipelineDeferredPassBase*)Obj)->bRenderMainPass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bRenderMainPass = { "bRenderMainPass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineDeferredPassBase), &Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bRenderMainPass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bRenderMainPass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bRenderMainPass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bAddDefaultLayer_MetaData[] = {
		{ "Category", "Stencil Clip Layers" },
		{ "Comment", "/**\n\x09* If true, an additional stencil layer will be rendered which contains all objects which do not belong to layers\n\x09* specified in the Stencil Layers. This is useful for wanting to isolate one or two layers but still have everything\n\x09* else to composite them over without having to remember to add all objects to a default layer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
		{ "ToolTip", "If true, an additional stencil layer will be rendered which contains all objects which do not belong to layers\nspecified in the Stencil Layers. This is useful for wanting to isolate one or two layers but still have everything\nelse to composite them over without having to remember to add all objects to a default layer." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bAddDefaultLayer_SetBit(void* Obj)
	{
		((UMoviePipelineDeferredPassBase*)Obj)->bAddDefaultLayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bAddDefaultLayer = { "bAddDefaultLayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineDeferredPassBase), &Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bAddDefaultLayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bAddDefaultLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bAddDefaultLayer_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_ActorLayers_Inner = { "ActorLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActorLayer, METADATA_PARAMS(nullptr, 0) }; // 4104610653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_ActorLayers_MetaData[] = {
		{ "Category", "Stencil Clip Layers" },
		{ "Comment", "/** \n\x09* For each layer in the array, the world will be rendered and then a stencil mask will clip all pixels not affected\n\x09* by the objects on that layer. This is NOT a true layer system, as translucent objects will show opaque objects from\n\x09* another layer behind them. Does not write out additional post-process materials per-layer as they will match the\n\x09* base layer. Only works with materials that can write to custom depth.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
		{ "ToolTip", "For each layer in the array, the world will be rendered and then a stencil mask will clip all pixels not affected\nby the objects on that layer. This is NOT a true layer system, as translucent objects will show opaque objects from\nanother layer behind them. Does not write out additional post-process materials per-layer as they will match the\nbase layer. Only works with materials that can write to custom depth." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_ActorLayers = { "ActorLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineDeferredPassBase, ActorLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_ActorLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_ActorLayers_MetaData)) }; // 4104610653
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_DataLayers_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.DataLayerAsset" },
		{ "Category", "Stencil Clip Layers" },
		{ "Comment", "/**\n\x09* If the map you are working with is a World Partition map, you can specify Data layers instead of Actor Layers. If any\n\x09* Data Layers are specified, this will take precedence over any ActorLayers in this config. Does not affect whether or\n\x09* not the Data Layers are actually loaded, you must ensure layers are loaded for rendering.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
		{ "ToolTip", "If the map you are working with is a World Partition map, you can specify Data layers instead of Actor Layers. If any\nData Layers are specified, this will take precedence over any ActorLayers in this config. Does not affect whether or\nnot the Data Layers are actually loaded, you must ensure layers are loaded for rendering." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineDeferredPassBase, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_DataLayers_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_ActivePostProcessMaterials_Inner = { "ActivePostProcessMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_ActivePostProcessMaterials_MetaData[] = {
		{ "Comment", "/** While rendering, store an array of the non-null valid materials loaded from AdditionalPostProcessMaterials. Cleared on teardown. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
		{ "ToolTip", "While rendering, store an array of the non-null valid materials loaded from AdditionalPostProcessMaterials. Cleared on teardown." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_ActivePostProcessMaterials = { "ActivePostProcessMaterials", nullptr, (EPropertyFlags)0x0024080000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineDeferredPassBase, ActivePostProcessMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_ActivePostProcessMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_ActivePostProcessMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_StencilLayerMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_StencilLayerMaterial = { "StencilLayerMaterial", nullptr, (EPropertyFlags)0x0024080000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineDeferredPassBase, StencilLayerMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_StencilLayerMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_StencilLayerMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bAccumulatorIncludesAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bDisableMultisampleEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bUse32BitPostProcessMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_AdditionalPostProcessMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_AdditionalPostProcessMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bRenderMainPass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_bAddDefaultLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_ActorLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_ActorLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_ActivePostProcessMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_ActivePostProcessMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::NewProp_StencilLayerMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineDeferredPassBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::ClassParams = {
		&UMoviePipelineDeferredPassBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineDeferredPassBase()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineDeferredPassBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineDeferredPassBase.OuterSingleton, Z_Construct_UClass_UMoviePipelineDeferredPassBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineDeferredPassBase.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINERENDERPASSES_API UClass* StaticClass<UMoviePipelineDeferredPassBase>()
	{
		return UMoviePipelineDeferredPassBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineDeferredPassBase);
	UMoviePipelineDeferredPassBase::~UMoviePipelineDeferredPassBase() {}
	void UMoviePipelineDeferredPass_Unlit::StaticRegisterNativesUMoviePipelineDeferredPass_Unlit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineDeferredPass_Unlit);
	UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit_NoRegister()
	{
		return UMoviePipelineDeferredPass_Unlit::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineDeferredPassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineDeferredPasses.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineDeferredPass_Unlit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit_Statics::ClassParams = {
		&UMoviePipelineDeferredPass_Unlit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineDeferredPass_Unlit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineDeferredPass_Unlit.OuterSingleton, Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineDeferredPass_Unlit.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINERENDERPASSES_API UClass* StaticClass<UMoviePipelineDeferredPass_Unlit>()
	{
		return UMoviePipelineDeferredPass_Unlit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineDeferredPass_Unlit);
	UMoviePipelineDeferredPass_Unlit::~UMoviePipelineDeferredPass_Unlit() {}
	void UMoviePipelineDeferredPass_DetailLighting::StaticRegisterNativesUMoviePipelineDeferredPass_DetailLighting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineDeferredPass_DetailLighting);
	UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting_NoRegister()
	{
		return UMoviePipelineDeferredPass_DetailLighting::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineDeferredPassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineDeferredPasses.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineDeferredPass_DetailLighting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting_Statics::ClassParams = {
		&UMoviePipelineDeferredPass_DetailLighting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineDeferredPass_DetailLighting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineDeferredPass_DetailLighting.OuterSingleton, Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineDeferredPass_DetailLighting.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINERENDERPASSES_API UClass* StaticClass<UMoviePipelineDeferredPass_DetailLighting>()
	{
		return UMoviePipelineDeferredPass_DetailLighting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineDeferredPass_DetailLighting);
	UMoviePipelineDeferredPass_DetailLighting::~UMoviePipelineDeferredPass_DetailLighting() {}
	void UMoviePipelineDeferredPass_LightingOnly::StaticRegisterNativesUMoviePipelineDeferredPass_LightingOnly()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineDeferredPass_LightingOnly);
	UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly_NoRegister()
	{
		return UMoviePipelineDeferredPass_LightingOnly::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineDeferredPassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineDeferredPasses.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineDeferredPass_LightingOnly>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly_Statics::ClassParams = {
		&UMoviePipelineDeferredPass_LightingOnly::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineDeferredPass_LightingOnly.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineDeferredPass_LightingOnly.OuterSingleton, Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineDeferredPass_LightingOnly.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINERENDERPASSES_API UClass* StaticClass<UMoviePipelineDeferredPass_LightingOnly>()
	{
		return UMoviePipelineDeferredPass_LightingOnly::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineDeferredPass_LightingOnly);
	UMoviePipelineDeferredPass_LightingOnly::~UMoviePipelineDeferredPass_LightingOnly() {}
	void UMoviePipelineDeferredPass_ReflectionsOnly::StaticRegisterNativesUMoviePipelineDeferredPass_ReflectionsOnly()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineDeferredPass_ReflectionsOnly);
	UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly_NoRegister()
	{
		return UMoviePipelineDeferredPass_ReflectionsOnly::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineDeferredPassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineDeferredPasses.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineDeferredPass_ReflectionsOnly>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly_Statics::ClassParams = {
		&UMoviePipelineDeferredPass_ReflectionsOnly::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineDeferredPass_ReflectionsOnly.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineDeferredPass_ReflectionsOnly.OuterSingleton, Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineDeferredPass_ReflectionsOnly.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINERENDERPASSES_API UClass* StaticClass<UMoviePipelineDeferredPass_ReflectionsOnly>()
	{
		return UMoviePipelineDeferredPass_ReflectionsOnly::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineDeferredPass_ReflectionsOnly);
	UMoviePipelineDeferredPass_ReflectionsOnly::~UMoviePipelineDeferredPass_ReflectionsOnly() {}
	void UMoviePipelineDeferredPass_PathTracer::StaticRegisterNativesUMoviePipelineDeferredPass_PathTracer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineDeferredPass_PathTracer);
	UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_NoRegister()
	{
		return UMoviePipelineDeferredPass_PathTracer::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReferenceMotionBlur_MetaData[];
#endif
		static void NewProp_bReferenceMotionBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReferenceMotionBlur;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineDeferredPassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineDeferredPasses.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::NewProp_bReferenceMotionBlur_MetaData[] = {
		{ "Category", "Reference Motion Blur" },
		{ "Comment", "/** When enabled, the path tracer will blend all spatial and temporal samples prior to the denoising and will disable post-processed motion blur.\n\x09 *  In this mode it is possible to use higher temporal sample counts to improve the motion blur quality.\n\x09 *  When this option is disabled, the path tracer will accumulate spatial samples, but denoise them prior to accumulation of temporal samples.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoviePipelineDeferredPasses.h" },
		{ "ToolTip", "When enabled, the path tracer will blend all spatial and temporal samples prior to the denoising and will disable post-processed motion blur.\nIn this mode it is possible to use higher temporal sample counts to improve the motion blur quality.\nWhen this option is disabled, the path tracer will accumulate spatial samples, but denoise them prior to accumulation of temporal samples." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::NewProp_bReferenceMotionBlur_SetBit(void* Obj)
	{
		((UMoviePipelineDeferredPass_PathTracer*)Obj)->bReferenceMotionBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::NewProp_bReferenceMotionBlur = { "bReferenceMotionBlur", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineDeferredPass_PathTracer), &Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::NewProp_bReferenceMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::NewProp_bReferenceMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::NewProp_bReferenceMotionBlur_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::NewProp_bReferenceMotionBlur,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineDeferredPass_PathTracer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::ClassParams = {
		&UMoviePipelineDeferredPass_PathTracer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineDeferredPass_PathTracer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineDeferredPass_PathTracer.OuterSingleton, Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineDeferredPass_PathTracer.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINERENDERPASSES_API UClass* StaticClass<UMoviePipelineDeferredPass_PathTracer>()
	{
		return UMoviePipelineDeferredPass_PathTracer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineDeferredPass_PathTracer);
	UMoviePipelineDeferredPass_PathTracer::~UMoviePipelineDeferredPass_PathTracer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_Statics::ScriptStructInfo[] = {
		{ FMoviePipelinePostProcessPass::StaticStruct, Z_Construct_UScriptStruct_FMoviePipelinePostProcessPass_Statics::NewStructOps, TEXT("MoviePipelinePostProcessPass"), &Z_Registration_Info_UScriptStruct_MoviePipelinePostProcessPass, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoviePipelinePostProcessPass), 3590522002U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineDeferredPassBase, UMoviePipelineDeferredPassBase::StaticClass, TEXT("UMoviePipelineDeferredPassBase"), &Z_Registration_Info_UClass_UMoviePipelineDeferredPassBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineDeferredPassBase), 80917294U) },
		{ Z_Construct_UClass_UMoviePipelineDeferredPass_Unlit, UMoviePipelineDeferredPass_Unlit::StaticClass, TEXT("UMoviePipelineDeferredPass_Unlit"), &Z_Registration_Info_UClass_UMoviePipelineDeferredPass_Unlit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineDeferredPass_Unlit), 1885552509U) },
		{ Z_Construct_UClass_UMoviePipelineDeferredPass_DetailLighting, UMoviePipelineDeferredPass_DetailLighting::StaticClass, TEXT("UMoviePipelineDeferredPass_DetailLighting"), &Z_Registration_Info_UClass_UMoviePipelineDeferredPass_DetailLighting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineDeferredPass_DetailLighting), 3839706292U) },
		{ Z_Construct_UClass_UMoviePipelineDeferredPass_LightingOnly, UMoviePipelineDeferredPass_LightingOnly::StaticClass, TEXT("UMoviePipelineDeferredPass_LightingOnly"), &Z_Registration_Info_UClass_UMoviePipelineDeferredPass_LightingOnly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineDeferredPass_LightingOnly), 3156548102U) },
		{ Z_Construct_UClass_UMoviePipelineDeferredPass_ReflectionsOnly, UMoviePipelineDeferredPass_ReflectionsOnly::StaticClass, TEXT("UMoviePipelineDeferredPass_ReflectionsOnly"), &Z_Registration_Info_UClass_UMoviePipelineDeferredPass_ReflectionsOnly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineDeferredPass_ReflectionsOnly), 2486901756U) },
		{ Z_Construct_UClass_UMoviePipelineDeferredPass_PathTracer, UMoviePipelineDeferredPass_PathTracer::StaticClass, TEXT("UMoviePipelineDeferredPass_PathTracer"), &Z_Registration_Info_UClass_UMoviePipelineDeferredPass_PathTracer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineDeferredPass_PathTracer), 1558965091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_1948735463(TEXT("/Script/MovieRenderPipelineRenderPasses"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineDeferredPasses_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
