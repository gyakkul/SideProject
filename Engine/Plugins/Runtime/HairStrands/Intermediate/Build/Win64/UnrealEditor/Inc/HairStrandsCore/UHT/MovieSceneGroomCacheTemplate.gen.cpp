// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MovieSceneGroomCacheTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGroomCacheTemplate() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneGroomCacheSectionTemplateParameters>() == std::is_polymorphic<FMovieSceneGroomCacheParams>(), "USTRUCT FMovieSceneGroomCacheSectionTemplateParameters cannot be polymorphic unless super FMovieSceneGroomCacheParams is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplateParameters;
class UScriptStruct* FMovieSceneGroomCacheSectionTemplateParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplateParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplateParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("MovieSceneGroomCacheSectionTemplateParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplateParameters.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FMovieSceneGroomCacheSectionTemplateParameters>()
{
	return FMovieSceneGroomCacheSectionTemplateParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieSceneGroomCacheTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGroomCacheSectionTemplateParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneGroomCacheTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime = { "SectionStartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGroomCacheSectionTemplateParameters, SectionStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneGroomCacheTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime = { "SectionEndTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGroomCacheSectionTemplateParameters, SectionEndTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::NewProp_SectionStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::NewProp_SectionEndTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		Z_Construct_UScriptStruct_FMovieSceneGroomCacheParams,
		&NewStructOps,
		"MovieSceneGroomCacheSectionTemplateParameters",
		sizeof(FMovieSceneGroomCacheSectionTemplateParameters),
		alignof(FMovieSceneGroomCacheSectionTemplateParameters),
		Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplateParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplateParameters.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplateParameters.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneGroomCacheSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneGroomCacheSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplate;
class UScriptStruct* FMovieSceneGroomCacheSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("MovieSceneGroomCacheSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplate.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FMovieSceneGroomCacheSectionTemplate>()
{
	return FMovieSceneGroomCacheSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MovieSceneGroomCacheTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneGroomCacheSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::NewProp_Params_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneGroomCacheTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneGroomCacheSectionTemplate, Params), Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::NewProp_Params_MetaData)) }; // 941369579
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::NewProp_Params,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneGroomCacheSectionTemplate",
		sizeof(FMovieSceneGroomCacheSectionTemplate),
		alignof(FMovieSceneGroomCacheSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_MovieSceneGroomCacheTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_MovieSceneGroomCacheTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneGroomCacheSectionTemplateParameters::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplateParameters_Statics::NewStructOps, TEXT("MovieSceneGroomCacheSectionTemplateParameters"), &Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplateParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneGroomCacheSectionTemplateParameters), 941369579U) },
		{ FMovieSceneGroomCacheSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneGroomCacheSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneGroomCacheSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneGroomCacheSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneGroomCacheSectionTemplate), 524816884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_MovieSceneGroomCacheTemplate_h_3922684329(TEXT("/Script/HairStrandsCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_MovieSceneGroomCacheTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Private_MovieSceneGroomCacheTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
