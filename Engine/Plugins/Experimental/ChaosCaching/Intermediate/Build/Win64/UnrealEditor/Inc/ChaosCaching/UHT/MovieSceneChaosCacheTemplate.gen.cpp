// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Chaos/Sequencer/MovieSceneChaosCacheTemplate.h"
#include "Chaos/Sequencer/MovieSceneChaosCacheSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneChaosCacheTemplate() {}
// Cross Module References
	CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams();
	CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate();
	CHAOSCACHING_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters();
	UPackage* Z_Construct_UPackage__Script_ChaosCaching();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneChaosCacheSectionTemplateParameters>() == std::is_polymorphic<FMovieSceneBaseCacheSectionTemplateParameters>(), "USTRUCT FMovieSceneChaosCacheSectionTemplateParameters cannot be polymorphic unless super FMovieSceneBaseCacheSectionTemplateParameters is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters;
class UScriptStruct* FMovieSceneChaosCacheSectionTemplateParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("MovieSceneChaosCacheSectionTemplateParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FMovieSceneChaosCacheSectionTemplateParameters>()
{
	return FMovieSceneChaosCacheSectionTemplateParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChaosCacheParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChaosCacheParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Chaos/Sequencer/MovieSceneChaosCacheTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneChaosCacheSectionTemplateParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::NewProp_ChaosCacheParams_MetaData[] = {
		{ "ModuleRelativePath", "Private/Chaos/Sequencer/MovieSceneChaosCacheTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::NewProp_ChaosCacheParams = { "ChaosCacheParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneChaosCacheSectionTemplateParameters, ChaosCacheParams), Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::NewProp_ChaosCacheParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::NewProp_ChaosCacheParams_MetaData)) }; // 3739005636
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::NewProp_ChaosCacheParams,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
		Z_Construct_UScriptStruct_FMovieSceneBaseCacheSectionTemplateParameters,
		&NewStructOps,
		"MovieSceneChaosCacheSectionTemplateParameters",
		sizeof(FMovieSceneChaosCacheSectionTemplateParameters),
		alignof(FMovieSceneChaosCacheSectionTemplateParameters),
		Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneChaosCacheSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneChaosCacheSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate;
class UScriptStruct* FMovieSceneChaosCacheSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate, (UObject*)Z_Construct_UPackage__Script_ChaosCaching(), TEXT("MovieSceneChaosCacheSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate.OuterSingleton;
}
template<> CHAOSCACHING_API UScriptStruct* StaticStruct<FMovieSceneChaosCacheSectionTemplate>()
{
	return FMovieSceneChaosCacheSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Chaos/Sequencer/MovieSceneChaosCacheTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneChaosCacheSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::NewProp_Params_MetaData[] = {
		{ "ModuleRelativePath", "Private/Chaos/Sequencer/MovieSceneChaosCacheTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneChaosCacheSectionTemplate, Params), Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::NewProp_Params_MetaData)) }; // 955091062
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::NewProp_Params,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneChaosCacheSectionTemplate",
		sizeof(FMovieSceneChaosCacheSectionTemplate),
		alignof(FMovieSceneChaosCacheSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Private_Chaos_Sequencer_MovieSceneChaosCacheTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Private_Chaos_Sequencer_MovieSceneChaosCacheTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneChaosCacheSectionTemplateParameters::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplateParameters_Statics::NewStructOps, TEXT("MovieSceneChaosCacheSectionTemplateParameters"), &Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplateParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneChaosCacheSectionTemplateParameters), 955091062U) },
		{ FMovieSceneChaosCacheSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneChaosCacheSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneChaosCacheSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneChaosCacheSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneChaosCacheSectionTemplate), 2377312345U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Private_Chaos_Sequencer_MovieSceneChaosCacheTemplate_h_232129372(TEXT("/Script/ChaosCaching"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Private_Chaos_Sequencer_MovieSceneChaosCacheTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Private_Chaos_Sequencer_MovieSceneChaosCacheTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
