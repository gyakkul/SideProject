// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Evaluation/MovieSceneSlomoTemplate.h"
#include "Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSlomoTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneSlomoSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneSlomoSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSlomoSectionTemplate;
class UScriptStruct* FMovieSceneSlomoSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSlomoSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSlomoSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneSlomoSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSlomoSectionTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneSlomoSectionTemplate>()
{
	return FMovieSceneSlomoSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlomoCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlomoCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneSlomoTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSlomoSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics::NewProp_SlomoCurve_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneSlomoTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics::NewProp_SlomoCurve = { "SlomoCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSlomoSectionTemplate, SlomoCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics::NewProp_SlomoCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics::NewProp_SlomoCurve_MetaData)) }; // 3942748414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics::NewProp_SlomoCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneSlomoSectionTemplate",
		sizeof(FMovieSceneSlomoSectionTemplate),
		alignof(FMovieSceneSlomoSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSlomoSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSlomoSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSlomoSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneSlomoTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneSlomoTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneSlomoSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSlomoSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneSlomoSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneSlomoSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSlomoSectionTemplate), 1656755437U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneSlomoTemplate_h_290010759(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneSlomoTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneSlomoTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
