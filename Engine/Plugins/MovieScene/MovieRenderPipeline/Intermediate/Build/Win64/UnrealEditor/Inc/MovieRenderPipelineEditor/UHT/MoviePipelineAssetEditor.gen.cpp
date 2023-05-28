// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MoviePipelineAssetEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineAssetEditor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineAssetEditor();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineAssetEditor_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetEditor();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void UMoviePipelineAssetEditor::StaticRegisterNativesUMoviePipelineAssetEditor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineAssetEditor);
	UClass* Z_Construct_UClass_UMoviePipelineAssetEditor_NoRegister()
	{
		return UMoviePipelineAssetEditor::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineAssetEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectToEdit_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectToEdit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineAssetEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetEditor,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAssetEditor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoviePipelineAssetEditor.h" },
		{ "ModuleRelativePath", "Private/MoviePipelineAssetEditor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAssetEditor_Statics::NewProp_ObjectToEdit_MetaData[] = {
		{ "ModuleRelativePath", "Private/MoviePipelineAssetEditor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineAssetEditor_Statics::NewProp_ObjectToEdit = { "ObjectToEdit", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineAssetEditor, ObjectToEdit), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAssetEditor_Statics::NewProp_ObjectToEdit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAssetEditor_Statics::NewProp_ObjectToEdit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineAssetEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAssetEditor_Statics::NewProp_ObjectToEdit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineAssetEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineAssetEditor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineAssetEditor_Statics::ClassParams = {
		&UMoviePipelineAssetEditor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineAssetEditor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAssetEditor_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAssetEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAssetEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineAssetEditor()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineAssetEditor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineAssetEditor.OuterSingleton, Z_Construct_UClass_UMoviePipelineAssetEditor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineAssetEditor.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMoviePipelineAssetEditor>()
	{
		return UMoviePipelineAssetEditor::StaticClass();
	}
	UMoviePipelineAssetEditor::UMoviePipelineAssetEditor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineAssetEditor);
	UMoviePipelineAssetEditor::~UMoviePipelineAssetEditor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineAssetEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineAssetEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineAssetEditor, UMoviePipelineAssetEditor::StaticClass, TEXT("UMoviePipelineAssetEditor"), &Z_Registration_Info_UClass_UMoviePipelineAssetEditor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineAssetEditor), 2303577304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineAssetEditor_h_2357361731(TEXT("/Script/MovieRenderPipelineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineAssetEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineAssetEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
