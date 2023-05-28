// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Parameters/MovieSceneNiagaraIntegerParameterSectionTemplate.h"
#include "Channels/MovieSceneIntegerChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraIntegerParameterSectionTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneNiagaraIntegerParameterSectionTemplate>() == std::is_polymorphic<FMovieSceneNiagaraParameterSectionTemplate>(), "USTRUCT FMovieSceneNiagaraIntegerParameterSectionTemplate cannot be polymorphic unless super FMovieSceneNiagaraParameterSectionTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate;
class UScriptStruct* FMovieSceneNiagaraIntegerParameterSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("MovieSceneNiagaraIntegerParameterSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMovieSceneNiagaraIntegerParameterSectionTemplate>()
{
	return FMovieSceneNiagaraIntegerParameterSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntegerChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraIntegerParameterSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraIntegerParameterSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewProp_IntegerChannel_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraIntegerParameterSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewProp_IntegerChannel = { "IntegerChannel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNiagaraIntegerParameterSectionTemplate, IntegerChannel), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewProp_IntegerChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewProp_IntegerChannel_MetaData)) }; // 2921625975
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewProp_IntegerChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate,
		&NewStructOps,
		"MovieSceneNiagaraIntegerParameterSectionTemplate",
		sizeof(FMovieSceneNiagaraIntegerParameterSectionTemplate),
		alignof(FMovieSceneNiagaraIntegerParameterSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraIntegerParameterSectionTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraIntegerParameterSectionTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneNiagaraIntegerParameterSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraIntegerParameterSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneNiagaraIntegerParameterSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneNiagaraIntegerParameterSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNiagaraIntegerParameterSectionTemplate), 2994788995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraIntegerParameterSectionTemplate_h_3889752231(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraIntegerParameterSectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraIntegerParameterSectionTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
