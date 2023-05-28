// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Evaluation/MovieSceneCameraShakeSourceShakeTemplate.h"
#include "Sections/MovieSceneCameraShakeSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSourceShakeTemplate() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneCameraShakeSourceShakeSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneCameraShakeSourceShakeSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceShakeSectionTemplate;
class UScriptStruct* FMovieSceneCameraShakeSourceShakeSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceShakeSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceShakeSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraShakeSourceShakeSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceShakeSectionTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraShakeSourceShakeSectionTemplate>()
{
	return FMovieSceneCameraShakeSourceShakeSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionEndTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraShakeSourceShakeTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSourceShakeSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SourceData_MetaData[] = {
		{ "Comment", "/** Source data taken from the section */" },
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraShakeSourceShakeTemplate.h" },
		{ "ToolTip", "Source data taken from the section" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSourceShakeSectionTemplate, SourceData), Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SourceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SourceData_MetaData)) }; // 2923888832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionStartTime_MetaData[] = {
		{ "Comment", "/** Cached section start time */" },
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraShakeSourceShakeTemplate.h" },
		{ "ToolTip", "Cached section start time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionStartTime = { "SectionStartTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSourceShakeSectionTemplate, SectionStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionEndTime_MetaData[] = {
		{ "Comment", "/** Cached section end time */" },
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneCameraShakeSourceShakeTemplate.h" },
		{ "ToolTip", "Cached section end time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionEndTime = { "SectionEndTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSourceShakeSectionTemplate, SectionEndTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionEndTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SourceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewProp_SectionEndTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneCameraShakeSourceShakeSectionTemplate",
		sizeof(FMovieSceneCameraShakeSourceShakeSectionTemplate),
		alignof(FMovieSceneCameraShakeSourceShakeSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceShakeSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceShakeSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceShakeSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneCameraShakeSourceShakeTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneCameraShakeSourceShakeTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneCameraShakeSourceShakeSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceShakeSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneCameraShakeSourceShakeSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceShakeSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCameraShakeSourceShakeSectionTemplate), 1433694061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneCameraShakeSourceShakeTemplate_h_877269537(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneCameraShakeSourceShakeTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneCameraShakeSourceShakeTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
