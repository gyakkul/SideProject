// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Parameters/MovieSceneNiagaraVectorParameterSectionTemplate.h"
#include "Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraVectorParameterSectionTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneNiagaraVectorParameterSectionTemplate>() == std::is_polymorphic<FMovieSceneNiagaraParameterSectionTemplate>(), "USTRUCT FMovieSceneNiagaraVectorParameterSectionTemplate cannot be polymorphic unless super FMovieSceneNiagaraParameterSectionTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNiagaraVectorParameterSectionTemplate;
class UScriptStruct* FMovieSceneNiagaraVectorParameterSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraVectorParameterSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNiagaraVectorParameterSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("MovieSceneNiagaraVectorParameterSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraVectorParameterSectionTemplate.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMovieSceneNiagaraVectorParameterSectionTemplate>()
{
	return FMovieSceneNiagaraVectorParameterSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorChannels_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelsUsed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelsUsed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraVectorParameterSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraVectorParameterSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::NewProp_VectorChannels_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraVectorParameterSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::NewProp_VectorChannels = { "VectorChannels", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(VectorChannels, FMovieSceneNiagaraVectorParameterSectionTemplate), nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNiagaraVectorParameterSectionTemplate, VectorChannels), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::NewProp_VectorChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::NewProp_VectorChannels_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::NewProp_ChannelsUsed_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraVectorParameterSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::NewProp_ChannelsUsed = { "ChannelsUsed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNiagaraVectorParameterSectionTemplate, ChannelsUsed), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::NewProp_ChannelsUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::NewProp_ChannelsUsed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::NewProp_VectorChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::NewProp_ChannelsUsed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate,
		&NewStructOps,
		"MovieSceneNiagaraVectorParameterSectionTemplate",
		sizeof(FMovieSceneNiagaraVectorParameterSectionTemplate),
		alignof(FMovieSceneNiagaraVectorParameterSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraVectorParameterSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNiagaraVectorParameterSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraVectorParameterSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraVectorParameterSectionTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraVectorParameterSectionTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneNiagaraVectorParameterSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraVectorParameterSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneNiagaraVectorParameterSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneNiagaraVectorParameterSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNiagaraVectorParameterSectionTemplate), 3009595287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraVectorParameterSectionTemplate_h_882796876(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraVectorParameterSectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraVectorParameterSectionTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
