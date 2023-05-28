// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineInProcessExecutor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineInProcessExecutor() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineInProcessExecutor();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineInProcessExecutor_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineLinearExecutorBase();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMoviePipelineInProcessExecutor::StaticRegisterNativesUMoviePipelineInProcessExecutor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineInProcessExecutor);
	UClass* Z_Construct_UClass_UMoviePipelineInProcessExecutor_NoRegister()
	{
		return UMoviePipelineInProcessExecutor::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurrentLevel_MetaData[];
#endif
		static void NewProp_bUseCurrentLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurrentLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineLinearExecutorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This executor implementation can process an array of movie pipelines and\n* run them inside the currently running process. This is intended for usage\n* outside of the editor (ie. -game mode) as it will take over the currently\n* running world/game instance instead of launching a new world instance like \n* the editor only PIE.\n*/" },
		{ "IncludePath", "MoviePipelineInProcessExecutor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineInProcessExecutor.h" },
		{ "ToolTip", "This executor implementation can process an array of movie pipelines and\nrun them inside the currently running process. This is intended for usage\noutside of the editor (ie. -game mode) as it will take over the currently\nrunning world/game instance instead of launching a new world instance like\nthe editor only PIE." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::NewProp_bUseCurrentLevel_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Use current level instead of opening new level */" },
		{ "ModuleRelativePath", "Public/MoviePipelineInProcessExecutor.h" },
		{ "ToolTip", "Use current level instead of opening new level" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::NewProp_bUseCurrentLevel_SetBit(void* Obj)
	{
		((UMoviePipelineInProcessExecutor*)Obj)->bUseCurrentLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::NewProp_bUseCurrentLevel = { "bUseCurrentLevel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineInProcessExecutor), &Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::NewProp_bUseCurrentLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::NewProp_bUseCurrentLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::NewProp_bUseCurrentLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::NewProp_bUseCurrentLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineInProcessExecutor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::ClassParams = {
		&UMoviePipelineInProcessExecutor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineInProcessExecutor()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor.OuterSingleton, Z_Construct_UClass_UMoviePipelineInProcessExecutor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineInProcessExecutor>()
	{
		return UMoviePipelineInProcessExecutor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineInProcessExecutor);
	UMoviePipelineInProcessExecutor::~UMoviePipelineInProcessExecutor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineInProcessExecutor, UMoviePipelineInProcessExecutor::StaticClass, TEXT("UMoviePipelineInProcessExecutor"), &Z_Registration_Info_UClass_UMoviePipelineInProcessExecutor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineInProcessExecutor), 4035448203U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutor_h_1421861012(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineInProcessExecutor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
