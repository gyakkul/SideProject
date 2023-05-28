// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Parameters/MovieSceneNiagaraParameterSectionTemplate.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraParameterSectionTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneNiagaraParameterSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneNiagaraParameterSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNiagaraParameterSectionTemplate;
class UScriptStruct* FMovieSceneNiagaraParameterSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraParameterSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNiagaraParameterSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("MovieSceneNiagaraParameterSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraParameterSectionTemplate.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMovieSceneNiagaraParameterSectionTemplate>()
{
	return FMovieSceneNiagaraParameterSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraParameterSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraParameterSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics::NewProp_Parameter_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraParameterSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNiagaraParameterSectionTemplate, Parameter), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics::NewProp_Parameter_MetaData)) }; // 2575088255
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics::NewProp_Parameter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneNiagaraParameterSectionTemplate",
		sizeof(FMovieSceneNiagaraParameterSectionTemplate),
		alignof(FMovieSceneNiagaraParameterSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraParameterSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNiagaraParameterSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraParameterSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraParameterSectionTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraParameterSectionTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneNiagaraParameterSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneNiagaraParameterSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneNiagaraParameterSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNiagaraParameterSectionTemplate), 3791322579U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraParameterSectionTemplate_h_930991017(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraParameterSectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraParameterSectionTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
