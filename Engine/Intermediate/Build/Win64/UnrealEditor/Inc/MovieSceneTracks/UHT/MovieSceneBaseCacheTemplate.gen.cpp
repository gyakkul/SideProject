// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneBaseCacheTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBaseCacheTemplate() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheSectionTemplateParameters;
class UScriptStruct* FMovieSceneBaseCacheSectionTemplateParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheSectionTemplateParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheSectionTemplateParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneBaseCacheSectionTemplateParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheSectionTemplateParameters.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneBaseCacheSectionTemplateParameters>()
{
	return FMovieSceneBaseCacheSectionTemplateParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base cache parameters that will be used for all the base cache sections */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneBaseCacheTemplate.h" },
		{ "ToolTip", "Base cache parameters that will be used for all the base cache sections" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBaseCacheSectionTemplateParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime_MetaData[] = {
		{ "Comment", "/** Section start time */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneBaseCacheTemplate.h" },
		{ "ToolTip", "Section start time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime = { "SectionStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneBaseCacheSectionTemplateParameters, SectionStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime_MetaData[] = {
		{ "Comment", "/** Section end time */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneBaseCacheTemplate.h" },
		{ "ToolTip", "Section end time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime = { "SectionEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneBaseCacheSectionTemplateParameters, SectionEndTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneBaseCacheSectionTemplateParameters",
		sizeof(FMovieSceneBaseCacheSectionTemplateParameters),
		alignof(FMovieSceneBaseCacheSectionTemplateParameters),
		Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheSectionTemplateParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheSectionTemplateParameters.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheSectionTemplateParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneBaseCacheTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneBaseCacheTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneBaseCacheSectionTemplateParameters::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters_Statics::NewStructOps, TEXT("MovieSceneBaseCacheSectionTemplateParameters"), &Z_Registration_Info_UScriptStruct_MovieSceneBaseCacheSectionTemplateParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneBaseCacheSectionTemplateParameters), 3662678669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneBaseCacheTemplate_h_577571326(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneBaseCacheTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneBaseCacheTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
