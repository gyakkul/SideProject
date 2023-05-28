// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeGenericAssetsPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGenericAssetsPipeline() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
	INTERCHANGECORE_API UEnum* Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericAnimationPipeline_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericAssetsPipeline();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericAssetsPipeline_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericMaterialPipeline_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericMeshPipeline_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangePipelines();
// End Cross Module References
	void UInterchangeGenericAssetsPipeline::StaticRegisterNativesUInterchangeGenericAssetsPipeline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGenericAssetsPipeline);
	UClass* Z_Construct_UClass_UInterchangeGenericAssetsPipeline_NoRegister()
	{
		return UInterchangeGenericAssetsPipeline::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReimportStrategy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReimportStrategy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReimportStrategy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSourceNameForAsset_MetaData[];
#endif
		static void NewProp_bUseSourceNameForAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSourceNameForAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportOffsetTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportOffsetTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportOffsetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportOffsetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportOffsetUniformScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImportOffsetUniformScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonMeshesProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CommonMeshesProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CommonSkeletalMeshesAndAnimationsProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshPipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshPipeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationPipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimationPipeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialPipeline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangePipelines,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This pipeline is the generic pipeline option for all meshes type and should be call before specialized Mesh pipeline (like generic static mesh or skeletal mesh pipelines)\n * All shared import options between mesh type should be added here.\n *\n */" },
		{ "IncludePath", "InterchangeGenericAssetsPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "This pipeline is the generic pipeline option for all meshes type and should be call before specialized Mesh pipeline (like generic static mesh or skeletal mesh pipelines)\nAll shared import options between mesh type should be added here." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ReimportStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ReimportStrategy_MetaData[] = {
		{ "AdjustPipelineAndRefreshDetailOnChange", "True" },
		{ "Category", "Common" },
		{ "Comment", "/* Allow user to choose the re-import strategy. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "Allow user to choose the re-import strategy." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ReimportStrategy = { "ReimportStrategy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, ReimportStrategy), Z_Construct_UEnum_InterchangeCore_EReimportStrategyFlags, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ReimportStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ReimportStrategy_MetaData)) }; // 4003972788
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_bUseSourceNameForAsset_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** If enable and AssetName is empty and there is only one asset and one source data, we will name the asset like the source data name. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "If enable and AssetName is empty and there is only one asset and one source data, we will name the asset like the source data name." },
	};
#endif
	void Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_bUseSourceNameForAsset_SetBit(void* Obj)
	{
		((UInterchangeGenericAssetsPipeline*)Obj)->bUseSourceNameForAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_bUseSourceNameForAsset = { "bUseSourceNameForAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInterchangeGenericAssetsPipeline), &Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_bUseSourceNameForAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_bUseSourceNameForAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_bUseSourceNameForAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** If not empty, and there is only one asset and one source data, we will name the asset with this string. */" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "If not empty, and there is only one asset and one source data, we will name the asset with this string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, AssetName), METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetTranslation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** Translation offset applied to meshes and animations. */" },
		{ "DisplayName", "Offset Translation" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "Translation offset applied to meshes and animations." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetTranslation = { "ImportOffsetTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, ImportOffsetTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetRotation_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** Rotation offset applied to meshes and animations. */" },
		{ "DisplayName", "Offset Rotation" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "Rotation offset applied to meshes and animations." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetRotation = { "ImportOffsetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, ImportOffsetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetUniformScale_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "/** Uniform scale offset applied to meshes and animations. */" },
		{ "DisplayName", "Offset Uniform Scale" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "Uniform scale offset applied to meshes and animations." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetUniformScale = { "ImportOffsetUniformScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, ImportOffsetUniformScale), METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetUniformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetUniformScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_CommonMeshesProperties_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "Comment", "//////\x09""COMMON_MESHES_CATEGORY Properties //////\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "COMMON_MESHES_CATEGORY Properties" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_CommonMeshesProperties = { "CommonMeshesProperties", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, CommonMeshesProperties), Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_CommonMeshesProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_CommonMeshesProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData[] = {
		{ "Category", "Common Skeletal Meshes and Animations" },
		{ "Comment", "//////  COMMON_SKELETAL_ANIMATIONS_CATEGORY //////\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "COMMON_SKELETAL_ANIMATIONS_CATEGORY" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties = { "CommonSkeletalMeshesAndAnimationsProperties", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, CommonSkeletalMeshesAndAnimationsProperties), Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_MeshPipeline_MetaData[] = {
		{ "Category", "Meshes" },
		{ "Comment", "//////\x09MESHES_CATEGORY Properties //////\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "MESHES_CATEGORY Properties" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_MeshPipeline = { "MeshPipeline", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, MeshPipeline), Z_Construct_UClass_UInterchangeGenericMeshPipeline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_MeshPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_MeshPipeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_AnimationPipeline_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "//////\x09""ANIMATIONS_CATEGORY Properties //////\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "ANIMATIONS_CATEGORY Properties" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_AnimationPipeline = { "AnimationPipeline", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, AnimationPipeline), Z_Construct_UClass_UInterchangeGenericAnimationPipeline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_AnimationPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_AnimationPipeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_MaterialPipeline_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "//////\x09MATERIALS_CATEGORY Properties //////\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeGenericAssetsPipeline.h" },
		{ "ToolTip", "MATERIALS_CATEGORY Properties" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_MaterialPipeline = { "MaterialPipeline", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeGenericAssetsPipeline, MaterialPipeline), Z_Construct_UClass_UInterchangeGenericMaterialPipeline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_MaterialPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_MaterialPipeline_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ReimportStrategy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ReimportStrategy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_bUseSourceNameForAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_ImportOffsetUniformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_CommonMeshesProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_MeshPipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_AnimationPipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::NewProp_MaterialPipeline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGenericAssetsPipeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::ClassParams = {
		&UInterchangeGenericAssetsPipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeGenericAssetsPipeline()
	{
		if (!Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeGenericAssetsPipeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline.OuterSingleton;
	}
	template<> INTERCHANGEPIPELINES_API UClass* StaticClass<UInterchangeGenericAssetsPipeline>()
	{
		return UInterchangeGenericAssetsPipeline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGenericAssetsPipeline);
	UInterchangeGenericAssetsPipeline::~UInterchangeGenericAssetsPipeline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipeline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGenericAssetsPipeline, UInterchangeGenericAssetsPipeline::StaticClass, TEXT("UInterchangeGenericAssetsPipeline"), &Z_Registration_Info_UClass_UInterchangeGenericAssetsPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGenericAssetsPipeline), 2457851542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipeline_h_4238689664(TEXT("/Script/InterchangePipelines"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Pipelines_Public_InterchangeGenericAssetsPipeline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
