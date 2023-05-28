// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieRenderPipelineSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMovieRenderPipelineProjectSettings();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMovieRenderPipelineProjectSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void UMovieRenderPipelineProjectSettings::StaticRegisterNativesUMovieRenderPipelineProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieRenderPipelineProjectSettings);
	UClass* Z_Construct_UClass_UMovieRenderPipelineProjectSettings_NoRegister()
	{
		return UMovieRenderPipelineProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetSaveDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PresetSaveDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastPresetOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LastPresetOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLocalExecutor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLocalExecutor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRemoteExecutor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultRemoteExecutor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultExecutorJob_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultExecutorJob;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPipeline_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPipeline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Universal Movie Render Pipeline settings that apply to the whole project.\n */" },
		{ "IncludePath", "MovieRenderPipelineSettings.h" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineSettings.h" },
		{ "ToolTip", "Universal Movie Render Pipeline settings that apply to the whole project." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_PresetSaveDir_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Which directory should we try to save presets in by default?\n\x09*/" },
		{ "DisplayName", "Preset Save Location" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineSettings.h" },
		{ "ToolTip", "Which directory should we try to save presets in by default?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_PresetSaveDir = { "PresetSaveDir", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieRenderPipelineProjectSettings, PresetSaveDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_PresetSaveDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_PresetSaveDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_LastPresetOrigin_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* What was the last configuration preset the user used? Can be null.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineSettings.h" },
		{ "ToolTip", "What was the last configuration preset the user used? Can be null." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_LastPresetOrigin = { "LastPresetOrigin", nullptr, (EPropertyFlags)0x0014000000002004, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieRenderPipelineProjectSettings, LastPresetOrigin), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_LastPresetOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_LastPresetOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultLocalExecutor_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* When the user uses the UI to request we render a movie locally, which implementation should we use\n\x09* to execute the queue of things they want rendered. This allows you to implement your own executor \n\x09* which does different logic. See UMoviePipelineExecutorBase for more information. This is used for\n\x09* the Render button on the UI.\n\x09*/" },
		{ "MetaClass", "/Script/MovieRenderPipelineCore.MoviePipelineExecutorBase" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineSettings.h" },
		{ "ToolTip", "When the user uses the UI to request we render a movie locally, which implementation should we use\nto execute the queue of things they want rendered. This allows you to implement your own executor\nwhich does different logic. See UMoviePipelineExecutorBase for more information. This is used for\nthe Render button on the UI." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultLocalExecutor = { "DefaultLocalExecutor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieRenderPipelineProjectSettings, DefaultLocalExecutor), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultLocalExecutor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultLocalExecutor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultRemoteExecutor_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* When the user uses the UI to request we render a movie remotely, which implementation should we use\n\x09* to execute the queue of things they want rendered. This allows you to implement your own executor\n\x09* which does different logic. See UMoviePipelineExecutorBase for more information. This is used for\n\x09* the Render Remotely button on the UI.\n\x09*/" },
		{ "MetaClass", "/Script/MovieRenderPipelineCore.MoviePipelineExecutorBase" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineSettings.h" },
		{ "ToolTip", "When the user uses the UI to request we render a movie remotely, which implementation should we use\nto execute the queue of things they want rendered. This allows you to implement your own executor\nwhich does different logic. See UMoviePipelineExecutorBase for more information. This is used for\nthe Render Remotely button on the UI." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultRemoteExecutor = { "DefaultRemoteExecutor", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieRenderPipelineProjectSettings, DefaultRemoteExecutor), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultRemoteExecutor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultRemoteExecutor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultExecutorJob_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Which Job class should we create by default when adding a job? This allows you to make custom jobs\n\x09* that will have editable properties in the UI for special handling with your executor. This can be\n\x09* made dynamic if you add jobs to the queue programatically instead of through the UI.\n\x09*/" },
		{ "MetaClass", "/Script/MovieRenderPipelineCore.MoviePipelineExecutorJob" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineSettings.h" },
		{ "ToolTip", "Which Job class should we create by default when adding a job? This allows you to make custom jobs\nthat will have editable properties in the UI for special handling with your executor. This can be\nmade dynamic if you add jobs to the queue programatically instead of through the UI." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultExecutorJob = { "DefaultExecutorJob", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieRenderPipelineProjectSettings, DefaultExecutorJob), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultExecutorJob_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultExecutorJob_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultPipeline_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* This allows you to implement your own Pipeline to handle timing and rendering of a movie. Changing\n\x09* this will allow you to re-use the existing UI/Executors while providing your own logic for producing\n\x09* a single render.\n\x09*/" },
		{ "MetaClass", "/Script/MovieRenderPipelineCore.MoviePipeline" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineSettings.h" },
		{ "ToolTip", "This allows you to implement your own Pipeline to handle timing and rendering of a movie. Changing\nthis will allow you to re-use the existing UI/Executors while providing your own logic for producing\na single render." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultPipeline = { "DefaultPipeline", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieRenderPipelineProjectSettings, DefaultPipeline), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultPipeline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultClasses_Inner = { "DefaultClasses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultClasses_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* The settings specified here will automatically be added to a Movie Pipeline Primary Configuration when using the UI. \n\x09* This does not apply to scripting and does not apply to runtime. It is only a convenience function so that when a job is\n\x09* created, it can be pre-filled with some settings to make the render functional out of the gate. It can also be\n\x09* used to automatically add your own setting to jobs.\n\x09*\n\x09* This only applies to jobs created via the UI. If you do not use the UI (ie: Scripting/Python) you will need to\n\x09* add settings by hand for each job you create. */" },
		{ "DisplayName", "Default Job Settings Classes" },
		{ "MetaClass", "/Script/MovieRenderPipelineCore.MoviePipelineSetting" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineSettings.h" },
		{ "ToolTip", "The settings specified here will automatically be added to a Movie Pipeline Primary Configuration when using the UI.\nThis does not apply to scripting and does not apply to runtime. It is only a convenience function so that when a job is\ncreated, it can be pre-filled with some settings to make the render functional out of the gate. It can also be\nused to automatically add your own setting to jobs.\n\nThis only applies to jobs created via the UI. If you do not use the UI (ie: Scripting/Python) you will need to\nadd settings by hand for each job you create." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultClasses = { "DefaultClasses", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieRenderPipelineProjectSettings, DefaultClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_PresetSaveDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_LastPresetOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultLocalExecutor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultRemoteExecutor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultExecutorJob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultPipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::NewProp_DefaultClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieRenderPipelineProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::ClassParams = {
		&UMovieRenderPipelineProjectSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::PropPointers),
		0,
		0x000800A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieRenderPipelineProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UMovieRenderPipelineProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieRenderPipelineProjectSettings.OuterSingleton, Z_Construct_UClass_UMovieRenderPipelineProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieRenderPipelineProjectSettings.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMovieRenderPipelineProjectSettings>()
	{
		return UMovieRenderPipelineProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieRenderPipelineProjectSettings);
	UMovieRenderPipelineProjectSettings::~UMovieRenderPipelineProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MovieRenderPipelineSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MovieRenderPipelineSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieRenderPipelineProjectSettings, UMovieRenderPipelineProjectSettings::StaticClass, TEXT("UMovieRenderPipelineProjectSettings"), &Z_Registration_Info_UClass_UMovieRenderPipelineProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieRenderPipelineProjectSettings), 3367569712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MovieRenderPipelineSettings_h_346808744(TEXT("/Script/MovieRenderPipelineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MovieRenderPipelineSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MovieRenderPipelineSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
