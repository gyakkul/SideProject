// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/Parameters/MovieSceneNiagaraColorParameterSectionTemplate.h"
#include "Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneNiagaraColorParameterSectionTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneNiagaraColorParameterSectionTemplate>() == std::is_polymorphic<FMovieSceneNiagaraParameterSectionTemplate>(), "USTRUCT FMovieSceneNiagaraColorParameterSectionTemplate cannot be polymorphic unless super FMovieSceneNiagaraParameterSectionTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNiagaraColorParameterSectionTemplate;
class UScriptStruct* FMovieSceneNiagaraColorParameterSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraColorParameterSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNiagaraColorParameterSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("MovieSceneNiagaraColorParameterSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraColorParameterSectionTemplate.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMovieSceneNiagaraColorParameterSectionTemplate>()
{
	return FMovieSceneNiagaraColorParameterSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RedChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GreenChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GreenChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlueChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraColorParameterSectionTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNiagaraColorParameterSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_RedChannel_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraColorParameterSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_RedChannel = { "RedChannel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNiagaraColorParameterSectionTemplate, RedChannel), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_RedChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_RedChannel_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_GreenChannel_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraColorParameterSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_GreenChannel = { "GreenChannel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNiagaraColorParameterSectionTemplate, GreenChannel), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_GreenChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_GreenChannel_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_BlueChannel_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraColorParameterSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_BlueChannel = { "BlueChannel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNiagaraColorParameterSectionTemplate, BlueChannel), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_BlueChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_BlueChannel_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_AlphaChannel_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieScene/Parameters/MovieSceneNiagaraColorParameterSectionTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_AlphaChannel = { "AlphaChannel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNiagaraColorParameterSectionTemplate, AlphaChannel), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_AlphaChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_AlphaChannel_MetaData)) }; // 3942748414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_RedChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_GreenChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_BlueChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewProp_AlphaChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FMovieSceneNiagaraParameterSectionTemplate,
		&NewStructOps,
		"MovieSceneNiagaraColorParameterSectionTemplate",
		sizeof(FMovieSceneNiagaraColorParameterSectionTemplate),
		alignof(FMovieSceneNiagaraColorParameterSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneNiagaraColorParameterSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNiagaraColorParameterSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneNiagaraColorParameterSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraColorParameterSectionTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraColorParameterSectionTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneNiagaraColorParameterSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNiagaraColorParameterSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneNiagaraColorParameterSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneNiagaraColorParameterSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNiagaraColorParameterSectionTemplate), 590324159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraColorParameterSectionTemplate_h_107956901(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraColorParameterSectionTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_MovieScene_Parameters_MovieSceneNiagaraColorParameterSectionTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
