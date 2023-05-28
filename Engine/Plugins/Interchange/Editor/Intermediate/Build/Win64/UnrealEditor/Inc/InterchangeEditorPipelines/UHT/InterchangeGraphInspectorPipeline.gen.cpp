// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeGraphInspectorPipeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGraphInspectorPipeline() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
	INTERCHANGEEDITORPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGraphInspectorPipeline();
	INTERCHANGEEDITORPIPELINES_API UClass* Z_Construct_UClass_UInterchangeGraphInspectorPipeline_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeEditorPipelines();
// End Cross Module References
	void UInterchangeGraphInspectorPipeline::StaticRegisterNativesUInterchangeGraphInspectorPipeline()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGraphInspectorPipeline);
	UClass* Z_Construct_UClass_UInterchangeGraphInspectorPipeline_NoRegister()
	{
		return UInterchangeGraphInspectorPipeline::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeGraphInspectorPipeline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeGraphInspectorPipeline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEditorPipelines,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGraphInspectorPipeline_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This pipeline is the generic pipeline option for all meshes type and should be call before specialized Mesh pipeline (like generic static mesh or skeletal mesh pipelines)\n * All shared import options between mesh type should be added here.\n *\n * UPROPERTY possible meta values:\n * @meta ImportOnly - Boolean, the property is use only when we import not when we re-import. Cannot be mix with ReimportOnly!\n * @meta ReimportOnly - Boolean, the property is use only when we re-import not when we import. Cannot be mix with ImportOnly!\n * @meta MeshType - String, the property is for static or skeletal or both (static | skeletal) mesh type. If not specified it will apply to all mesh type.\n */" },
		{ "IncludePath", "InterchangeGraphInspectorPipeline.h" },
		{ "ModuleRelativePath", "Public/InterchangeGraphInspectorPipeline.h" },
		{ "ToolTip", "This pipeline is the generic pipeline option for all meshes type and should be call before specialized Mesh pipeline (like generic static mesh or skeletal mesh pipelines)\nAll shared import options between mesh type should be added here.\n\nUPROPERTY possible meta values:\n@meta ImportOnly - Boolean, the property is use only when we import not when we re-import. Cannot be mix with ReimportOnly!\n@meta ReimportOnly - Boolean, the property is use only when we re-import not when we import. Cannot be mix with ImportOnly!\n@meta MeshType - String, the property is for static or skeletal or both (static | skeletal) mesh type. If not specified it will apply to all mesh type." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeGraphInspectorPipeline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGraphInspectorPipeline>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGraphInspectorPipeline_Statics::ClassParams = {
		&UInterchangeGraphInspectorPipeline::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeGraphInspectorPipeline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGraphInspectorPipeline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeGraphInspectorPipeline()
	{
		if (!Z_Registration_Info_UClass_UInterchangeGraphInspectorPipeline.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGraphInspectorPipeline.OuterSingleton, Z_Construct_UClass_UInterchangeGraphInspectorPipeline_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeGraphInspectorPipeline.OuterSingleton;
	}
	template<> INTERCHANGEEDITORPIPELINES_API UClass* StaticClass<UInterchangeGraphInspectorPipeline>()
	{
		return UInterchangeGraphInspectorPipeline::StaticClass();
	}
	UInterchangeGraphInspectorPipeline::UInterchangeGraphInspectorPipeline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGraphInspectorPipeline);
	UInterchangeGraphInspectorPipeline::~UInterchangeGraphInspectorPipeline() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeGraphInspectorPipeline_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeGraphInspectorPipeline_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGraphInspectorPipeline, UInterchangeGraphInspectorPipeline::StaticClass, TEXT("UInterchangeGraphInspectorPipeline"), &Z_Registration_Info_UClass_UInterchangeGraphInspectorPipeline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGraphInspectorPipeline), 442734123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeGraphInspectorPipeline_h_3310024765(TEXT("/Script/InterchangeEditorPipelines"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeGraphInspectorPipeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Editor_Source_Pipelines_Public_InterchangeGraphInspectorPipeline_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
