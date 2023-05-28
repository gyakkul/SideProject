// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Evaluation/MovieSceneColorTemplate.h"
#include "Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneColorTemplate() {}
// Cross Module References
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneBlendType();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneColorSectionTemplate>() == std::is_polymorphic<FMovieScenePropertySectionTemplate>(), "USTRUCT FMovieSceneColorSectionTemplate cannot be polymorphic unless super FMovieScenePropertySectionTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneColorSectionTemplate;
class UScriptStruct* FMovieSceneColorSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneColorSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneColorSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneColorSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneColorSectionTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneColorSectionTemplate>()
{
	return FMovieSceneColorSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curves;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneColorTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneColorSectionTemplate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_Curves_MetaData[] = {
		{ "Comment", "/** Curve data as RGBA */" },
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneColorTemplate.h" },
		{ "ToolTip", "Curve data as RGBA" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Curves, FMovieSceneColorSectionTemplate), nullptr, nullptr, STRUCT_OFFSET(FMovieSceneColorSectionTemplate, Curves), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_Curves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_Curves_MetaData)) }; // 3942748414
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_BlendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_BlendType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Evaluation/MovieSceneColorTemplate.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneColorSectionTemplate, BlendType), Z_Construct_UEnum_MovieScene_EMovieSceneBlendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_BlendType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_BlendType_MetaData)) }; // 498637471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_Curves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_BlendType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewProp_BlendType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieScenePropertySectionTemplate,
		&NewStructOps,
		"MovieSceneColorSectionTemplate",
		sizeof(FMovieSceneColorSectionTemplate),
		alignof(FMovieSceneColorSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneColorSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneColorSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneColorSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneColorTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneColorTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneColorSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneColorSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneColorSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneColorSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneColorSectionTemplate), 2819993350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneColorTemplate_h_1922558433(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneColorTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Evaluation_MovieSceneColorTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
