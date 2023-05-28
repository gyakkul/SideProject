// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_AMoviePipelineGameMode();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_AMoviePipelineGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void AMoviePipelineGameMode::StaticRegisterNativesAMoviePipelineGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoviePipelineGameMode);
	UClass* Z_Construct_UClass_AMoviePipelineGameMode_NoRegister()
	{
		return AMoviePipelineGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMoviePipelineGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoviePipelineGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoviePipelineGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MoviePipelineGameMode.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoviePipelineGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoviePipelineGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoviePipelineGameMode_Statics::ClassParams = {
		&AMoviePipelineGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMoviePipelineGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoviePipelineGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoviePipelineGameMode()
	{
		if (!Z_Registration_Info_UClass_AMoviePipelineGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoviePipelineGameMode.OuterSingleton, Z_Construct_UClass_AMoviePipelineGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMoviePipelineGameMode.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<AMoviePipelineGameMode>()
	{
		return AMoviePipelineGameMode::StaticClass();
	}
	AMoviePipelineGameMode::AMoviePipelineGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoviePipelineGameMode);
	AMoviePipelineGameMode::~AMoviePipelineGameMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMoviePipelineGameMode, AMoviePipelineGameMode::StaticClass, TEXT("AMoviePipelineGameMode"), &Z_Registration_Info_UClass_AMoviePipelineGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoviePipelineGameMode), 293865536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameMode_h_846639410(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
