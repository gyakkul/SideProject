// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeDatasmithPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDatasmithPipeline() {}
// Cross Module References
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithLevelPipeline_NoRegister();
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithMaterialPipeline_NoRegister();
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithPipeline();
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithPipeline_NoRegister();
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithStaticMeshPipeline_NoRegister();
	DATASMITHINTERCHANGE_API UClass* Z_Construct_UClass_UInterchangeDatasmithTexturePipeline_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericAnimationPipeline_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister();
	INTERCHANGEPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithInterchange();
// End Cross Module References
	void UInterchangeDatasmithPipeline::StaticRegisterNativesUInterchangeDatasmithPipeline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDatasmithPipeline);
	UClass* Z_Construct_UClass_UInterchangeDatasmithPipeline_NoRegister()
	{
		return UInterchangeDatasmithPipeline::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexturePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TexturePipeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialPipeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshPipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshPipeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelPipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelPipeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationPipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimationPipeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonMeshesProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CommonMeshesProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CommonSkeletalMeshesAndAnimationsProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithInterchange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeDatasmithPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithPipeline.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_TexturePipeline_MetaData[] = {
		{ "Category", "Textures" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithPipeline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_TexturePipeline = { "TexturePipeline", nullptr, (EPropertyFlags)0x00460000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeDatasmithPipeline, TexturePipeline), Z_Construct_UClass_UInterchangeDatasmithTexturePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_TexturePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_TexturePipeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_MaterialPipeline_MetaData[] = {
		{ "Category", "Materials" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithPipeline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_MaterialPipeline = { "MaterialPipeline", nullptr, (EPropertyFlags)0x00460000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeDatasmithPipeline, MaterialPipeline), Z_Construct_UClass_UInterchangeDatasmithMaterialPipeline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_MaterialPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_MaterialPipeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_MeshPipeline_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithPipeline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_MeshPipeline = { "MeshPipeline", nullptr, (EPropertyFlags)0x00460000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeDatasmithPipeline, MeshPipeline), Z_Construct_UClass_UInterchangeDatasmithStaticMeshPipeline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_MeshPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_MeshPipeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_LevelPipeline_MetaData[] = {
		{ "Category", "Level" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithPipeline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_LevelPipeline = { "LevelPipeline", nullptr, (EPropertyFlags)0x00460000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeDatasmithPipeline, LevelPipeline), Z_Construct_UClass_UInterchangeDatasmithLevelPipeline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_LevelPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_LevelPipeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_AnimationPipeline_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithPipeline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_AnimationPipeline = { "AnimationPipeline", nullptr, (EPropertyFlags)0x00460000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeDatasmithPipeline, AnimationPipeline), Z_Construct_UClass_UInterchangeGenericAnimationPipeline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_AnimationPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_AnimationPipeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_CommonMeshesProperties_MetaData[] = {
		{ "Category", "Common Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithPipeline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_CommonMeshesProperties = { "CommonMeshesProperties", nullptr, (EPropertyFlags)0x00460000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeDatasmithPipeline, CommonMeshesProperties), Z_Construct_UClass_UInterchangeGenericCommonMeshesProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_CommonMeshesProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_CommonMeshesProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData[] = {
		{ "Category", "Common Skeletal Meshes and Animations" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InterchangeDatasmithPipeline.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties = { "CommonSkeletalMeshesAndAnimationsProperties", nullptr, (EPropertyFlags)0x00460000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInterchangeDatasmithPipeline, CommonSkeletalMeshesAndAnimationsProperties), Z_Construct_UClass_UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_TexturePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_MaterialPipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_MeshPipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_LevelPipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_AnimationPipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_CommonMeshesProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::NewProp_CommonSkeletalMeshesAndAnimationsProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDatasmithPipeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::ClassParams = {
		&UInterchangeDatasmithPipeline::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeDatasmithPipeline()
	{
		if (!Z_Registration_Info_UClass_UInterchangeDatasmithPipeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDatasmithPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeDatasmithPipeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeDatasmithPipeline.OuterSingleton;
	}
	template<> DATASMITHINTERCHANGE_API UClass* StaticClass<UInterchangeDatasmithPipeline>()
	{
		return UInterchangeDatasmithPipeline::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDatasmithPipeline);
	UInterchangeDatasmithPipeline::~UInterchangeDatasmithPipeline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithPipeline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithPipeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDatasmithPipeline, UInterchangeDatasmithPipeline::StaticClass, TEXT("UInterchangeDatasmithPipeline"), &Z_Registration_Info_UClass_UInterchangeDatasmithPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDatasmithPipeline), 1862029165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithPipeline_h_723018154(TEXT("/Script/DatasmithInterchange"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithPipeline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
