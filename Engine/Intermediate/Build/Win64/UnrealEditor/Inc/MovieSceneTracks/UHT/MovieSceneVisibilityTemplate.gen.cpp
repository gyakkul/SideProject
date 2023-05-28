// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Evaluation/MovieSceneVisibilityTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneVisibilityTemplate() {}
// Cross Module References
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneVisibilitySectionTemplate>() == std::is_polymorphic<FMovieSceneBoolPropertySectionTemplate>(), "USTRUCT FMovieSceneVisibilitySectionTemplate cannot be polymorphic unless super FMovieSceneBoolPropertySectionTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneVisibilitySectionTemplate;
class UScriptStruct* FMovieSceneVisibilitySectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneVisibilitySectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneVisibilitySectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneVisibilitySectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneVisibilitySectionTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneVisibilitySectionTemplate>()
{
	return FMovieSceneVisibilitySectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneVisibilityTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneVisibilitySectionTemplate>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneBoolPropertySectionTemplate,
		&NewStructOps,
		"MovieSceneVisibilitySectionTemplate",
		sizeof(FMovieSceneVisibilitySectionTemplate),
		alignof(FMovieSceneVisibilitySectionTemplate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneVisibilitySectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneVisibilitySectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneVisibilitySectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneVisibilityTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneVisibilityTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneVisibilitySectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneVisibilitySectionTemplate_Statics::NewStructOps, TEXT("MovieSceneVisibilitySectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneVisibilitySectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneVisibilitySectionTemplate), 1743896252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneVisibilityTemplate_h_4091114239(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneVisibilityTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneVisibilityTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
