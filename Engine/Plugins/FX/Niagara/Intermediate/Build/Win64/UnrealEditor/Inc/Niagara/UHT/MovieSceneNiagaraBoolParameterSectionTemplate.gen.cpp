// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Parameters/MovieSceneNiagaraBoolParameterSectionTemplate.h"
#include "Channels/MovieSceneBoolChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraBoolParameterSectionTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneNiagaraBoolParameterSectionTemplate>() == std::is_polymorphic<FMovieSceneNiagaraParameterSectionTemplate>(), "USTRUCT FMovieSceneNiagaraBoolParameterSectionTemplate cannot be polymorphic unless super FMovieSceneNiagaraParameterSectionTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNiagaraBoolParameterSectionTemplate;
class UScriptStruct* FMovieSceneNiagaraBoolParameterSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraBoolParameterSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNiagaraBoolParameterSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("MovieSceneNiagaraBoolParameterSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraBoolParameterSectionTemplate.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMovieSceneNiagaraBoolParameterSectionTemplate>()
{
	return FMovieSceneNiagaraBoolParameterSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoolChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraBoolParameterSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraBoolParameterSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::NewProp_BoolChannel_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraBoolParameterSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::NewProp_BoolChannel = { "BoolChannel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNiagaraBoolParameterSectionTemplate, BoolChannel), Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::NewProp_BoolChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::NewProp_BoolChannel_MetaData)) }; // 2252890828
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::NewProp_BoolChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate,
		&NewStructOps,
		"MovieSceneNiagaraBoolParameterSectionTemplate",
		sizeof(FMovieSceneNiagaraBoolParameterSectionTemplate),
		alignof(FMovieSceneNiagaraBoolParameterSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraBoolParameterSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNiagaraBoolParameterSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraBoolParameterSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraBoolParameterSectionTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraBoolParameterSectionTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneNiagaraBoolParameterSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraBoolParameterSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneNiagaraBoolParameterSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneNiagaraBoolParameterSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNiagaraBoolParameterSectionTemplate), 1555046763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraBoolParameterSectionTemplate_h_2966566501(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraBoolParameterSectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraBoolParameterSectionTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
